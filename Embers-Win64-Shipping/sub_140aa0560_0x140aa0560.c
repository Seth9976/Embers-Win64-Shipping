// 函数: sub_140aa0560
// 地址: 0x140aa0560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int64_t* i_1 = arg2
int64_t var_168
__builtin_memset(&var_168, 0, 0x2c)
int32_t var_13c = 0x80
int32_t r14 = 0
int32_t var_138 = 0xffffffff
int32_t var_134 = 0
int64_t var_128 = 0
int32_t var_120 = 0
int32_t* var_308 = nullptr
int64_t var_300 = 0
sub_1405947f0(&var_308, 3)
int32_t r15 = var_300:4.d
int32_t rax_2 = var_300.d + 3
var_300.d = rax_2

if (rax_2 s> r15)
    sub_140594770(&var_308)
    r15 = var_300:4.d

int32_t* rsi = var_308
uint64_t rdx_1 = UnDecorator::getReferenceType(rsi, &data_142e641cc, 6)
int64_t rcx_3 = 0x400

if (arg5 == 1)
    r14 = 8
    
    if (rsi != &(*U"RGBXYZF10|")[2])
        rdx_1 = 0
        var_300.d = 0
        
        if (r15 != 2)
            sub_1405947f0(&var_308, 2)
            rdx_1 = zx.q(var_300.d)
            r15 = var_300:4.d
        
        int32_t rax_3 = (rdx_1 + 2).d
        var_300.d = rax_3
        
        if (rax_3 s> r15)
            rdx_1 = sub_140594770(&var_308)
        
        *var_308 = 0x42
    
    rcx_3 = 0x3e8

int64_t* rbx_6
int64_t* result

if (i_1 u>= 0x3e8)
    if (i_1 u>= 0xf4240)
        uint64_t i
        
        do
            int64_t rdx_16 = 0
            i = divu.dp.q(rdx_16:i_1, rcx_3)
            rdx_1 = modu.dp.q(rdx_16:i_1, rcx_3)
            r14 += 1
            i_1 = i
        while (i u>= 0xf4240)
    
    int64_t var_248
    sub_140a907f0(&var_248, rdx_1, arg3, arg4)
    int64_t var_a8_1 = var_248
    int32_t var_b8 = 4
    int64_t* var_240
    
    if (var_240 != 0)
        var_240[1].d += 1
    
    int32_t var_238
    int32_t var_98_1 = var_238
    char var_90_1 = 1
    int64_t var_2b8 = 0
    int32_t var_2b0_1 = 0
    sub_1405947f0(&var_2b8, 7)
    int32_t rax_40 = var_2b0_1 + 7
    var_2b0_1 = rax_40
    
    if (rax_40 s> 0)
        sub_140594770(&var_2b8)
    
    UnDecorator::getReferenceType(var_2b8, u"Number", 0xe)
    int32_t var_210
    sub_140749df0(&var_168, &var_210)
    int64_t* var_208
    sub_140a8f8b0(var_208, &var_2b8, &var_b8)
    var_208[8].d = 0xffffffff
    int16_t* const r15_2 = &data_142d40450
    int16_t* rcx_49
    
    if (var_208[1].d == 0)
        rcx_49 = &data_142d40450
    else
        rcx_49 = *var_208
    
    void var_268
    sub_140aa7840(&var_168, &var_268, sub_140a5ff80(rcx_49, 0), var_208, var_210, nullptr)
    int64_t rcx_52 = var_2b8
    
    if (rcx_52 != 0)
        sub_140a74f90(rcx_52)
    
    if (var_90_1 != 0 && var_240 != 0)
        var_240[1].d -= 1
        
        if (var_240[1].d == 1)
            (**var_240)(var_240)
            int32_t rax_44 = *(var_240 + 0xc)
            *(var_240 + 0xc) -= 1
            
            if (rax_44 == 1)
                (*(*var_240 + 8))(var_240, 1)
    
    if (var_240 != 0)
        var_240[1].d -= 1
        
        if (var_240[1].d == 1)
            (**var_240)(var_240)
            int32_t rax_48 = *(var_240 + 0xc)
            *(var_240 + 0xc) -= 1
            
            if (rax_48 == 1)
                (*(*var_240 + 8))(var_240, 1)
    
    wchar16 const (* rax_50)[0x11] = data_14399eb58
    int64_t var_2f8 = 0
    int64_t var_2f0_1 = 0
    void* rbx_10 = &(*rax_50)[sx.q(r14)]
    int32_t rsi_1
    int32_t r14_1
    
    if (rbx_10 != 0 && *rbx_10 != 0)
        sub_1405947f0(&var_2f8, 2)
        r14_1 = var_2f0_1:4.d
        rsi_1 = var_2f0_1.d + 2
        var_2f0_1.d = rsi_1
        
        if (rsi_1 s> r14_1)
            sub_140594770(&var_2f8)
            r14_1 = var_2f0_1:4.d
            rsi_1 = var_2f0_1.d
        
        int64_t rbx_11 = var_2f8
        UnDecorator::getReferenceType(rbx_11, rbx_10, 2)
        *(rbx_11 + (sx.q(rsi_1) << 1) - 2) = 0
    
    int64_t var_288
    
    if (rbx_10 == 0 || *rbx_10 == 0 || rsi_1 s<= 1)
        int32_t rbx_14 = var_300.d
        var_288 = 0
        int32_t var_280_2 = rbx_14
        
        if (rbx_14 != 0)
            int32_t rbx_15 = var_300.d
            sub_1405a4c70(&var_288, rbx_15, 0)
            memcpy(var_288, var_308, rbx_15 * 2)
        else
            int32_t var_27c_2 = 0
    else
        int32_t rbx_12 = var_300.d
        int32_t rbx_13
        
        if (rbx_12 == 0)
            rbx_13 = 0
        else
            rbx_13 = rbx_12 - 1
        
        int32_t rcx_62
        
        if (rsi_1 == 0)
            rcx_62 = rsi_1 + 1
        
        if (rsi_1 != 0 || rbx_13 == 0)
            rcx_62 = 0
        
        int32_t rdx_24 = rbx_13 + rcx_62 + rsi_1
        int64_t var_2a8 = var_2f8
        var_2f8 = 0
        
        if (rdx_24 s> r14_1)
            sub_1405947f0(&var_2a8, rdx_24)
        
        sub_140a20ba0(&var_2a8, var_308, rbx_13)
        var_288 = var_2a8
        int32_t var_280_1 = rsi_1
        int32_t var_27c_1 = r14_1
        int32_t var_2a0_1
        var_2a0_1.q = 0
        var_2a8 = 0
    
    void var_1c0
    int64_t* rax_56 = sub_140aae2f0(&var_1c0, &var_288)
    int32_t var_88 = 4
    int64_t var_78_1 = *rax_56
    int64_t* rcx_69 = rax_56[1]
    
    if (rcx_69 != 0)
        rcx_69[1].d += 1
    
    int32_t var_68_1 = rax_56[2].d
    char var_60_1 = 1
    int64_t var_298 = 0
    int32_t var_290_1 = 0
    sub_1405947f0(&var_298, 5)
    int32_t rax_58 = var_290_1 + 5
    var_290_1 = rax_58
    
    if (rax_58 s> 0)
        sub_140594770(&var_298)
    
    UnDecorator::getReferenceType(var_298, u"Unit", 0xa)
    int32_t var_200
    sub_140749df0(&var_168, &var_200)
    int16_t** var_1f8
    sub_140a8f8b0(var_1f8, &var_298, &var_88)
    var_1f8[8].d = 0xffffffff
    
    if (var_1f8[1].d != 0)
        r15_2 = *var_1f8
    
    void var_264
    sub_140aa7840(&var_168, &var_264, sub_140a5ff80(r15_2, 0), var_1f8, var_200, nullptr)
    int64_t rcx_77 = var_298
    
    if (rcx_77 != 0)
        sub_140a74f90(rcx_77)
    
    if (var_60_1 != 0 && rcx_69 != 0)
        rcx_69[1].d -= 1
        
        if (rcx_69[1].d == 1)
            (**rcx_69)(rcx_69)
            int32_t rax_63 = *(rcx_69 + 0xc)
            *(rcx_69 + 0xc) -= 1
            
            if (rax_63 == 1)
                (*(*rcx_69 + 8))(rcx_69, 1)
    
    int64_t* var_1b8
    
    if (var_1b8 != 0)
        var_1b8[1].d -= 1
        
        if (var_1b8[1].d == 1)
            (**var_1b8)(var_1b8)
            int32_t rax_67 = *(var_1b8 + 0xc)
            *(var_1b8 + 0xc) -= 1
            
            if (rax_67 == 1)
                (*(*var_1b8 + 8))(var_1b8, 1)
    
    int64_t rcx_83 = var_288
    
    if (rcx_83 != 0)
        sub_140a74f90(rcx_83)
    
    int64_t rbx_19 = var_2f8
    
    if (rbx_19 != 0)
        sub_140a74f90(rbx_19)
    
    result = arg1
    void var_1a8
    char* var_180
    sub_140aaca20(result, 
        sub_140a96390(&var_180, _vfprintf_p_l(&var_1a8, {Number} {Unit}", Internationalization")), 
        &var_168)
    int64_t* var_1a0
    rbx_6 = var_1a0
else
    int64_t var_260
    sub_140a90c10(&var_260, i_1, arg3, arg4)
    int64_t var_108_1 = var_260
    int32_t var_118 = 4
    int64_t* var_258
    
    if (var_258 != 0)
        var_258[1].d += 1
    
    int32_t var_250
    int32_t var_f8_1 = var_250
    char var_f0_1 = 1
    int64_t var_2e8 = 0
    int32_t var_2e0_1 = 0
    sub_1405947f0(&var_2e8, 7)
    int32_t rax_7 = var_2e0_1 + 7
    var_2e0_1 = rax_7
    
    if (rax_7 s> 0)
        sub_140594770(&var_2e8)
    
    UnDecorator::getReferenceType(var_2e8, u"Number", 0xe)
    int32_t var_230
    sub_140749df0(&var_168, &var_230)
    int64_t* var_228
    sub_140a8f8b0(var_228, &var_2e8, &var_118)
    var_228[8].d = 0xffffffff
    int16_t* const r15_1 = &data_142d40450
    int16_t* rcx_13
    
    if (var_228[1].d == 0)
        rcx_13 = &data_142d40450
    else
        rcx_13 = *var_228
    
    void var_270
    sub_140aa7840(&var_168, &var_270, sub_140a5ff80(rcx_13, 0), var_228, var_230, nullptr)
    int64_t rcx_15 = var_2e8
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    if (var_f0_1 != 0 && var_258 != 0)
        var_258[1].d -= 1
        
        if (var_258[1].d == 1)
            (**var_258)(var_258)
            int32_t rax_12 = *(var_258 + 0xc)
            *(var_258 + 0xc) -= 1
            
            if (rax_12 == 1)
                (*(*var_258 + 8))(var_258, 1)
    
    if (var_258 != 0)
        var_258[1].d -= 1
        
        if (var_258[1].d == 1)
            (**var_258)(var_258)
            int32_t rax_16 = *(var_258 + 0xc)
            *(var_258 + 0xc) -= 1
            
            if (rax_16 == 1)
                (*(*var_258 + 8))(var_258, 1)
    
    int64_t var_2c8 = 0
    int32_t var_2c0_1 = 0
    sub_1405947f0(&var_2c8, 2)
    int32_t rax_18 = var_2c0_1 + 2
    var_2c0_1 = rax_18
    
    if (rax_18 s> 0)
        sub_140594770(&var_2c8)
    
    UnDecorator::getReferenceType(var_2c8, &(*U"RGBXYZF10|")[2], 4)
    void var_1f0
    int64_t* rax_19 = sub_140aae2f0(&var_1f0, &var_2c8)
    int32_t var_e8 = 4
    int64_t* rcx_25 = rax_19[1]
    int64_t var_d8_1 = *rax_19
    
    if (rcx_25 != 0)
        rcx_25[1].d += 1
    
    int32_t var_c8_1 = rax_19[2].d
    char var_c0_1 = 1
    int64_t var_2d8 = 0
    int32_t var_2d0_1 = 0
    sub_1405947f0(&var_2d8, 5)
    int32_t rax_22 = var_2d0_1 + 5
    var_2d0_1 = rax_22
    
    if (rax_22 s> 0)
        sub_140594770(&var_2d8)
    
    UnDecorator::getReferenceType(var_2d8, u"Unit", 0xa)
    int32_t var_220
    sub_140749df0(&var_168, &var_220)
    int16_t** var_218
    sub_140a8f8b0(var_218, &var_2d8, &var_e8)
    var_218[8].d = 0xffffffff
    
    if (var_218[1].d != 0)
        r15_1 = *var_218
    
    void var_26c
    sub_140aa7840(&var_168, &var_26c, sub_140a5ff80(r15_1, 0), var_218, var_220, nullptr)
    int64_t rcx_33 = var_2d8
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    if (var_c0_1 != 0 && rcx_25 != 0)
        rcx_25[1].d -= 1
        
        if (rcx_25[1].d == 1)
            (**rcx_25)(rcx_25)
            int32_t rax_27 = *(rcx_25 + 0xc)
            *(rcx_25 + 0xc) -= 1
            
            if (rax_27 == 1)
                (*(*rcx_25 + 8))(rcx_25, 1)
    
    int64_t* var_1e8
    
    if (var_1e8 != 0)
        var_1e8[1].d -= 1
        
        if (var_1e8[1].d == 1)
            (**var_1e8)(var_1e8)
            int32_t rax_31 = *(var_1e8 + 0xc)
            *(var_1e8 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*var_1e8 + 8))(var_1e8, 1)
    
    int64_t rcx_39 = var_2c8
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    result = arg1
    void var_1d8
    char* var_190
    sub_140aaca20(result, 
        sub_140a96390(&var_190, _vfprintf_p_l(&var_1d8, {Number} {Unit}", Internationalization")), 
        &var_168)
    int64_t* var_1d0
    rbx_6 = var_1d0

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t rdi_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, zx.q(rdi_1))

int32_t* rsi_2 = var_308

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

int32_t var_120_1 = 0

if (var_128 != 0)
    sub_140a74f90(var_128)

sub_140aa9190(&var_168, 0)
int64_t var_148

if (var_148 != 0)
    sub_140a74f90(var_148)

int64_t rcx_94 = var_168

if (rcx_94 != 0)
    sub_140a74f90(rcx_94)

__security_check_cookie(rax_1 ^ &var_338)
return result
