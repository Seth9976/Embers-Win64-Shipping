// 函数: sub_141a6a480
// 地址: 0x141a6a480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x45c)

if ((rax.b & 2) != 0)
    int64_t rsi_1 = sx.q(arg1[0x90].d)
    int32_t rax_1 = (rsi_1 + 1).d
    arg1[0x90].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x484))
        sub_14083a7e0(&arg1[0x8f])
    
    int64_t rax_2 = arg1[0x8f]
    int64_t rcx_1 = rsi_1 * 3
    *(rax_2 + (rcx_1 << 2)) = 0
    *(rax_2 + (rcx_1 << 2) + 4) = arg2
    return rax_2

char rcx_2 = arg1[0x8b].b

if (rcx_2 != 1 && rcx_2 != 6)
    return rax

arg1[0x8b].b = 0
*(arg1 + 0x45c) = rax | 2
*(arg1 + 0x7d4) = arg2

if (*(arg1 + 0x7e4) != 0)
    *(arg1 + 0x7e4) = 0

if (arg1[0x102].b != 0)
    arg1[0x102].b = 0

int64_t* rsi_2 = arg1[0x109]

if (rsi_2 != 0)
    int64_t var_10_1 = arg1[0xf8]
    int64_t var_18 = arg2
    (*(*rsi_2 + 0x18))(rsi_2, &var_18)
    
    if (rsi_2[3].b != 0)
        rsi_2[3].b = 0

arg1[0x8e].d = 0

if (*(arg1 + 0x884) != 0)
    *(arg1 + 0x884) = 0

bool cond:1_1 = (arg1[0x93].b & 2) == 0
*(arg1 + 0x48c) = 0

if (not(cond:1_1))
    sub_141a64f00(&arg1[0x24], &arg1[5])
    arg3 = sub_141a3cee0(&arg1[6], &arg1[5])

if (sub_140d3c6e0(&arg1[0x94]) != 0 && arg1[0x95] != 0)
    arg3 = sub_141a4c5d0(&arg1[0x94], &arg1[5])

if (arg1[0x10f].b != 0)
    int64_t* rcx_8 = data_143f5b298
    arg3.o = zx.o(arg1[0x10e])
    arg3.o = _mm_cvtpd_ps(arg3.o)
    (*(*rcx_8 + 0x2c0))(rcx_8, arg3)
    
    if (arg1[0x10f].b != 0)
        arg1[0x10f].b = 0

if (sub_141a53830(arg1) != 0)
    arg3 = sub_141a7bf30(arg1, arg2)

char rax_9
uint128_t zmm0_1
rax_9, zmm0_1 = sub_141a53830(arg1)

if (rax_9 != 0)
    arg1[0x105] = *(arg1 + 0x7d4)
    arg1[0x106].b = arg1[0x8b].b
    *(arg1 + 0x834) = arg1[0x8e].d

(*(*arg1 + 0x298))(arg1)

if (sub_140d3c6e0(&arg1[0x94]) != 0 && arg1[0x95] != 0)
    sub_140d3c6e0(&arg1[0x94])

if (arg1[0x86].d s> 0)
    zmm0_1, arg3 = sub_1405a9f90(&arg1[0x85], 0)

*(arg1 + 0x45c) &= 0xfffffffd
return sub_141a3a160(arg1, arg3, zmm0_1)
