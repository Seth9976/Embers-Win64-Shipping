// 函数: sub_1408e8550
// 地址: 0x1408e8550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg3)
int32_t result_1
sub_140865c40(arg1 + 0x18, &result_1, arg2)
int64_t result = sx.q(result_1)
int64_t rcx_1

if (result.d == 0xffffffff)
    rcx_1 = 0
else
    int64_t rdx_1 = result * 3
    result = *(arg1 + 0x18)
    rcx_1 = result + (rdx_1 << 3)

int64_t* rdi = rcx_1 + 8

if (rcx_1 == 0)
    rdi = nullptr

if (rdi != 0)
    void* rdi_1 = *rdi
    EnterCriticalSection(rdi_1 + 0xc0)
    void* const rcx_5
    
    if (*(rdi_1 + 0x30) == *(rdi_1 + 0x5c))
    labelid_a:
        rcx_5 = nullptr
    else
        void* rcx_3 = *(rdi_1 + 0x68)
        void* r8_1 = rdi_1 + 0x60
        
        if (rcx_3 != 0)
            r8_1 = rcx_3
        
        int32_t rax_1 = *(r8_1 + (((sx.q(*(rdi_1 + 0x70)) - 1) & rsi) << 2))
        
        if (rax_1 == 0xffffffff)
        label_1408e8610:
            rcx_5 = nullptr
        else
            int64_t r8_2 = *(rdi_1 + 0x28)
            
            while (true)
                int64_t rdx_5 = sx.q(rax_1) * 5
                rcx_5 = r8_2 + (rdx_5 << 3)
                
                if (*(r8_2 + (rdx_5 << 3)) == rsi.d)
                    break
                
                rax_1 = *(rcx_5 + 0x20)
                
                if (rax_1 == 0xffffffff)
                    goto label_1408e8610_1
            
            if (rax_1 == 0xffffffff)
            label_1408e8610_1:
                rcx_5 = nullptr
    
    result = rcx_5 + 8
    
    if (rcx_5 == 0)
        result = 0
    
    if (result != 0)
        *(result + 0xc) -= 1
    
    if (rdi_1 != -0xc0)
        return LeaveCriticalSection(rdi_1 + 0xc0)

return result
