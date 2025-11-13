// 函数: sub_1408c38e0
// 地址: 0x1408c38e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0x120)
uint64_t result
result.b = r8 & 1

if (result.b != arg2)
    r8 = (r8 & 0xfe) | arg2
    *(arg1 + 0x120) = r8
    
    if ((r8 & 1) != 0)
        return sub_1408c1740(arg1) __tailcall
    
    result = *(arg1 + 0x128)
    
    if (result != 0)
        int64_t* rcx_1 = *(result + 0x2b0)
        
        if (rcx_1 != 0)
            uint64_t* i = *rcx_1
            
            for (void* rsi_3 = &i[sx.q(rcx_1[1].d) * 2]; i != rsi_3; i = &i[2])
                int64_t* rbx_1 = i[1]
                result = *i
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                if (result != 0)
                    *(result + 0x281) = 1
                
                if (rbx_1 != 0)
                    result = zx.q(rbx_1[1].d)
                    rbx_1[1].d -= 1
                    
                    if (result.d == 1)
                        (**rbx_1)(rbx_1)
                        result = zx.q(*(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) -= 1
                        
                        if (result.d == 1)
                            result = (*(*rbx_1 + 8))(rbx_1, 1)

return result
