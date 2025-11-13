// 函数: sub_142ba0100
// 地址: 0x142ba0100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg2)
int64_t r8 = r10 * 0x898
void* r11 = *(r8 + arg1 + 0x50)
int64_t result = sx.q(*(r8 + arg1 + 0x48))
void* rdx = r11 + result * 0x48
int64_t rbx

if (r10.d != 0)
    if (r10.d != 1 || (*(arg1 + 0x116c) & 2) == 0)
        rbx.b = 0
    else
        rbx.b = 1
else if ((*(arg1 + 0x116c) & 1) != 0)
    rbx.b = 1
else
    rbx.b = 0

if (r11 u< rdx)
    void* r9_1 = r11 + 8
    int64_t i_1 = (rdx - r11 - 1) u/ 0x48 + 1
    int64_t i
    
    do
        void* j = *(r9_1 + 0x30)
        
        if (rbx.b == 0)
            int32_t rcx_2 = *r9_1 - *(r9_1 - 4)
            
            do
                result = *(j + 0x38)
                
                while (true)
                    if (r10.d != 0)
                        *(result + 0x14) += rcx_2
                        *result |= 8
                    else
                        *(result + 0x10) += rcx_2
                        *result |= 4
                    
                    if (result == *(j + 0x40))
                        break
                    
                    result = *(result + 0x20)
                
                j = *(j + 0x18)
            while (j != *(r9_1 + 0x30))
        else
            do
                int16_t* rcx = *(j + 0x38)
                
                while (true)
                    result = zx.q(*r9_1)
                    
                    if (r10.d != 0)
                        *rcx |= 8
                        *(rcx + 0x14) = result.d
                    else
                        *rcx |= 4
                        *(rcx + 0x10) = result.d
                    
                    if (rcx == *(j + 0x40))
                        break
                    
                    rcx = *(rcx + 0x20)
                
                j = *(j + 0x18)
            while (j != *(r9_1 + 0x30))
        
        r9_1 += 0x48
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
