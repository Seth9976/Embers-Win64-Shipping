// 函数: sub_14085b760
// 地址: 0x14085b760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r15 = zx.d(arg2)
uint32_t result = *(arg1 + 0x6b8) u>> 4 & 1

if (r15 != result)
    result = zx.d(*(arg1 + 0x6bc))
    
    if (result.b != 0)
        sub_1408622c0(arg1)
        result = sub_14084fd50(arg1)
    
    if (*(arg1 + 0x10) != 0xffffffff)
        int64_t* rdi_1 = *(arg1 + 0x20)
        void* r14_1 = *(arg1 + 0x18)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            
            if (rdi_1 != 0)
                result = rdi_1[1].d
                rdi_1[1].d -= 1
                
                if (result == 1)
                    result = (**rdi_1)(rdi_1)
                    int32_t rbp_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (rbp_1 == 1)
                        result = (*(*rdi_1 + 8))(rdi_1, zx.q(rbp_1))
        
        if (r14_1 != 0)
            if (r15.b == 0)
                result = sub_1408612e0(r14_1, arg1)
            else
                result = sub_140857330(r14_1, arg1)
    
    *(arg1 + 0x6b8) &= 0xffffffef
    *(arg1 + 0x6b8) |= r15 << 4

return result
