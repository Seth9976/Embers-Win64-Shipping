// 函数: sub_141c52f00
// 地址: 0x141c52f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[2].d)

if (result.d s>= 0)
    void* rdi_1 = *arg1
    
    if (result.d s< *(rdi_1 + 0x80))
        int64_t rcx = result * 3
        result = *(rdi_1 + 0x78)
        int64_t r14_1 = result + (rcx << 3)
        
        if (*(r14_1 + 8) != 0)
            int64_t var_18
            result = &var_18
            int64_t* var_10 = nullptr
            
            if (r14_1 + 8 != &var_18)
                *(r14_1 + 8) = 0
                var_18 = 0
                result = sub_1405aeff0(r14_1 + 0x10, &var_10)
                int64_t* rcx_3 = var_10
                
                if (rcx_3 != 0)
                    result = zx.q(rcx_3[1].d)
                    rcx_3[1].d -= 1
                    
                    if (result.d == 1)
                        int64_t* rbx_1 = var_10
                        result = (**rbx_1)(rbx_1)
                        int32_t rsi_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rsi_1 == 1)
                            int64_t* rcx_5 = var_10
                            result = (*(*rcx_5 + 8))(rcx_5, zx.q(rsi_1))
            
            *r14_1 = 0xffffffff
            *(rdi_1 + 0x328) -= 1

return result
