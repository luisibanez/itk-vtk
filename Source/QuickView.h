/* =========================================================================
 *
 *  Copyright Insight Software Consortium
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#ifndef QuickView_H
#define QuickView_H

#include <vector>

#include <itkImage.h>

class QuickView
{
public:
  void AddImage(itk::Image<unsigned char, 2>::Pointer  image);
  void Visualize();

private:
  std::vector<itk::Image<unsigned char, 2>::Pointer > Images;
};

#endif
