// 函数: sub_142b46920
// 地址: 0x142b46920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
void* r8 = nullptr
int32_t var_18 = 0
char r9 = (*(rax + 8)).b

if ((r9 & 0x11) == 0)
    r8 = rax + 0xa
    
    if ((r9 & 2) == 0)
        r8 = *(rax + 0x18)

int64_t rcx = sx.q(arg1[1].d)
sub_142a47a60(arg2, 0, r8 + (rcx << 1), *(arg1 + 0xc) - rcx.d)
return arg2
