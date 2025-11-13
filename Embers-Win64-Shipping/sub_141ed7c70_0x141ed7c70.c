// 函数: sub_141ed7c70
// 地址: 0x141ed7c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x180) = *arg2 f+ *(arg1 + 0x180)
*(arg1 + 0x184) = *(arg1 + 0x184) f+ arg2[1]
*(arg1 + 0x188) = *(arg1 + 0x188) f+ arg2[2]
*(arg1 + 0x250) = *arg2 f+ *(arg1 + 0x250)
float zmm1 = *(arg1 + 0x258)
*(arg1 + 0x254) = arg2[1] f+ *(arg1 + 0x254)
*(arg1 + 0x258) = zmm1 f+ arg2[2]
void* result = *(arg1 + 0x148)

if (result != 0 && *(result + 0xf0) == 2)
    void* result_1 = *(arg1 + 0x4b8)
    
    if (result_1 != 0)
    label_141ed7d48:
        int32_t i_2 = 0
        int64_t r11_1 = 0
        int64_t r10_1 = sx.q(*(result_1 + 0x20) - 1)
        
        if (r10_1 s>= 4)
            int64_t* rdi_1 = nullptr
            int64_t i_3 = ((r10_1 - 4) u>> 2) + 1
            r11_1 = i_3 << 2
            int64_t i
            
            do
                void* rcx_3 = *(rdi_1 + *(result_1 + 0x18))
                *(rcx_3 + 0x3c) = *(rcx_3 + 0x3c) f+ *arg2
                *(rcx_3 + 0x40) = *(rcx_3 + 0x40) f+ arg2[1]
                *(rcx_3 + 0x44) = *(rcx_3 + 0x44) f+ arg2[2]
                *(rcx_3 + 0x16c) = *(rcx_3 + 0x16c) f+ *arg2
                *(rcx_3 + 0x170) = *(rcx_3 + 0x170) f+ arg2[1]
                *(rcx_3 + 0x174) = *(rcx_3 + 0x174) f+ arg2[2]
                void* rcx_4 = *(rdi_1 + *(result_1 + 0x18) + 0x10)
                *(rcx_4 + 0x3c) = *(rcx_4 + 0x3c) f+ *arg2
                *(rcx_4 + 0x40) = *(rcx_4 + 0x40) f+ arg2[1]
                *(rcx_4 + 0x44) = *(rcx_4 + 0x44) f+ arg2[2]
                *(rcx_4 + 0x16c) = *(rcx_4 + 0x16c) f+ *arg2
                *(rcx_4 + 0x170) = *(rcx_4 + 0x170) f+ arg2[1]
                *(rcx_4 + 0x174) = *(rcx_4 + 0x174) f+ arg2[2]
                void* rcx_5 = *(rdi_1 + *(result_1 + 0x18) + 0x20)
                *(rcx_5 + 0x3c) = *(rcx_5 + 0x3c) f+ *arg2
                *(rcx_5 + 0x40) = *(rcx_5 + 0x40) f+ arg2[1]
                *(rcx_5 + 0x44) = *(rcx_5 + 0x44) f+ arg2[2]
                *(rcx_5 + 0x16c) = *(rcx_5 + 0x16c) f+ *arg2
                *(rcx_5 + 0x170) = *(rcx_5 + 0x170) f+ arg2[1]
                *(rcx_5 + 0x174) = *(rcx_5 + 0x174) f+ arg2[2]
                void* rcx_6 = *(rdi_1 + *(result_1 + 0x18) + 0x30)
                rdi_1 = &rdi_1[8]
                *(rcx_6 + 0x3c) = *(rcx_6 + 0x3c) f+ *arg2
                *(rcx_6 + 0x40) = *(rcx_6 + 0x40) f+ arg2[1]
                *(rcx_6 + 0x44) = *(rcx_6 + 0x44) f+ arg2[2]
                *(rcx_6 + 0x16c) = *(rcx_6 + 0x16c) f+ *arg2
                *(rcx_6 + 0x170) = *(rcx_6 + 0x170) f+ arg2[1]
                *(rcx_6 + 0x174) = *(rcx_6 + 0x174) f+ arg2[2]
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        float zmm0
        
        if (r11_1 s< r10_1)
            int64_t r9_4 = r11_1 << 4
            int64_t i_4 = r10_1 - r11_1
            int64_t i_1
            
            do
                void* rcx_7 = *(r9_4 + *(result_1 + 0x18))
                r9_4 += 0x10
                zmm1 = *(rcx_7 + 0x40)
                *(rcx_7 + 0x3c) = *(rcx_7 + 0x3c) f+ *arg2
                zmm0 = *(rcx_7 + 0x44)
                *(rcx_7 + 0x40) = zmm1 f+ arg2[1]
                *(rcx_7 + 0x44) = zmm0 f+ arg2[2]
                zmm0 = *(rcx_7 + 0x170)
                *(rcx_7 + 0x16c) = *(rcx_7 + 0x16c) f+ *arg2
                zmm1 = *(rcx_7 + 0x174)
                *(rcx_7 + 0x170) = zmm0 f+ arg2[1]
                *(rcx_7 + 0x174) = zmm1 f+ arg2[2]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        result = *(result_1 + 0x38)
        
        if (result != 0)
            zmm1 = *(result + 0x40)
            *(result + 0x3c) = *(result + 0x3c) f+ *arg2
            zmm0 = *(result + 0x44)
            *(result + 0x40) = zmm1 f+ arg2[1]
            *(result + 0x44) = zmm0 f+ arg2[2]
            zmm0 = *(result + 0x170)
            *(result + 0x16c) = *arg2 f+ *(result + 0x16c)
            zmm1 = *(result + 0x174)
            *(result + 0x170) = zmm0 f+ arg2[1]
            *(result + 0x174) = zmm1 f+ arg2[2]
        
        if (*(result_1 + 0x158) s> 0)
            float* rcx_8 = nullptr
            
            do
                result = *(result_1 + 0x150)
                i_2 += 1
                zmm1 = *(rcx_8 + result + 4)
                *(rcx_8 + result) = *arg2 f+ *(rcx_8 + result)
                zmm0 = *(rcx_8 + result + 8)
                *(rcx_8 + result + 4) = zmm1 f+ arg2[1]
                *(rcx_8 + result + 8) = zmm0 f+ arg2[2]
                rcx_8 = &rcx_8[0xe]
            while (i_2 s< *(result_1 + 0x158))
    else
        result = (*(*(arg1 + 0x140) + 0x28))(arg1 + 0x140, result_1)
        *(arg1 + 0x4b8) = result
        result_1 = result
        
        if (result != 0)
            goto label_141ed7d48

return result
