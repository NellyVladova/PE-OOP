//
// Created by nelly on 28.10.22.
//


class rectangle {
private:
    int width, length;
public:
    rectangle();
    rectangle(int width, int length);
    ~rectangle();

    int getWidth() const;

    void setWidth(int width);

    int getLength() const;

    void setLength(int length);
    int face(int width, int length);
    int face(int *);
};


