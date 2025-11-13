// 函数: sub_1406ccf30
// 地址: 0x1406ccf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* result = arg1
int64_t* result_1 = arg1
void* var_1a8 = arg1
int64_t* var_c0 = arg2
int64_t* var_b8 = arg3
int64_t rcx_43

if (arg2[1].d s> 1)
    void var_b0
    void var_98
    sub_1406ce2d0(&var_98, sub_140596d10(&var_b0, arg3), 0xfffffffe)
    void var_110
    void var_88
    sub_1406ce2d0(&var_88, sub_140596d10(&var_110, arg3), 0xffffffff)
    void var_100
    void var_78
    sub_1406ce2d0(&var_78, sub_140596d10(&var_100, arg3), 0)
    void var_168
    void var_68
    sub_1406ce2d0(&var_68, sub_140596d10(&var_168, arg3), 1)
    void var_158
    void var_58
    sub_1406ce2d0(&var_58, sub_140596d10(&var_158, arg3), 2)
    uint64_t var_188 = 0
    int32_t var_180_1 = 5
    sub_1405a4be0(&var_188, 5, 0)
    int32_t i_12 = 5
    uint64_t rcx_12 = var_188
    uint64_t rbx_1 = rcx_12
    void* rax_8 = rcx_12 - &var_98
    void* r8 = rax_8 + 8
    var_1a8 = r8
    void* rdx_10 = rax_8 + 0xc
    void* var_128 = rdx_10
    uint64_t var_198
    int32_t i
    
    do
        var_198 = rbx_1
        *rbx_1 = 0
        void* rax_9 = rbx_1 + &var_98 - rcx_12
        int32_t rdi_1 = *(rax_9 + 8)
        int64_t r12_1 = *rax_9
        *(r8 + rax_9) = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(rbx_1, rdi_1, 0)
            memcpy(*rbx_1, r12_1, rdi_1 * 2)
            rdx_10 = var_128
            r8 = var_1a8
        else
            *(rdx_10 + rax_9) = 0
        
        rbx_1 += 0x10
        i = i_12
        i_12 -= 1
    while (i != 1)
    `eh vector vbase constructor iterator'(&var_98, zx.q(i_12 + 0x10), zx.q(i_12 + 5))
    int16_t* var_138
    void var_f0
    void var_e0
    sub_1406d1320(&var_138, 
        sub_1406d44e0(&var_e0, 
            sub_140596d10(&var_f0, 
                *sub_1406d4a30(&var_1a8, sub_140596d10(&var_128, arg2), i_12 + 3))))
    int32_t i_13
    int32_t i_9 = i_13
    void* rbx_2 = var_1a8
    result = result_1
    
    if (i_9 != 0)
        int32_t i_1
        
        do
            int64_t rcx_21 = *rbx_2
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            rbx_2 += 0x10
            i_1 = i_9
            i_9 -= 1
        while (i_1 != 1)
        rbx_2 = var_1a8
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    int16_t* var_148
    sub_1406d44e0(&var_148, 
        sub_140596d10(&var_168, *sub_1406d4a30(&result_1, sub_140596d10(&var_158, arg2), 3) + 0x20))
    int32_t i_15
    int32_t i_10 = i_15
    int64_t* result_2 = result_1
    
    if (i_10 != 0)
        int32_t i_2
        
        do
            int64_t rcx_27 = *result_2
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            result_2 = &result_2[2]
            i_2 = i_10
            i_10 -= 1
        while (i_2 != 1)
        result_2 = result_1
    
    if (result_2 != 0)
        sub_140a74f90(result_2)
    
    int16_t* var_d0
    sub_1406d1320(&var_d0, 
        sub_1406d44e0(&var_100, 
            sub_140596d10(&var_f0, 
                *sub_1406d4a30(&var_1a8, sub_140596d10(&var_e0, arg2), 3) + 0x10)))
    int32_t i_11 = i_13
    void* rbx_3 = var_1a8
    
    if (i_11 != 0)
        int32_t i_3
        
        do
            int64_t rcx_34 = *rbx_3
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            rbx_3 += 0x10
            i_3 = i_11
            i_11 -= 1
        while (i_3 != 1)
        rbx_3 = var_1a8
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)
    
    int16_t* const r8_5
    
    if (arg3[1].d == 0)
        r8_5 = &data_142d40450
    else
        r8_5 = *arg3
    
    int16_t* const rax_21 = &data_142d40450
    int32_t var_130
    
    if (var_130 != 0)
        rax_21 = var_138
    
    void* r8_6 = r8_5 - rax_21
    uint32_t i_4
    uint32_t rdx_30
    
    do
        rdx_30 = zx.d(*rax_21)
        i_4 = zx.d(*(rax_21 + r8_6))
        
        if (rdx_30 != i_4)
            break
        
        rax_21 = &rax_21[1]
    while (i_4 != 0)
    
    int64_t rdi_2 = sx.q(var_180_1)
    uint64_t rbx_4
    int64_t r14_3
    
    if (rdx_30 - i_4 == 0)
        rbx_4 = var_188
        r14_3 = (rdi_2 << 4) + rbx_4
    
    if (rdx_30 - i_4 != 0 || rbx_4 == r14_3)
    label_1406cd318:
        *result = 0
        result[1] = 0
        int16_t* rcx_37 = var_d0
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        int16_t* rcx_38 = var_148
        
        if (rcx_38 != 0)
            sub_140a74f90(rcx_38)
        
        int16_t* rcx_39 = var_138
        
        if (rcx_39 != 0)
            sub_140a74f90(rcx_39)
        
        uint64_t rsi_1 = var_188
        uint64_t rbx_5 = rsi_1
        
        if (rdi_2.d != 0)
            int32_t i_5
            
            do
                int64_t rcx_40 = *rbx_5
                
                if (rcx_40 != 0)
                    sub_140a74f90(rcx_40)
                
                rbx_5 += 0x10
                i_5 = rdi_2.d
                rdi_2 = zx.q(rdi_2.d - 1)
            while (i_5 != 1)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        int64_t rcx_42 = *arg2
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
    else
        while (true)
            int16_t* const rdx_32 = &data_142d40450
            int32_t var_140
            
            if (var_140 != 0)
                rdx_32 = var_148
            
            int16_t* const rcx_36
            
            if (*(rbx_4 + 8) == 0)
                rcx_36 = &data_142d40450
            else
                rcx_36 = *rbx_4
            
            if (sub_140a54510(rcx_36, rdx_32) == 0)
                sub_1406d1320(result, 
                    sub_1406d44e0(&var_110, 
                        sub_140596d10(&var_168, 
                            *sub_1406d4a30(&var_198, sub_140596d10(&var_158, arg2), 3) + 0x10)))
                int32_t i_14
                int32_t i_8 = i_14
                uint64_t rbx_6 = var_198
                
                if (i_8 != 0)
                    int32_t i_6
                    
                    do
                        int64_t rcx_51 = *rbx_6
                        
                        if (rcx_51 != 0)
                            sub_140a74f90(rcx_51)
                        
                        rbx_6 += 0x10
                        i_6 = i_8
                        i_8 -= 1
                    while (i_6 != 1)
                    rbx_6 = var_198
                
                if (rbx_6 != 0)
                    sub_140a74f90(rbx_6)
                
                int16_t* rcx_53 = var_d0
                
                if (rcx_53 != 0)
                    sub_140a74f90(rcx_53)
                
                int16_t* rcx_54 = var_148
                
                if (rcx_54 != 0)
                    sub_140a74f90(rcx_54)
                
                int16_t* rcx_55 = var_138
                
                if (rcx_55 != 0)
                    sub_140a74f90(rcx_55)
                
                uint64_t rsi_2 = var_188
                uint64_t rbx_7 = rsi_2
                
                if (rdi_2.d != 0)
                    int32_t i_7
                    
                    do
                        int64_t rcx_56 = *rbx_7
                        
                        if (rcx_56 != 0)
                            sub_140a74f90(rcx_56)
                        
                        rbx_7 += 0x10
                        i_7 = rdi_2.d
                        rdi_2 = zx.q(rdi_2.d - 1)
                    while (i_7 != 1)
                
                if (rsi_2 != 0)
                    sub_140a74f90(rsi_2)
                
                int64_t rcx_58 = *arg2
                
                if (rcx_58 != 0)
                    sub_140a74f90(rcx_58)
                
                break
            
            rbx_4 += 0x10
            
            if (rbx_4 == r14_3)
                goto label_1406cd318
    
    rcx_43 = *arg3
else
    *arg1 = 0
    arg1[1] = 0
    int64_t rcx = *arg2
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    rcx_43 = *arg3

if (rcx_43 != 0)
    sub_140a74f90(rcx_43)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
