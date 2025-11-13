// 函数: sub_1422aff50
// 地址: 0x1422aff50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
void* r11_1 = arg1 - arg2

while (true)
    int64_t r10_1 = 0
    int32_t* result = arg2
    
    while (true)
        if (not(*result f!= *(r11_1 + result + 0x80)))
            r10_1 += 1
            result = &result[1]
            
            if (r10_1 s< 4)
                continue
            else
                rbx += 1
                arg2 = &arg2[4]
                
                if (rbx s< 4)
                    break
                
                if (not(*arg3 f!= *(arg1 + 0xc0)) && not(arg3[1] f!= *(arg1 + 0xc4))
                        && not(arg3[2] f!= *(arg1 + 0xc8)) && not(arg3[3] f!= *(arg1 + 0xcc))
                        && not(arg3[4] f!= *(arg1 + 0xd0)) && not(arg3[5] f!= *(arg1 + 0xd4))
                        && not(arg3[6] f!= *(arg1 + 0xd8)) && not(*arg4 f!= *(arg1 + 0xdc))
                        && not(arg4[1] f!= *(arg1 + 0xe0)) && not(arg4[2] f!= *(arg1 + 0xe4))
                        && not(arg4[3] f!= *(arg1 + 0xe8)) && not(arg4[4] f!= *(arg1 + 0xec))
                        && not(arg4[5] f!= *(arg1 + 0xf0)) && not(arg4[6] f!= *(arg1 + 0xf4))
                        && not(*arg5 f!= *(arg1 + 0xf8)) && not(arg5[1] f!= *(arg1 + 0xfc))
                        && not(arg5[2] f!= *(arg1 + 0x100)))
                    result.b = 1
                    return result
        
        result.b = 0
        return result
