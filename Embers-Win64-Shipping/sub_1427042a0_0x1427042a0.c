// 函数: sub_1427042a0
// 地址: 0x1427042a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x278) == 0)
    int64_t result
    result.b = 1
    return result

void* rcx = *(arg1 + 0x100)
void* rdi
rdi.b = 0

if (rcx != 0)
    char rax = (*(rcx + 0x98)).b
    
    if ((rax & 2) != 0 && *(rcx + 0x30) s> 1 && (rax & 1) != 0)
        int64_t rax_1
        int32_t* rcx_2
        rax_1, rcx_2 = sub_140d3c6e0(rcx + 0x9c)
        
        if (rax_1 != 0)
            rdi = *(arg1 + 0x100)
            
            if (*(rdi + 0x70) == data_143f71588.d)
                rcx_2.b = 1
            else
                rcx_2 = *(rdi + 0x78)
                
                if (rcx_2 == 0)
                    rcx_2.b = 0
                else
                    char rax_3
                    rax_3, rcx_2 = sub_14268a5a0(rcx_2, &data_143f71588)
                    
                    if (rax_3 != 0)
                        rcx_2.b = 1
                    else
                        rcx_2.b = 0
            
            void* const rax_4 = nullptr
            
            if (rcx_2.b != 0)
                rax_4 = rdi
            
            if (rax_4 != 0)
                uint128_t var_28
                sub_1426fc0e0(arg1, &var_28)
                int64_t* rcx_4 = *(arg1 + 0x100)
                int64_t var_18
                return (*(*rcx_4 + 0x28))(rcx_4, var_18)
            
            rdi.b = 1

return zx.q(rdi.b)
