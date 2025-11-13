// 函数: sub_140a59a80
// 地址: 0x140a59a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t dwTlsIndex = data_143db71b8
char r15 = *(((arg2 + 0xf) u>> 4) + &data_143db71d0)
int64_t r12

if (dwTlsIndex == 0)
    r12 = 0
else
    int64_t rax_1 = TlsGetValue(dwTlsIndex)
    r12 = rax_1
    
    if (rax_1 != 0)
        uint64_t r8_1 = zx.q(r15)
        int64_t* rdx_4 = (zx.q(r8_1.d) << 5) + rax_1
        
        if (*rdx_4 != 0)
            goto label_140a59b40
        
        uint64_t r11_1 = r8_1 << 3
        rdx_4[1].d = 0
        int32_t r9_1 = 0
        void* r10_1 = &data_143db5380 + (r11_1 << 3)
        int64_t r8_2
        
        while (true)
            r8_2 = *r10_1
            
            if (r8_2 != 0)
                uint64_t rcx_1 = zx.q(r9_1) + r11_1
                bool z_1
                
                if (r8_2 == *((rcx_1 << 3) + &data_143db5380))
                    *((rcx_1 << 3) + &data_143db5380) = 0
                    z_1 = true
                else
                    *((rcx_1 << 3) + &data_143db5380)
                    z_1 = false
                
                if (z_1)
                    break
            
            r9_1 += 1
            r10_1 += 8
            
            if (r9_1 u>= 8)
                r8_2 = 0
                break
        
        *rdx_4 = r8_2
        
        if (r8_2 != 0)
            rdx_4[1].d = *(r8_2 + 8)
            *(r8_2 + 8) = 0
        label_140a59b40:
            int64_t* rax_5 = *rdx_4
            
            if (rax_5 != 0)
            label_140a59b64:
                rdx_4[1].d -= 1
                *rdx_4 = *rax_5
                return rax_5
            
            if (rdx_4[2] != 0)
                *rdx_4 = *(rdx_4 + 0x10)
                rdx_4[2] = 0
                rdx_4[3].d = 0
                rax_5 = *rdx_4
                
                if (rax_5 != 0)
                    goto label_140a59b64

void* lpCriticalSection = arg1 + 0x888
EnterCriticalSection(lpCriticalSection)
uint64_t rcx_4 = zx.q(r15) * 3
int16_t* rdi = *(arg1 + 0x28 + (rcx_4 << 3))
int64_t* r14_1 = arg1 + 0x28 + (rcx_4 << 3)
int16_t rax_7

if (rdi == 0)
    int32_t rbp_1 = data_143db71bc
    int16_t r15_1 = (r14_1[2].d).w
    int16_t* rax_9 = sub_140a3f110(arg1 + 0x478, zx.q(rbp_1), 0x4000000, arg1 + 0x478, 
        (zx.q(*(arg1 + 0x880)) << 4) + arg1 + 0x478, arg1 + 0x880, arg1 + 0x878)
    
    if (rax_9 == 0)
        sub_140a4c430(zx.q(rbp_1), 0)
    
    uint32_t r8_4 = zx.d(r15_1)
    uint32_t temp0_1 = divu.dp.d(0:rbp_1, r8_4)
    *rax_9 = r8_4.w
    rax_9[1].b = r15
    *(rax_9 + 3) = 0xe3
    *(rax_9 + 8) = 0
    *(rax_9 + 4) = temp0_1
    
    if (temp0_1 * r8_4 + 0x10 u> rbp_1)
        *(rax_9 + 4) = temp0_1 - 1
    
    rdi = sub_140a59140(arg1, rax_9, 0xf317, 0)
    void* rax_14 = *r14_1
    
    if (rax_14 != 0)
        *(rax_14 + 0x18) = &rdi[8]
        rax_14 = *r14_1
    
    *(rdi + 0x10) = rax_14
    *(rdi + 0x18) = r14_1
    rax_7 = 0
    *r14_1 = rdi
    *(rdi + 8) = rax_9
else
    rax_7 = *rdi

int16_t* rsi_2 = *(rdi + 8)
*rdi = rax_7 + 1
int32_t rdx_11 = *(rsi_2 + 4)
uint32_t r8_5 = zx.d(*rsi_2)
*(rsi_2 + 4) = rdx_11 - 1
void* rsi_4

if (rsi_2.w != 0)
    rsi_4 = rsi_2 + zx.q((rdx_11 - 1) * r8_5)
else
    rsi_4 = rsi_2 - zx.q(rdx_11 * r8_5) + 0x10000

void* rax_17 = *(rdi + 8)

if (*(rax_17 + 4) == 0)
    *(rdi + 8) = *(rax_17 + 8)

void* var_58

if (r12 != 0)
    for (int32_t i = 0; i s< 0x20; )
        int16_t rax_19 = rdi[1]
        
        if (rax_19 != 0xf317)
            var_58.d = 0xf317
            sub_140af98a0("Unknown", 0x93, 
                MallocBinned2 Corruption Canary was 0x%x, should be 0x%x", zx.q(rax_19))
            sub_140afbb40()
        
        void* rax_20 = *(rdi + 8)
        
        if (rax_20 == 0)
            break
        
        if (*(rax_20 + 4) == 0)
            break
        
        void** rcx_16 = (zx.q(r15) << 5) + r12
        int32_t rdx_13 = rcx_16[1].d
        
        if (rdx_13 u>= 0x40 || r14_1[2].d * rdx_13 u>= 0x10000)
            if (rcx_16[2] != 0)
                break
            
            *(rcx_16 + 0x10) = *rcx_16
            *rcx_16 = nullptr
            rcx_16[1].d = 0
        
        *rsi_4 = *rcx_16
        *(rsi_4 + 8) = 0
        rcx_16[1].d += 1
        *rcx_16 = rsi_4
        i += 1
        rsi_4 = sub_140a57a50(rdi)

int16_t rax_25 = rdi[1]

if (rax_25 != 0xf317)
    var_58.d = 0xf317
    sub_140af98a0("Unknown", 0x93, MallocBinned2 Corruption Canary was 0x%x, should be 0x%x", 
        zx.q(rax_25))
    sub_140afbb40()

void* rax_26 = *(rdi + 8)

if (rax_26 == 0 || *(rax_26 + 4) == 0)
    int16_t* rdx_14 = *(rdi + 0x10)
    
    if (rdx_14 != 0)
        *(rdx_14 + 0x18) = *(rdi + 0x18)
        rdx_14 = *(rdi + 0x10)
    
    **(rdi + 0x18) = rdx_14
    int16_t* rdx_15 = r14_1[1]
    
    if (rdx_15 != 0)
        *(rdx_15 + 0x18) = &rdi[8]
        rdx_15 = r14_1[1]
    
    *(rdi + 0x10) = rdx_15
    *(rdi + 0x18) = &r14_1[1]
    r14_1[1] = rdi

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return rsi_4
