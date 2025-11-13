// 函数: sub_141f7f9f0
// 地址: 0x141f7f9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[0x10].d)
int32_t rdi = 0

if (rax.d s> 0)
    int64_t r8_1 = 0
    int32_t* rax_1 = arg1[0xf]
    
    while (not(arg3 f<= *rax_1))
        rdi += 1
        r8_1 += 1
        rax_1 = &rax_1[6]
        
        if (r8_1 s>= rax)
            break

int64_t var_30
sub_140596d10(&var_30, arg4)
int32_t r14 = arg1[0x10].d
arg1[0x10].d = r14 + 1

if (r14 + 1 s> *(arg1 + 0x84))
    sub_1405a4df0(&arg1[0xf])

int64_t rbx = sx.q(rdi) * 3
int64_t rdx_2 = arg1[0xf] + (rbx << 3)
memmove(rdx_2 + 0x18, rdx_2, (r14 - rdi) * 0x18)
int64_t rcx_3 = arg1[0xf]
*(rcx_3 + (rbx << 3) + 8) = var_30
*(rcx_3 + (rbx << 3)) = arg3
int32_t var_28
*(rcx_3 + (rbx << 3) + 0x10) = var_28
int32_t var_24
*(rcx_3 + (rbx << 3) + 0x14) = var_24
void arg_28
sub_141f7f180(&arg1[1], &arg_28, rdi)
sub_141f89520(arg1, arg2, rdi)
return arg2
