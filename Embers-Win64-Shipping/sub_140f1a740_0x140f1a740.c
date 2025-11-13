// 函数: sub_140f1a740
// 地址: 0x140f1a740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 1
*(arg1 + 0xc) = 1
*arg1 = &data_142ee74e8

if (arg1 != -0x10)
    sub_140dde0c0(&arg1[2])
    arg1[7].b &= 0xfb
    arg1[2] = &data_142ee3b90
    arg1[0x58].w = 0
    arg1[0x59] = 0
    arg1[0x5a].d = 0
    arg1[0x5b].w = 0
    arg1[0x5c] = 0
    arg1[0x5d].d = 0
    __builtin_memcpy(&arg1[0x5f], 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    __builtin_memset(&arg1[0x62], 0, 0x11)
    arg1[0x65] = 0
    arg1[0x66].d = 0
    __builtin_memcpy(&arg1[0x67], 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    __builtin_memset(&arg1[0x6a], 0, 0x11)
    arg1[0x6d] = 0
    arg1[0x6e].d = 0
    arg1[0x6f].d = 0
    *(arg1 + 0x37c) = 0
    arg1[0x70] = 0
    arg1[0x71].d = 0
    *(arg1 + 0x394) = 0
    arg1[0x74].d = 0
    *(arg1 + 0x3a4) = 0
    arg1[0x75] = 0
    arg1[0x76].d = 0
    arg1[0x79] = 0
    arg1[0x7a].d = 0
    arg1[0x7b] = 0
    arg1[0x7c].d = 0
    arg1[0x7d] = 0
    arg1[0x7e].d = 0
    arg1[0x7f] = 0
    arg1[0x80].d = 0
    arg1[0x81] = 0
    arg1[0x82].d = 0
    *(arg1 + 0x39) &= 0x7f
    *(arg1 + 0x3a) = 2

return arg1
