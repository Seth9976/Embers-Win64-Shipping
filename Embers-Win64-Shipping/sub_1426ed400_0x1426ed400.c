// 函数: sub_1426ed400
// 地址: 0x1426ed400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0
zmm0.d = (*(arg1 + 0x84)).d f- arg4.d
*(arg1 + 0x84) = zmm0.d

if (zmm0.d f> 0f)
    return 

zmm0 = arg1[0x10].d

if (not(zmm0.d f<= 0f))
    arg4.d = zmm0.d f- *(arg1 + 0x84)

void* rdx = arg1[0xe]

if (rdx != 0 && (arg1[0x14].b & 4) != 0)
    *(rdx + 0x250)
    sub_142734a30(arg1, rdx)
    *(arg1 + 0x84) = arg1[0x10].d
    return 

if ((arg1[0x14].b & 2) != 0)
    int512_t zmm2
    zmm2.o = arg4
    sub_142734990(arg1, arg1[0xf])

*(arg1 + 0x84) = arg1[0x10].d
