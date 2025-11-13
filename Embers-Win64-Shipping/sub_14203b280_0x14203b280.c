// 函数: sub_14203b280
// 地址: 0x14203b280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (*(arg2 + 0x5c) & 8) != 0)
    return 

int32_t rax_1 = *(arg2 + 0xc)
void* const rax_8

if (rax_1 s>= data_143e1d9b4)
    rax_8 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

if (((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
    return 

int64_t var_18 = 0
int64_t var_10_1 = 0
int64_t rax_10 = sub_1424b24d0(arg1, arg2, &var_18)
int64_t rcx_5 = var_18
int64_t rdi_1 = rax_10

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (rdi_1 == 0 && j_sub_140d3e110(arg2 + 0x230) != 0)
    rdi_1 = sub_140d3c6e0(arg2 + 0x230)

(*(*arg1 + 0x780))(arg1, arg2, rdi_1)
