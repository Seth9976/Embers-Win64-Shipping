// 函数: sub_1429e6000
// 地址: 0x1429e6000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 1) = 0
char result = sub_1429e0b80(arg2, arg3)
*arg1 = result

if (result != 0)
    char rax = sub_1429e0b80(arg2, arg3)
    arg1[1] = rax
    
    if (rax != 0)
        for (int64_t i = 0; i s< 7; i += 1)
            char rax_2
            
            if (sub_1429e0b80(arg2, arg3) == 0)
                rax_2 = -1
            else
                rax_2 = sub_1429e0bd0(arg2, 8)
            
            arg1[i + 5] = rax_2
        
        char rax_3 = sub_1429e0b80(arg2, arg3)
        arg1[4] = rax_3
        
        if (rax_3 == 0)
            *(arg1 + 0xc) = 0xffff
            arg1[0xe] = 0xff
        else
            for (int64_t i_1 = 0; i_1 s< 3; i_1 += 1)
                char rax_5
                
                if (sub_1429e0b80(arg2, arg3) == 0)
                    rax_5 = -1
                else
                    rax_5 = sub_1429e0bd0(arg2, 8)
                
                arg1[i_1 + 0xc] = rax_5
    
    result = sub_1429e0b80(arg2, arg3)
    arg1[2] = result
    
    if (result != 0)
        arg1[3] = sub_1429e0b80(arg2, arg3)
        sub_142a24f00(arg1)
        
        for (int32_t i_2 = 0; i_2 s< 8; i_2 += 1)
            for (int32_t j = 0; j s< 4; j += 1)
                int32_t rbx_1 = 0
                
                if (sub_1429e0b80(arg2, arg3) != 0)
                    sub_142a24f30(arg1, i_2, j.b)
                    int32_t rax_8 = sub_142a24f60(j)
                    int32_t rdx_2
                    
                    if (rax_8 == 0)
                        rdx_2 = 0
                    else
                        uint64_t rflags_1
                        int32_t temp0_1
                        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
                        rdx_2 = temp0_1 + 1
                    
                    int32_t rax_9 = sub_1429e0bd0(arg2, rdx_2)
                    rbx_1 = rax_9
                    
                    if (rax_9 s> rax_8)
                        rbx_1 = rax_8
                    
                    if (sub_142a24f50(j) != 0 && sub_1429e0b80(arg2, arg3) != 0)
                        rbx_1 = neg.d(rbx_1)
                
                result = sub_142a24f70(arg1, i_2, j, rbx_1.w)

return result
