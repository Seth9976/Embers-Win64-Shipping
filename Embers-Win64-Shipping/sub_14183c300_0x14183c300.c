// 函数: sub_14183c300
// 地址: 0x14183c300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
TEB* gsbase

if (data_143efaa28 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efaa28)
    
    if (data_143efaa28 == 0xffffffff)
        _vfprintf_p_l(&data_143efaa10, u"{Current} / {Total} ({Speed}/sec)", u"BuildPatchInstaller")
        atexit(sub_142cec070)
        _Init_thread_footer(&data_143efaa28)

EnterCriticalSection(&arg1[0x23])
void var_1d0
int128_t zmm0 = sub_140a96170(&var_1d0)
(*(*arg1 + 0x60))(arg1)
int128_t zmm6 = zmm0
int128_t zmm8
zmm8.q = float.d((*(*arg1 + 0x70))(arg1))
int128_t zmm9
zmm9.q = float.d((*(*arg1 + 0x78))(arg1))
int64_t* var_1c8

if (zmm6.q f< 0.0)
    sub_140a96170(arg2)
    
    if (var_1c8 != 0)
        var_1c8[1].d -= 1
        
        if (var_1c8[1].d == 1)
            (**var_1c8)(var_1c8)
            int32_t rdi_2 = *(var_1c8 + 0xc)
            *(var_1c8 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*var_1c8 + 8))(var_1c8, zx.q(rdi_2))
else
    void var_248
    sub_140a95a00(&var_248)
    uint128_t zmm7 = 0x43e0000000000000
    int64_t rax_9 = 0
    int32_t var_234_1 = 1
    int32_t var_238_1 = 1
    int64_t var_158
    __builtin_memset(&var_158, 0, 0x2c)
    int32_t var_12c_1 = 0x80
    int32_t var_128_1 = 0xffffffff
    int32_t var_124_1 = 0
    int64_t var_118_1 = 0
    int32_t var_110_1 = 0
    int128_t var_220 = zx.o(0)
    
    if (not(zmm6.q f< zmm7.q))
        zmm6.q = zmm6.q f- zmm7.q
        
        if (not(zmm6.q f>= zmm7.q))
            rax_9 = -0x8000000000000000
    
    void var_1b8
    int64_t* rax_10
    double zmm7_1
    double zmm8_1
    rax_10, zmm7_1, zmm8_1 = sub_140aa0560(&var_1b8, int.q(zmm6.q) + rax_9, &var_248, &var_220, 0)
    int32_t var_108 = 4
    int64_t var_f8_1 = *rax_10
    int64_t* rcx_10 = rax_10[1]
    
    if (rcx_10 != 0)
        rcx_10[1].d += 1
    
    int32_t var_e8_1 = rax_10[2].d
    char var_e0_1 = 1
    int64_t var_288 = 0
    int32_t var_280_1 = 0
    sub_1405947f0(&var_288, 6)
    int32_t rax_12 = var_280_1 + 6
    var_280_1 = rax_12
    
    if (rax_12 s> 0)
        sub_140594770(&var_288)
    
    UnDecorator::getReferenceType(var_288, u"Speed", 0xc)
    int64_t* var_230 = &var_288
    int32_t* var_228_1 = &var_108
    void var_258
    sub_140b91dc0(&var_158, &var_258, &var_230, nullptr)
    int64_t rcx_15 = var_288
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    if (var_e0_1 != 0)
        char var_e0_2 = 0
        
        if (rcx_10 != 0)
            rcx_10[1].d -= 1
            
            if (rcx_10[1].d == 1)
                (**rcx_10)(rcx_10)
                int32_t rax_15 = *(rcx_10 + 0xc)
                *(rcx_10 + 0xc) -= 1
                
                if (rax_15 == 1)
                    (*(*rcx_10 + 8))(rcx_10, 1)
    
    int64_t* var_1b0
    
    if (var_1b0 != 0)
        var_1b0[1].d -= 1
        
        if (var_1b0[1].d == 1)
            (**var_1b0)(var_1b0)
            int32_t rax_19 = *(var_1b0 + 0xc)
            *(var_1b0 + 0xc) -= 1
            
            if (rax_19 == 1)
                (*(*var_1b0 + 8))(var_1b0, 1)
    
    int64_t* rsi_3 = var_220:8.q
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t rax_23 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (rax_23 == 1)
                (*(*rsi_3 + 8))(rsi_3, 1)
    
    int64_t rax_25 = 0
    int128_t var_200 = zx.o(0)
    
    if (not(zmm8_1 < zmm7_1))
        zmm8_1 = zmm8_1 - zmm7_1
        
        if (not(zmm8_1 >= zmm7_1))
            rax_25 = -0x8000000000000000
    
    void var_1a0
    int64_t* rax_26
    double zmm7_2
    rax_26, zmm7_2 = sub_140aa0560(&var_1a0, int.q(zmm8_1) + rax_25, &var_248, &var_200, 0)
    int32_t var_d8 = 4
    int64_t var_c8_1 = *rax_26
    int64_t* rcx_24 = rax_26[1]
    
    if (rcx_24 != 0)
        rcx_24[1].d += 1
    
    int32_t var_b8_1 = rax_26[2].d
    char var_b0_1 = 1
    int64_t var_278 = 0
    int32_t var_270_1 = 0
    sub_1405947f0(&var_278, 6)
    int32_t rax_28 = var_270_1 + 6
    var_270_1 = rax_28
    
    if (rax_28 s> 0)
        sub_140594770(&var_278)
    
    UnDecorator::getReferenceType(var_278, u"Total", 0xc)
    int64_t* var_210 = &var_278
    int32_t* var_208_1 = &var_d8
    void var_254
    sub_140b91dc0(&var_158, &var_254, &var_210, nullptr)
    int64_t rcx_29 = var_278
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    if (var_b0_1 != 0)
        char var_b0_2 = 0
        
        if (rcx_24 != 0)
            rcx_24[1].d -= 1
            
            if (rcx_24[1].d == 1)
                (**rcx_24)(rcx_24)
                int32_t rax_31 = *(rcx_24 + 0xc)
                *(rcx_24 + 0xc) -= 1
                
                if (rax_31 == 1)
                    (*(*rcx_24 + 8))(rcx_24, 1)
    
    int64_t* var_198
    
    if (var_198 != 0)
        var_198[1].d -= 1
        
        if (var_198[1].d == 1)
            (**var_198)(var_198)
            int32_t rax_35 = *(var_198 + 0xc)
            *(var_198 + 0xc) -= 1
            
            if (rax_35 == 1)
                (*(*var_198 + 8))(var_198, 1)
    
    int64_t* rsi_6 = var_200:8.q
    
    if (rsi_6 != 0)
        rsi_6[1].d -= 1
        
        if (rsi_6[1].d == 1)
            (**rsi_6)(rsi_6)
            int32_t rax_39 = *(rsi_6 + 0xc)
            *(rsi_6 + 0xc) -= 1
            
            if (rax_39 == 1)
                (*(*rsi_6 + 8))(rsi_6, 1)
    
    int64_t rax_41 = 0
    int128_t var_1e0 = zx.o(0)
    
    if (not(zmm9.q f< zmm7_2))
        zmm9.q = zmm9.q f- zmm7_2
        
        if (not(zmm9.q f>= zmm7_2))
            rax_41 = -0x8000000000000000
    
    void var_188
    int64_t* rax_42 = sub_140aa0560(&var_188, int.q(zmm9.q) + rax_41, &var_248, &var_1e0, 0)
    int32_t var_a8 = 4
    int64_t var_98_1 = *rax_42
    int64_t* rcx_38 = rax_42[1]
    
    if (rcx_38 != 0)
        rcx_38[1].d += 1
    
    int32_t var_88_1 = rax_42[2].d
    char var_80_1 = 1
    int64_t var_268 = 0
    int32_t var_260_1 = 0
    sub_1405947f0(&var_268, 8)
    int32_t rax_44 = var_260_1 + 8
    var_260_1 = rax_44
    
    if (rax_44 s> 0)
        sub_140594770(&var_268)
    
    UnDecorator::getReferenceType(var_268, u"Current", 0x10)
    int64_t* var_1f0 = &var_268
    int32_t* var_1e8_1 = &var_a8
    void var_250
    sub_140b91dc0(&var_158, &var_250, &var_1f0, nullptr)
    int64_t rcx_43 = var_268
    
    if (rcx_43 != 0)
        sub_140a74f90(rcx_43)
    
    if (var_80_1 != 0)
        char var_80_2 = 0
        
        if (rcx_38 != 0)
            rcx_38[1].d -= 1
            
            if (rcx_38[1].d == 1)
                (**rcx_38)(rcx_38)
                int32_t rax_47 = *(rcx_38 + 0xc)
                *(rcx_38 + 0xc) -= 1
                
                if (rax_47 == 1)
                    (*(*rcx_38 + 8))(rcx_38, 1)
    
    int64_t* var_180
    
    if (var_180 != 0)
        var_180[1].d -= 1
        
        if (var_180[1].d == 1)
            (**var_180)(var_180)
            int32_t rax_51 = *(var_180 + 0xc)
            *(var_180 + 0xc) -= 1
            
            if (rax_51 == 1)
                (*(*var_180 + 8))(var_180, 1)
    
    int64_t* rsi_9 = var_1e0:8.q
    
    if (rsi_9 != 0)
        rsi_9[1].d -= 1
        
        if (rsi_9[1].d == 1)
            (**rsi_9)(rsi_9)
            int32_t rax_55 = *(rsi_9 + 0xc)
            *(rsi_9 + 0xc) -= 1
            
            if (rax_55 == 1)
                (*(*rsi_9 + 8))(rsi_9, 1)
    
    char* var_170
    sub_140aaca20(arg2, sub_140a96390(&var_170, &data_143efaa10), &var_158)
    int32_t var_110_2 = 0
    
    if (var_118_1 != 0)
        sub_140a74f90(var_118_1)
    
    sub_140acd610(&var_158)
    
    if (var_1c8 != 0)
        var_1c8[1].d -= 1
        
        if (var_1c8[1].d == 1)
            (**var_1c8)(var_1c8)
            int32_t rdi_1 = *(var_1c8 + 0xc)
            *(var_1c8 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_8 = *var_1c8
                (*(r8_8 + 8))(var_1c8, zx.q(rdi_1), r8_8)

if (arg1 != -0x118)
    LeaveCriticalSection(&arg1[0x23])

__security_check_cookie(rax_1 ^ &var_2b8)
return arg2
