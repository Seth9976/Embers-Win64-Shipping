// 函数: sub_140747f90
// 地址: 0x140747f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1407799d0(*arg1)
void* rdx = *arg1
int32_t rax = 0

if (0 == *(rdx + 0x1e8))
    *(rdx + 0x1e8) = 0
else
    rax = *(rdx + 0x1e8)

void* rdx_1 = *arg1
int32_t rsi_1 = *(rdx_1 + 0x1f0) * rax
uint64_t rax_1 = 0

if (0 == *(rdx_1 + 0x1e8))
    *(rdx_1 + 0x1e8) = 0
else
    rax_1 = zx.q(*(rdx_1 + 0x1e8))

void* r8 = *arg1
uint32_t count = (rax_1 << 2).d
int32_t result = *(r8 + 0x2b8)
int32_t r14_1 = *(r8 + 0x1f0) * count

if (r14_1 != result)
    void* rcx_1 = r8
    
    if (result != 0)
        *(r8 + 0x2b8) = 0
        sub_1405d16e0(r8 + 0x2a8, nullptr)
        result = sub_1405d16e0(r8 + 0x2b0, nullptr)
        rcx_1 = *arg1
    
    r8 = rcx_1
    
    if (rsi_1 s> 0)
        result = sub_14076dc30(rcx_1 + 0x2a8, 4, rsi_1, 0xd, 1, 0)
        r8 = *arg1

if (*(r8 + 0x2b8) u> 0)
    int64_t* rcx_5 = data_143f0f180
    int64_t rax_3 = (*(*rcx_5 + 0x130))(rcx_5, &data_143f02b98, *(r8 + 0x2a8), 0, r14_1, 1)
    CRITICAL_SECTION* lpCriticalSection = *arg1 + 0x2c0
    EnterCriticalSection(lpCriticalSection)
    void* r8_3 = *arg1
    int32_t i = 0
    
    if (*(r8_3 + 0x1f0) s> 0)
        int64_t rbp = 0
        
        do
            int32_t rax_4 = 0
            
            if (0 == *(r8_3 + 0x1e8))
                *(r8_3 + 0x1e8) = 0
            else
                rax_4 = *(r8_3 + 0x1e8)
            
            memcpy(rax_3 + (sx.q(rax_4 * i) << 2), *(*(*arg1 + 0x218) + rbp), count)
            r8_3 = *arg1
            rbp += 0x10
            i += 1
        while (i s< *(r8_3 + 0x1f0))
    
    int64_t* rcx_9 = data_143f0f180
    result = (*(*rcx_9 + 0x138))(rcx_9, &data_143f02b98, *(r8_3 + 0x2a8))
    
    if (lpCriticalSection != 0)
        return LeaveCriticalSection(lpCriticalSection)

return result
