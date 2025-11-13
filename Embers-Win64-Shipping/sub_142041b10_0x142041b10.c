// 函数: sub_142041b10
// 地址: 0x142041b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t rax_1 = *(arg2 + 0xc)
int32_t r8 = data_143e1d9b4
int64_t r9_1 = data_143e1d9a0
void* const rax_7

if (rax_1 s>= r8)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    rax_7 = *(r9_1 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18

if (((*(rax_7 + 8) u>> 0x1d).b & 1) != 0 || arg3 == 0)
    return 

int32_t rax_9 = *(arg3 + 0xc)
void* const rax_15

if (rax_9 s>= r8)
    rax_15 = nullptr
else
    int16_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_9)
    uint32_t rdx_4 = zx.d(temp2_1)
    int32_t rax_11 = temp3_1 + rdx_4
    rax_15 = *(r9_1 + (sx.q(rax_11 s>> 0x10) << 3)) + sx.q(zx.d(rax_11.w) - rdx_4) * 0x18

if (((*(rax_15 + 8) u>> 0x1d).b & 1) != 0)
    return 

void* const rdi_1 = arg2[0x53]

if (rdi_1 == 0)
    return 

*(arg3 + 0x3d4) = *(arg2 + 0x3d4)
*(arg3 + 0x418) = arg2[0x83]
sub_141dd8f90(arg3, *(arg2 + 0x5b) & 1)
(*(*arg3 + 0xc10))(arg3, rdi_1)
sub_141dbd020(arg3, arg2)
sub_1424b29a0(arg1, arg2)

if (rdi_1 == 0)
    arg2[0x82] = nullptr
    return 

void* rax_20 = sub_142531230()
void* rdx_10 = *(rdi_1 + 0x10)
int64_t rax_21 = sx.q(*(rax_20 + 0x38))

if (rax_21.d s<= *(rdx_10 + 0x38) && *(*(rdx_10 + 0x30) + (rax_21 << 3)) == rax_20 + 0x30)
    sub_1420e0c80((*(*arg1 + 0x150))(arg1, rdx_10), arg2, 0, 1)
    return 

void* rax_25 = sub_14254f450()
void* rdx_12 = *(rdi_1 + 0x10)
uint64_t rax = sx.q(*(rax_25 + 0x38))

if (rax.d s> *(rdx_12 + 0x38))
    arg2[0x82] = nullptr
else if (*(*(rdx_12 + 0x30) + (rax << 3)) == rax_25 + 0x30)
    arg2[0x82] = rdi_1
else
    arg2[0x82] = nullptr
