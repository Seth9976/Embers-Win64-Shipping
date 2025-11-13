// 函数: sub_141f7f510
// 地址: 0x141f7f510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[0xe].d)
int32_t rdi = 0

if (rax.d s> 0)
    int64_t r8_1 = 0
    int32_t* rax_1 = arg1[0xd]
    
    while (not(arg3 f<= *rax_1))
        rdi += 1
        r8_1 += 1
        rax_1 = &rax_1[2]
        
        if (r8_1 s>= rax)
            break

int32_t rbp = arg1[0xe].d
int32_t r9
int32_t arg_c = r9
arg1[0xe].d = rbp + 1

if (rbp + 1 s> *(arg1 + 0x74))
    sub_1405a4d70(&arg1[0xd])

int64_t rbx = sx.q(rdi)
int64_t rdx_1 = arg1[0xd] + (rbx << 3)
memmove(rdx_1 + 8, rdx_1, (rbp - rdi) << 3)
*(arg1[0xd] + (rbx << 3)) = arg3.q
void arg_28
sub_141f7f180(&arg1[1], &arg_28, rdi)
sub_141f89520(arg1, arg2, rdi)
return arg2
