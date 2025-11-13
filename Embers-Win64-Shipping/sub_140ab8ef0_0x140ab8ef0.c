// 函数: sub_140ab8ef0
// 地址: 0x140ab8ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
CRITICAL_SECTION* lpCriticalSection = arg1 + 0x258
void* result_1 = nullptr
void* const r14 = nullptr
void* result

while (true)
    EnterCriticalSection(lpCriticalSection)
    result = *(arg1 + 0x280)
    
    if (result != 0)
        if (r14 == 0)
            result_1 = result
        else
            *(r14 + 8) = result
        
        r14 = *(arg1 + 0x288)
        *(arg1 + 0x288) = 0
        *(arg1 + 0x280) = 0
    
    void* result_2 = result_1
    
    if (lpCriticalSection != 0)
        result = LeaveCriticalSection(lpCriticalSection)
    
    if (result_1 == 0)
        break
    
    int64_t* rsi_1 = result_1 + 8
    void* result_3 = result_1
    result_1 = *rsi_1
    void* const rax_2 = nullptr
    
    if (result_1 != 0)
        rax_2 = r14
    
    if (sub_140ac1090(arg1 + 0x10, result_3) == 1)
        int32_t var_148_1 = 7
        void* rax_4 = result_3 + 0x1c
        int16_t var_144 = 0
        int16_t* rcx_3 = &var_144
        *(result_3 + 0x18) = 7
        int64_t i_2 = 2
        int64_t i
        
        do
            rax_4 += 0x80
            int128_t zmm0_1 = *rcx_3
            int128_t zmm1_1 = *(rcx_3 + 0x10)
            rcx_3 = &rcx_3[0x40]
            *(rax_4 - 0x80) = zmm0_1
            zmm0_1 = *(rcx_3 - 0x60)
            *(rax_4 - 0x70) = zmm1_1
            zmm1_1 = *(rcx_3 - 0x50)
            *(rax_4 - 0x60) = zmm0_1
            zmm0_1 = *(rcx_3 - 0x40)
            *(rax_4 - 0x50) = zmm1_1
            zmm1_1 = *(rcx_3 - 0x30)
            *(rax_4 - 0x40) = zmm0_1
            zmm0_1 = *(rcx_3 - 0x20)
            *(rax_4 - 0x30) = zmm1_1
            zmm1_1 = *(rcx_3 - 0x10)
            *(rax_4 - 0x20) = zmm0_1
            *(rax_4 - 0x10) = zmm1_1
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    void* rax_5 = *(arg1 + 0x298)
    
    if (rax_5 != 0)
        *(rax_5 + 8) = result_3
    else
        *(arg1 + 0x290) = result_3
    
    *(arg1 + 0x298) = result_2
    *rsi_1 = 0
    
    while (true)
        int64_t rax_6 = sx.q(data_14399eb54)
        int64_t i_1
        
        if (rax_6.d s<= 0)
            i_1 = 0
        else
            i_1 = rax_6 << 0x14
        
        int64_t* rax_7 = sub_140a47f80(arg1 + 0x10)
        
        if (rax_7 == 0)
            break
        
        rax_7[0xa].b = 1
        int64_t* rdi_1 = rax_7[8]
        void* rbp_3 = &rdi_1[sx.q(rax_7[9].d) * 4]
        
        while (rdi_1 != rbp_3)
            int64_t r8_1 = rdi_1[1]
            
            if (r8_1 != -1)
                memcpy(**(*rdi_1 + 0x148) + r8_1, *rax_7[5] + rdi_1[2], (rdi_1[3]).d)
            
            void* rax_10 = *rdi_1
            rdi_1 = &rdi_1[4]
            *(rax_10 + 0x150) -= 1
        
        if (rax_7[1] == 0)
            sub_140abfbc0(arg1 + 0xc0, &rax_7[3])
            sub_140a990c0(rax_7)
            j_sub_140a74f90(rax_7)
        else
            *(arg1 + 0x1c8) += rax_7[6]
            void* rsi_3 = *(arg1 + 0x170)
            
            if (*(arg1 + 0x1c8) u> i_1)
                do
                    if (rsi_3 == arg1 + 0x110)
                        goto label_140ab91af
                    
                    if (*(rsi_3 + 0x50) == 0)
                        goto label_140ab91af
                    
                    void* rdi_2 = *(rsi_3 + 8)
                    *(*(rsi_3 + 0x10) + 8) = rdi_2
                    *(*(rsi_3 + 8) + 0x10) = *(rsi_3 + 0x10)
                    *(arg1 + 0x1c8) -= *(rsi_3 + 0x30)
                    sub_140abfbc0(arg1 + 0xc0, rsi_3 + 0x18)
                    sub_140a990c0(rsi_3)
                    j_sub_140a74f90(rsi_3)
                    rsi_3 = rdi_2
                while (*(arg1 + 0x1c8) u> i_1)
                
                sub_140ab86e0(arg1)
                continue
        
    label_140ab91af:
        sub_140ab86e0(arg1)
    
    r14 = rax_2
    lpCriticalSection = arg1 + 0x258

__security_check_cookie(rax_1 ^ &var_178)
return result
