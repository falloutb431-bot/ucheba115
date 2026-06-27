#pragma once
class Counter {
private:
    int value;

public:
    Counter();
    explicit Counter(int initialValue);

    void increment();
    void decrement();
    int getValue() const;
    void reset();
};