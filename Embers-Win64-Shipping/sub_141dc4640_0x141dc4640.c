// 函数: sub_141dc4640
// 地址: 0x141dc4640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xec) == 0 & sub_140b5b8a0(arg1[0x1d].d, 0)) == 0)
    int32_t rbx_1 = *(arg1 + 0xec)
    sub_140b5b8a0(arg1[0x1d].d, 0x11a)
    int32_t rcx_1
    rcx_1.b = rbx_1 == 0

void* result = sub_141dcdc50(arg1)

if (result.d != 3)
    char rbx_2 = *(arg1 + 0xf1)
    
    if (rbx_2 u> 1)
        result = sub_141dce620(arg1)
        
        if (result.b == 0)
            int64_t rbp
            rbp.b = 0
            
            if (rbx_2 == 4)
                *(arg1 + 0xf1) = 2
                rbp.b = 1
            
            if ((*(arg1 + 0x5b) & 1) != 0)
                result = (*(*arg1 + 0x150))(arg1)
                void* result_1 = result
                
                if (result != 0)
                    sub_14242c0c0(result, arg1)
                    result = sub_141dc9ff0(arg1)
                    void* result_2 = result
                    
                    if (result != 0)
                        result = sub_142167b90(result, arg1)
                        void* rcx_8 = *(result_1 + 0xf0)
                        
                        if (rcx_8 != 0 && rcx_8 != result_2)
                            return sub_142167b90(rcx_8, arg1)

return result
