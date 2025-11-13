// 函数: sub_140ad5b80
// 地址: 0x140ad5b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t* var_168 = arg5
int64_t var_150 = 0
int64_t var_148 = 0
int128_t var_160 = *sub_1405e25d0(arg3)
int128_t zmm0 = *sub_1405e25d0(arg4)
int32_t* r8_3

if (arg1[1].d == *(arg1 + 0x34))
label_140ad5ce3:
    r8_3 = nullptr
else
    int32_t rax_6 = sub_140ad88a0(&var_160)
    void* rcx_3 = arg1[8]
    void* r8 = &arg1[7]
    
    if (rcx_3 != 0)
        r8 = rcx_3
    
    int32_t rax_8 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_6)) << 2))
    
    if (rax_8 == 0xffffffff)
    label_140ad5ce3_1:
        r8_3 = nullptr
    else
        while (true)
            r8_3 = (sx.q(rax_8) << 7) + *arg1
            
            if (((r8_3[1] ^ var_160:4.d) | (r8_3[2] ^ var_160:8.d) | (r8_3[3] ^ var_160:0xc.d)
                    | (*r8_3 ^ var_160.d)) == 0 && ((r8_3[7] ^ var_148:4.d) | (r8_3[6] ^ var_148.d)
                    | (r8_3[5] ^ var_150:4.d) | (var_150.d ^ r8_3[4])) == 0 && ((r8_3[9] ^ zmm0:4.d)
                    | (r8_3[0xa] ^ zmm0:8.d) | (r8_3[0xb] ^ zmm0:0xc.d) | (zmm0.d ^ r8_3[8])) == 0)
                break
            
            rax_8 = r8_3[0x1c]
            
            if (rax_8 == 0xffffffff)
                goto label_140ad5ce3_2
        
        if (rax_8 == 0xffffffff)
        label_140ad5ce3_2:
            r8_3 = nullptr

void* rcx_22 = &r8_3[0xc]

if (r8_3 == 0)
    rcx_22 = nullptr

int64_t* result

if (rcx_22 == 0)
    int16_t* rdi_2 = *(arg3 + 0x40)
    int32_t rdx_19 = 0
    int32_t rcx_23 = 0
    void* rbx_3 = *(arg3 + 0x48) - rdi_2
    int64_t var_198 = 0
    int32_t rbx_4 = (rbx_3 s>> 1).d
    int32_t var_190_1 = 0
    int64_t var_188 = 0
    int32_t var_180_1 = 0
    int32_t var_17c_1 = 0
    
    if (rdi_2 != 0 && *rdi_2 != 0 && rbx_4 s> 0)
        if (rbx_4 + 1 s> 0)
            sub_1405947f0(&var_188, rbx_4 + 1)
            rcx_23 = var_17c_1
            rdx_19 = var_180_1
        
        int32_t rax_11 = rbx_4 + 1 + rdx_19
        
        if (rax_11 s> rcx_23)
            sub_140594770(&var_188)
        
        UnDecorator::getReferenceType(var_188, rdi_2, rbx_4 * 2)
        *(var_188 + (sx.q(rax_11) << 1) - 2) = 0
    
    void var_120
    int64_t* rax_13 = sub_140aae2f0(&var_120, &var_188)
    int64_t* rbx_5 = rax_13[1]
    int64_t r14_2 = *rax_13
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    int64_t rdi_3 = sx.q(var_190_1)
    int32_t rsi_1 = rax_13[2].d
    int32_t rax_14 = (rdi_3 + 1).d
    
    if (rax_14 s> 0)
        sub_1405c4f50(&var_198)
    
    int32_t* rcx_32 = rdi_3 * 0x30 + var_198
    int64_t var_a8
    *(rcx_32 + 8) = var_a8
    *rcx_32 = 4
    rcx_32[0xa].b = 0
    *(rcx_32 + 0x10) = r14_2
    *(rcx_32 + 0x18) = rbx_5
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    rcx_32[8] = rsi_1
    rcx_32[0xa].b = 1
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t rax_17 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rax_17 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    int64_t* var_118
    
    if (var_118 != 0)
        var_118[1].d -= 1
        
        if (var_118[1].d == 1)
            (**var_118)(var_118)
            int32_t rax_21 = *(var_118 + 0xc)
            *(var_118 + 0xc) -= 1
            
            if (rax_21 == 1)
                (*(*var_118 + 8))(var_118, 1)
    
    int64_t rcx_37 = var_188
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
    
    int32_t rdx_24 = 0
    int32_t rcx_38 = 0
    int64_t var_178 = 0
    int32_t var_170_1 = 0
    int32_t var_16c_1 = 0
    int16_t* rsi_2 = *(arg4 + 0x40)
    int32_t rbx_10 = ((*(arg4 + 0x48) - rsi_2) s>> 1).d
    
    if (rsi_2 != 0 && *rsi_2 != 0 && rbx_10 s> 0)
        if (rbx_10 + 1 s> 0)
            sub_1405947f0(&var_178, rbx_10 + 1)
            rcx_38 = var_16c_1
            rdx_24 = var_170_1
        
        int32_t rax_25 = rbx_10 + 1 + rdx_24
        
        if (rax_25 s> rcx_38)
            sub_140594770(&var_178)
        
        UnDecorator::getReferenceType(var_178, rsi_2, rbx_10 * 2)
        *(var_178 + (sx.q(rax_25) << 1) - 2) = 0
    
    void var_108
    int64_t* rax_27 = sub_140aae2f0(&var_108, &var_178)
    int64_t* rbx_11 = rax_27[1]
    int64_t r15_2 = *rax_27
    
    if (rbx_11 != 0)
        rbx_11[1].d += 1
    
    int64_t rsi_3 = sx.q(rax_14)
    int32_t r14_3 = rax_27[2].d
    int32_t rax_28 = (rsi_3 + 1).d
    var_190_1 = rax_28
    
    if (rax_28 s> 0)
        sub_1405c4f50(&var_198)
    
    int32_t* rcx_47 = rsi_3 * 0x30 + var_198
    int64_t var_78
    *(rcx_47 + 8) = var_78
    *rcx_47 = 4
    rcx_47[0xa].b = 0
    *(rcx_47 + 0x10) = r15_2
    *(rcx_47 + 0x18) = rbx_11
    
    if (rbx_11 != 0)
        rbx_11[1].d += 1
    
    rcx_47[8] = r14_3
    rcx_47[0xa].b = 1
    
    if (rbx_11 != 0)
        rbx_11[1].d -= 1
        
        if (rbx_11[1].d == 1)
            (**rbx_11)(rbx_11)
            int32_t rax_31 = *(rbx_11 + 0xc)
            *(rbx_11 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*rbx_11 + 8))(rbx_11, 1)
    
    int64_t* var_100
    
    if (var_100 != 0)
        var_100[1].d -= 1
        
        if (var_100[1].d == 1)
            (**var_100)(var_100)
            int32_t rax_35 = *(var_100 + 0xc)
            *(var_100 + 0xc) -= 1
            
            if (rax_35 == 1)
                (*(*var_100 + 8))(var_100, 1)
    
    int64_t rcx_52 = var_178
    
    if (rcx_52 != 0)
        sub_140a74f90(rcx_52)
    
    void var_f0
    void var_d8
    char* var_c0
    var_168 = sub_140aac8f0(&var_f0, 
        sub_140a96390(&var_c0, 
            _vfprintf_p_l(&var_d8, Pre-unary operator {0} cannot operate on {1}", 
            ExpressionParser")), &var_198)
    sub_140aca4f0(arg2, &var_168)
    int64_t* var_e8
    
    if (var_e8 != 0)
        var_e8[1].d -= 1
        
        if (var_e8[1].d == 1)
            (**var_e8)(var_e8)
            int32_t rax_42 = *(var_e8 + 0xc)
            *(var_e8 + 0xc) -= 1
            
            if (rax_42 == 1)
                (*(*var_e8 + 8))(var_e8, 1)
    
    int64_t* var_d0
    
    if (var_d0 != 0)
        var_d0[1].d -= 1
        
        if (var_d0[1].d == 1)
            (**var_d0)(var_d0)
            int32_t rdi_4 = *(var_d0 + 0xc)
            *(var_d0 + 0xc) -= 1
            
            if (rdi_4 == 1)
                (*(*var_d0 + 8))(var_d0, zx.q(rdi_4))
    
    sub_140596f50(&var_198)
    result = arg2
else
    sub_140ace810(rcx_22, arg2, arg4, var_168)
    result = arg2

__security_check_cookie(rax_1 ^ &var_1b8)
return result
