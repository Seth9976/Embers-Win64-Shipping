// 函数: sub_140b62f20
// 地址: 0x140b62f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi_1 = (zx.q((arg2 u>> 3) - 1) * 6 u/ 5).d
AcquireSRWLockExclusive(&data_143e05180)
uint64_t rbx_3 = zx.q((zx.q(arg1) * 6 u/ 0xa0000).d)

while (rbx_3.d u> data_143e05188)
    uint64_t rdi_1 = rbx_3 << 3
    
    if (*(rdi_1 + &data_143e05190) != 0)
        break
    
    sub_140b673e0()
    rbx_3 = zx.q(rbx_3.d - 1)
    *(rdi_1 + &data_143e05190) = sub_140a82f70(0x20000, zx.q(data_1439a9580.d))

ReleaseSRWLockExclusive(&data_143e05180)
void* SRWLock = &data_143e151c0
int32_t rcx = 0
void* i

for (i = &data_143e151c0; i != &data_143e155c0; i += 0x40)
    rcx += *(i + 0x20)

if (rcx u< rsi_1)
    uint32_t rsi_5 = ((rsi_1 u>> 4) + 1) * 0xa u/ 9
    bool cond:1_1 = rsi_5 == 0
    
    do
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rsi_5)
        int32_t rax_4
        
        rax_4 = cond:1_1 ? 0x20 : 0x1f - temp0_2
        
        int32_t rax_6 = rax_4 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rsi_5 - 1)
        char rdx_8
        
        if (rax_6 == 0)
            rdx_8 = 0x20
        else
            rdx_8 = 0x1f - temp0_3
        
        int32_t rdi_2 = 1 << ((0x20 - rdx_8) & (not.d(rax_6)).b)
        AcquireSRWLockExclusive(SRWLock)
        
        if (rdi_2 u> *(SRWLock + 0xc) + 1)
            sub_140b5eb40(SRWLock, rdi_2)
        
        i = ReleaseSRWLockExclusive(SRWLock)
        SRWLock += 0x40
        cond:1_1 = SRWLock == &data_143e155c0
    while (SRWLock != &data_143e155c0)

return i
