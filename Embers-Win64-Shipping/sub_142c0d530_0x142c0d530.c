// 函数: sub_142c0d530
// 地址: 0x142c0d530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1c) != 0)
    *(arg1 + 0x38) = 1

int32_t rax = *(arg1 + 0x7c)
int128_t* rcx_1

if (rax == 0)
    *(arg1 + 0x78) = 1
label_142c0d56d:
    rcx_1 = &data_144017550
    int128_t zmm1 = data_14369a5e0.o
    data_144017550 = data_14369a5d0
    data_144017570 = 0
    data_144017560.o = zmm1
else
    uint64_t rax_1 = zx.q(rax - 1)
    *(arg1 + 0x7c) = rax_1.d
    
    if (rax_1.d u>= *(arg1 + 0x80))
        goto label_142c0d56d
    
    rcx_1 = *(arg1 + 0x88) + rax_1 * 0x28

*(arg1 + 0x48) = *(rcx_1 + 8)
*(arg1 + 0x50) = rcx_1[1].d
*(arg1 + 0x58) = *(rcx_1 + 0x18)
*(arg1 + 0x5c) = *(rcx_1 + 0x1c)
*(arg1 + 0x60) = rcx_1[2].d
*(arg1 + 0x64) = *(rcx_1 + 0x24)
*(arg1 + 8) = *(arg1 + 0x48)
*(arg1 + 0x10) = *(arg1 + 0x50)
*(arg1 + 0x18) = *(arg1 + 0x58)
char result = *(arg1 + 0x5c)
*(arg1 + 0x1c) = result
return result
