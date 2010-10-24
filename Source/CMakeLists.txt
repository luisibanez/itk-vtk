add_library(itk-vtk
  QuickView.cxx
  )

target_link_libraries(itk-vtk
  ITKBasicFilters ITKIO
  vtkRendering vtkIO vtkWidgets
  )

add_executable(QuickViewCommand QuickViewCommand.cxx)
target_link_libraries(QuickViewCommand itk-vtk)
