// 函数: sub_140e21e80
// 地址: 0x140e21e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg2
sub_140db3540(arg1 + 0x7f0, arg3)
int64_t* rax = arg1 + 0x8ec

if (*(arg1 + 0x8f0) == 0)
    rax = &arg_8

uint128_t zmm0 = *rax
float zmm5 = arg_8.d

if (not(zmm0.d f< zmm5))
    arg_8.d = zmm0.d
    zmm5 = zmm0.d

void* rax_1 = arg1 + 0x8fc

if (*(arg1 + 0x900) == 0)
    rax_1 = &arg_8

zmm0 = *rax_1

if (not(zmm0.d f> zmm5))
    arg_8.d = zmm0.d
    zmm5 = zmm0.d

void* rax_2 = arg1 + 0x8f4

if (*(arg1 + 0x8f8) == 0)
    rax_2 = &arg_8:4

zmm0 = *rax_2
uint128_t zmm6 = arg_8:4.d

if (not(zmm0.d f< zmm6.d))
    arg_8:4.d = zmm0.d
    zmm6 = zmm0

void* rax_3 = arg1 + 0x904

if (*(arg1 + 0x908) == 0)
    rax_3 = &arg_8:4

zmm0 = *rax_3

if (not(zmm0.d f> zmm6.d))
    arg_8:4.d = zmm0.d
    zmm6 = zmm0

float zmm1 = *(arg1 + 0x7a4)
float zmm4 = *(arg1 + 0x7a0)
zmm6.d = zmm6.d f* 2f
zmm0.d = -0.5f - (zmm1 + zmm1)
int32_t rcx_1 = int.d(zmm0.d)
zmm0.d = -0.5f - zmm5 * 2f
int32_t r9_1 = int.d(zmm0.d) s>> 1
zmm0.d = -0.5f f- zmm6.d
int32_t r9_2 = neg.d(r9_1)
int32_t r10_2 = neg.d(int.d(zmm0.d) s>> 1)

if (neg.d(int.d(-0.5f - (zmm4 + zmm4)) s>> 1) != r9_2 || neg.d(rcx_1 s>> 1) != r10_2)
    int64_t* rcx_4 = *(arg1 + 0x910)
    
    if (rcx_4 == 0)
        *(arg1 + 0x788) = arg_8
    else
        (*(*rcx_4 + 8))(rcx_4, zx.q(int.d(fconvert.t(*(arg1 + 0x790)))), 
            zx.q(int.d(fconvert.t(*(arg1 + 0x794)))), r9_2, r10_2)

return sub_140e239f0(arg1, arg_8) __tailcall
