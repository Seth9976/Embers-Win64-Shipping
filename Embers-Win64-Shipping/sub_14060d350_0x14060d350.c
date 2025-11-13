// 函数: sub_14060d350
// 地址: 0x14060d350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t i_1 = 0
*(arg1 + 8) = 0
arg1[4] = 0
*arg1 = 0
int32_t rdi = 0
int128_t var_38 = zx.o(0)
int32_t rax_2 = std::istream::get()
int32_t i = arg1[4]
int32_t r8 = rax_2
int32_t i_2 = i

while (i s< 4)
    int64_t i_3 = sx.q(i)
    i += 1
    arg1[4] = i
    *(&var_38 + (i_3 << 2)) = r8 & 0x7f
    i_2 = i
    
    if ((r8 & 0x80) u<= 0)
        break
    
    int32_t rax_3 = std::istream::get()
    i = arg1[4]
    r8 = rax_3
    i_2 = i

if (i s> 1)
    i = i_2
    rdi = i_2 * 7 - 7

*(arg1 + 8) = j_sub_140a82f30(sx.q(i))

if (arg1[4] s> 0)
    int64_t r8_1 = 0
    
    do
        char rcx_3 = *(&var_38 + (r8_1 << 2))
        r8_1 += 1
        i_1 += 1
        *(r8_1 + *(arg1 + 8) - 1) = rcx_3
        char rcx_4 = rdi.b
        rdi -= 7
        void var_3c
        *arg1 += *(&var_3c + (r8_1 << 2)) << rcx_4
    while (i_1 s< arg1[4])

__security_check_cookie(rax_1 ^ &var_58)
return arg1
