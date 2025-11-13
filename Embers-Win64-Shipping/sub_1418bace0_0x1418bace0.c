// 函数: sub_1418bace0
// 地址: 0x1418bace0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (rdi.d s<= 0)
    int32_t r8 = (rdi + 1).d
    arg1[1].d = r8
    
    if (r8 s> *(arg1 + 0xc))
        sub_1405a4d70(arg1)
    
    *(*arg1 + (rdi << 3)) = *arg2
    return zx.q(rdi.d)

int64_t r8_1 = *arg1
int32_t rcx_1 = 0
int64_t rax_1 = 0

do
    if (*(r8_1 + (rax_1 << 3)) u> *arg2)
        return sub_1418c2090(arg1, arg2, rcx_1) __tailcall
    
    rcx_1 += 1
    rax_1 += 1
while (rax_1 s< rdi)

int32_t rsi = (rdi - 1).d
int64_t rax_2 = sx.q(rsi)
void* rdx_3 = r8_1 + (rax_2 << 3)
int32_t r9 = *(rdx_3 + 4)

if (*(r8_1 + (rax_2 << 3)) + r9 == *arg2)
    *(rdx_3 + 4) = *(arg2 + 4) + r9
    return zx.q(rsi)

int32_t rax_4 = (rdi + 1).d
arg1[1].d = rax_4

if (rax_4 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)
    r8_1 = *arg1

*(r8_1 + (rdi << 3)) = *arg2
return zx.q(rdi.d)
