// 函数: sub_1420acd50
// 地址: 0x1420acd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    return 

int64_t* rcx = *(arg3 + 0x20)
uint64_t rax = (*(*rcx + 0x260))(rcx)

if (rax == 0)
    return 

int64_t rax_2 = sub_14256a090()
void* rcx_1 = *(rax + 0x10)
int64_t rdx_1 = sx.q(*(rax_2 + 0x38))

if (rdx_1.d s> *(rcx_1 + 0x38) || *(*(rcx_1 + 0x30) + (rdx_1 << 3)) != rax_2 + 0x30)
    return 

int64_t* rbx_2 = *(rax + 0x2b8)

if (rbx_2 == 0)
    return 

int32_t rax_3 = *(rbx_2 + 0xc)
void* const rax_10

if (rax_3 s>= data_143e1d9b4)
    rax_10 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_3)
    uint32_t rdx_3 = zx.d(temp0_1)
    int32_t rax_5 = temp1_1 + rdx_3
    rax_10 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_3) * 0x18

if (((*(rax_10 + 8) u>> 0x1d).b & 1) != 0)
    return 

int128_t zmm0_1 = *(arg1 + 0x94)
int32_t arg_20 = 0
int128_t var_38 = zmm0_1
int128_t zmm0_2
int512_t zmm1
int32_t zmm6_1
zmm0_2, zmm1, zmm6_1 = sub_141f5bc90(arg1 + 0x70, arg2, &arg_20)

if (zmm0_2.d f>= zmm6_1)
    zmm1.o = 0x3f800000
    
    if (not(zmm0_2.d f< 1f))
        zmm0_2 = 0x3f800000
else
    zmm0_2 = zx.o(0)

zmm1.o = zmm0_2
(*(*rbx_2 + 0x7c8))(rbx_2, zmm1, &var_38, (*(arg1 + 0x90) u>> 1).b & 1)
