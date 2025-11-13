// 函数: sub_141e7ca00
// 地址: 0x141e7ca00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
EnterCriticalSection(arg1 + 0xf0)
int64_t result

if (*(arg1 + 0xa8) == *(arg1 + 0xd4))
label_141e7ca87:
    result = 0
else
    void* r9_1 = arg1 + 0xd8
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_1 = *(r9_1 + (((sx.q(*(arg1 + 0xe8)) - 1) & rsi) << 2))
    int32_t rcx_1 = rax_1
    
    if (rax_1 == 0xffffffff)
    label_141e7ca87_1:
        result = 0
    else
        int64_t r8_2 = *(arg1 + 0xa0)
        
        while (true)
            int64_t rdx_4 = sx.q(rcx_1) << 6
            
            if (*(rdx_4 + r8_2) == rsi.d)
                break
            
            rcx_1 = *(rdx_4 + r8_2 + 0x38)
            
            if (rcx_1 == 0xffffffff)
                goto label_141e7ca87_2
        
        if (rcx_1 == 0xffffffff)
        label_141e7ca87_2:
            result = 0
        else
            int32_t* rdi_3
            
            if (rax_1 == 0xffffffff)
                rdi_3 = nullptr
            else
                while (true)
                    rdi_3 = (sx.q(rax_1) << 6) + r8_2
                    
                    if (*rdi_3 == rsi.d)
                        break
                    
                    rax_1 = rdi_3[0xe]
                    
                    if (rax_1 == 0xffffffff)
                        result = *8
                        goto label_141e7ca89
                
                if (rax_1 == 0xffffffff)
                    rdi_3 = nullptr
            
            result = *(rdi_3 + 8)

label_141e7ca89:

if (arg1 != -0xf0)
    LeaveCriticalSection(arg1 + 0xf0)

return result
