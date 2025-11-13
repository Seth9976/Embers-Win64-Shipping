// 函数: sub_142c50aa0
// 地址: 0x142c50aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t result = (*(arg1 + 0x20))(*(arg1 + 8), arg1 + 0x408)
*(arg1 + 0x3f8) = 0

if (*(arg1 + 0x408) s> 0)
    result = (*(arg1 + 0x28))(*(arg1 + 8), arg1 + 0x400)
    
    if (result.d == 0)
        result = sub_142c4c1b0(sx.q(*(arg1 + 0x408)) * 0x78)
        *(arg1 + 0x3f0) = result
        
        if (*(arg1 + 0x400) != 0 && result != 0)
            memset(result, 0, sx.q(*(arg1 + 0x408)) * 0x78)
            int64_t _Size = 0
            int64_t rcx_6 = sx.q(*(arg1 + 0x408)) << 2
            int32_t r15_1 = 0
            result = rcx_6 + 0x10
            
            if (result u> rcx_6)
                _Size = result
            
            if (_Size != 0)
                void* result_1
                
                if (_Size u> 0x400)
                    result = malloc(_Size)
                    result_1 = result
                    
                    if (result != 0)
                        *result = 0xdddd
                    label_142c50bba:
                        result_1 += 0x10
                    
                    if (result_1 != 0)
                        int32_t i = 0
                        
                        if (*(arg1 + 0x408) s> 0)
                            int64_t rdx_2 = 0
                            void* result_2 = result_1
                            
                            do
                                if (*(rdx_2 + *(arg1 + 0x400) + 0x31c) != 0)
                                    r15_1 += 1
                                    *result_2 = i
                                    result_2 += 4
                                
                                i += 1
                                rdx_2 += 0x624
                            while (i s< *(arg1 + 0x408))
                        
                        int64_t rdi_1 = sx.q(r15_1)
                        result =
                            sub_142c501e0(result_1, result_1 + (rdi_1 << 2), rdi_1, *(arg1 + 0x400))
                        int64_t r10_1 = 0xffffffff
                        
                        if (r15_1 s> 0)
                            int64_t r8_3 = 0
                            
                            do
                                int64_t r9_2 = sx.q(*(result_1 + (r8_3 << 2)))
                                void* rcx_10 = r9_2 * 0x624 + *(arg1 + 0x400)
                                result = sx.q(*(rcx_10 + 0x108))
                                int64_t rdx_6 = sx.q(*(rcx_10 + 0x10c)) << 0x20 | result
                                
                                if (rdx_6 != r10_1)
                                    r10_1 = rdx_6
                                    result = *(arg1 + 0x3f0)
                                    *(sx.q(*(arg1 + 0x3f8)) * 0x78 + result + 0x70) = r9_2.d
                                    *(arg1 + 0x3f8) += 1
                                
                                r8_3 += 1
                            while (r8_3 s< rdi_1)
                        
                        if (*(result_1 - 0x10) == 0xdddd)
                            result = free(result_1 - 0x10)
                else
                    int64_t rax_3 = _Size + 0xf
                    
                    if (rax_3 u<= _Size)
                        rax_3 = 0xffffffffffffff0
                    
                    result = rax_3 & 0xfffffffffffffff0
                    __chkstk(result)
                    void var_68
                    result_1 = &var_68 - result + 0x20
                    
                    if (result_1 != 0)
                        *result_1 = 0xcccc
                        goto label_142c50bba

int32_t i_1 = 0

if (*(arg1 + 0x3f8) s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t rdi_2 = *(arg1 + 0x3f0)
        int32_t r15_2 = 0
        void* rcx_14 = sx.q(*(rbx_1 + rdi_2 + 0x70)) * 0x624 + *(arg1 + 0x400)
        *(rbx_1 + rdi_2 + 8) = 0
        result = rcx_14 + 0x118
        *(rbx_1 + rdi_2) = result
        
        if (rcx_14 != -8)
            result = strstr(rcx_14 + 8, "VEN_")
            
            if (result != 0)
                char var_40
                strncpy_s(&var_40, 8, result + 4, 4)
                char var_3c_1 = 0
                result = strtol(&var_40, nullptr, 0x10)
                r15_2 = result.d
        
        *(rbx_1 + rdi_2 + 0x10) = r15_2
        int32_t r15_3 = 0
        
        if (rcx_14 != -8)
            result = strstr(rcx_14 + 8, "DEV_")
            
            if (result != 0)
                char var_38
                strncpy_s(&var_38, 8, result + 4, 4)
                char var_34_1 = 0
                result = strtol(&var_38, nullptr, 0x10)
                r15_3 = result.d
        
        *(rbx_1 + rdi_2 + 0x14) = r15_3
        int32_t r15_4 = 0
        
        if (rcx_14 != -8)
            result = strstr(rcx_14 + 8, "REV_")
            
            if (result != 0)
                strncpy_s(&var_48, 4, result + 4, 2)
                char var_46_1 = 0
                result = strtol(&var_48, nullptr, 0x10)
                r15_4 = result.d
        
        *(rbx_1 + rdi_2 + 0x18) = r15_4
        i_1 += 1
        *(rbx_1 + rdi_2 + 0x1c) = 0
        *(rbx_1 + rdi_2 + 0x28) = 0
        *(rbx_1 + rdi_2 + 0x30) = 0
        rbx_1 = &rbx_1[0xf]
    while (i_1 s< *(arg1 + 0x3f8))

__security_check_cookie(rax_1 ^ &var_48)
return result
