// 函数: sub_140fdefb0
// 地址: 0x140fdefb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t* result = __security_cookie ^ &var_108
int64_t* result_1 = result

if (*(arg1 + 0x27b0) != 0)
    result = arg1 + 0x2728
    int32_t i_5 = -1
    int32_t i_2 = 0
    int32_t i_6 = 0
    int64_t rcx = 0
    
    while (true)
        if (*result != 0)
            i_5 = i_2
            
            if (i_2 != 0xffffffff)
                int32_t i = i_2
                int64_t var_b8
                __builtin_memset(&var_b8, 0, 0x40)
                void var_78
                
                if (i_2 s< 8)
                    int64_t rcx_5 = sx.q(i_2) << 3
                    
                    do
                        void* rdx_1 = &var_78 + rcx_5
                        void* rax_2 = *(arg1 - &var_78 + rdx_1 + 0x2728)
                        
                        if (rax_2 == 0)
                            break
                        
                        *rdx_1 = rax_2
                        i_6 += 1
                        i += 1
                        *(&var_b8 + rcx_5) = *(rax_2 + 0x18)
                        rcx_5 += 8
                    while (i s< 8)
                
                if (i_2 == *(arg1 + 0x27a8) && i_6 == *(arg1 + 0x27ac))
                    int64_t i_4 = sx.q(i_2)
                    result, i = memcmp(&(&var_b8)[i_4], arg1 + 0x2768 + (i_4 << 3), sx.q(i_6) << 3)
                
                if (i_2 != *(arg1 + 0x27a8) || i_6 != *(arg1 + 0x27ac) || result.d != 0)
                    if (i_2 s< i_2 + i_6)
                        uint64_t i_3 = zx.q(i_6)
                        void* rbx_3 = arg1 + ((sx.q(i_2) + 0x4ed) << 3)
                        uint64_t i_1
                        
                        do
                            int64_t rbp_1 = *(&var_b8 - arg1 + rbx_3 - 0x2768)
                            
                            if (rbp_1 != *rbx_3)
                                void* rdx_4 = *(rbx_3 + &var_78 - arg1 - 0x2768)
                                
                                if (rbp_1 != 0)
                                    void* rcx_7 = *(rdx_4 + 0x20)
                                    int32_t rax_5 = *(arg1 + 0x4100)
                                    *(rcx_7 + 0x10) = 1
                                    *(rcx_7 + 0xc) = rax_5
                                
                                i.b = 1
                                sub_140fdf350(arg1, *(rdx_4 + 0x20), i.b)
                                *rbx_3 = rbp_1
                            
                            rbx_3 += 8
                            i_1 = i_3
                            i_3 -= 1
                        while (i_1 != 1)
                        i_5 = i_2
                    
                    int64_t* rcx_9 = *(arg1 + 0x150)
                    result = (*(*rcx_9 + 0x110))(rcx_9, 0xffffffff, 0, 0, i_2, i_6, 
                        &(&var_b8)[sx.q(i_2)], &data_142ef68b8)
                
                break
        else
            i_2 += 1
            rcx += 1
            result = &result[1]
            
            if (rcx s< 8)
                continue
        
        if (*(arg1 + 0x27a8) == 0xffffffff)
            break
        
        int64_t* rcx_1 = *(arg1 + 0x150)
        result = (*(*rcx_1 + 0x110))(rcx_1, 0xffffffff, 0, 0, 0, 0, 0, 0)
        break
    
    *(arg1 + 0x27a8) = i_5
    *(arg1 + 0x27ac) = i_6
    *(arg1 + 0x27b0) = 0

__security_check_cookie(result_1 ^ &var_108)
return result
