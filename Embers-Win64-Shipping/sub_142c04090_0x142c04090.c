// 函数: sub_142c04090
// 地址: 0x142c04090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x44) != 0)
    *(arg1 + 0x44) = 1
    return 

int32_t rax = *(arg1 + 0x24)
double* rax_3

if (rax == 0)
    *(arg1 + 0x20) = 1
    data_144017550.q = 0
    rax_3 = &data_144017550
else
    *(arg1 + 0x24) = rax - 1
    
    if (rax - 1 u>= *(arg1 + 0x28))
        data_144017550.q = 0
        rax_3 = &data_144017550
    else
        rax_3 = *(arg1 + 0x30) + (zx.q(rax - 1) << 3)

int32_t rcx_1 = int.d(fconvert.t(*rax_3))

if (rcx_1 s< 0)
    *(arg1 + 0x20) = 1

int32_t rax_4 = 0
*(arg1 + 0x44) = 1

if (rcx_1 s>= 0)
    rax_4 = rcx_1

*(arg1 + 0x40) = rax_4
