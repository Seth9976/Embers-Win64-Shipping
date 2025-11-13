// 函数: sub_141d0a5f0
// 地址: 0x141d0a5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg4)
EnterCriticalSection(arg1 + 8)
void* r15_2 = (rdi << 5) + arg1
*(r15_2 + 0x168) = arg3
sub_141cfdac0(arg1)
*(arg1 + 0x278) += 1
int64_t* rax_1 = (rdi + 0xc) << 5
int64_t r8 = *(rax_1 + arg1)

if (r8 == 0)
    r8 = *(arg3 + 0x10)
    
    if (*(arg3 + 0x63) == 0 || r8 == 0)
        *(arg3 + 0x10) = 0
    else
        r8 = 0
    
    *(rax_1 + arg1) = r8

sub_141cfdbb0(arg1, arg2, r8, *(r15_2 + 0x170))
*(r15_2 + 0x168) = 0
int64_t r14_1 = sx.q(*(arg1 + 0x270))
int32_t rax_2 = (r14_1 + 1).d
*(arg1 + 0x270) = rax_2

if (rax_2 s> *(arg1 + 0x274))
    sub_1405a4d70(arg1 + 0x268)

*(*(arg1 + 0x268) + (r14_1 << 3)) = arg3
*(r15_2 + 0x170) = 0
char result = sub_141cfd330(arg1)

if (result != 0)
    result = sub_141cfabc0(arg1)

*(arg1 + 0x278) -= 1

if (arg1 == -8)
    return result

return LeaveCriticalSection(arg1 + 8)
