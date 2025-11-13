// 函数: sub_1423e0100
// 地址: 0x1423e0100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_418
int64_t rax_1 = __security_cookie ^ &var_418
int32_t rbx = (data_143f5b340).d
int64_t rsi = data_143f5b338
uint64_t var_3a8 = 0
int32_t var_3a0 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_3a8, rbx, 0)
    memcpy(var_3a8, rsi, rbx * 2)
else
    int32_t var_39c_1 = 0

int32_t rcx_2 = *(arg1 + 0xac)
int32_t rax_2 = arg1[0x15].d
int32_t var_3c4 = rcx_2
void*** rax_3 = j_sub_140a82f30(0xd0)
void*** rsi_1

if (rax_3 == 0)
    rsi_1 = nullptr
else
    rsi_1 = sub_1423ceb40(rax_3, arg1[6])

int32_t rax_5 = data_143de543c

if (rax_5 == 0)
    rax_5 = arg1[0x15].d

rsi_1[0x15].d = rax_5
int32_t rax_6 = data_143de5440

if (rax_6 == 0)
    rax_6 = *(arg1 + 0xac)

*(rsi_1 + 0xac) = rax_6
int128_t zmm6 = sub_141997e80(&rsi_1[2])
int64_t* rcx_5 = arg1[6]
(*(*rcx_5 + 0x38))(rcx_5)
int64_t* rcx_6 = arg1[6]
int32_t r13 = *(*(*rcx_6 + 0x38))(rcx_6)
sub_142090dd0()
int64_t* rcx_7 = arg1[6]
(*(*rcx_7 + 0x38))(rcx_7)
int64_t* rcx_8 = arg1[6]
int32_t* rax_12 = (*(*rcx_8 + 0x38))(rcx_8)
uint64_t rcx_9 = zx.q(data_14401b1a0)
*rax_12 &= 0xffff7fff
TEB* gsbase
void* r15 = *(gsbase->ThreadLocalStoragePointer + (rcx_9 << 3))

if (data_143f5b580 s> *(r15 + 0x14))
    _Init_thread_header(&data_143f5b580)
    
    if (data_143f5b580 == 0xffffffff)
        int64_t* rcx_88 = data_143db18d0
        
        if (rcx_88 == 0)
            sub_140a53c40()
            rcx_88 = data_143db18d0
        
        int64_t r8_15
        r8_15.b = 1
        data_143f5b578 = (*(*rcx_88 + 0xb0))(rcx_88, u"r.SceneColorFormat", r8_15)
        _Init_thread_footer(&data_143f5b580)

if (data_143f5b590 s> *(r15 + 0x14))
    _Init_thread_header(&data_143f5b590)
    
    if (data_143f5b590 == 0xffffffff)
        int64_t* rcx_89 = data_143db18d0
        
        if (rcx_89 == 0)
            sub_140a53c40()
            rcx_89 = data_143db18d0
        
        int64_t r8_16
        r8_16.b = 1
        data_143f5b588 = (*(*rcx_89 + 0xb0))(rcx_89, u"r.PostProcessingColorFormat", r8_16)
        _Init_thread_footer(&data_143f5b590)

if (data_143f5b5a0 s> *(r15 + 0x14))
    _Init_thread_header(&data_143f5b5a0)
    
    if (data_143f5b5a0 == 0xffffffff)
        int64_t* rcx_90 = data_143db18d0
        
        if (rcx_90 == 0)
            sub_140a53c40()
            rcx_90 = data_143db18d0
        
        int64_t r8_17
        r8_17.b = 1
        data_143f5b598 = (*(*rcx_90 + 0xb0))(rcx_90, u"r.ForceLOD", r8_17)
        _Init_thread_footer(&data_143f5b5a0)

int64_t* rcx_10 = data_143f5b578
int32_t rax_18 = (*(*rcx_10 + 0x90))(rcx_10)
int64_t* rcx_11 = data_143f5b588
int64_t rdx_4 = *rcx_11
int32_t rax_19 = (*(rdx_4 + 0x90))(rcx_11, rdx_4)
int64_t* rcx_12 = data_143f5b598
int32_t var_3d8

if (rcx_12 == 0)
    var_3d8 = 0xffffffff
else
    int64_t rdx_5 = *rcx_12
    var_3d8 = (*(rdx_5 + 0x90))(rcx_12, rdx_5)

sub_142090dd0()
int16_t* const r12 = &data_142d40450

if (data_143a2e371:1.b != 0)
    int64_t* rbx_1 = data_143f5b578
    int16_t* var_358
    sub_140a2e390(&var_358, u"%d", 5)
    int16_t* const rdx_6 = &data_142d40450
    int32_t var_350
    
    if (var_350 != 0)
        rdx_6 = var_358
    
    (*(*rbx_1 + 0x80))(rbx_1, rdx_6, 0x8000000)
    int16_t* rcx_15 = var_358
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int64_t* rbx_2 = data_143f5b588
    int16_t* var_348
    sub_140a2e390(&var_348, u"%d", 1)
    int16_t* const rdx_7 = &data_142d40450
    int32_t var_340
    
    if (var_340 != 0)
        rdx_7 = var_348
    
    (*(*rbx_2 + 0x80))(rbx_2, rdx_7, 0x8000000)
    int16_t* rcx_18 = var_348
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

int64_t* rbx_3 = data_143f5b598

if (rbx_3 != 0)
    int16_t* var_338
    sub_140a2e390(&var_338, u"%d", 0)
    int16_t* const rdx_8 = &data_142d40450
    int32_t var_330
    
    if (var_330 != 0)
        rdx_8 = var_338
    
    (*(*rbx_3 + 0x80))(rbx_3, rdx_8, 0x8000000)
    int16_t* rcx_21 = var_338
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)

if (data_143f5b5b0 s> *(r15 + 0x14))
    _Init_thread_header(&data_143f5b5b0)
    
    if (data_143f5b5b0 == 0xffffffff)
        int64_t* rcx_91 = data_143db18d0
        
        if (rcx_91 == 0)
            sub_140a53c40()
            rcx_91 = data_143db18d0
        
        int64_t r8_18
        r8_18.b = 1
        int64_t* rax_74 = (*(*rcx_91 + 0xb0))(rcx_91, u"r.HighResScreenshotDelay", r8_18)
        
        if (rax_74 != 0)
            int64_t rdx_31 = *rax_74
            rax_74 = (*(rdx_31 + 0x58))(rax_74, rdx_31)
        
        data_143f5b5a8 = rax_74
        _Init_thread_footer(&data_143f5b5b0)

int32_t* rax_25 = data_143f5b5a8
uint32_t var_3f8
int32_t var_3f0
int32_t var_3e8
int32_t i_1

if (rax_25 == 0)
    i_1 = 4
label_1423e03fd:
    int128_t var_38_1 = zmm6
    zmm6 = 0x3f800000
    int32_t i
    
    do
        (*rsi_1)[0x27](rsi_1, 0)
        int64_t* rcx_23 = arg1[6]
        void* rax_28 = (*(*rcx_23 + 0x30))(rcx_23)
        int64_t* rcx_24 = arg1[6]
        var_3e8 = zmm6.d
        var_3f0 = 0
        var_3f8 = zx.d(*(rax_28 + 0x118))
        void var_158
        sub_1423fa990(&var_158, rsi_1, 0, (*(*rcx_24 + 0x30))(rcx_24), var_3f8, var_3f0, var_3e8)
        int64_t* rcx_26 = arg1[6]
        (*(*rcx_26 + 0x20))(rcx_26, rsi_1, &var_158)
        sub_14240e030(&var_158, 0)
        sub_14240e030((*rsi_1)[0x24](rsi_1), 1)
        zmm6 = sub_1419a21e0(0)
        sub_1423fef60(&var_158)
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    int32_t i_2 = *rax_25
    i_1 = 1
    
    if (i_2 s>= 1)
        i_1 = i_2
    
    if (i_1 != 0)
        goto label_1423e03fd
int64_t* rcx_31 = arg1[6]
(*(*rcx_31 + 0x38))(rcx_31)
int64_t* rcx_32 = arg1[6]
int32_t* rax_36 = (*(*rcx_32 + 0x38))(rcx_32)
*rax_36 ^= (r13 ^ *rax_36) & 0x8000
int64_t* rcx_33 = arg1[6]
char rax_38 = (*(*rcx_33 + 0x28))(rcx_33, rsi_1)
int64_t* rbx_5 = data_143f5b578
int16_t* var_328
sub_140a2e390(&var_328, u"%d", zx.q(rax_18))
int16_t* const rdx_13 = &data_142d40450
int64_t r9_2 = *rbx_5
int32_t var_320

if (var_320 != 0)
    rdx_13 = var_328

(*(r9_2 + 0x80))(rbx_5, rdx_13, 0x8000000, r9_2, var_3f8, var_3f0, var_3e8)
int16_t* rcx_36 = var_328

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

int64_t* rbx_6 = data_143f5b588
int16_t* var_318
sub_140a2e390(&var_318, u"%d", zx.q(rax_19))
int16_t* const rdx_14 = &data_142d40450
int32_t var_310

if (var_310 != 0)
    rdx_14 = var_318

(*(*rbx_6 + 0x80))(rbx_6, rdx_14, 0x8000000)
int16_t* rcx_39 = var_318

if (rcx_39 != 0)
    sub_140a74f90(rcx_39)

int64_t* rbx_7 = data_143f5b598

if (rbx_7 != 0)
    int16_t* var_308
    sub_140a2e390(&var_308, u"%d", zx.q(var_3d8))
    int32_t var_300
    
    if (var_300 != 0)
        r12 = var_308
    
    (*(*rbx_7 + 0x80))(rbx_7, r12, 0x8000000)
    int16_t* rcx_42 = var_308
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)

int64_t var_2f0 = rax_2.q

if (sub_140a80f40() == 0)
    uint32_t rax_44
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_44.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_44.b == 0))
        void var_178
        int64_t* rax_46 = sub_1423d7560(&var_178, nullptr, 0xff)
        *(*rax_46 + 0x10) = rsi_1.o
        void* rcx_49 = *rax_46
        int32_t r8_9 = rax_46[2].d
        int64_t* rdx_18 = rax_46[1]
        void* rbx_8 = *(rcx_49 + 0x28)
        int32_t var_3c8
        var_3c8.q = rbx_8
        int32_t* r15_1 = rbx_8 + 0x48
        
        if (rbx_8 != 0)
            *r15_1 += 1
            rbx_8 = var_3c8.q
        
        sub_1405e48c0(rcx_49, rdx_18, r8_9, 1)
        
        if (rbx_8 != 0)
            int32_t rax_47 = *r15_1
            *r15_1 -= 1
            
            if (rax_47 == 1)
                sub_140a2f6e0(var_3c8.q)
    else
        (*rsi_1)[0x2a](rsi_1, &data_143f02b98, 0, 0)
        int64_t* rax_45 = sub_142006940()
        int64_t r9_4 = *rax_45
        (*(r9_4 + 0x90))(rax_45, zx.q(rax_2), zx.q(rcx_2), r9_4)
else
    (*rsi_1)[0x2a](rsi_1, &data_143f02b98, 0, 0)
    int64_t* rax_43 = sub_142006940()
    int64_t r9_3 = *rax_43
    (*(r9_3 + 0x90))(rax_43, zx.q(rax_2), zx.q(rcx_2), r9_3)

sub_141997f50(&rsi_1[2])
sub_1419a21e0(0)
(**rsi_1)(rsi_1, 1)
data_143de5438 = 0
int64_t rax_49 = *arg1
*(arg1 + 0xc4) = 0
int32_t result = (*(rax_49 + 0xf0))(arg1)

if (result.b == 0 && data_143de548d == result.b && rax_38 != 0)
    void var_2c8
    _vfprintf_p_l(&var_2c8, u"High resolution screenshot saved as", u"UnrealClient")
    void var_298
    sub_1423cf1e0(&var_298, &var_2c8)
    int32_t var_250_1 = 0x40a00000
    char var_244_1 = 1
    int16_t var_24b_1 = 0
    int64_t var_398
    sub_140b11c80(&var_398, &var_3a8)
    int64_t rdi_1 = var_398
    int64_t var_3b8 = 0
    int32_t var_390
    int32_t var_3b0_1 = var_390
    
    if (var_390 != 0)
        sub_1405a4c70(&var_3b8, var_390, 0)
        memcpy(var_3b8, rdi_1, var_390 * 2)
    else
        int32_t var_3ac_1 = 0
    
    void var_198
    int64_t* rax_50 = sub_140596d10(&var_198, &var_3b8)
    void*** rax_51 = sub_140a84c80(0, 0x30, 0)
    void*** var_2e8_1 = rax_51
    void var_188
    
    if (rax_51 != 0)
        sub_1423ce6e0(rax_51, sub_1423cca10, sub_140596d10(&var_188, rax_50))
    int64_t rcx_62 = *rax_50
    
    if (rcx_62 != 0)
        sub_140a74f90(rcx_62)
    
    int64_t rcx_63 = var_3b8
    
    if (rcx_63 != 0)
        sub_140a74f90(rcx_63)
    
    int64_t* var_1e8
    int32_t var_1e0
    
    if (rax_51 != 0)
        (*rax_51)[8](rax_51, &var_1e8)
    else if (var_1e0 != 0)
        int64_t* rcx_65 = var_1e8
        
        if (rcx_65 != 0)
            (*(*rcx_65 + 0x38))(rcx_65, 0)
            int64_t* rcx_66 = var_1e8
            
            if (rcx_66 != 0)
                var_1e8 = sub_140a84c80(rcx_66, 0, 0)
            
            int32_t var_1e0_1 = 0
    
    if (rax_51 != 0)
        (*rax_51)[7](rax_51, 0)
        int64_t rax_57 = sub_140a84c80(rax_51, 0, 0)
        int64_t var_2e8_2 = rax_57
        
        if (rax_57 != 0)
            sub_140a74f90(rax_57)
    
    void var_2b0
    int64_t* rax_58 = sub_140aae420(&var_2b0, &var_398)
    int64_t r8_13 = *rax_58
    void* rdx_27 = rax_58[1]
    
    if (rdx_27 != 0)
        *(rdx_27 + 8) += 1
    
    int32_t rcx_71 = rax_58[2].d
    int64_t var_1d8
    int64_t var_388_2 = var_1d8
    void* var_1d0_1 = rdx_27
    int32_t var_378_1 = rcx_71
    int32_t var_1c8_1 = rcx_71
    char var_370_1 = 1
    int64_t var_368 = 0
    int32_t var_360_1 = 0
    int64_t var_1d8_1 = r8_13
    char var_1c0_1 = 1
    void var_1b8
    sub_1407473e0(&var_1b8, &var_368)
    sub_140745b20(&var_368)
    int64_t* var_1d0
    
    if (var_1d0 != 0)
        var_1d0[1].d -= 1
        
        if (var_1d0[1].d == 1)
            (**var_1d0)(var_1d0)
            int32_t rax_63 = *(var_1d0 + 0xc)
            *(var_1d0 + 0xc) -= 1
            
            if (rax_63 == 1)
                (*(*var_1d0 + 8))(var_1d0, 1)
    
    int64_t* var_2a8
    
    if (var_2a8 != 0)
        var_2a8[1].d -= 1
        
        if (var_2a8[1].d == 1)
            (**var_2a8)(var_2a8)
            int32_t rax_67 = *(var_2a8 + 0xc)
            *(var_2a8 + 0xc) -= 1
            
            if (rax_67 == 1)
                (*(*var_2a8 + 8))(var_2a8, 1)
    
    void var_2d8
    sub_140ee80a0(sub_140eff820(), &var_2d8, &var_298)
    int64_t* var_2d0
    
    if (var_2d0 != 0)
        var_2d0[1].d -= 1
        
        if (var_2d0[1].d == 1)
            (**var_2d0)(var_2d0)
            int32_t temp3_1 = *(var_2d0 + 0xc)
            *(var_2d0 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_2d0 + 8))(var_2d0, 1)
    
    int64_t rcx_81 = var_398
    
    if (rcx_81 != 0)
        sub_140a74f90(rcx_81)
    
    result = sub_1408daf60(&var_298)
    int64_t* var_2c0
    
    if (var_2c0 != 0)
        result = var_2c0[1].d
        var_2c0[1].d -= 1
        
        if (result == 1)
            result = (**var_2c0)(var_2c0)
            int32_t r14_1 = *(var_2c0 + 0xc)
            *(var_2c0 + 0xc) -= 1
            
            if (r14_1 == 1)
                result = (*(*var_2c0 + 8))(var_2c0, zx.q(r14_1))

uint64_t rcx_85 = var_3a8

if (rcx_85 != 0)
    result = sub_140a74f90(rcx_85)

__security_check_cookie(rax_1 ^ &var_418)
return result
