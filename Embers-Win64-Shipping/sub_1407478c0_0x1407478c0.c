// 函数: sub_1407478c0
// 地址: 0x1407478c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1407526b0(*arg1)
void* rdx = *arg1
void* r8 = rdx
int64_t rbp_1 = sx.q(*(rdx + 0x1f0)) << 2

if (rbp_1 != 0 && *(rdx + 0x208) == 0)
    int32_t rax = 0
    
    if (0 == *(rdx + 0x210))
        *(rdx + 0x210) = 0
    else
        rax = *(rdx + 0x210)
    
    void* rcx_1 = *arg1
    result = sub_14076dc30(rcx_1 + 0x1f8, 4, *(rcx_1 + 0x1cc) * rax, 0xd, 1, 0)
    r8 = *arg1

if (*(r8 + 0x208) u> 0)
    int64_t* rcx_3 = data_143f0f180
    int64_t rax_2 = (*(*rcx_3 + 0x130))(rcx_3, &data_143f02b98, *(r8 + 0x1f8), 0, rbp_1.d, 1)
    CRITICAL_SECTION* lpCriticalSection = *arg1 + 0x238
    EnterCriticalSection(lpCriticalSection)
    memcpy(rax_2, *(*arg1 + 0x1e8), rbp_1.d)
    int64_t* rcx_6 = data_143f0f180
    result = (*(*rcx_6 + 0x138))(rcx_6, &data_143f02b98, *(*arg1 + 0x1f8))
    
    if (lpCriticalSection != 0)
        return LeaveCriticalSection(lpCriticalSection)

return result
