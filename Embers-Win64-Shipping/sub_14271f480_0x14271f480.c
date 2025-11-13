// 函数: sub_14271f480
// 地址: 0x14271f480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[0x14]

if (r8 == 0)
    return 

int32_t rax_1 = *(r8 + 0xc)
void* rdi_1 = nullptr
void* const rax_8

if (rax_1 s>= data_143e1d9b4)
    rax_8 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_1)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_3 = temp1_1 + rdx_1
    arg2 = sx.q(zx.d(rax_3.w) - rdx_1) * 3
    rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + (arg2 << 3)

if (((*(rax_8 + 8) u>> 0x1d).b & 1) != 0)
    return 

uint64_t rax = (*(*r8 + 0x150))(r8, arg2)

if (rax == 0)
    return 

int32_t rax_11 = *(rax + 0xc)

if (rax_11 s< data_143e1d9b4)
    int16_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rax_11)
    uint32_t rdx_3 = zx.d(temp2_1)
    int32_t rax_13 = temp3_1 + rdx_3
    rdi_1 = *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3)) + sx.q(zx.d(rax_13.w) - rdx_3) * 0x18

if (((*(rdi_1 + 8) u>> 0x1d).b & 1) != 0)
    return 

if ((*(*arg1 + 0x408))(arg1).b != 0)
    (*(*arg1 + 0x460))(arg1)

if ((*(arg1 + 0xc4) & 1) != 0)
    int512_t zmm1
    zmm1.o = *(arg1 + 0xbc)
    (*(*arg1 + 0x458))(arg1, zmm1)
