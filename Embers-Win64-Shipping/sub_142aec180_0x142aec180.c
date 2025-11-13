// 函数: sub_142aec180
// 地址: 0x142aec180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2
arg2.b = 1
int32_t rax = sub_142aeb8c0(arg1, arg2.b)
sub_142af0ee0(arg1, rax)
sub_142af0ee0(arg1, rax)
sub_142af0ee0(arg1, rax)
int32_t rax_2 = sub_142aeb970(arg1, rbx, sub_142aeb7b0(arg1, (*(arg1 + 0x1a4) s>> 0x1f & 1) + 1))
sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(rax_2), rax)
void* r9 = *(*(arg1 + 0x10) + 0x20)
int32_t rcx_7 = *(r9 + 8)
int32_t rcx_8

if (**(arg1 + 8) s<= 0)
    if (rcx_7 s> 0xffffff)
        abort()
        noreturn
    
    if (rcx_7 s< 0)
        abort()
        noreturn
    
    rcx_8 = rcx_7 | 0x1f000000
else
    rcx_8 = 0

sub_142aeb3c0(r9, sx.q(rcx_8), rax + 1)
sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(*(arg1 + 0x1a0)), rax + 2)
sub_142aeb3c0(*(*(arg1 + 0x10) + 0x20), sx.q(*(arg1 + 0x1a4)), rax + 3)
sub_142aeb830(arg1, sub_142aeb970(arg1, arg3, rax))

if ((*(arg1 + 0x1a0) & 0xff000000) != 0)
    sub_142af0120(arg1, 0x10307)
else
    int32_t rax_6 = *(arg1 + 0x1a4)
    
    if (rax_6 s> 0 && (rax_6 & 0xff000000) != 0)
        sub_142af0120(arg1, 0x10307)

int32_t result = *(arg1 + 0x1a4)

if (*(arg1 + 0x1a0) s> result && result != 0xffffffff)
    return sub_142af0120(arg1, 0x10309)

return result
