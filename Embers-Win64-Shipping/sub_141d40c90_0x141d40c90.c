// 函数: sub_141d40c90
// 地址: 0x141d40c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = *(arg2 + 0xc)
char rsi = *(sx.q(arg2[1].d) + *(*arg2 + 0x398))
int32_t* rcx = nullptr

if (rsi == 4)
    if (rax_1 u>= 2)
        rcx = arg2
    
    sub_1417911c0(rcx, &arg1[0x12], &arg1[0x1c])
else
    if (rax_1 u>= 2)
        rcx = arg2
    
    sub_14179c500(rcx, &arg1[0x12], &arg1[0x1c])

void* rdx_1

if (rsi == 2)
    rdx_1 = arg1[5]
else
    rdx_1 = arg1[4]

sub_1417b1460(arg2, rdx_1)
return sub_14175b460(arg1) __tailcall
