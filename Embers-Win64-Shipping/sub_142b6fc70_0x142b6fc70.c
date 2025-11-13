// 函数: sub_142b6fc70
// 地址: 0x142b6fc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
int512_t zmm0
rax, zmm0 = sub_142aea6a0(arg2)
int32_t rdi = sub_142aea4f0(arg2, zmm0)
int32_t rax_2 = sub_142aea6a0(arg2)
int32_t rsi = rax_2

if (rax_2 s< arg4)
    int32_t rax_5
    
    do
        char rax_3
        int512_t zmm0_1
        rax_3, zmm0_1 = sub_142a9f280(&arg1[1], zx.q(rdi))
        
        if (rax_3 == 0)
            break
        
        sub_142aea870(arg2, zmm0_1)
        rdi = sub_142aea4f0(arg2, zmm0_1)
        rax_5 = sub_142aea6a0(arg2)
        rsi = rax_5
    while (rax_5 s< arg4)

int32_t rax_7 = (*(*arg1 + 0x20))(arg1, arg2, zx.q(rax), zx.q(rsi), arg5)
sub_142aeacd0(arg2, sx.q(rsi))
return zx.q(rax_7)
