// 函数: sub_142c03360
// 地址: 0x142c03360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_4 = *(arg1 + 4)
double* rax_2

if (rax_4 == 0)
    *arg1 = 1
    data_144017550.q = 0
    rax_2 = &data_144017550
else
    *(arg1 + 4) = rax_4 - 1
    
    if (rax_4 - 1 u>= *(arg1 + 8))
        data_144017550.q = 0
        rax_2 = &data_144017550
    else
        rax_2 = *(arg1 + 0x10) + (zx.q(rax_4 - 1) << 3)

int32_t rcx_1 = int.d(fconvert.t(*rax_2))

if (rcx_1 s< 0)
    *arg1 = 1

if (rcx_1 s>= 0)
    return zx.q(rcx_1)

return 0
