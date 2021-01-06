#ifndef __INTERFACE__H__
#define __INTERFACE__H__

class Interface {
    private:
        static constexpr auto COLS{7};
        static constexpr auto ROWS{6};
    public:
        Interface();
        void drawInterface();
};

#endif
