class Student{
    private:
        int score[5];
    public:
        void input(){
            for (int i = 0; i < 5; i++){
                cin >> this->score[i];
            }
        }
        int calculateTotalScore(){
            int sum = 0;
            for (int i = 0; i < 5; i++){
                sum += score[i];
            }
            return sum;
        }
};

