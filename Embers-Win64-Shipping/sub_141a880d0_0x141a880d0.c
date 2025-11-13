// 函数: sub_141a880d0
// 地址: 0x141a880d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)

if (*(arg1 + 0x8e0) != *(arg1 + 0x90c))
    void* r10_1 = arg1 + 0x910
    void* r8_1 = *(r10_1 + 8)
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t i = *(r10_1 + (((sx.q(*(arg1 + 0x920)) - 1) & r11) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x8d8)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx = i_1 * 3
            
            if (*(r8_2 + (rcx << 3)) == r11.d)
                if (i != 0xffffffff)
                    void* rdi_1 = r8_2 + i_1 * 0x18
                    
                    if (rdi_1 != 0)
                        int64_t* result = *(rdi_1 + 8)
                        
                        if (result != 0)
                            int64_t rbx_1 = *result
                            sub_141abd090()
                            
                            if ((*(rbx_1 + 8))(result, &data_143f2bad8) != 0)
                                return result
                
                break
            
            i = *(r8_2 + (rcx << 3) + 0x10)
        while (i != 0xffffffff)

return 0
