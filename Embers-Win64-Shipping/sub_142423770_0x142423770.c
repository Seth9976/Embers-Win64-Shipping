// 函数: sub_142423770
// 地址: 0x142423770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*(arg1 + 0x28) != 0)
    result = sub_140d41340()
    
    if (result != 0)
        void* const rbx_1 = *(arg1 + 0x28)
        int64_t r8_1 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(rbx_1 + 0x38) && *(*(rbx_1 + 0x30) + (result << 3)) == r8_1
                && rbx_1 != 0)
            void* rax = sub_140d41340()
            int64_t rax_1
            
            if (rax != 0)
                rax_1 = sx.q(*(rax + 0x38))
            
            if (rax == 0 || rax_1.d s> *(rbx_1 + 0x38)
                    || *(*(rbx_1 + 0x30) + (rax_1 << 3)) != rax + 0x30)
                rbx_1 = nullptr
            
            result = *(arg2 + 0x10)
            int64_t rcx_2 = sx.q(*(rbx_1 + 0x38))
            
            if (rcx_2.d s<= *(result + 0x38) && *(*(result + 0x30) + (rcx_2 << 3)) == rbx_1 + 0x30)
                result.b = 1
                return result

result.b = 0
return result
