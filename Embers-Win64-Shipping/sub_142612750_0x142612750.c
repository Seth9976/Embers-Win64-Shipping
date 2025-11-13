// 函数: sub_142612750
// 地址: 0x142612750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 == 0)
    result.b = 0
else
    void* r11_1 = *arg1
    char r14_1 = (*(r11_1 + 0x9c)).b
    char rbp_1 = (*(r11_1 + 0xa0)).b
    int32_t r8_2 = ((1 << rbp_1).d - 1) & arg2.d
    int32_t rdx_2 = ((1 << r14_1).d - 1) & (arg2 u>> rbp_1).d
    
    if (rdx_2 u>= *(r11_1 + 0x30))
        result.b = 0
    else
        int32_t* rdi_2 = zx.q(rdx_2) * 0xb0 + *(r11_1 + 0x90)
        
        if (*rdi_2 != ((arg2 u>> (r14_1 + rbp_1)).d & ((1 << (*(r11_1 + 0x98)).b).d - 1)))
            result.b = 0
        else
            result = *(rdi_2 + 8)
            
            if (result == 0 || r8_2 u>= *(result + 0x18))
                result.b = 0
            else
                void* r9_5 = (zx.q(r8_2) << 5) + *(rdi_2 + 0x10)
                
                if (arg3[0x43].b != 0)
                    if ((*(*arg3 + 8))(arg3, arg2, rdi_2, r9_5).b == 0)
                        result.b = 0
                    else
                    label_142612885:
                        
                        if (sub_142613610(arg1, rdi_2, arg2.d).b == 0)
                            result.b = 0
                        else
                            result.b = 1
                else
                    result = zx.q(*(r9_5 + 0x1c))
                    
                    if ((arg3[0x42].w & result.w) == 0 || (*(arg3 + 0x212) & result.w) != 0)
                        result.b = 0
                    else
                        result = zx.q(*(r9_5 + 0x1f)) & 0x3f
                        
                        if (not(3.40282347e+38f f<= *(arg3 + (result << 2) + 8))
                                && 3.40282347e+38f f> *(arg3 + (result << 2) + 0x108))
                            goto label_142612885
                        
                        result.b = 0

return result
