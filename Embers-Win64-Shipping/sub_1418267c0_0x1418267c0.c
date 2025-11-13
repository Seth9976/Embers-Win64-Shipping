// 函数: sub_1418267c0
// 地址: 0x1418267c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t* result = arg2
int64_t* r12 = arg1
*arg1[1] = 1
int64_t* rdx_1 = *arg1
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int32_t rax_2 = rdx_1[1].d

if (rax_2 s> 1)
    int64_t var_178 = 0
    int64_t var_170_1 = 0
    int16_t* const rdx_2
    
    if (rax_2 == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rdx_1
    
    int32_t rcx_1
    rcx_1.b = sub_140b1f370(&var_178, rdx_2, 0, 0) != 0
    *r12[1] = rcx_1
    int32_t* rcx_2 = r12[1]
    bool z_1
    
    if (0 == *rcx_2)
        *rcx_2 = 0
        z_1 = true
    else
        *rcx_2
        z_1 = false
    
    if (not(z_1))
        int64_t* var_1a0 = nullptr
        int32_t i_2 = 0
        sub_140a2cec0(&var_178, &var_1a0, 1)
        int32_t i_1 = i_2
        int32_t r14_1 = 0
        int32_t var_1b8_1 = 0
        
        if (i_1 s> 0)
            int64_t r15_1 = 0
            int64_t var_188_1 = 0
            
            do
                int64_t var_1f8 = 0
                int32_t var_1f0_1 = 0
                int16_t* var_1e8 = nullptr
                int32_t var_1e0_1 = 0
                int16_t* var_1b0 = nullptr
                int32_t var_1a8_1 = 0
                sub_1405947f0(&var_1b0, 2)
                int32_t rsi_1 = var_1a8_1 + 2
                
                if (rsi_1 s> 0)
                    sub_140594770(&var_1b0)
                
                int16_t* rbx = var_1b0
                UnDecorator::getReferenceType(rbx, &data_142d84ee4, 4)
                int16_t* const rdx_6 = &data_142d40450
                int64_t* r13_3 = &var_1a0[r15_1 * 2]
                
                if (rsi_1 != 0)
                    rdx_6 = rbx
                
                int32_t rax_5 = sub_140a23cf0(r13_3, rdx_6, 0, 0, 0xffffffff)
                
                if (rax_5 s>= 0)
                    int32_t rbx_1 = r13_3[1].d
                    int16_t* r12_1
                    
                    if (rbx_1 == 0)
                        r12_1 = &data_142d40450
                    else
                        r12_1 = *r13_3
                    
                    int32_t rbx_2
                    
                    if (rbx_1 == 0)
                        rbx_2 = 0
                    else
                        rbx_2 = rbx_1 - 1
                    
                    if (rax_5 s< rbx_2)
                        rbx_2 = rax_5
                    
                    int64_t r14_2 = 0
                    int32_t rdi_1 = 0
                    int64_t var_1d8 = 0
                    int32_t r15_2 = 0
                    int64_t var_1d0_1 = 0
                    
                    if (r12_1 != 0 && *r12_1 != 0 && rbx_2 s> 0)
                        if (rbx_2 + 1 s> 0)
                            sub_1405947f0(&var_1d8, rbx_2 + 1)
                            r15_2 = var_1d0_1:4.d
                            rdi_1 = var_1d0_1.d
                            r14_2 = var_1d8
                        
                        rdi_1 = rdi_1 + 1 + rbx_2
                        var_1d0_1.d = rdi_1
                        
                        if (rdi_1 s> r15_2)
                            sub_140594770(&var_1d8)
                            r15_2 = var_1d0_1:4.d
                            rdi_1 = var_1d0_1.d
                            r14_2 = var_1d8
                        
                        UnDecorator::getReferenceType(r14_2, r12_1, rbx_2 * 2)
                        *(r14_2 + (sx.q(rdi_1) << 1) - 2) = 0
                    
                    int64_t rcx_11 = var_1f8
                    
                    if (rcx_11 != 0)
                        sub_140a74f90(rcx_11)
                    
                    var_1f8 = r14_2
                    var_1d8 = 0
                    var_1f0_1 = rdi_1
                    var_1f0_1 = r15_2
                    int64_t var_1d0_2 = 0
                    int32_t rsi_2
                    
                    if (rsi_1 == 0)
                        rsi_2 = 0
                    else
                        rsi_2 = rsi_1 - 1
                    
                    int32_t rdx_10 = r13_3[1].d
                    int32_t rcx_13 = rax_5 + rsi_2
                    int32_t rbx_3 = rdx_10 - 1
                    
                    if (rdx_10 == 0)
                        rbx_3 = 0
                    
                    int32_t rax_7
                    
                    if (rcx_13 s>= 0)
                        rax_7 = rbx_3
                        
                        if (rcx_13 s< rbx_3)
                            rax_7 = rcx_13
                    else
                        rax_7 = 0
                    
                    int64_t r9_1 = sx.q(rax_7)
                    
                    if (sx.q(rcx_13) + 0x7fffffff s< r9_1)
                        rbx_3 = rax_7
                    else if (sx.q(rcx_13) + 0x7fffffff s< sx.q(rbx_3))
                        rbx_3 = rcx_13 + 0x7fffffff
                    
                    int16_t* const rcx_16
                    
                    if (rdx_10 == 0)
                        rcx_16 = &data_142d40450
                    else
                        rcx_16 = *r13_3
                    
                    int16_t* r15_3 = &rcx_16[r9_1]
                    int32_t rbx_4 = rbx_3 - rax_7
                    int16_t* var_1c8 = nullptr
                    int64_t var_1c0_1 = 0
                    int16_t* rsi_3 = nullptr
                    int32_t rdi_3 = 0
                    int32_t r14_3 = 0
                    
                    if (r15_3 != 0 && *r15_3 != 0 && rbx_4 s> 0)
                        if (rbx_4 + 1 s> 0)
                            sub_1405947f0(&var_1c8, rbx_4 + 1)
                            r14_3 = var_1c0_1:4.d
                            rdi_3 = var_1c0_1.d
                            rsi_3 = var_1c8
                        
                        rdi_3 = rdi_3 + 1 + rbx_4
                        var_1c0_1.d = rdi_3
                        
                        if (rdi_3 s> r14_3)
                            sub_140594770(&var_1c8)
                            r14_3 = var_1c0_1:4.d
                            rdi_3 = var_1c0_1.d
                            rsi_3 = var_1c8
                        
                        UnDecorator::getReferenceType(rsi_3, r15_3, rbx_4 * 2)
                        rsi_3[sx.q(rdi_3) - 1] = 0
                    
                    int16_t* rcx_20 = var_1e8
                    int16_t* var_158_1 = rsi_3
                    var_1c8 = nullptr
                    int32_t var_150_1 = rdi_3
                    int32_t var_14c_1 = r14_3
                    int64_t var_1c0_2 = 0
                    
                    if (rcx_20 != 0)
                        sub_140a74f90(rcx_20)
                    
                    rbx = var_1b0
                    r15_1 = var_188_1
                    r12 = arg1
                    var_1e0_1 = r14_3
                    r14_1 = var_1b8_1
                    var_1e8 = rsi_3
                    var_1e0_1 = rdi_3
                
                if (rbx != 0)
                    sub_140a74f90(rbx)
                
                int64_t var_128
                int64_t var_118
                int64_t* rax_10 =
                    sub_140a35de0(sub_140a36020(&var_1f8, &var_118), &var_128, nullptr)
                
                if (&var_1f8 != rax_10)
                    int64_t rcx_24 = var_1f8
                    
                    if (rcx_24 != 0)
                        sub_140a74f90(rcx_24)
                    
                    var_1f8 = *rax_10
                    *rax_10 = 0
                    var_1f0_1 = rax_10[1].d
                    var_1f0_1 = *(rax_10 + 0xc)
                    rax_10[1] = 0
                
                int64_t rcx_25 = var_128
                
                if (rcx_25 != 0)
                    sub_140a74f90(rcx_25)
                
                int64_t rcx_26 = var_118
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                sub_140b214e0(&var_1f8)
                int64_t var_108
                int64_t var_f8
                int64_t* rax_15 = sub_140a35de0(sub_140a36020(&var_1e8, &var_f8), &var_108, nullptr)
                
                if (&var_1e8 != rax_15)
                    int16_t* rcx_30 = var_1e8
                    
                    if (rcx_30 != 0)
                        sub_140a74f90(rcx_30)
                    
                    var_1e8 = *rax_15
                    *rax_15 = 0
                    var_1e0_1 = rax_15[1].d
                    var_1e0_1 = *(rax_15 + 0xc)
                    rax_15[1] = 0
                
                int64_t rcx_31 = var_108
                
                if (rcx_31 != 0)
                    sub_140a74f90(rcx_31)
                
                int64_t rcx_32 = var_f8
                
                if (rcx_32 != 0)
                    sub_140a74f90(rcx_32)
                
                int16_t* const rcx_33 = &data_142d40450
                
                if (var_1e0_1 != 0)
                    rcx_33 = var_1e8
                
                if (sub_140a54510(rcx_33, &data_142d8adc0) != 0)
                    int16_t* rcx_39 = &data_142d40450
                    
                    if (var_1e0_1 != 0)
                        rcx_39 = var_1e8
                    
                    if (sub_140a54510(rcx_39, &(*U"RGBXYZF10|")[2]) != 0)
                        int32_t* rax_27 = r12[1]
                        *rax_27
                        *rax_27 = 0
                    else
                        int32_t var_138
                        sub_140598750(&var_98, &var_138)
                        int64_t* var_130
                        *var_130 = 0
                        int64_t rsi_5 = var_1f8
                        var_130[1].d = var_1f0_1
                        
                        if (var_1f0_1 != 0)
                            sub_1405a4c70(var_130, var_1f0_1, 0)
                            memcpy(*var_130, rsi_5, var_1f0_1 * 2)
                        else
                            *(var_130 + 0xc) = 0
                        
                        var_130[2].d = 0xffffffff
                        int32_t rax_24 = var_130[1].d
                        int16_t* rdx_26
                        
                        if (rax_24 == 0)
                            rdx_26 = &data_142d40450
                        else
                            rdx_26 = *var_130
                        
                        int32_t rcx_43 = rax_24 - 1
                        
                        if (rax_24 == 0)
                            rcx_43 = 0
                        
                        void var_164
                        sub_14059a6d0(&var_98, &var_164, sub_1405969c0(rcx_43, rdx_26), var_130, 
                            var_138, nullptr)
                else
                    int32_t var_148
                    sub_140598750(&var_e8, &var_148)
                    int64_t* var_140
                    *var_140 = 0
                    int64_t rsi_4 = var_1f8
                    var_140[1].d = var_1f0_1
                    
                    if (var_1f0_1 != 0)
                        sub_1405a4c70(var_140, var_1f0_1, 0)
                        memcpy(*var_140, rsi_4, var_1f0_1 * 2)
                    else
                        *(var_140 + 0xc) = 0
                    
                    var_140[2].d = 0xffffffff
                    int32_t rax_20 = var_140[1].d
                    int16_t* rdx_21
                    
                    if (rax_20 == 0)
                        rdx_21 = &data_142d40450
                    else
                        rdx_21 = *var_140
                    
                    int32_t rcx_37 = rax_20 - 1
                    
                    if (rax_20 == 0)
                        rcx_37 = 0
                    
                    void var_168
                    sub_14059a6d0(&var_e8, &var_168, sub_1405969c0(rcx_37, rdx_21), var_140, 
                        var_148, nullptr)
                
                int16_t* rcx_46 = var_1e8
                
                if (rcx_46 != 0)
                    sub_140a74f90(rcx_46)
                
                int64_t rcx_47 = var_1f8
                
                if (rcx_47 != 0)
                    sub_140a74f90(rcx_47)
                
                i_1 = i_2
                r14_1 += 1
                r15_1 += 1
                var_1b8_1 = r14_1
                var_188_1 = r15_1
            while (r14_1 s< i_1)
        
        int64_t* rbx_9 = var_1a0
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_48 = *rbx_9
                
                if (rcx_48 != 0)
                    sub_140a74f90(rcx_48)
                
                rbx_9 = &rbx_9[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rbx_9 = var_1a0
        
        if (rbx_9 != 0)
            sub_140a74f90(rbx_9)
        
        result = arg2
    
    int64_t rcx_50 = var_178
    
    if (rcx_50 != 0)
        sub_140a74f90(rcx_50)

sub_1409f5d90(result, &var_e8)
sub_1409f5d90(&result[0xa], &var_98)
int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_14059ad90(&var_98, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_56 = var_98

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_14059ad90(&var_e8, 0)
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rcx_60 = var_e8

if (rcx_60 != 0)
    sub_140a74f90(rcx_60)

__security_check_cookie(rax_1 ^ &var_228)
return result
