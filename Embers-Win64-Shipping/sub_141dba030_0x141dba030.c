// 函数: sub_141dba030
// 地址: 0x141dba030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x130)

if (rcx != 0)
    sub_1423bc410(rcx + 0x30, arg2, arg2 + 0x28)

sub_1423bc410(arg1 + 0x28, arg2, arg2 + 0x28)
int64_t* r8_3 = *(arg1 + 0x138)
int64_t rdx_1 = sx.q(*(arg1 + 0x140))
int64_t* rax = r8_3
void** rsi = rdx_1 << 3
void* rcx_3 = rsi + r8_3
int64_t result

if (r8_3 != rcx_3)
    while (*rax != arg2)
        rax = &rax[1]
        
        if (rax == rcx_3)
            goto label_141dba0ac
    
    result = (rax - r8_3) s>> 3

if (r8_3 == rcx_3 || result.d == 0xffffffff)
label_141dba0ac:
    int32_t rax_2 = (rdx_1 + 1).d
    *(arg1 + 0x140) = rax_2
    
    if (rax_2 s> *(arg1 + 0x144))
        sub_1405a4d70(arg1 + 0x138)
    
    result = *(arg1 + 0x138)
    *(rsi + result) = arg2

return result
