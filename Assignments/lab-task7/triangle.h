namespace shapes {
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double b, double h);
        ~Triangle();
        void setBase(double b);
        void setHeight(double h);
        double getBase();
        double getHeight();
    };
}
