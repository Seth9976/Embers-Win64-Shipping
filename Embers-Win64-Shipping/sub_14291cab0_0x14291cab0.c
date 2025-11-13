// 函数: sub_14291cab0
// 地址: 0x14291cab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbp = arg3 - 1
int32_t r14 = arg3 * 2
int64_t rdi_1 = sx.q(rbp) << 3
int64_t* rbx = &arg1[1]
void* rsi = arg2
arg1[sx.q(r14) - 1] = 0
*arg1 = 0

if (rbp s> 0)
    rsi = &arg2[1]
    *(rdi_1 + rbx) = sub_14291f9e0(rbx, rsi, rbp, *arg2)
    rbx = &rbx[2]

if (arg3 - 2 s> 0)
    int32_t i = rbp - 1
    
    do
        int64_t r9_1 = *rsi
        rdi_1 -= 8
        rsi += 8
        rbp -= 1
        i -= 1
        *(rdi_1 + rbx) = sub_14291d050(rbx, rsi, rbp, r9_1)
        rbx = &rbx[2]
    while (i s> 0)
    
    r14 = arg3 * 2

sub_14291cd80(arg1, arg1, arg1, r14)
sub_142921370(arg4, arg2, arg3)
return sub_14291cd80(arg1, arg1, arg4, r14) __tailcall
