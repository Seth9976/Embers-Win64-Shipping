// 函数: sub_140a58510
// 地址: 0x140a58510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2.w)
void* lpCriticalSection

if (result != 0)
    void* rbx_2 = arg2 & 0xffffffffffff0000
    result = zx.q(*(rbx_2 + 3))
    
    if (result.b != 0xe3)
        int32_t var_40_1 = 0xe3
        uint32_t var_48_1 = zx.d(result.b)
        sub_140af98a0("Unknown", 0x4cc, 
            FMallocBinned2 Attempt to realloc an unrecognized block %p   canary == 0x%x != 0x%x", rbx_2)
        result = sub_140afbb40()
    
    uint32_t dwTlsIndex = data_143db71b8
    uint32_t r15_1 = zx.d(*rbx_2)
    uint64_t r12_1 = zx.q(*(rbx_2 + 2))
    
    if (dwTlsIndex != 0)
        result = TlsGetValue(dwTlsIndex)
    
    int64_t* rbp_1
    
    if (dwTlsIndex == 0 || result == 0)
        rbp_1 = arg2
        *arg2 = 0
    else
        uint64_t rcx = zx.q(*(rbx_2 + 2))
        rbp_1 = nullptr
        uint64_t r9_4 = (zx.q(rcx.d) << 5) + result
        void* rdx = *(r9_4 + 0x10)
        
        if (rdx != 0)
            uint64_t r11_1 = rcx << 3
            *(rdx + 8) = *(r9_4 + 0x18)
            int64_t rbx_3 = *(r9_4 + 0x10)
            int32_t rdx_1 = 0
            void* r8_2 = (r11_1 << 3) + &data_143db5380
            
            while (true)
                if (*r8_2 == 0)
                    uint64_t rcx_1 = (zx.q(rdx_1) + r11_1) << 3
                    bool z_1
                    
                    if (0 == *(rcx_1 + &data_143db5380))
                        *(rcx_1 + &data_143db5380) = rbx_3
                        z_1 = true
                    else
                        *(rcx_1 + &data_143db5380)
                        z_1 = false
                    
                    if (z_1)
                        break
                
                rdx_1 += 1
                r8_2 += 8
                
                if (rdx_1 u>= 8)
                    rbp_1 = *(r9_4 + 0x10)
                    rbp_1[1] = 0
                    break
            
            *(r9_4 + 0x10) = 0
            *(r9_4 + 0x18) = 0
        
        uint64_t rcx_4 = (r12_1 << 5) + result
        result = zx.q(*(rcx_4 + 8))
        
        if (result.d u< 0x40)
            result = zx.q(result.d * r15_1)
            
            if (result.d u< 0x10000)
                goto label_140a5865c
        
        if (*(rcx_4 + 0x10) == 0)
            *(rcx_4 + 0x10) = *rcx_4
            *rcx_4 = 0
            *(rcx_4 + 8) = 0
        label_140a5865c:
            result = *rcx_4
            *arg2 = result
            arg2[1] = 0
            *(rcx_4 + 8) += 1
            *rcx_4 = arg2
    
    if (rbp_1 != 0)
        lpCriticalSection = arg1 + 0x888
        rbp_1[1] = 0
        EnterCriticalSection(lpCriticalSection)
        result = sub_140a582b0(arg1, rbp_1, r15_1.w, r12_1.d)
    label_140a587ee:
        
        if (lpCriticalSection != 0)
            return LeaveCriticalSection(lpCriticalSection)
else if (arg2 != 0)
    lpCriticalSection = arg1 + 0x888
    EnterCriticalSection(lpCriticalSection)
    uint64_t rdx_4 = arg2 u>> (*(arg1 + 0x10)).b
    int64_t* rcx_14 = ((zx.q(*(arg1 + 0x20) - 1) & zx.q(rdx_4.d)) << 5) + *(arg1 + 0x460)
    int64_t* rax_6 = rcx_14
    void* rdi_1
    
    while (true)
        if (*rax_6 == rdx_4)
            uint64_t rdi_3 = (zx.q((arg2 u>> (*(arg1 + 8)).b).d) & zx.q(*(arg1 + 0x18))) << 5
            rdi_1 = rdi_3 + rax_6[1]
            
            if (rdi_3 != neg.q(rax_6[1]))
                break
        else
            rax_6 = rax_6[3]
            
            if (rax_6 != rcx_14)
                continue
            else
                rdi_1 = nullptr
        
        sub_140af98a0("Unknown", 0x3bc, FMallocBinned2 Attempt to free an unrecognized block %p", 
            arg2)
        sub_140afbb40()
        break
    
    int16_t rax_7 = *(rdi_1 + 2)
    
    if (rax_7 != 0x17ea)
        int32_t var_48_2 = 0x17ea
        sub_140af98a0("Unknown", 0x93, MallocBinned2 Corruption Canary was 0x%x, should be 0x%x", 
            zx.q(rax_7))
        sub_140afbb40()
        rax_7 = *(rdi_1 + 2)
    
    int64_t rbp_2 = *(rdi_1 + 8)
    
    if (rax_7 != 0x17ea && rax_7 != 0xf317)
        int32_t var_48_3 = 0x3941
        sub_140af98a0("Unknown", 0xa2, 
            MallocBinned2 Corruption Canary was 0x%x, will be 0x%x because this block should be "
        "preexisting and in use.", zx.q(rax_7))
        sub_140afbb40()
    
    *(rdi_1 + 2) = 0x3941
    int32_t var_40
    var_40.q = arg1 + 0x478
    result = sub_140a45dc0(arg1 + 0x478, arg2, rbp_2, 0x40, 0x4000000, var_40, arg1 + 0x880, 
        arg1 + 0x878)
    goto label_140a587ee
return result
