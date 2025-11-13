// 函数: sub_140dbd470
// 地址: 0x140dbd470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t rcx = sx.q(*(arg1 + 0x130))
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rcx.d)
int32_t result = (temp1 - temp0) s>> 1

if (result s> 0)
    int64_t rbx_1 = 0
    void* rsi_1 = nullptr
    
    do
        int64_t rax_4 = rcx - 1 - rbx_1
        
        if (rbx_1 != rax_4)
            void* r8_1 = arg1 + 8
            void* rcx_1 = *(r8_1 + 0x120)
            
            if (rcx_1 != 0)
                r8_1 = rcx_1
            
            sub_140a4bff0(rsi_1 + r8_1, r8_1 + rax_4 * 0x48, 0x48)
        
        rdi += 1
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(*(arg1 + 0x130))
        rbx_1 += 1
        rsi_1 += 0x48
        result = (temp3_1 - temp2_1) s>> 1
    while (rdi s< result)

return result
