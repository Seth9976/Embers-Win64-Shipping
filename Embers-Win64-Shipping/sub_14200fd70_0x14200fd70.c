// 函数: sub_14200fd70
// 地址: 0x14200fd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = GetCurrentProcessId()
int64_t var_78
int16_t* var_48
sub_140b11a30(&var_48, sub_140a46530(&var_78))
int64_t rcx_2 = var_78

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int16_t* const rdi = &data_142d40450
int16_t* const rcx_3 = &data_142d40450
int32_t var_40

if (var_40 != 0)
    rcx_3 = var_48

int64_t* arg_30
arg_30[1].d
int64_t* arg_28
int64_t* r15 = arg_28
int16_t* const r8

if (r15[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *r15

arg4[1].d
int16_t* const rax_3

if (arg3[1].d == 0)
    rax_3 = &data_142d40450
else
    rax_3 = *arg3

if (arg2[1].d != 0)
    *arg2

int16_t* const var_f0 = rcx_3
int16_t* const var_108 = r8
int16_t* const var_118 = rax_3
int16_t* var_68
sub_140a2e390(&var_68, 
    -PID=%u -RunType=%s -ProjectName="%s" -Platform=%s -SessionId=%s -EngineVersion=%s "
"-SuccessfulRtnCode=%d -LogPath="%s"", zx.q(rax))
void* rcx_5 = data_143ddb400
int64_t* var_118_1 = &data_143de5780
char arg_10 = 0
sub_140af2fd0(rcx_5, u"EngineSessionManager", u"AllowWatchdogDetectHangs", &arg_10, &data_143de5780)
int64_t var_88

if (arg_10 != 0)
    var_118_1 = &data_143de5780
    arg_30.d = 0x78
    sub_140af3c10(data_143ddb400, EngineSessionManager", WatchdogMinimumHangSeconds", &arg_30, 
        &data_143de5780)
    sub_140a2e390(&var_88, u" -DetectHangs -HangSeconds=%d", zx.q(arg_30.d))
    int32_t var_80
    int32_t r8_4
    
    if (var_80 == 0)
        r8_4 = 0
    else
        r8_4 = var_80 - 1
    
    sub_140a20ba0(&var_68, var_88, r8_4)
    int64_t rcx_9 = var_88
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if (sub_140b1d030() != 0)
    TEB* gsbase
    void* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (data_143db4814 s> *(rbx_1 + 0x14))
        _Init_thread_header(&data_143db4814)
        
        if (data_143db4814 == 0xffffffff)
            sub_140af2b60()
            data_143db4810 = sub_140b21a10(&data_143dbb3f0, u"UNATTENDED")
            _Init_thread_footer(&data_143db4814)
    
    if (data_143db4810 == 0 && data_143de548d == 0)
        if (data_143cd80cc s> *(rbx_1 + 0x14))
            _Init_thread_header(&data_143cd80cc)
            
            if (data_143cd80cc == 0xffffffff)
                sub_140af2b60()
                data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
                _Init_thread_footer(&data_143cd80cc)
        
        if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
            var_118_1 = &data_143de5780
            arg_30.b = 0
            sub_140af2fd0(data_143ddb400, EngineSessionManager", AllowWatchdogDialogs", &arg_30, 
                &data_143de5780)
            
            if (arg_30.b != 0)
                sub_140a20ba0(&var_68, u" -AllowDialogs", 0xe)

int64_t var_98 = 0
int64_t var_90 = 0
sub_1405947f0(&var_98, 0xf)
int32_t rax_8 = var_90.d + 0xf
var_90.d = rax_8

if (rax_8 s> 0)
    sub_140594770(&var_98)

UnDecorator::getReferenceType(var_98, u"UnrealWatchdog", 0x1e)
int16_t* var_58
sub_140b11a30(&var_58, sub_140b66e70(&var_78, &var_98, 3))
int64_t rcx_18 = var_78

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = var_98

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

void* var_d8 = nullptr
int32_t i_2 = 0
int64_t var_c8 = 0
int64_t var_c0 = 0
sub_1405947f0(&var_c8, 8)
int32_t rax_10 = var_c0.d + 8
var_c0.d = rax_10

if (rax_10 s> 0)
    sub_140594770(&var_c8)

UnDecorator::getReferenceType(var_c8, u"RunType", 0x10)
int64_t var_b8
sub_140596d10(&var_b8, arg2)
int64_t i_6 = sx.q(i_2)
int32_t rax_11 = (i_6 + 1).d

if (rax_11 s> 0)
    sub_1405c4f50(&var_d8)

int64_t* rcx_27 = i_6 * 0x30 + var_d8
*rcx_27 = var_c8
rcx_27[1].d = var_c0.d
*(rcx_27 + 0xc) = var_c0:4.d
rcx_27[2] = var_b8
int32_t var_b0
rcx_27[3].d = var_b0
int32_t var_ac
*(rcx_27 + 0x1c) = var_ac
rcx_27[4] = 0
rcx_27[5].b = 0
*(rcx_27 + 0x2c) = 0
var_c8 = 0
int64_t var_c0_1 = 0
sub_1405947f0(&var_c8, 0xc)
int32_t rax_18 = var_c0_1.d + 0xc
var_c0_1.d = rax_18

if (rax_18 s> 0)
    sub_140594770(&var_c8)

UnDecorator::getReferenceType(var_c8, u"ProjectName", 0x18)
sub_140596d10(&var_b8, arg3)
int64_t rbx_2 = sx.q(rax_11)
int32_t rax_19 = (rbx_2 + 1).d

if (rax_19 s> 0)
    sub_1405c4f50(&var_d8)

int64_t rax_20 = var_c8
int64_t* rcx_35 = rbx_2 * 0x30 + var_d8
var_c8 = 0
*rcx_35 = rax_20
rcx_35[1].d = var_c0_1.d
*(rcx_35 + 0xc) = var_c0_1:4.d
rcx_35[2] = var_b8
rcx_35[3].d = var_b0
*(rcx_35 + 0x1c) = var_ac
rcx_35[4] = 0
rcx_35[5].b = 0
*(rcx_35 + 0x2c) = 0
int64_t var_c0_2 = 0
sub_1405947f0(&var_c8, 9)
int32_t rax_26 = var_c0_2.d + 9
var_c0_2.d = rax_26

if (rax_26 s> 0)
    sub_140594770(&var_c8)

UnDecorator::getReferenceType(var_c8, u"Platform", 0x12)
sub_140596d10(&var_b8, arg4)
int64_t rbx_3 = sx.q(rax_19)
int32_t rax_27 = (rbx_3 + 1).d

if (rax_27 s> 0)
    sub_1405c4f50(&var_d8)

int64_t rax_28 = var_c8
int64_t* rcx_43 = rbx_3 * 0x30 + var_d8
var_c8 = 0
*rcx_43 = rax_28
rcx_43[1].d = var_c0_2.d
*(rcx_43 + 0xc) = var_c0_2:4.d
rcx_43[2] = var_b8
rcx_43[3].d = var_b0
*(rcx_43 + 0x1c) = var_ac
rcx_43[4] = 0
rcx_43[5].b = 0
*(rcx_43 + 0x2c) = 0
int64_t var_c0_3 = 0
sub_1405947f0(&var_c8, 0xa)
int32_t rax_34 = var_c0_3.d + 0xa
var_c0_3.d = rax_34

if (rax_34 s> 0)
    sub_140594770(&var_c8)

UnDecorator::getReferenceType(var_c8, u"SessionId", 0x14)
sub_140596d10(&var_b8, r15)
int64_t rbx_4 = sx.q(rax_27)
int32_t rax_35 = (rbx_4 + 1).d

if (rax_35 s> 0)
    sub_1405c4f50(&var_d8)

int64_t* rcx_51 = rbx_4 * 0x30 + var_d8
*rcx_51 = var_c8
rcx_51[1].d = var_c0_3.d
*(rcx_51 + 0xc) = var_c0_3:4.d
rcx_51[2] = var_b8
rcx_51[3].d = var_b0
*(rcx_51 + 0x1c) = var_ac
rcx_51[4] = 0
rcx_51[5].b = 0
*(rcx_51 + 0x2c) = 0
bool cond:1 = sub_140b1d030() != 0
var_c8 = 0
int64_t var_c0_4 = 0
int32_t* const rbx_5 = &data_142e5e440

if (cond:1)
    rbx_5 = &data_142e5e448

sub_1405947f0(&var_c8, 0x10)
int32_t rax_43 = var_c0_4.d + 0x10
var_c0_4.d = rax_43

if (rax_43 s> 0)
    sub_140594770(&var_c8)

UnDecorator::getReferenceType(var_c8, u"IsInternalBuild", 0x20)
sub_1417ea920(&var_b8, rbx_5)
int64_t rbx_6 = sx.q(rax_35)
int32_t rax_44 = (rbx_6 + 1).d

if (rax_44 s> 0)
    sub_1405c4f50(&var_d8)

int64_t* rcx_59 = rbx_6 * 0x30 + var_d8
*rcx_59 = var_c8
rcx_59[1].d = var_c0_4.d
*(rcx_59 + 0xc) = var_c0_4:4.d
rcx_59[2] = var_b8
rcx_59[3].d = var_b0
*(rcx_59 + 0x1c) = var_ac
rcx_59[4] = 0
rcx_59[5].b = 0
*(rcx_59 + 0x2c) = 0
void* rcx_96

if (sub_140b16090(&var_58) == 0)
    sub_1417ea920(&var_c8, u"Outcome")
    sub_1417ea920(&var_b8, u"MissingBinaryFailed")
    int64_t rbx_14 = sx.q(rax_44)
    int32_t i_5 = (rbx_14 + 1).d
    i_2 = i_5
    
    if (i_5 s> 0)
        sub_1405c4f50(&var_d8)
    
    rcx_96 = rbx_14 * 0x30 + var_d8
    *rcx_96 = var_c8
    *(rcx_96 + 8) = var_c0_4.d
    *(rcx_96 + 0xc) = var_c0_4:4.d
    *(rcx_96 + 0x10) = var_b8
    *(rcx_96 + 0x18) = var_b0
    *(rcx_96 + 0x1c) = var_ac
label_1420108da:
    *(rcx_96 + 0x2c) = 0
    *(rcx_96 + 0x28) = 0
    *(rcx_96 + 0x20) = 0
else
    int16_t* const r8_6 = &data_142d40450
    int32_t var_60
    
    if (var_60 != 0)
        r8_6 = var_68
    
    int16_t* const rdx_20 = &data_142d40450
    int32_t var_50
    
    if (var_50 != 0)
        rdx_20 = var_58
    
    var_118_1.b = 1
    sub_140b65ff0(&arg_30, rdx_20, r8_6, 1, 1, 0, nullptr, 0, nullptr, 0, 0)
    
    if (arg_30 == 0)
        var_c8 = 0
        int64_t var_c0_6 = 0
        sub_1405947f0(&var_c8, 8)
        int32_t rax_64 = var_c0_6.d + 8
        var_c0_6.d = rax_64
        
        if (rax_64 s> 0)
            sub_140594770(&var_c8)
        
        UnDecorator::getReferenceType(var_c8, u"Outcome", 0x10)
        var_b8 = 0
        var_b0.q = 0
        sub_1405947f0(&var_b8, 0x11)
        int32_t rsi_3 = var_ac
        int32_t rbx_13 = var_b0 + 0x11
        
        if (rbx_13 s> rsi_3)
            sub_140594770(&var_b8)
            rsi_3 = var_ac
        
        int64_t r14_2 = var_b8
        UnDecorator::getReferenceType(r14_2, u"CreateProcFailed", 0x22)
        int64_t rdi_2 = sx.q(rax_44)
        int32_t i_4 = (rdi_2 + 1).d
        i_2 = i_4
        
        if (i_4 s> 0)
            sub_1405c4f50(&var_d8)
        
        rcx_96 = rdi_2 * 0x30 + var_d8
        *rcx_96 = var_c8
        *(rcx_96 + 8) = var_c0_6.d
        *(rcx_96 + 0xc) = var_c0_6:4.d
        *(rcx_96 + 0x10) = r14_2
        *(rcx_96 + 0x18) = rbx_13
        *(rcx_96 + 0x1c) = rsi_3
        goto label_1420108da
    
    var_118_1.d = 0
    void arg_18
    sub_140a2e390(&var_78, %lld", 
        (*sub_140b29d90(&arg_28) - *sub_140b0a2c0(&arg_18, 0x7b2, 1, 1, 0, 0, 0, 0)) s/ 0x989680)
    int64_t* rax_55 = &data_143f3f230
    var_88 = 0
    
    if (*(arg1 + 0x53) != 0)
        rax_55 = &data_143f3f240
    
    int32_t rbx_9 = rax_55[1].d
    int64_t rsi_1 = *rax_55
    int32_t var_80_1 = rbx_9
    
    if (rbx_9 != 0)
        sub_1405a4c70(&var_88, rbx_9, 0)
        memcpy(var_88, rsi_1, rbx_9 * 2)
    else
        int32_t var_7c_1 = 0
    
    var_c8 = 0
    int64_t var_c0_5 = 0
    sub_1405947f0(&var_c8, 8)
    int32_t rax_56 = var_c0_5.d + 8
    var_c0_5.d = rax_56
    
    if (rax_56 s> 0)
        sub_140594770(&var_c8)
    
    UnDecorator::getReferenceType(var_c8, u"Outcome", 0x10)
    var_b8 = 0
    var_b0.q = 0
    sub_1405947f0(&var_b8, 0xa)
    int32_t r14_1 = var_ac
    int32_t rbx_10 = var_b0 + 0xa
    
    if (rbx_10 s> r14_1)
        sub_140594770(&var_b8)
        r14_1 = var_ac
    
    int64_t r15_1 = var_b8
    UnDecorator::getReferenceType(r15_1, u"Succeeded", 0x14)
    int64_t rsi_2 = sx.q(rax_44)
    int32_t i_3 = (rsi_2 + 1).d
    i_2 = i_3
    
    if (i_3 s> 0)
        sub_1405c4f50(&var_d8)
    
    int64_t* rcx_76 = rsi_2 * 0x30 + var_d8
    var_118_1.d = rax
    *rcx_76 = var_c8
    rcx_76[1].d = var_c0_5.d
    *(rcx_76 + 0xc) = var_c0_5:4.d
    rcx_76[2] = r15_1
    *(rcx_76 + 0x1c) = r14_1
    rcx_76[3].d = rbx_10
    rcx_76[4] = 0
    rcx_76[5].b = 0
    *(rcx_76 + 0x2c) = 0
    
    if (data_143f3f0f8 != 0)
        data_143f3f0f0
    
    if (data_143f3f0d8 != 0)
        rdi = data_143f3f0d0
    
    sub_140a2e390(&var_98, u"%s%s/%u", rdi)
    
    if (arg1 + 0x90 == &var_98)
        int64_t rcx_79 = var_98
        
        if (rcx_79 != 0)
            sub_140a74f90(rcx_79)
    else
        int64_t rcx_78 = *(arg1 + 0x90)
        
        if (rcx_78 != 0)
            sub_140a74f90(rcx_78)
        
        *(arg1 + 0x90) = var_98
        *(arg1 + 0x98) = var_90.d
        *(arg1 + 0x9c) = var_90:4.d
    
    sub_140af4ba0()
    var_98 = 0
    int32_t rdx_29 = 0
    var_90.d = 0
    int32_t rcx_80 = 0
    var_90:4.d = 0
    
    if (data_143dd33f0 != 0)
        int64_t rbx_11 = -1
        
        do
            rbx_11 += 1
        while ((&data_143dd33f0)[rbx_11] != 0)
        
        if (rbx_11.d + 1 s> 0)
            sub_1405947f0(&var_98, rbx_11.d + 1)
            rcx_80 = var_90:4.d
            rdx_29 = var_90.d
        
        int32_t rax_63 = rdx_29 + rbx_11.d + 1
        var_90.d = rax_63
        
        if (rax_63 s> rcx_80)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, &data_143dd33f0, (rbx_11.d + 1) * 2)
    
    sub_140b729b0(&data_143f3f020, arg1 + 0x90, &data_143f3f120, &var_98)
    int64_t rcx_84 = var_98
    
    if (rcx_84 != 0)
        sub_140a74f90(rcx_84)
    
    sub_140b729b0(&data_143f3f020, arg1 + 0x90, &data_143f3f1b0, &var_78)
    sub_140b729b0(&data_143f3f020, arg1 + 0x90, &data_143f3f1a0, &var_78)
    sub_140b729b0(&data_143f3f020, arg1 + 0x90, &data_143f3f1d0, &data_143f3f030)
    sub_140b729b0(&data_143f3f020, arg1 + 0x90, &data_143f3f200, arg1 + 0x58)
    sub_140b729b0(&data_143f3f020, arg1 + 0x90, &data_143f3f1f0, &var_88)
    int64_t rcx_85 = var_88
    
    if (rcx_85 != 0)
        sub_140a74f90(rcx_85)
    
    int64_t rcx_86 = var_78
    
    if (rcx_86 != 0)
        sub_140a74f90(rcx_86)
var_98 = 0
int32_t var_90_1 = 0
sub_1405947f0(&var_98, 0x15)
int32_t rax_74 = var_90_1 + 0x15
var_90_1 = rax_74

if (rax_74 s> 0)
    sub_140594770(&var_98)

UnDecorator::getReferenceType(var_98, u"Engine.StartWatchdog", 0x2a)
int64_t* rcx_105 = data_143f3efd8
int64_t result = (*(*rcx_105 + 0x58))(rcx_105, &var_98, &var_d8)
int64_t rcx_106 = var_98

if (rcx_106 != 0)
    result = sub_140a74f90(rcx_106)

int32_t i_1 = i_2
void* rbx_15 = var_d8

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_107 = *(rbx_15 + 0x10)
        
        if (rcx_107 != 0)
            result = sub_140a74f90(rcx_107)
        
        int64_t rcx_108 = *rbx_15
        
        if (rcx_108 != 0)
            result = sub_140a74f90(rcx_108)
        
        rbx_15 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_15 = var_d8

if (rbx_15 != 0)
    result = sub_140a74f90(rbx_15)

int16_t* rcx_110 = var_58

if (rcx_110 != 0)
    result = sub_140a74f90(rcx_110)

int16_t* rcx_111 = var_68

if (rcx_111 != 0)
    result = sub_140a74f90(rcx_111)

int16_t* rcx_112 = var_48

if (rcx_112 == 0)
    return result

return sub_140a74f90(rcx_112)
