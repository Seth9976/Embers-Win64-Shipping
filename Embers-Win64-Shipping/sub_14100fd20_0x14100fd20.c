// 函数: sub_14100fd20
// 地址: 0x14100fd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142efcd08
void*** rdi = arg1
arg1[3] = &data_142efcd10
void* rsi = arg1[0x11]

if (rsi != 0)
    CRITICAL_SECTION* lpCriticalSection = rsi + 0x10
    EnterCriticalSection(lpCriticalSection)
    arg1[0x11] = 0
    int64_t rcx_1 = sx.q(*(rsi + 0x40))
    
    if (rcx_1.d != 0)
        int32_t rsi_1 = 0
        int32_t r13_1 = 0
        int64_t r12
        r12.b = **(rsi + 0x38) != &arg1[0x11]
        int64_t rdi_1 = 0
        
        do
            int64_t r9_1 = sx.q(rsi_1)
            rdi_1 += 1
            rsi_1 += 1
            
            if (rdi_1 s< rcx_1)
                int64_t* rcx_2 = *(rsi + 0x38) + (rdi_1 << 3)
                
                do
                    int32_t rax_3
                    rax_3.b = *rcx_2 != &arg1[0x11]
                    
                    if (zx.d(r12.b) != rax_3)
                        break
                    
                    rsi_1 += 1
                    rdi_1 += 1
                    rcx_2 = &rcx_2[1]
                while (rdi_1 s< rcx_1)
            
            int32_t r14_2 = rsi_1 - r9_1.d
            
            if (r12.b != 0)
                if (r13_1 != r9_1.d)
                    int64_t rcx_3 = *(rsi + 0x38)
                    memmove(rcx_3 + (sx.q(r13_1) << 3), rcx_3 + (r9_1 << 3), r14_2 << 3)
                
                r13_1 += r14_2
            
            r12.b ^= 1
        while (rdi_1 s< rcx_1)
        
        rdi = arg1
        *(rsi + 0x40) = r13_1
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)

sub_1405d1550(&rdi[0x12])
rdi[3] = &data_142efcd00
void* rcx_7 = rdi[4]

if (rcx_7 != 0)
    sub_1410224a0(rcx_7 + 0x1b0, rdi[5], rdi[6].d)
    rdi[5] = 0

*rdi = &data_142d3ff08
return &data_142d3ff08
