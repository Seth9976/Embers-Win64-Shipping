// 函数: sub_1426edb40
// 地址: 0x1426edb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t* rcx_30

if (arg1[3].b != 0)
    void* const rbx_7 = arg1[2]
    int64_t var_118
    __builtin_memset(&var_118, 0, 0x2c)
    int32_t var_ec_1 = 0x80
    int32_t var_e8_1 = 0xffffffff
    int32_t var_e4_1 = 0
    int64_t var_d8_1 = 0
    int32_t var_d0_1 = 0
    
    if (rbx_7 == 0)
        rbx_7 = nullptr
    else
        void* rax_36 = sub_142736ba0()
        
        if (rax_36 == 0)
            rbx_7 = nullptr
        else
            int64_t rax_37 = sx.q(*(rax_36 + 0x38))
            
            if (rax_37.d s> *(rbx_7 + 0x38) || *(*(rbx_7 + 0x30) + (rax_37 << 3)) != rax_36 + 0x30)
                rbx_7 = nullptr
    
    int64_t var_1d8
    sub_1426dff30(&var_1d8, rbx_7)
    int64_t var_58_1 = var_1d8
    int32_t var_68 = 4
    int64_t* var_1d0
    
    if (var_1d0 != 0)
        var_1d0[1].d += 1
    
    int32_t var_1c8
    int32_t var_48_1 = var_1c8
    char var_40_1 = 1
    int64_t var_218 = 0
    int32_t var_210_1 = 0
    sub_1405947f0(&var_218, 9)
    int32_t rax_42 = var_210_1 + 9
    var_210_1 = rax_42
    
    if (rax_42 s> 0)
        sub_140594770(&var_218)
    
    UnDecorator::getReferenceType(var_218, u"Rotation", 0x12)
    sub_140acb5e0(&var_118, &var_218, &var_68)
    int64_t rcx_37 = var_218
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
    
    if (var_40_1 != 0 && var_1d0 != 0)
        var_1d0[1].d -= 1
        
        if (var_1d0[1].d == 1)
            (**var_1d0)(var_1d0)
            int32_t rax_45 = *(var_1d0 + 0xc)
            *(var_1d0 + 0xc) -= 1
            
            if (rax_45 == 1)
                (*(*var_1d0 + 8))(var_1d0, 1)
    
    if (var_1d0 != 0)
        var_1d0[1].d -= 1
        
        if (var_1d0[1].d == 1)
            (**var_1d0)(var_1d0)
            int32_t rax_49 = *(var_1d0 + 0xc)
            *(var_1d0 + 0xc) -= 1
            
            if (rax_49 == 1)
                (*(*var_1d0 + 8))(var_1d0, 1)
    
    void var_1a8
    char* var_180
    sub_140aaca20(arg2, 
        sub_140a96390(&var_180, _vfprintf_p_l(&var_1a8, [{Rotation} rotation]", 
            EnvQueryGenerator")), &var_118)
    int64_t* var_1a0
    
    if (var_1a0 != 0)
        var_1a0[1].d -= 1
        
        if (var_1a0[1].d == 1)
            (**var_1a0)(var_1a0)
            int32_t rsi_2 = *(var_1a0 + 0xc)
            *(var_1a0 + 0xc) -= 1
            
            if (rsi_2 == 1)
                (*(*var_1a0 + 8))(var_1a0, zx.q(rsi_2))
    
    int32_t var_d0_2 = 0
    
    if (var_d8_1 != 0)
        sub_140a74f90(var_d8_1)
    
    rcx_30 = &var_118
else
    void* const rbx = *arg1
    int64_t var_168
    __builtin_memset(&var_168, 0, 0x2c)
    int32_t var_13c_1 = 0x80
    int32_t var_138_1 = 0xffffffff
    int32_t var_134_1 = 0
    int64_t var_128_1 = 0
    int32_t var_120_1 = 0
    
    if (rbx == 0)
        rbx = nullptr
    else
        void* rax_2 = sub_142736ba0()
        
        if (rax_2 == 0)
            rbx = nullptr
        else
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                rbx = nullptr
    
    int64_t var_208
    sub_1426dff30(&var_208, rbx)
    int64_t var_b8_1 = var_208
    int32_t var_c8 = 4
    int64_t* var_200
    
    if (var_200 != 0)
        var_200[1].d += 1
    
    int32_t var_1f8
    int32_t var_a8_1 = var_1f8
    char var_a0_1 = 1
    int64_t var_238 = 0
    int32_t var_230_1 = 0
    sub_1405947f0(&var_238, 9)
    int32_t rax_8 = var_230_1 + 9
    var_230_1 = rax_8
    
    if (rax_8 s> 0)
        sub_140594770(&var_238)
    
    UnDecorator::getReferenceType(var_238, u"LineFrom", 0x12)
    sub_140acb5e0(&var_168, &var_238, &var_c8)
    int64_t rcx_6 = var_238
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if (var_a0_1 != 0 && var_200 != 0)
        var_200[1].d -= 1
        
        if (var_200[1].d == 1)
            (**var_200)(var_200)
            int32_t rax_11 = *(var_200 + 0xc)
            *(var_200 + 0xc) -= 1
            
            if (rax_11 == 1)
                (*(*var_200 + 8))(var_200, 1)
    
    if (var_200 != 0)
        var_200[1].d -= 1
        
        if (var_200[1].d == 1)
            (**var_200)(var_200)
            int32_t rax_15 = *(var_200 + 0xc)
            *(var_200 + 0xc) -= 1
            
            if (rax_15 == 1)
                (*(*var_200 + 8))(var_200, 1)
    
    void* const rbx_3 = arg1[1]
    
    if (rbx_3 == 0)
        rbx_3 = nullptr
    else
        void* rax_17 = sub_142736ba0()
        
        if (rax_17 == 0)
            rbx_3 = nullptr
        else
            int64_t rax_18 = sx.q(*(rax_17 + 0x38))
            
            if (rax_18.d s> *(rbx_3 + 0x38) || *(*(rbx_3 + 0x30) + (rax_18 << 3)) != rax_17 + 0x30)
                rbx_3 = nullptr
    
    int64_t var_1f0
    sub_1426dff30(&var_1f0, rbx_3)
    int64_t var_88_1 = var_1f0
    int32_t var_98 = 4
    int64_t* var_1e8
    
    if (var_1e8 != 0)
        var_1e8[1].d += 1
    
    int32_t var_1e0
    int32_t var_78_1 = var_1e0
    char var_70_1 = 1
    int64_t var_228 = 0
    int32_t var_220_1 = 0
    sub_1405947f0(&var_228, 7)
    int32_t rax_23 = var_220_1 + 7
    var_220_1 = rax_23
    
    if (rax_23 s> 0)
        sub_140594770(&var_228)
    
    UnDecorator::getReferenceType(var_228, u"LineTo", 0xe)
    sub_140acb5e0(&var_168, &var_228, &var_98)
    int64_t rcx_18 = var_228
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    if (var_70_1 != 0 && var_1e8 != 0)
        var_1e8[1].d -= 1
        
        if (var_1e8[1].d == 1)
            (**var_1e8)(var_1e8)
            int32_t rax_26 = *(var_1e8 + 0xc)
            *(var_1e8 + 0xc) -= 1
            
            if (rax_26 == 1)
                (*(*var_1e8 + 8))(var_1e8, 1)
    
    if (var_1e8 != 0)
        var_1e8[1].d -= 1
        
        if (var_1e8[1].d == 1)
            (**var_1e8)(var_1e8)
            int32_t rax_30 = *(var_1e8 + 0xc)
            *(var_1e8 + 0xc) -= 1
            
            if (rax_30 == 1)
                (*(*var_1e8 + 8))(var_1e8, 1)
    
    void var_1c0
    char* var_190
    sub_140aaca20(arg2, 
        sub_140a96390(&var_190, _vfprintf_p_l(&var_1c0, [From: {LineFrom} To: {LineTo}]", 
            EnvQueryGenerator")), &var_168)
    int64_t* var_1b8
    
    if (var_1b8 != 0)
        var_1b8[1].d -= 1
        
        if (var_1b8[1].d == 1)
            (**var_1b8)(var_1b8)
            int32_t rsi_1 = *(var_1b8 + 0xc)
            *(var_1b8 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t r8_3 = *var_1b8
                (*(r8_3 + 8))(var_1b8, zx.q(rsi_1), r8_3)
    
    int32_t var_120_2 = 0
    
    if (var_128_1 != 0)
        sub_140a74f90(var_128_1)
    
    rcx_30 = &var_168

sub_140acd610(rcx_30)
__security_check_cookie(rax_1 ^ &var_258)
return arg2
