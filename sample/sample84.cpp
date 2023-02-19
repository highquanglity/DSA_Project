// Load a cropped text line image
// you can find cropped images for testing in "Images for Testing"
int rgb = IMREAD_COLOR; // This should be changed according to the model input requirement.
Mat image = imread("path/to/text_rec_test.png", rgb);
// Load models weights
TextRecognitionModel model("path/to/crnn_cs.onnx");
// The decoding method
// more methods will be supported in future
model.setDecodeType("CTC-greedy";
// Load vocabulary
// vocabulary should be changed according to the text recognition model
std::ifstream vocFile;
vocFile.open("path/to/alphabet_94.txt";
CV_Assert(vocFile.is_open());
String vocLine;
std::vector<String> vocabulary;
while (std::getline(vocFile, vocLine)) {
    vocabulary.push_back(vocLine);
}
model.setVocabulary(vocabulary);