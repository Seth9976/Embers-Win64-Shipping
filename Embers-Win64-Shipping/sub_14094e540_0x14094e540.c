// 函数: sub_14094e540
// 地址: 0x14094e540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_1 = 0
void* rax = *arg1
int64_t* rcx = *(rax + 0x1a30)
int64_t result = (*(*rcx + 0x50))(rcx, arg1[1], zx.q(arg1[2].d), &result_1, *(rax + 0x110))

if (result.b == 0)
    int64_t* rcx_1 = arg1[3]
    
    if (rcx_1 != 0)
        result_1:4.d = (*(*rcx_1 + 0xb8))(rcx_1)
    
    goto label_14094e5aa

if (arg1[4].b != 0 && result_1:4.d == 0)
label_14094e5aa:
    CRITICAL_SECTION* lpCriticalSection = *arg1 + 0x1a40
    EnterCriticalSection(lpCriticalSection)
    void* rdi_1 = *arg1
    int64_t rsi_1 = sx.q(*(rdi_1 + 0x1a70))
    int32_t rax_4 = (rsi_1 + 1).d
    *(rdi_1 + 0x1a70) = rax_4
    
    if (rax_4 s> *(rdi_1 + 0x1a74))
        sub_1405a4d70(rdi_1 + 0x1a68)
    
    result = result_1
    *(*(rdi_1 + 0x1a68) + (rsi_1 << 3)) = result
    
    if (lpCriticalSection != 0)
        return LeaveCriticalSection(lpCriticalSection)

return result
