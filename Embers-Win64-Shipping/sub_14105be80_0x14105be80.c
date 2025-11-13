// 函数: sub_14105be80
// 地址: 0x14105be80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)
int64_t* r10 = *(arg1 + 0x48)
uint64_t r9 = sx.q(*(arg1 + 0x50))
int64_t* rax = r10
void* r8 = &r10[r9]
int32_t rax_1

if (r10 == r8)
label_14105bec4:
    rax_1 = -1
else
    while (*rax != arg2)
        rax = &rax[1]
        
        if (rax == r8)
            goto label_14105bec4
    
    rax_1 = ((rax - r10) s>> 3).d

int32_t rdx_1 = r9.d - rax_1

if (rdx_1 != 1)
    memmove(&r10[sx.q(rax_1)], &r10[sx.q(rax_1 + 1)], (rdx_1 - 1) << 3)
    r9 = zx.q(*(arg1 + 0x50))

*(arg1 + 0x50) = (r9 - 1).d
int64_t result = sub_1405c53d0(arg1 + 0x48)

if (arg1 == -0x58)
    return result

return LeaveCriticalSection(arg1 + 0x58)
