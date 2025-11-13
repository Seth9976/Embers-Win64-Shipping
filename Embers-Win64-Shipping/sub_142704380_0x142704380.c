// 函数: sub_142704380
// 地址: 0x142704380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x100)
uint64_t rax

if (rcx != 0)
    rax = zx.q(*(rcx + 0x98))
    
    if ((rax.b & 2) != 0 && *(rcx + 0x30) s> 1 && (rax.b & 1) != 0)
        int32_t* rcx_2
        rax, rcx_2 = sub_140d3c6e0(rcx + 0x9c)
        
        if (rax != 0)
            void* rbx = *(arg1 + 0x100)
            
            if (*(rbx + 0x70) == data_143f71588.d)
                rcx_2.b = 1
            else
                rcx_2 = *(rbx + 0x78)
                
                if (rcx_2 == 0)
                    rcx_2.b = 0
                else
                    char rax_2
                    rax_2, rcx_2 = sub_14268a5a0(rcx_2, &data_143f71588)
                    
                    if (rax_2 != 0)
                        rcx_2.b = 1
                    else
                        rcx_2.b = 0
            
            void* const rax_3 = nullptr
            
            if (rcx_2.b != 0)
                rax_3 = rbx
            
            if (rax_3 == 0)
                rax_3.b = 1
                return rax_3
            
            uint128_t var_28
            sub_1426fc0e0(arg1, &var_28)
            jump(*(**(arg1 + 0x100) + 0x28))

rax.b = 0
return rax
