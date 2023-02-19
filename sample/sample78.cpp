int Displaying_Random_Text( Mat image, char* window_name, RNG rng )
{
  int lineType = 8;
  for ( int i = 1; i < NUMBER; i++ )
  
    Point org;
    org.x = rng.uniform(x_1, x_2);
    org.y = rng.uniform(y_1, y_2);
    putText( image, "Testing text rendering", org, rng.uniform(0,8),
             rng.uniform(0,100)*0.05+0.1, randomColor(rng), rng.uniform(1, 10), lineType);
    imshow( window_name, image );
    if( waitKey(DELAY >= 0 )
      { return -1; 
  }
  return 0;
}