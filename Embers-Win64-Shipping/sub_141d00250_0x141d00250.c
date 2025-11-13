// 函数: sub_141d00250
// 地址: 0x141d00250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result_3 = 0

while (true)
    void* rdi_1 = data_143f36250
    void* lpCriticalSection = rdi_1 + 8
    EnterCriticalSection(lpCriticalSection)
    int32_t i = *(rdi_1 + 0xb0)
    int16_t rdx_1 = 0
    
    if (i s> 0)
        do
            int64_t rax_2 = 5
            int32_t* rcx_3 = zx.q(rdx_1) * 0x98 + 0x74 + *(rdi_1 + 0xa8)
            
            while (true)
                if (*rcx_3 != 0)
                label_141d00356:
                    rdi_1.b = 0
                    goto label_141d00336
                
                if (rax_2 == 0)
                    break
                
                rax_2 -= 1
                rcx_3 -= 0xc
            
            rdx_1 += 1
        while (zx.d(rdx_1) s< i)
    
    int16_t rdx_2 = 0
    
    if (i s> 0)
        do
            int64_t rax_5 = 5
            int32_t* rcx_6 = zx.q(rdx_2) * 0x98 + 0x78 + *(rdi_1 + 0xa8)
            
            while (true)
                if (*rcx_6 != 0)
                    goto label_141d00356
                
                if (rax_5 == 0)
                    break
                
                rax_5 -= 1
                rcx_6 -= 0xc
            
            rdx_2 += 1
        while (zx.d(rdx_2) s< i)
    
    rdi_1.b = 1
label_141d00336:
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    if (rdi_1.b != 0)
        break
    
    sub_140b732d0(0.00100000005f)

uint64_t result = EnterCriticalSection(arg1 + 8)
int32_t r8_3 = *(arg1 + 0xb0)
int16_t result_1 = 0

if (r8_3 s<= 0)
label_141d003b7:
    int16_t result_2 = 0
    
    if (r8_3 s> 0)
    label_141d003da:
        result = 5
        int32_t* rcx_14 = zx.q(result_2) * 0x98 + 0x78 + *(arg1 + 0xa8)
        
        while (*rcx_14 == 0)
            if (result == 0)
                result_2 += 1
                result = zx.q(result_2)
                
                if (result.d s< r8_3)
                    goto label_141d003da
                
                if (r8_3 s> 0)
                label_141d0041a:
                    result = 5
                    int32_t* rcx_17 = zx.q(result_3) * 0x98 + 0x70 + *(arg1 + 0xa8)
                    
                    while (*rcx_17 == 0)
                        if (result == 0)
                            result_3 += 1
                            result = zx.q(result_3)
                            
                            if (result.d s< r8_3)
                                goto label_141d0041a
                            
                            goto label_141d00444
                        
                        result -= 1
                        rcx_17 -= 0xc
                
                goto label_141d00444
            
            result -= 1
            rcx_14 -= 0xc
else
label_141d0038a:
    result = 5
    int32_t* rcx_11 = zx.q(result_1) * 0x98 + 0x74 + *(arg1 + 0xa8)
    
    while (*rcx_11 == 0)
        if (result == 0)
            result_1 += 1
            result = zx.q(result_1)
            
            if (result.d s< r8_3)
                goto label_141d0038a
            
            goto label_141d003b7
        
        result -= 1
        rcx_11 -= 0xc

label_141d00444:

if (arg1 == -8)
    return result

return LeaveCriticalSection(arg1 + 8)
