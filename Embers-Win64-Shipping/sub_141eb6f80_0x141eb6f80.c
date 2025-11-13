// 函数: sub_141eb6f80
// 地址: 0x141eb6f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *arg2

if (rdi != 0)
    int64_t rdx = arg1[0x15]
    
    if (rdx != 0 && sub_140d23d40(rdi, rdx) != 0)
        void* rax_2
        rax_2, arg3 = sub_141ec43a0(arg1, *arg2)
        rdi = rax_2

int32_t arg_8 = 0xffffffff

if (rdi != 0)
    void* rdx_2 = arg1[0x16]
    arg_8 = *(rdx_2 + 0x40)
    int64_t rbp_1 = sx.q(*(rdx_2 + 0x40))
    int32_t rcx_3 = (rbp_1 + 1).d
    *(rdx_2 + 0x40) = rcx_3
    
    if (rcx_3 s> *(rdx_2 + 0x44))
        sub_1405a4d70(rdx_2 + 0x38)
    
    *(*(rdx_2 + 0x38) + (rbp_1 << 3)) = rdi

int64_t* rcx_5 = arg1[1]
int32_t* rdx_4 = *rcx_5

if (&rdx_4[1] u<= rcx_5[1])
    arg_8 = *rdx_4
    *rcx_5 += 4
    return arg1

int32_t* rdx_5 = &arg_8

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, rdx_5, arg3)
    return arg1

(*(*arg1 + 0x150))(arg1, rdx_5, 4)
return arg1
