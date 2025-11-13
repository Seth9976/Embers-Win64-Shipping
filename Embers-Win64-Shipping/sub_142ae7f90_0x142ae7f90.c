// 函数: sub_142ae7f90
// 地址: 0x142ae7f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rdi_1 = sx.q(arg2)

if (rdi_1.d s<= *(arg1 + 8))
    *(arg1 + 8) = rdi_1.d
    return 

int32_t arg_10 = 0
void* i

if (*(arg1 + 0xc) s< rdi_1.d)
    i = sub_142ae7df0(arg1, rdi_1.d, &arg_10)

if (*(arg1 + 0xc) s< rdi_1.d && i.b == 0)
    return 

for (i = sx.q(*(arg1 + 8)); i s< rdi_1; i += 1)
    *(*(arg1 + 0x18) + (i << 2)) = 0

*(arg1 + 8) = rdi_1.d
