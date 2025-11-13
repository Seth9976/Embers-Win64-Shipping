// 函数: sub_14221b340
// 地址: 0x14221b340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg1[0x23].d)

if (result.d != 0)
    int32_t r9_1 = 0
    
    if (result.d s> 0)
        int16_t* r11_1 = arg1[0x1f]
        int64_t r8 = 0
        int64_t result_1 = result
        int64_t r15_1 = sx.q(arg1[6].d)
        
        while (true)
            void* rdx_1 = sx.q(zx.d(*r11_1) * *(arg1 + 0x114)) + arg1[0x1e]
            int32_t* rcx = r15_1 + rdx_1
            result = zx.q(*(r15_1 + rdx_1)) & 0xf0000000
            
            if (result.d == 0x80000000)
                result = zx.q(rcx[1])
                
                if (result.d == arg2)
                    if (rdx_1 != 0 && result.d == arg2)
                        while (true)
                            if (r9_1 s< arg3)
                                *(rdx_1 + 0xc) = 0x3f8ccccd
                                r9_1 += 1
                                result = zx.q(*rcx s>> 0xe) & 0x3fff
                                
                                if (result.d == 0x3fff)
                                    continue
                                else
                                    rdx_1 = sx.q(result.d * *(arg1 + 0x114)) + arg1[0x1e]
                                    rcx = sx.q(arg1[6].d) + rdx_1
                                    result = zx.q(*rcx) & 0xf0000000
                                    
                                    if (result.d != 0x40000000)
                                        if (result.d != 0x10000000)
                                            continue
                                        else
                                            rcx[2] = 0
                                            rcx[7] = 1
                                            continue
                            else if (rcx != 0)
                                break
                            
                            r9_1 = arg3
                            break
                        
                        if (r9_1 s> 0)
                            return (*(*arg1 + 0xe0))(arg1)
                    
                    break
            
            r8 += 1
            r11_1 = &r11_1[1]
            
            if (r8 s>= result_1)
                break

return result
