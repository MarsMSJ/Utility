#include "StringSample.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdexcept>

using namespace std;



auto SampleString::GenerateSampleString(size_t sampleLength = 0)
{
  if (sampleLength < 0)
  {
    throw invalid_argument("Sample Length must be > 0");
  }

  string sample;
  (sampleLength == 0 ) ? DefaultSampleStringLength : sampleLength;
  for(int i = 0; i < sampleLength; i++)
  {
    sample+= (char)rand % AlphabetUpperCaseEnd + AlphabetUpperCaseStart;
  }

  return sample;
}

auto SampleString::GenerateSampleStringVector(size_t sampleSize = 0)
{
  if (sampleSize < 0)
  {
    throw invalid_argument("Sample size must be > 0");
  }

  srand(time(NULL));
  vector<string> samplesVector;

  ( sampleSize == 0) ? DefaultSampleSize : sampleSize;

  for(int i = 0; i < sampleSize; i++)
  {
    samplesVector.push_back(GenerateSampleString(DefaultSampleStringLength));
  }

  return samplesVector;
}

auto GenerateRandomLengthSampleStringVector(size_t sampleSize)
{
  if (sampleSize < 0)
  {
    throw invalid_argument("Sample size must be > 0");
  }

  srand(time(NULL));
  vector<string> samplesVector;

  ( sampleSize == 0) ? DefaultSampleSize : sampleSize;

  for(int i = 0; i < sampleSize; i++)
  {
    samplesVector.push_back(
      GenerateSampleString(rand() % MaxStringSize + MinStringSize));
  }

  return samplesVector;
}
