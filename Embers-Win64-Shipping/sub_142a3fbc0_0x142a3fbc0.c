// 函数: sub_142a3fbc0
// 地址: 0x142a3fbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x68)

if (result == 0)
    goto label_142a3fbd0

if (result == 1)
    arg2 = &arg2[2]
label_142a3fbd0:
    
    if (arg2 != 0)
        void* r8_1 = *(arg1 + 0x10)
        
        if (r8_1 != 0 || *(arg1 + 0x18) != r8_1 || *arg2 == arg1)
            void* rax = *(arg1 + 0x18)
            
            if (rax != 0)
                *(rax + 0x10) = r8_1
                r8_1 = *(arg1 + 0x10)
            
            if (r8_1 != 0)
                *(r8_1 + 0x18) = *(arg1 + 0x18)
            
            if (arg1 == *arg2)
                *arg2 = *(arg1 + 0x10)
            
            if (arg1 == arg2[1])
                arg2[1] = *(arg1 + 0x18)
            
            result = 0
            *(arg1 + 0x10) = 0
            *(arg1 + 0x18) = 0

return result
