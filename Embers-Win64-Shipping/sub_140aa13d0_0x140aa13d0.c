// 函数: sub_140aa13d0
// 地址: 0x140aa13d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3d8
int64_t rax_1 = __security_cookie ^ &var_3d8
int32_t var_348 = 0
char* rax_2 = sub_140a752e0()
int64_t r9 = *arg3
int64_t* var_320
int64_t* var_310
int64_t* rax_4
int64_t* rcx
int32_t r14

if (r9 == 0)
    rcx = *(rax_2 + 0x40)
    r14 = 2
    r9 = *(rax_2 + 0x38)
    var_320 = rcx
    
    if (rcx != 0)
        rcx[1].d += 1
        rcx = var_320
    
    rax_4 = rcx
else
    int64_t* rax_3 = arg3[1]
    r14 = 1
    var_310 = rax_3
    
    if (rax_3 != 0)
        rax_3[1].d += 1
    
    rax_4 = var_310
    rcx = var_320

if (rax_4 != 0)
    rax_4[1].d += 1
    rcx = var_320

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    
    if (rcx != 0)
        rcx[1].d -= 1
        
        if (rcx[1].d == 1)
            (**var_320)(var_320)
            int32_t rax_7 = *(var_320 + 0xc)
            *(var_320 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*var_320 + 8))(var_320, 1)

if ((r14.b & 1) != 0 && var_310 != 0)
    var_310[1].d -= 1
    
    if (var_310[1].d == 1)
        (**var_310)(var_310)
        int32_t rax_11 = *(var_310 + 0xc)
        *(var_310 + 0xc) -= 1
        
        if (rax_11 == 1)
            (*(*var_310 + 8))(var_310, 1)

int64_t rcx_6 = *arg2
int16_t var_340 = 0x100
int32_t var_33c = 0
int32_t var_330 = 0
int32_t var_32c = 3
int32_t var_338 = 2
int32_t rbx_3 = int.d(float.d(rcx_6) f* 2.7777777777777777e-11)
int32_t var_334 = 2
int32_t r15_4 = (rcx_6 s/ 0x23c34600 s% 0x3c).d
int32_t r12_3 = (rcx_6 s/ 0x989680 s% 0x3c).d

if (rbx_3 s<= 0)
    void var_218
    _vfprintf_p_l(&var_218, u"{Minutes}:{Seconds}", u"Timespan")
    int64_t var_70_1 = sx.q(r15_4)
    int64_t var_188
    __builtin_memset(&var_188, 0, 0x2c)
    int32_t var_15c_1 = 0x80
    int32_t var_158_1 = 0xffffffff
    int32_t var_154_1 = 0
    int64_t var_148_1 = 0
    int32_t var_140_1 = 0
    int32_t var_78 = 0
    char var_50_1 = 0
    int64_t var_368 = 0
    int32_t var_360_1 = 0
    sub_1405947f0(&var_368, 8)
    int32_t rax_78 = var_360_1 + 8
    var_360_1 = rax_78
    
    if (rax_78 s> 0)
        sub_140594770(&var_368)
    
    UnDecorator::getReferenceType(var_368, u"Minutes", 0x10)
    int32_t var_240
    sub_140749df0(&var_188, &var_240)
    int64_t* var_238
    sub_140a8f8b0(var_238, &var_368, &var_78)
    var_238[8].d = 0xffffffff
    int16_t* const r14_2 = &data_142d40450
    int16_t* rcx_72
    
    if (var_238[1].d == 0)
        rcx_72 = &data_142d40450
    else
        rcx_72 = *var_238
    
    void var_2d0
    sub_140aa7840(&var_188, &var_2d0, sub_140a5ff80(rcx_72, 0), var_238, var_240, nullptr)
    int64_t rcx_75 = var_368
    
    if (rcx_75 != 0)
        sub_140a74f90(rcx_75)
    
    int64_t* var_60
    
    if (var_50_1 != 0 && var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            (**var_60)(var_60)
            int32_t rax_82 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (rax_82 == 1)
                (*(*var_60 + 8))(var_60, 1)
    
    int128_t var_2e8 = r9.o
    
    if (rax_4 != 0)
        rax_4[1].d += 1
    
    int64_t var_298
    common_assert_to_message_box_build_string<char>(&var_298, r12_3, &var_340, &var_2e8)
    int64_t var_c8_1 = var_298
    int32_t var_d8 = 4
    int64_t* var_290
    
    if (var_290 != 0)
        var_290[1].d += 1
    
    int32_t var_288
    int32_t var_b8_1 = var_288
    char var_b0_1 = 1
    int64_t var_358 = 0
    int32_t var_350_1 = 0
    sub_1405947f0(&var_358, 8)
    int32_t rax_87 = var_350_1 + 8
    var_350_1 = rax_87
    
    if (rax_87 s> 0)
        sub_140594770(&var_358)
    
    UnDecorator::getReferenceType(var_358, u"Seconds", 0x10)
    int32_t var_280
    sub_140749df0(&var_188, &var_280)
    int16_t** var_278
    sub_140a8f8b0(var_278, &var_358, &var_d8)
    var_278[8].d = 0xffffffff
    
    if (var_278[1].d != 0)
        r14_2 = *var_278
    
    void var_2cc
    sub_140aa7840(&var_188, &var_2cc, sub_140a5ff80(r14_2, 0), var_278, var_280, nullptr)
    int64_t rcx_89 = var_358
    
    if (rcx_89 != 0)
        sub_140a74f90(rcx_89)
    
    if (var_b0_1 != 0 && var_290 != 0)
        var_290[1].d -= 1
        
        if (var_290[1].d == 1)
            (**var_290)(var_290)
            int32_t rax_91 = *(var_290 + 0xc)
            *(var_290 + 0xc) -= 1
            
            if (rax_91 == 1)
                (*(*var_290 + 8))(var_290, 1)
    
    if (var_290 != 0)
        var_290[1].d -= 1
        
        if (var_290[1].d == 1)
            (**var_290)(var_290)
            int32_t rax_95 = *(var_290 + 0xc)
            *(var_290 + 0xc) -= 1
            
            if (rax_95 == 1)
                (*(*var_290 + 8))(var_290, 1)
    
    void* rcx_95 = var_2e8:8.q
    
    if (rcx_95 != 0)
        int32_t rax_97 = *(rcx_95 + 8)
        *(rcx_95 + 8) -= 1
        
        if (rax_97 == 1)
            int64_t* rbx_21 = var_2e8:8.q
            (**rbx_21)(rbx_21)
            int32_t rax_99 = *(rbx_21 + 0xc)
            *(rbx_21 + 0xc) -= 1
            
            if (rax_99 == 1)
                int64_t* rcx_97 = var_2e8:8.q
                (*(*rcx_97 + 8))(rcx_97, 1)
    
    char* var_1f0
    sub_140aaca20(arg1, sub_140a96390(&var_1f0, &var_218), &var_188)
    int32_t var_140_2 = 0
    
    if (var_148_1 != 0)
        sub_140a74f90(var_148_1)
    
    sub_140aa9190(&var_188, 0)
    int64_t var_168
    
    if (var_168 != 0)
        sub_140a74f90(var_168)
    
    int64_t rcx_103 = var_188
    
    if (rcx_103 != 0)
        sub_140a74f90(rcx_103)
    
    int64_t* var_210
    
    if (var_210 != 0)
        var_210[1].d -= 1
        
        if (var_210[1].d == 1)
            (**var_210)(var_210)
            int32_t rax_104 = *(var_210 + 0xc)
            *(var_210 + 0xc) -= 1
            
            if (rax_104 == 1)
                (*(*var_210 + 8))(var_210, 1)
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t rdi_2 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*rax_4 + 8))(rax_4, zx.q(rdi_2))
else
    void var_230
    _vfprintf_p_l(&var_230, u"{Hours}:{Minutes}:{Seconds}", u"Timespan")
    int64_t var_a0_1 = sx.q(rbx_3)
    int64_t var_1d8
    __builtin_memset(&var_1d8, 0, 0x2c)
    int32_t var_1ac_1 = 0x80
    int32_t var_1a8_1 = 0xffffffff
    int32_t var_1a4_1 = 0
    int64_t var_198_1 = 0
    int32_t var_190_1 = 0
    int32_t var_a8 = 0
    char var_80_1 = 0
    int64_t var_398 = 0
    int32_t var_390_1 = 0
    sub_1405947f0(&var_398, 6)
    int32_t rax_28 = var_390_1 + 6
    var_390_1 = rax_28
    
    if (rax_28 s> 0)
        sub_140594770(&var_398)
    
    UnDecorator::getReferenceType(var_398, u"Hours", 0xc)
    int32_t var_270
    sub_140749df0(&var_1d8, &var_270)
    int64_t* var_268
    sub_140a8f8b0(var_268, &var_398, &var_a8)
    var_268[8].d = 0xffffffff
    int16_t* const r14_1 = &data_142d40450
    int16_t* rcx_13
    
    if (var_268[1].d == 0)
        rcx_13 = &data_142d40450
    else
        rcx_13 = *var_268
    
    sub_140aa7840(&var_1d8, &var_348, sub_140a5ff80(rcx_13, 0), var_268, var_270, nullptr)
    int64_t rcx_15 = var_398
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int64_t* var_90
    
    if (var_80_1 != 0 && var_90 != 0)
        var_90[1].d -= 1
        
        if (var_90[1].d == 1)
            (**var_90)(var_90)
            int32_t rax_33 = *(var_90 + 0xc)
            *(var_90 + 0xc) -= 1
            
            if (rax_33 == 1)
                (*(*var_90 + 8))(var_90, 1)
    
    int128_t var_308 = r9.o
    
    if (rax_4 != 0)
        rax_4[1].d += 1
    
    int64_t var_2c8
    common_assert_to_message_box_build_string<char>(&var_2c8, r15_4, &var_340, &var_308)
    int64_t var_128_1 = var_2c8
    int32_t var_138 = 4
    int64_t* var_2c0
    
    if (var_2c0 != 0)
        var_2c0[1].d += 1
    
    int32_t var_2b8
    int32_t var_118_1 = var_2b8
    char var_110_1 = 1
    int64_t var_388 = 0
    int32_t var_380_1 = 0
    sub_1405947f0(&var_388, 8)
    int32_t rax_38 = var_380_1 + 8
    var_380_1 = rax_38
    
    if (rax_38 s> 0)
        sub_140594770(&var_388)
    
    UnDecorator::getReferenceType(var_388, u"Minutes", 0x10)
    int32_t var_260
    sub_140749df0(&var_1d8, &var_260)
    int64_t* var_258
    sub_140a8f8b0(var_258, &var_388, &var_138)
    var_258[8].d = 0xffffffff
    int16_t* rcx_26
    
    if (var_258[1].d == 0)
        rcx_26 = &data_142d40450
    else
        rcx_26 = *var_258
    
    void var_2d8
    sub_140aa7840(&var_1d8, &var_2d8, sub_140a5ff80(rcx_26, 0), var_258, var_260, nullptr)
    int64_t rcx_28 = var_388
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    if (var_110_1 != 0 && var_2c0 != 0)
        var_2c0[1].d -= 1
        
        if (var_2c0[1].d == 1)
            (**var_2c0)(var_2c0)
            int32_t rax_43 = *(var_2c0 + 0xc)
            *(var_2c0 + 0xc) -= 1
            
            if (rax_43 == 1)
                (*(*var_2c0 + 8))(var_2c0, 1)
    
    if (var_2c0 != 0)
        var_2c0[1].d -= 1
        
        if (var_2c0[1].d == 1)
            (**var_2c0)(var_2c0)
            int32_t rax_47 = *(var_2c0 + 0xc)
            *(var_2c0 + 0xc) -= 1
            
            if (rax_47 == 1)
                (*(*var_2c0 + 8))(var_2c0, 1)
    
    void* rcx_34 = var_308:8.q
    
    if (rcx_34 != 0)
        int32_t rax_49 = *(rcx_34 + 8)
        *(rcx_34 + 8) -= 1
        
        if (rax_49 == 1)
            int64_t* rbx_9 = var_308:8.q
            (**rbx_9)(rbx_9)
            int32_t rax_51 = *(rbx_9 + 0xc)
            *(rbx_9 + 0xc) -= 1
            
            if (rax_51 == 1)
                int64_t* rcx_36 = var_308:8.q
                (*(*rcx_36 + 8))(rcx_36, 1)
    
    int128_t var_2f8 = r9.o
    
    if (rax_4 != 0)
        rax_4[1].d += 1
    
    int64_t var_2b0
    common_assert_to_message_box_build_string<char>(&var_2b0, r12_3, &var_340, &var_2f8)
    int64_t var_f8_1 = var_2b0
    int32_t var_108 = 4
    int64_t* var_2a8
    
    if (var_2a8 != 0)
        var_2a8[1].d += 1
    
    int32_t var_2a0
    int32_t var_e8_1 = var_2a0
    char var_e0_1 = 1
    int64_t var_378 = 0
    int32_t var_370_1 = 0
    sub_1405947f0(&var_378, 8)
    int32_t rax_56 = var_370_1 + 8
    var_370_1 = rax_56
    
    if (rax_56 s> 0)
        sub_140594770(&var_378)
    
    UnDecorator::getReferenceType(var_378, u"Seconds", 0x10)
    int32_t var_250
    sub_140749df0(&var_1d8, &var_250)
    int16_t** var_248
    sub_140a8f8b0(var_248, &var_378, &var_108)
    var_248[8].d = 0xffffffff
    
    if (var_248[1].d != 0)
        r14_1 = *var_248
    
    void var_2d4
    sub_140aa7840(&var_1d8, &var_2d4, sub_140a5ff80(r14_1, 0), var_248, var_250, nullptr)
    int64_t rcx_46 = var_378
    
    if (rcx_46 != 0)
        sub_140a74f90(rcx_46)
    
    if (var_e0_1 != 0 && var_2a8 != 0)
        var_2a8[1].d -= 1
        
        if (var_2a8[1].d == 1)
            (**var_2a8)(var_2a8)
            int32_t rax_61 = *(var_2a8 + 0xc)
            *(var_2a8 + 0xc) -= 1
            
            if (rax_61 == 1)
                (*(*var_2a8 + 8))(var_2a8, 1)
    
    if (var_2a8 != 0)
        var_2a8[1].d -= 1
        
        if (var_2a8[1].d == 1)
            (**var_2a8)(var_2a8)
            int32_t rax_65 = *(var_2a8 + 0xc)
            *(var_2a8 + 0xc) -= 1
            
            if (rax_65 == 1)
                (*(*var_2a8 + 8))(var_2a8, 1)
    
    void* rcx_52 = var_2f8:8.q
    
    if (rcx_52 != 0)
        int32_t rax_67 = *(rcx_52 + 8)
        *(rcx_52 + 8) -= 1
        
        if (rax_67 == 1)
            int64_t* rbx_13 = var_2f8:8.q
            (**rbx_13)(rbx_13)
            int32_t rax_69 = *(rbx_13 + 0xc)
            *(rbx_13 + 0xc) -= 1
            
            if (rax_69 == 1)
                int64_t* rcx_54 = var_2f8:8.q
                (*(*rcx_54 + 8))(rcx_54, 1)
    
    char* var_200
    sub_140aaca20(arg1, sub_140a96390(&var_200, &var_230), &var_1d8)
    int32_t var_190_2 = 0
    
    if (var_198_1 != 0)
        sub_140a74f90(var_198_1)
    
    sub_140aa9190(&var_1d8, 0)
    int64_t var_1b8
    
    if (var_1b8 != 0)
        sub_140a74f90(var_1b8)
    
    int64_t rcx_60 = var_1d8
    
    if (rcx_60 != 0)
        sub_140a74f90(rcx_60)
    
    int64_t* var_228
    
    if (var_228 != 0)
        var_228[1].d -= 1
        
        if (var_228[1].d == 1)
            (**var_228)(var_228)
            int32_t rax_74 = *(var_228 + 0xc)
            *(var_228 + 0xc) -= 1
            
            if (rax_74 == 1)
                (*(*var_228 + 8))(var_228, 1)
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t rdi_1 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t r8_10 = *rax_4
                (*(r8_10 + 8))(rax_4, zx.q(rdi_1), r8_10)

__security_check_cookie(rax_1 ^ &var_3d8)
return arg1
