// 函数: sub_142623030
// 地址: 0x142623030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
uint64_t var_38 = __security_cookie ^ &result_1
int64_t i_4 = sx.q(*(arg1 + 8))
int32_t result_3 = 0
int64_t i_5 = i_4
int32_t result_2 = 0
int32_t rsi = 0
uint64_t result

if (i_4 s<= 0)
    result.b = 0
else
    int64_t rdi_1 = *(arg1 + 0x18)
    int64_t i_3 = i_4
    int64_t r8_1 = rdi_1
    int64_t j
    int64_t i
    
    do
        int32_t rdx = 0
        result = 0
        
        while (*(r8_1 + (result << 1)) != 0xffff)
            rdx += 1
            result += 1
            
            if (result s>= 6)
                rdx = 6
                break
        
        int32_t r9_1 = 0
        j = 0
        
        if (rdx s> 0)
            do
                int16_t temp1_1 = *(r8_1 + (j << 1))
                int32_t rax_1 = r9_1 + 1
                
                if (temp1_1 != arg2)
                    rax_1 = r9_1
                
                r9_1 = rax_1
                result = zx.q(result_2 + 1)
                
                if (temp1_1 != arg2)
                    result = zx.q(result_2)
                
                j += 1
                result_2 = result.d
            while (j s< sx.q(rdx))
            
            if (r9_1 != 0)
                rsi = rsi - 1 + rdx - r9_1
        
        r8_1 += 0x18
        i = i_3
        i_3 -= 1
    while (i != 1)
    
    if (rsi s<= 2 || result_2 * 2 s> 0x30)
        result.b = 0
    else
        int64_t j_3 = 0
        result_1 = 0
        void var_94
        int64_t i_1
        
        do
            int64_t r8_2 = 0
            
            while (*(rdi_1 + (r8_2 << 1)) != 0xffff)
                r8_2 += 1
                
                if (r8_2 s>= 6)
                    r8_2 = 6
                    break
            
            void* rbx_2 = nullptr
            
            if (r8_2 s> 0)
                int32_t result_4 = result_1
                void* rsi_2 = &var_94 + j_3 * 6
                void* rcx = (r8_2 << 1) + -fffffffffffffffe
                
                do
                    int16_t* r12 = rbx_2 * 2
                    int16_t rbp_1 = *(r12 + rdi_1)
                    
                    if (rbp_1 == arg2 || *(rcx + rdi_1) == arg2)
                        uint32_t r11 = zx.d(*(rcx + rdi_1))
                        uint32_t r9_2 = zx.d(rbp_1)
                        
                        if (r11.w != arg2)
                            r9_2 = r11
                        
                        j.b = 0
                        
                        if (j_3 s> 0)
                            void* rax_3 = &var_94
                            int64_t j_2 = j_3
                            int64_t j_1
                            
                            do
                                if (zx.d(*(rax_3 - 2)) == r9_2)
                                    *rax_3 += 1
                                    j.b = 1
                                
                                rax_3 += 6
                                j_1 = j_2
                                j_2 -= 1
                            while (j_1 != 1)
                        
                        if (j_3 s<= 0 || j.b == 0)
                            *(rsi_2 - 2) = r9_2.w
                            
                            if (r11.w != arg2)
                                r11.w = rbp_1
                            
                            *rsi_2 = 1
                            result_4 += 1
                            *(rsi_2 - 4) = r11.w
                            j_3 += 1
                            rsi_2 += 6
                    
                    rbx_2 += 1
                    rcx = r12
                while (rbx_2 s< r8_2)
                
                i_4 = i_5
                result_1 = result_4
                result_3 = 0
            
            rdi_1 += 0x18
            i_1 = i_4
            i_4 -= 1
            i_5 = i_4
        while (i_1 != 1)
        result = sx.q(result_1)
        uint64_t rdx_2 = result
        
        if (result.d s<= 0)
            result.b = 1
        else
            void* rcx_2 = &var_94
            uint64_t i_2
            
            do
                bool cond:5_1 = *rcx_2 u>= 2
                result = zx.q(result_3 + 1)
                rcx_2 += 6
                
                if (cond:5_1)
                    result = zx.q(result_3)
                
                result_3 = result.d
                i_2 = rdx_2
                rdx_2 -= 1
            while (i_2 != 1)
            
            if (result.d s> 2)
                result.b = 0
            else
                result.b = 1

__security_check_cookie(var_38 ^ &result_1)
return result
