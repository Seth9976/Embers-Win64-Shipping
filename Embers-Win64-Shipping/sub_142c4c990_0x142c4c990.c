// 函数: sub_142c4c990
// 地址: 0x142c4c990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int32_t i = 0

if (*(arg1 + 0x3f8) s> 0)
    do
        int64_t rbx_1 = sx.q(i) * 0x78
        sub_142c4cb30(arg1, *(arg1 + 0x3f0) + rbx_1)
        sub_142c517e0(arg1, *(arg1 + 0x3f0) + rbx_1)
        i += 1
    while (i s< *(arg1 + 0x3f8))

DISPLAY_DEVICEA displayDevice
displayDevice.cb = 0x1a8
uint32_t iDevNum = 0
int64_t result = EnumDisplayDevicesA(nullptr, 0, &displayDevice, 0)

while (result.d != 0)
    if ((displayDevice.StateFlags.b & 4) != 0)
        result = sx.q(*(arg1 + 0x3f8))
        
        if (result.d s> 0)
            int64_t rsi = 0
            void* r14_1 = *(arg1 + 0x3f0)
            int64_t rdi_1 = 0
            int64_t result_1 = result
            int64_t* rbx_2 = r14_1 + 0x50
            
            do
                if (*(rdi_1 + r14_1 + 0x38) != 0)
                    int32_t r11_1 = rbx_2[-1].d
                    int32_t r9_1 = 0
                    
                    if (r11_1 s> 0)
                        int64_t rbp_1 = *rbx_2
                        
                        while (true)
                            int64_t r10_1 = sx.q(r9_1) * 0x1d0
                            var_1d4
                            result = &var_1d4
                            uint32_t i_1
                            uint32_t rdx_6
                            
                            do
                                rdx_6 = zx.d(*result)
                                i_1 = zx.d(*(result + rbp_1 + 0x100 + r10_1 - &var_1d4))
                                
                                if (rdx_6 != i_1)
                                    break
                                
                                result += 1
                            while (i_1 != 0)
                            
                            if (rdx_6 - i_1 == 0)
                                *(r10_1 + rbp_1 + 0x120) |= 1
                                break
                            
                            r9_1 += 1
                            
                            if (r9_1 s>= r11_1)
                                goto label_142c4cadf
                        
                        break
                
            label_142c4cadf:
                rsi += 1
                rdi_1 += 0x78
                rbx_2 = &rbx_2[0xf]
            while (rsi s< result_1)
        
        break
    
    iDevNum += 1
    result = EnumDisplayDevicesA(nullptr, iDevNum, &displayDevice, 0)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
