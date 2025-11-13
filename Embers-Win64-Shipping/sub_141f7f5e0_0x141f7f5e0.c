// 函数: sub_141f7f5e0
// 地址: 0x141f7f5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[0xe].d)
int32_t rdi = 0

if (rax.d s> 0)
    int64_t r8_1 = 0
    int32_t* rax_1 = arg1[0xd]
    
    while (not(arg3 f<= *rax_1))
        rdi += 1
        r8_1 += 1
        rax_1 = &rax_1[3]
        
        if (r8_1 s>= rax)
            break

int64_t rax_2 = *arg4
int32_t r14 = arg1[0xe].d
arg1[0xe].d = r14 + 1

if (r14 + 1 s> *(arg1 + 0x74))
    sub_14083a7e0(&arg1[0xd])

int64_t rbx = sx.q(rdi) * 3
int64_t rdx_1 = arg1[0xd] + (rbx << 2)
memmove(rdx_1 + 0xc, rdx_1, (r14 - rdi) * 0xc)
int64_t rcx_2 = arg1[0xd]
*(rcx_2 + (rbx << 2)) = arg3.q
*(rcx_2 + (rbx << 2) + 8) = rax_2:4.d
void arg_28
sub_141f7f180(&arg1[1], &arg_28, rdi)
sub_141f89520(arg1, arg2, rdi)
return arg2
