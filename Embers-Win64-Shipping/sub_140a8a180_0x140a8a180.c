// 函数: sub_140a8a180
// 地址: 0x140a8a180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x40) != 0)
    int64_t result
    result.b = 0
    return result

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x38)
EnterCriticalSection(lpCriticalSection)
int64_t* r8 = *(arg1 + 8)
int64_t r9 = sx.q(*(arg1 + 0x10))
int64_t* rax = r8
void* rdx = &r8[r9]
int32_t rax_3

if (r8 != rdx)
    while (*rax != arg2)
        rax = &rax[1]
        
        if (rax == rdx)
            goto label_140a8a1de
    
    rax_3 = ((rax - r8) s>> 3).d

int64_t rdi

if (r8 == rdx || rax_3 == 0xffffffff)
label_140a8a1de:
    rdi.b = 0
else
    void* rcx_3 = &r8[sx.q(rax_3)]
    memmove(rcx_3, rcx_3 + 8, (r9.d - rax_3 - 1) << 3)
    *(arg1 + 0x10) -= 1
    rdi.b = 1

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return zx.q(rdi.b)
