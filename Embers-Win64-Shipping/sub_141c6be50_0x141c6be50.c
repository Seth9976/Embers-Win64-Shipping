// 函数: sub_141c6be50
// 地址: 0x141c6be50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x370)
int32_t* rsi = *(arg1 + 0x78)
int64_t result = sx.q(*(arg1 + 0x80))
void* r15 = &rsi[result * 6]

if (rsi != r15)
    void* r14_1 = &rsi[2]
    
    do
        if (*rsi == arg2)
            int128_t var_38
            result = &var_38
            var_38 = zx.o(0)
            
            if (r14_1 != &var_38)
                *r14_1 = 0
                result = sub_1405aeff0(r14_1 + 8, &var_38:8)
                void* rcx_2 = var_38:8.q
                
                if (rcx_2 != 0)
                    result = zx.q(*(rcx_2 + 8))
                    *(rcx_2 + 8) -= 1
                    
                    if (result.d == 1)
                        int64_t* rdi_1 = var_38:8.q
                        (**rdi_1)(rdi_1)
                        result = zx.q(*(rdi_1 + 0xc))
                        *(rdi_1 + 0xc) -= 1
                        
                        if (result.d == 1)
                            int64_t* rcx_4 = var_38:8.q
                            result = (*(*rcx_4 + 8))(rcx_4, 1)
            
            *rsi = 0xffffffff
            *(arg1 + 0x328) -= 1
        
        rsi = &rsi[6]
        r14_1 += 0x18
    while (rsi != r15)

if (arg1 == -0x370)
    return result

return LeaveCriticalSection(arg1 + 0x370) __tailcall
