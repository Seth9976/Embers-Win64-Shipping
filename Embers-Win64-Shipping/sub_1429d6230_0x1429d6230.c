// 函数: sub_1429d6230
// 地址: 0x1429d6230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x10)
*(rdx + 0x1a0) = *(rdx + 0x198)
void* rcx = *(arg1 + 0x10)
sub_1429d5b30(rcx + 0x198, sx.q(*(rcx + 8)), &data_1435fc440)
int64_t i_1 = sx.q(*(arg1 + 0x54))
int64_t i = i_1
uint64_t result = zx.q(*(arg1 + 0x3c) + i_1.d)
int64_t rdi = sx.q(result.d)

if (i_1 s< rdi)
    float zmm0_1 = 0f
    result = rdi - i_1
    float zmm1_1
    float zmm2
    
    if (result s>= 4)
        do
            void* rax_3 = *(arg1 + 0x10)
            int64_t r9_1 = *(rax_3 + 0x1b0)
            int64_t r10_1 = *(rax_3 + 0x198)
            char rax_4 = (*(r9_1 + (i << 1))).b
            
            if ((rax_4 & 0x10) != 0)
                *(r10_1 + (i << 2)) = 0x41200000
                zmm0_1 = 0f
            else if ((rax_4 & 0x20) != 0)
                zmm2 = *(*(*(arg1 + 8) + 0x198) + (sx.q(*(*(arg1 + 0x138) + (i << 2))) << 2))
                
                if (zmm0_1 >= zmm2)
                    zmm1_1 = zmm0_1
                else
                    zmm1_1 = 10f
                    
                    if (not(zmm2 >= 10f))
                        if (zmm2 <= 1f)
                            zmm1_1 = zmm0_1
                        else
                            zmm1_1 = zmm2 - 1f
                
                *(r10_1 + (i << 2)) = zmm1_1
                zmm0_1 = 0f
                
                if (not(zmm1_1 > 0f))
                    *(r9_1 + (i << 1)) &= 0xffdf
                    zmm0_1 = 0f
            
            void* rax_7 = *(arg1 + 0x10)
            int64_t r9_2 = *(rax_7 + 0x1b0)
            int64_t r10_2 = *(rax_7 + 0x198)
            char rax_8 = (*(r9_2 + (i << 1) + 2)).b
            
            if ((rax_8 & 0x10) != 0)
                *(r10_2 + (i << 2) + 4) = 0x41200000
                zmm0_1 = 0f
            else if ((rax_8 & 0x20) != 0)
                zmm2 = *(*(*(arg1 + 8) + 0x198) + (sx.q(*(*(arg1 + 0x138) + (i << 2) + 4)) << 2))
                
                if (zmm0_1 >= zmm2)
                    zmm1_1 = zmm0_1
                else
                    zmm1_1 = 10f
                    
                    if (not(zmm2 >= 10f))
                        if (zmm2 <= 1f)
                            zmm1_1 = zmm0_1
                        else
                            zmm1_1 = zmm2 - 1f
                
                *(r10_2 + (i << 2) + 4) = zmm1_1
                zmm0_1 = 0f
                
                if (not(zmm1_1 > 0f))
                    *(r9_2 + (i << 1) + 2) &= 0xffdf
                    zmm0_1 = 0f
            
            void* rax_11 = *(arg1 + 0x10)
            int64_t r9_3 = *(rax_11 + 0x1b0)
            int64_t r10_3 = *(rax_11 + 0x198)
            char rax_12 = (*(r9_3 + (i << 1) + 4)).b
            
            if ((rax_12 & 0x10) != 0)
                *(r10_3 + (i << 2) + 8) = 0x41200000
                zmm0_1 = 0f
            else if ((rax_12 & 0x20) != 0)
                zmm2 = *(*(*(arg1 + 8) + 0x198) + (sx.q(*(*(arg1 + 0x138) + (i << 2) + 8)) << 2))
                
                if (zmm0_1 >= zmm2)
                    zmm1_1 = zmm0_1
                else
                    zmm1_1 = 10f
                    
                    if (not(zmm2 >= 10f))
                        if (zmm2 <= 1f)
                            zmm1_1 = zmm0_1
                        else
                            zmm1_1 = zmm2 - 1f
                
                *(r10_3 + (i << 2) + 8) = zmm1_1
                zmm0_1 = 0f
                
                if (not(zmm1_1 > 0f))
                    *(r9_3 + (i << 1) + 4) &= 0xffdf
                    zmm0_1 = 0f
            
            void* rax_15 = *(arg1 + 0x10)
            int64_t r9_4 = *(rax_15 + 0x1b0)
            int64_t r10_4 = *(rax_15 + 0x198)
            result = zx.q(*(r9_4 + (i << 1) + 6))
            
            if ((result.b & 0x10) != 0)
                *(r10_4 + (i << 2) + 0xc) = 0x41200000
                zmm0_1 = 0f
            else if ((result.b & 0x20) != 0)
                result = *(arg1 + 8)
                zmm2 = *(*(result + 0x198) + (sx.q(*(*(arg1 + 0x138) + (i << 2) + 0xc)) << 2))
                
                if (zmm0_1 >= zmm2)
                    zmm1_1 = zmm0_1
                else
                    zmm1_1 = 10f
                    
                    if (not(zmm2 >= 10f))
                        if (zmm2 <= 1f)
                            zmm1_1 = zmm0_1
                        else
                            zmm1_1 = zmm2 - 1f
                
                *(r10_4 + (i << 2) + 0xc) = zmm1_1
                zmm0_1 = 0f
                
                if (not(zmm1_1 > 0f))
                    *(r9_4 + (i << 1) + 6) &= 0xffdf
                    zmm0_1 = 0f
            
            i += 4
        while (i s< rdi - 3)
    
    for (; i s< rdi; i += 1)
        void* rax_17 = *(arg1 + 0x10)
        int64_t r9_5 = *(rax_17 + 0x1b0)
        int64_t r10_5 = *(rax_17 + 0x198)
        result = zx.q(*(r9_5 + (i << 1)))
        
        if ((result.b & 0x10) != 0)
            *(r10_5 + (i << 2)) = 0x41200000
            zmm0_1 = 0f
        else if ((result.b & 0x20) != 0)
            result = *(arg1 + 8)
            zmm2 = *(*(result + 0x198) + (sx.q(*(*(arg1 + 0x138) + (i << 2))) << 2))
            
            if (zmm0_1 >= zmm2)
                zmm1_1 = zmm0_1
            else
                zmm1_1 = 10f
                
                if (not(zmm2 >= 10f))
                    if (zmm2 <= 1f)
                        zmm1_1 = zmm0_1
                    else
                        zmm1_1 = zmm2 - 1f
            
            *(r10_5 + (i << 2)) = zmm1_1
            zmm0_1 = 0f
            
            if (not(zmm1_1 > 0f))
                *(r9_5 + (i << 1)) &= 0xffdf
                zmm0_1 = 0f

return result
