// 函数: sub_141c65590
// 地址: 0x141c65590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c698b0(*(arg1 + 0x2e0))
int64_t result = sub_141c698b0(*(arg1 + 0x2e0))
void* r15 = *(arg1 + 0x2e0)
int32_t rdi = *(r15 + 0x150)
int32_t rdi_1 = rdi - 1

if (rdi - 1 s>= 0)
    int64_t r14_2 = sx.q(rdi_1) << 4
    int32_t temp1_1
    
    do
        void* rsi_1 = *(r14_2 + *(r15 + 0x148))
        EnterCriticalSection(rsi_1 + 0xb8)
        int64_t* rcx_3 = *(rsi_1 + 0x60)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x20))(rcx_3)
            int64_t* rcx_4 = *(rsi_1 + 0x60)
            
            if (rcx_4 != 0)
                (**rcx_4)(rcx_4, 1)
            
            *(rsi_1 + 0x60) = 0
        
        if (rsi_1 != -0xb8)
            LeaveCriticalSection(rsi_1 + 0xb8)
        
        result = sub_140dbb060(r15 + 0x148, rdi_1, 1, 0)
        r14_2 -= 0x10
        temp1_1 = rdi_1
        rdi_1 -= 1
    while (temp1_1 - 1 s>= 0)

return result
