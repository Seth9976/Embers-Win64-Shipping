// 函数: sub_140b310d0
// 地址: 0x140b310d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int16_t* rax_2 = *arg1
int16_t rcx = *rax_2
int64_t result
int16_t var_38

if (rcx != 0)
    int64_t* rbx_3 = arg1[1]
    
    if (arg2 != 0)
        int32_t rdx_3 = rbx_3[1].d
        int32_t rax_16
        rax_16.b = rdx_3 s<= 0
        int32_t rbp_3 = rdx_3 - 1
        
        if (rdx_3 s<= 0)
            rbp_3 = 0
        
        int32_t rax_18 = rax_16 + 1 + rdx_3
        rbx_3[1].d = rax_18
        
        if (rax_18 s> *(rbx_3 + 0xc))
            sub_140594770(rbx_3)
        
        int64_t rcx_9 = sx.q(rbp_3)
        *(*rbx_3 + (rcx_9 << 1)) = arg2
        *(*rbx_3 + (rcx_9 << 1) + 2) = 0
        rcx = **arg1
    
    if (arg2 == rcx && (*arg1[2] & 1) == 0)
        int64_t* rbx_4 = arg1[1]
        int16_t var_2e_1 = rcx
        var_38 = rcx
        int16_t var_30 = 0x5c
        int16_t var_2c_1 = 0
        int16_t var_36_1 = 0
        sub_140a306e0(rbx_4, &var_30, &var_38, 1)
        sub_140a306e0(rbx_4, &data_142d84ee8, &(*U"{}[\nt")[3], 1)
        int64_t* rdx_5 = arg1[1]
        int32_t rax_23 = rdx_5[1].d
        int32_t r8_2 = rax_23 - 1
        
        if (rax_23 == 0)
            r8_2 = 0
        
        sub_140a20ba0(arg1[4], *rdx_5, r8_2)
        uint64_t* rbx_5 = arg1[1]
        int32_t rax_24 = *(rbx_5 + 0xc)
        rbx_5[1].d = 0
        
        if (rax_24 s< 0 && rax_24 != 0)
            sub_1405947f0(rbx_5, 0)
        
        uint64_t rax_25 = *rbx_5
        
        if (rax_25 != 0)
            *rax_25 = 0
        
        **arg1 = 0
    
    int32_t* rax_15 = arg1[2]
    
    if (arg2 != 0x5c)
        *rax_15 = 0
        result = 0
    else
        *rax_15 += 1
        result = 0
else if (arg2 == 0x22 || arg2 == 0x27)
    int64_t* rbx_2 = arg1[1]
    
    if (arg2 != 0)
        int32_t rdx_2 = rbx_2[1].d
        int32_t rax_10
        rax_10.b = rdx_2 s<= 0
        int32_t rbp_2 = rdx_2 - 1
        
        if (rdx_2 s<= 0)
            rbp_2 = 0
        
        int32_t rax_12 = rax_10 + 1 + rdx_2
        rbx_2[1].d = rax_12
        
        if (rax_12 s> *(rbx_2 + 0xc))
            sub_140594770(rbx_2)
        
        int64_t rcx_5 = sx.q(rbp_2)
        *(*rbx_2 + (rcx_5 << 1)) = arg2
        *(*rbx_2 + (rcx_5 << 1) + 2) = 0
        rax_2 = *arg1
    
    *rax_2 = arg2
    *arg1[2] = 0
    result = 0
else
    void* rax_3 = arg1[3]
    var_38 = arg2
    
    if ((*rax_3)(*(rax_3 + 8), &var_38) == 0)
        int64_t* rbx_1 = arg1[4]
        
        if (arg2 != 0)
            int32_t rdx_1 = rbx_1[1].d
            int32_t rax_5
            rax_5.b = rdx_1 s<= 0
            int32_t rbp_1 = rdx_1 - 1
            
            if (rdx_1 s<= 0)
                rbp_1 = 0
            
            int32_t rax_7 = rax_5 + 1 + rdx_1
            rbx_1[1].d = rax_7
            
            if (rax_7 s> *(rbx_1 + 0xc))
                sub_140594770(rbx_1)
            
            int64_t rcx_3 = sx.q(rbp_1)
            *(*rbx_1 + (rcx_3 << 1)) = arg2
            *(*rbx_1 + (rcx_3 << 1) + 2) = 0
        
        result = 0
    else
        result = 2
__security_check_cookie(rax_1 ^ &var_58)
return result
