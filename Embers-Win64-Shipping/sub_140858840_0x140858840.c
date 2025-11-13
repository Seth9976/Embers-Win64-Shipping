// 函数: sub_140858840
// 地址: 0x140858840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* r10_1 = *(arg1 + 0x1c0)
void* rbx_1 = arg1
int64_t r14_1 = sx.q(arg2)
int32_t i_1 = arg3
int64_t r12_1 = r14_1 * 0x70

if (r10_1 != 0)
    rbx_1 = r10_1

void* lpCriticalSection = rbx_1 + 0x48 + r12_1
int32_t i

do
    DeleteCriticalSection(lpCriticalSection)
    lpCriticalSection += 0x70
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_1 = *(arg1 + 0x1c8)
int32_t rcx_2 = rax_1 - r14_1.d

if (rcx_2 != arg3)
    void* rax_2 = *(arg1 + 0x1c0)
    void* r9 = arg1
    
    if (rax_2 != 0)
        r9 = rax_2
    
    memmove(r9 + r12_1, sx.q(r14_1.d + arg3) * 0x70 + r9, (rcx_2 - arg3) * 0x70)
    rax_1 = *(arg1 + 0x1c8)

*(arg1 + 0x1c8) = rax_1 - arg3

if (arg4 != 0)
    sub_14085a720(arg1)
