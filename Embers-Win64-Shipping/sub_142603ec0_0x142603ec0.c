// 函数: sub_142603ec0
// 地址: 0x142603ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = *arg2 + *arg1
arg1[1] = arg1[1] f+ arg2[1]
arg1[2] = arg2[2] f+ arg1[2]
arg1[7] = arg1[7] f+ *arg2
arg1[8] = arg1[8] f+ arg2[1]
float result = arg1[9] f+ arg2[2]
arg1[9] = result

if (arg1[0xc] s> 0)
    int64_t r8_1 = 0
    
    do
        int64_t r9_1 = *(arg1 + 0x90)
        void* rax_1 = *(r8_1 + r9_1 + 8)
        
        if (rax_1 != 0)
            int32_t j = 0
            *(rax_1 + 0x54) = *(rax_1 + 0x54) f+ *arg2
            *(rax_1 + 0x58) = *(rax_1 + 0x58) f+ arg2[1]
            *(rax_1 + 0x5c) = *(rax_1 + 0x5c) f+ arg2[2]
            void* rax_2 = *(r8_1 + r9_1 + 8)
            *(rax_2 + 0x60) = *arg2 f+ *(rax_2 + 0x60)
            *(rax_2 + 0x64) = *(rax_2 + 0x64) f+ arg2[1]
            result = *(rax_2 + 0x68) f+ arg2[2]
            *(rax_2 + 0x68) = result
            void* rax_3 = *(r8_1 + r9_1 + 8)
            
            if (*(rax_3 + 0x1c) s> 0)
                float* rcx = nullptr
                
                do
                    int64_t rax_4 = *(r8_1 + r9_1 + 0x18)
                    j += 1
                    *(rcx + rax_4) = *arg2 f+ *(rcx + rax_4)
                    *(rcx + rax_4 + 4) = *(rcx + rax_4 + 4) f+ arg2[1]
                    result = *(rcx + rax_4 + 8) f+ arg2[2]
                    *(rcx + rax_4 + 8) = result
                    rcx = &rcx[3]
                    rax_3 = *(r8_1 + r9_1 + 8)
                while (j s< *(rax_3 + 0x1c))
            
            int32_t j_1 = 0
            
            if (*(rax_3 + 0x28) s> 0)
                float* rcx_1 = nullptr
                
                do
                    int64_t rax_5 = *(r8_1 + r9_1 + 0x30)
                    j_1 += 1
                    *(rcx_1 + rax_5) = *(rcx_1 + rax_5) f+ *arg2
                    *(rcx_1 + rax_5 + 4) = *(rcx_1 + rax_5 + 4) f+ arg2[1]
                    result = *(rcx_1 + rax_5 + 8) f+ arg2[2]
                    *(rcx_1 + rax_5 + 8) = result
                    rcx_1 = &rcx_1[3]
                    rax_3 = *(r8_1 + r9_1 + 8)
                while (j_1 s< *(rax_3 + 0x28))
            
            int32_t j_2 = 0
            
            if (*(rax_3 + 0x34) s> 0)
                float* rcx_2 = nullptr
                
                do
                    int64_t rax_6 = *(r8_1 + r9_1 + 0x48)
                    j_2 += 1
                    *(rcx_2 + rax_6) = *(rcx_2 + rax_6) f+ *arg2
                    *(rcx_2 + rax_6 + 4) = *(rcx_2 + rax_6 + 4) f+ arg2[1]
                    *(rcx_2 + rax_6 + 8) = *(rcx_2 + rax_6 + 8) f+ arg2[2]
                    int64_t rax_7 = *(r8_1 + r9_1 + 0x48)
                    *(rcx_2 + rax_7 + 0xc) = *arg2 f+ *(rcx_2 + rax_7 + 0xc)
                    *(rcx_2 + rax_7 + 0x10) = *(rcx_2 + rax_7 + 0x10) f+ arg2[1]
                    result = *(rcx_2 + rax_7 + 0x14) f+ arg2[2]
                    *(rcx_2 + rax_7 + 0x14) = result
                    rcx_2 = &rcx_2[0xa]
                    rax_3 = *(r8_1 + r9_1 + 8)
                while (j_2 s< *(rax_3 + 0x34))
            
            int32_t j_3 = 0
            
            if (*(rax_3 + 0x70) s> 0)
                int64_t rcx_3 = 0
                
                do
                    float* rax_8 = *(r8_1 + r9_1 + 0x70)
                    j_3 += 1
                    *(rax_8 + rcx_3) = *arg2 f+ *(rax_8 + rcx_3)
                    *(rax_8 + rcx_3 + 4) = *(rax_8 + rcx_3 + 4) f+ arg2[1]
                    result = *(rax_8 + rcx_3 + 8) f+ arg2[2]
                    *(rax_8 + rcx_3 + 8) = result
                    rcx_3 += 0x14
                while (j_3 s< *(*(r8_1 + r9_1 + 8) + 0x70))
        
        i += 1
        r8_1 += 0xb0
    while (i s< arg1[0xc])

return result
