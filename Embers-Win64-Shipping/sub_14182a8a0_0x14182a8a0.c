// 函数: sub_14182a8a0
// 地址: 0x14182a8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t result = __security_cookie ^ &var_148
int64_t result_1 = result

if (arg1[0x2e].b != 0)
    int32_t r14_1 = arg2[1].d
    int32_t r14_2
    
    if (r14_1 == 0)
        r14_2 = 0
    else
        r14_2 = r14_1 - 1
    
    int32_t rdi_1 = arg1[3].d
    int32_t rax_2
    
    if (rdi_1 == 0)
        rax_2 = rdi_1 + 2
    
    if (rdi_1 != 0 || r14_2 == 0xffffffff)
        rax_2 = 1
    
    int64_t r15_1 = arg1[2]
    int32_t rcx = r14_2 + rax_2
    int16_t* var_100 = nullptr
    
    if (rdi_1 != 0 || rcx != 0)
        sub_1405a4c70(&var_100, rdi_1 + rcx, 0)
        memcpy(var_100, r15_1, rdi_1 * 2)
    else
        int32_t var_f4_1 = 0
    
    sub_140a2cf70(&var_100, *arg2, r14_2)
    int64_t* rcx_4 = *arg1
    int16_t* const rdi_2 = &data_142d40450
    int16_t* const rdx_3 = &data_142d40450
    
    if (rdi_1 != 0)
        rdx_3 = var_100
    
    int64_t var_f0
    char rax_4
    int64_t r9_1
    rax_4, r9_1 = (*(*rcx_4 + 0x18))(rcx_4, rdx_3, &var_f0)
    int64_t* rcx_5 = arg1[1]
    int64_t var_e8
    __builtin_memset(&var_e8, 0, 0x2c)
    r9_1.b = 1
    int32_t var_bc_1 = 0x80
    int32_t var_b8_1 = 0xffffffff
    int32_t var_b4_1 = 0
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0
    (*(*rcx_5 + 0x10))(rcx_5, arg2, &var_e8, r9_1)
    int64_t var_98
    int64_t* rax_6 = sub_140967750(&arg1[6], &var_98, &var_e8)
    int32_t r15_3 = rax_6[1].d - *(rax_6 + 0x34)
    int32_t var_50_1 = 0
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    sub_14059ad90(&var_98, 0)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t rcx_10 = var_98
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    void var_118
    int32_t var_110
    int64_t* var_108
    
    if (r15_3 s> 0)
        int64_t* rcx_11 = arg1[1]
        void* rax_8 = (*(*rcx_11 + 0x68))(rcx_11, arg2)
        
        if (rax_8 != 0 && rax_4 != 0)
            int64_t r15_4 = var_f0
            
            if (r15_4 != 0 && r15_4 u<= *(rax_8 + 0x58))
                sub_140598750(&arg1[0x10], &var_110)
                sub_140596d10(var_108, arg2)
                var_108[2].d = 0xffffffff
                int32_t rax_9 = var_108[1].d
                int16_t* rdx_9
                
                if (rax_9 == 0)
                    rdx_9 = &data_142d40450
                else
                    rdx_9 = *var_108
                
                int32_t rcx_14
                
                if (rax_9 == 0)
                    rcx_14 = 0
                else
                    rcx_14 = rax_9 - 1
                
                sub_14059a6d0(&arg1[0x10], &var_118, sub_1405969c0(rcx_14, rdx_9), var_108, 
                    var_110, nullptr)
            
            int64_t rax_11 = *(rax_8 + 0x58)
            bool cond:4_1 = r15_4 u<= rax_11
            
            if (r15_4 == rax_11)
                sub_140598750(&arg1[0x1a], &var_110)
                sub_140596d10(var_108, arg2)
                var_108[2].d = 0xffffffff
                int32_t rax_12 = var_108[1].d
                int16_t* rdx_14
                
                if (rax_12 == 0)
                    rdx_14 = &data_142d40450
                else
                    rdx_14 = *var_108
                
                int32_t rcx_18
                
                if (rax_12 == 0)
                    rcx_18 = 0
                else
                    rcx_18 = rax_12 - 1
                
                sub_14059a6d0(&arg1[0x1a], &var_118, sub_1405969c0(rcx_18, rdx_14), var_108, 
                    var_110, nullptr)
                cond:4_1 = r15_4 u<= *(rax_8 + 0x58)
            
            if (not(cond:4_1))
                sub_140598750(&arg1[0x24], &var_110)
                int16_t** rbx_1 = var_108
                sub_140596d10(rbx_1, arg2)
                rbx_1[2].d = 0xffffffff
                int32_t rax_15 = rbx_1[1].d
                
                if (rax_15 != 0)
                    rdi_2 = *rbx_1
                
                int32_t rcx_22 = rax_15 - 1
                
                if (rax_15 == 0)
                    rcx_22 = 0
                
                sub_14059a6d0(&arg1[0x24], &var_118, sub_1405969c0(rcx_22, rdi_2), rbx_1, var_110, 
                    nullptr)
    else if (rax_4 != 0)
        sub_140598750(&arg1[0x24], &var_110)
        sub_140596d10(var_108, arg2)
        var_108[2].d = 0xffffffff
        int32_t rax_17 = var_108[1].d
        
        if (rax_17 != 0)
            rdi_2 = *var_108
        
        int32_t rcx_33 = rax_17 - 1
        
        if (rax_17 == 0)
            rcx_33 = 0
        
        sub_14059a6d0(&arg1[0x24], &var_118, sub_1405969c0(rcx_33, rdi_2), var_108, var_110, 
            nullptr)
    int32_t var_a0_2 = 0
    
    if (var_a8_1 != 0)
        sub_140a74f90(var_a8_1)
    
    result = sub_14059ad90(&var_e8, 0)
    int64_t var_c8
    
    if (var_c8 != 0)
        result = sub_140a74f90(var_c8)
    
    int64_t rcx_27 = var_e8
    
    if (rcx_27 != 0)
        result = sub_140a74f90(rcx_27)
    
    int16_t* rcx_28 = var_100
    
    if (rcx_28 != 0)
        result = sub_140a74f90(rcx_28)

__security_check_cookie(result_1 ^ &var_148)
return result
