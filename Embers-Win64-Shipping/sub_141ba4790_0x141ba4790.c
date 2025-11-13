// 函数: sub_141ba4790
// 地址: 0x141ba4790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm7 = arg2

if (data_143f0f1d4 != 0 || arg1[0xa5] == 0)
    return 

int32_t rax = arg1[0x88].d
int32_t rcx = data_1439c7a78

if (rax s<= 0)
    return 

uint64_t rdx_1 = zx.q(*(arg1 + 0x444))

if (rdx_1.d s<= 0 || rax s> rcx || rdx_1.d s> rcx)
    return 

int64_t rbx_1 = arg1[0x8b]
arg1[0x8b].d = rax
*(arg1 + 0x45c) = rdx_1.d
int128_t zmm6 = 0x3f800000
int32_t arg_18

if (arg1[0x8c].b == 0)
    *(arg1[0xa8] + 0x28) = 1
else
    zmm6, zmm7 = sub_140e25880(arg1[0xa5], 0x3f800000, arg3)
    sub_140e13cf0(arg1[0xa5], &arg_18)
    arg2.d = arg_18.d f* 2f
    arg2.d = arg2.d f+ 0.5f
    arg2 = _mm_cvtepi32_ps(zx.o(int.d(arg2.d) s>> 1))
    arg2.d = arg2.d f+ arg2.d
    arg2.d = arg2.d f+ 0.5f
    int32_t rcx_3 = int.d(arg2.d)
    arg2.d = arg4.d f* 2f
    arg1[0x8b].d = rcx_3 s>> 1
    arg2.d = arg2.d f+ 0.5f
    arg2 = _mm_cvtepi32_ps(zx.o(int.d(arg2.d) s>> 1))
    arg2.d = arg2.d f+ arg2.d
    arg2.d = arg2.d f+ 0.5f
    *(arg1 + 0x45c) = int.d(arg2.d) s>> 1
    *(arg1[0xa8] + 0x28) = 0

if (arg1[0x8b].d != rbx_1.d || *(arg1 + 0x45c) != (rbx_1 u>> 0x20).d)
    rdx_1.b = 1
    zmm6, zmm7 = sub_141bf4140(arg1, rdx_1.b)
    sub_141ef1240(arg1)

(*(*arg1 + 0x8b8))(arg1, arg1[0x8b])

if (arg1[0xa0] == 0)
    return 

int64_t rax_12 = arg1[0x8b]
*(arg1 + 0x449) = 0
int64_t* rbx_2 = arg1[0xa6]
int64_t rsi_1 = arg1[0xa5]
arg2 = _mm_cvtepi32_ps(zx.o((rax_12 u>> 0x20).d))
arg3 = _mm_cvtepi32_ps(zx.o(rax_12.d))

if (rbx_2 != 0)
    rbx_2[1].d += 1
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1

void* rcx_8 = arg1[0xa5]
arg_18 = arg3.d
arg4 = arg2.d
int64_t rax_14 = sub_140e14f20(rcx_8)
void* r14_1 = arg1[0xa8]
int64_t rax_15 = sub_140cbe180(arg1[0xa0])
int64_t rdx_3

if (rax_15 == 0)
    rdx_3 = 0
else
    rdx_3 = rax_15 + 0x48

int64_t var_48 = rsi_1
int64_t* var_40_1 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

sub_141ba4f10(r14_1, rdx_3, rax_14, &var_48, zmm6.d, (arg_18.q).d, zmm7.d, 0, var_48.b)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

float zmm0[0x2]
zmm0, rax = sub_141babb20(arg1)
arg1[0x8a] = zmm0
