// 函数: sub_142abebe0
// 地址: 0x142abebe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2
uint32_t result = sub_142abee10(arg1, arg2)

if (*rdi s<= 0)
    void* rcx = *(arg1 + 0x198)
    int16_t rax = *(rcx + 8)
    
    if (rax s< 0)
        result = *(rcx + 0xc)
    else
        result = sx.d(rax) s>> 5
    
    int32_t rdx = *(arg1 + 0x1a0)
    
    if (rdx != result)
        result = sub_142a486d0(rcx, rdx)
        
        if (result == 0x2e)
            void* rcx_1 = *(arg1 + 0x198)
            int16_t rax_2 = *(rcx_1 + 8)
            int32_t rax_4
            
            if (rax_2 s< 0)
                rax_4 = *(rcx_1 + 0xc)
            else
                rax_4 = sx.d(rax_2) s>> 5
            
            int32_t rdx_1 = *(arg1 + 0x1a0)
            int32_t rax_5
            
            if (rdx_1 != rax_4)
                rax_5 = sub_142a486d0(rcx_1, rdx_1)
            else
                rax_5 = -1
            
            int32_t rcx_2
            rcx_2.b = rax_5 u> 0xffff
            *(arg1 + 0x1a0) += rcx_2 + 1
            *(*(arg1 + 0x1a8) + 0x28) = 1
            void* rax_7 = *(arg1 + 0x1a8)
            *(rax_7 + 0x2c) += 1
            return sub_142abeca0(arg1, rdi)

return result
