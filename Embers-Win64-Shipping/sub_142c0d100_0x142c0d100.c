// 函数: sub_142c0d100
// 地址: 0x142c0d100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(*(arg1 + 4))

if (rcx.d u>= *(arg1 + 8))
    *arg1 = 1
    return 

*(arg1 + 4) = (rcx + 1).d
int128_t* rcx_1

if (rcx.d u< *(arg1 + 8))
    rcx_1 = *(arg1 + 0x10) + rcx * 0x28
else
    rcx_1 = &data_144017550
    int128_t zmm1 = data_14369a5e0.o
    data_144017550 = data_14369a5d0
    data_144017570 = 0
    data_144017560.o = zmm1

*(rcx_1 + 8) = *(arg2 + 8)
rcx_1[1].d = *(arg2 + 0x10)
*(rcx_1 + 0x18) = *(arg2 + 0x18)
*(rcx_1 + 0x1c) = *(arg2 + 0x1c)
rcx_1[2].d = *(arg2 + 0x20)
*(rcx_1 + 0x24) = *(arg2 + 0x24)
