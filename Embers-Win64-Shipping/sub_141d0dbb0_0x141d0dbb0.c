// 函数: sub_141d0dbb0
// 地址: 0x141d0dbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* rcx = *arg1
int64_t r15_1 = sx.q(arg2)

if ((rcx.b & 1) != 0)
    rcx = (rcx s>> 1) + arg1

int32_t i_1 = arg3
int64_t r14_2 = r15_1 * 0x50
void* rbx_2 = r14_2 + 0x30 + rcx
int32_t i

do
    sub_140a1d5c0(rbx_2)
    rbx_2 += 0x50
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = arg1[1].d
int32_t rcx_4 = rax_1 - r15_1.d

if (rcx_4 != arg3)
    void* r9 = *arg1
    
    if ((r9.b & 1) != 0)
        r9 = (r9 s>> 1) + arg1
    
    memmove(r14_2 + r9, sx.q(r15_1.d + arg3) * 0x50 + r9, (rcx_4 - arg3) * 0x50)
    rax_1 = arg1[1].d

arg1[1].d = rax_1 - arg3

if (arg4 != 0)
    sub_141d0e830(arg1)
