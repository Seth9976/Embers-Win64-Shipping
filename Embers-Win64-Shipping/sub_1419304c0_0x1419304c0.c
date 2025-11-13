// 函数: sub_1419304c0
// 地址: 0x1419304c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rax_2 = arg3[1].d
int512_t zmm1
zmm1.o = arg4[1]
int128_t var_c4 = *arg4
int32_t var_c8 = rax_2
int128_t* rdi = &var_c4
int64_t i_1 = 6
int128_t var_b4 = zmm1.o
zmm1.o = arg4[3]
int128_t var_a4 = arg4[2]
int128_t var_94 = zmm1.o
zmm1.o = arg4[5]
int128_t var_84 = arg4[4]
int128_t var_74 = zmm1.o
zmm1.o = zx.o(arg4[7].q)
int128_t var_64 = arg4[6]
int64_t var_54 = (zmm1.o).q
int64_t i

do
    sub_140b31010(arg2, rdi)
    rdi += 0x14
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_4 = (*(*arg2 + 0x20))(arg2)
int64_t* rdx_1 = arg2[1]
int32_t* r8 = *rdx_1

if (&r8[1] u> rdx_1[1])
    int32_t* rdx_2 = &var_c8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_2, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_2, 4)
else
    var_c8 = *r8
    *rdx_1 += 4

(*(*arg2 + 0x150))(arg2, *arg3, zx.q(var_c8))
int64_t rbx_1 = data_143eff758
int64_t rcx_6

if (data_143de5480 == 0)
    rcx_6 = 0
else
    rcx_6.b = GetCurrentThreadId() != data_143de5470

if (*(rbx_1 + (rcx_6 << 2)) != 0)
    data_143eff928 += **arg3
    data_143eff92c += arg3[1].d

int128_t* rax_10 = j_sub_140a82f30(0xb0)
int128_t* rbx_2 = rax_10

if (rax_10 == 0)
    rbx_2 = nullptr
else
    memset(rax_10, 0, 0x78)
    __builtin_memset(rbx_2 + 0x78, 0, 0x28)
    rbx_2[0xa].d = 0xffffffff
    *(rbx_2 + 0xa4) = 0
    *(rbx_2 + 0xa8) = 0

int64_t rsi = sx.q(*(arg1 + 0x88))
int32_t rax_11 = (rsi + 1).d
*(arg1 + 0x88) = rax_11

if (rax_11 s> *(arg1 + 0x8c))
    sub_1405a4d70(arg1 + 0x80)

*(*(arg1 + 0x80) + (rsi << 3)) = rbx_2
*(rbx_2 + 0xa4) = 1
*(rbx_2 + 0x78) = rax_4
*(rbx_2 + 0x7c) = var_c8
rbx_2[0xa].d = *(arg1 + 0x98) - *(arg1 + 0xc4)
*rbx_2 = *arg4
zmm1.o = arg4[1]
rbx_2[1] = zmm1.o
rbx_2[2] = arg4[2]
zmm1.o = arg4[3]
rbx_2[3] = zmm1.o
rbx_2[4] = arg4[4]
zmm1.o = arg4[5]
rbx_2[5] = zmm1.o
rbx_2[6] = arg4[6]
zmm1.o = zx.o(arg4[7].q)
rbx_2[7].q = (zmm1.o).q
int32_t* result = sub_141930750(arg1, rbx_2)
__security_check_cookie(rax_1 ^ &var_e8)
return result
