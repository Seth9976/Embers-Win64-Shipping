// 函数: sub_14152dda0
// 地址: 0x14152dda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2
int64_t i_1 = 3
int64_t i

do
    int64_t* rcx = arg1[1]
    int32_t* rdx = *rcx
    
    if (&rdx[1] u<= rcx[1])
        *rdi = *rdx
        int64_t* rax_3 = arg1[1]
        *rax_3 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdi, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdi, 4)
    
    rdi = &rdi[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
