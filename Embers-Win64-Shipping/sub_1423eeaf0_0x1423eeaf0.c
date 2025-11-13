// 函数: sub_1423eeaf0
// 地址: 0x1423eeaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rbx = data_143db18d0

if (rbx == 0)
    sub_140a53c40()
    rbx = data_143db18d0

int32_t rdi = 0
int32_t var_d0 = data_143a303a0
float var_108[0x4] = data_143a30368
TEB* gsbase
void* rsi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
uint128_t var_f8 = data_143a30378
float var_e8[0x4] = data_143a30388
uint64_t var_d8 = data_143a30398

if (data_143f5b618 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b618)
    
    if (data_143f5b618 == 0xffffffff)
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_43 = (*(*rbx + 0xb0))(rbx, u"r.CookOutUnusedDetailModeComponents", r8_2)
        int64_t rax_44
        
        if (rax_43 == 0)
            rax_44 = 0
        else
            int64_t rdx_1 = *rax_43
            rax_44 = (*(rdx_1 + 0x58))(rax_43, rdx_1)
        
        data_143f5b610 = rax_44
        _Init_thread_footer(&data_143f5b618)

bool cond:1 = data_143f5b628 s> *(rsi + 0x14)
var_108[2] = *data_143f5b610

if (cond:1)
    _Init_thread_header(&data_143f5b628)
    
    if (data_143f5b628 == 0xffffffff)
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_46 = (*(*rbx + 0xb0))(rbx, u"r.DetailMode", r8_3)
        int64_t rax_47
        
        if (rax_46 == 0)
            rax_47 = 0
        else
            int64_t rdx_2 = *rax_46
            rax_47 = (*(rdx_2 + 0x58))(rax_46, rdx_2)
        
        data_143f5b620 = rax_47
        _Init_thread_footer(&data_143f5b628)

int32_t r12 = *data_143f5b620
bool cond:2 = data_143f5b638 s> *(rsi + 0x14)
var_108[1] = r12

if (cond:2)
    _Init_thread_header(&data_143f5b638)
    
    if (data_143f5b638 == 0xffffffff)
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_49 = (*(*rbx + 0xb0))(rbx, u"r.MaxAnisotropy", r8_4)
        int64_t rax_50
        
        if (rax_49 == 0)
            rax_50 = 0
        else
            int64_t rdx_3 = *rax_49
            rax_50 = (*(rdx_3 + 0x58))(rax_49, rdx_3)
        
        data_143f5b630 = rax_50
        _Init_thread_footer(&data_143f5b638)

bool cond:3 = data_143f5b648 s> *(rsi + 0x14)
var_e8[2] = *data_143f5b630

if (cond:3)
    _Init_thread_header(&data_143f5b648)
    
    if (data_143f5b648 == 0xffffffff)
        int64_t r8_5
        r8_5.b = 1
        int64_t* rax_52 = (*(*rbx + 0xb0))(rbx, u"r.Shadow.MaxResolution", r8_5)
        int64_t rax_53
        
        if (rax_52 == 0)
            rax_53 = 0
        else
            int64_t rdx_4 = *rax_52
            rax_53 = (*(rdx_4 + 0x58))(rax_52, rdx_4)
        
        data_143f5b640 = rax_53
        _Init_thread_footer(&data_143f5b648)

int32_t r15 = *data_143f5b640
var_f8.d = r15

if (data_143f5b658 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b658)
    
    if (data_143f5b658 == 0xffffffff)
        int64_t r8_6
        r8_6.b = 1
        int64_t* rax_55 = (*(*rbx + 0xb0))(rbx, u"r.Shadow.MaxCSMResolution", r8_6)
        int64_t rax_56
        
        if (rax_55 == 0)
            rax_56 = 0
        else
            int64_t rdx_5 = *rax_55
            rax_56 = (*(rdx_5 + 0x58))(rax_55, rdx_5)
        
        data_143f5b650 = rax_56
        _Init_thread_footer(&data_143f5b658)

int32_t r14 = *data_143f5b650
var_f8:4.d = r14

if (data_143f5b668 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b668)
    
    if (data_143f5b668 == 0xffffffff)
        int64_t r8_7
        r8_7.b = 1
        int64_t* rax_58 = (*(*rbx + 0xb0))(rbx, u"r.ViewDistanceScale", r8_7)
        int64_t rax_59
        
        if (rax_58 == 0)
            rax_59 = 0
        else
            int64_t rdx_6 = *rax_58
            rax_59 = (*(rdx_6 + 0x60))(rax_58, rdx_6)
        
        data_143f5b660 = rax_59
        _Init_thread_footer(&data_143f5b668)

if (data_143f5b678 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b678)
    
    if (data_143f5b678 == 0xffffffff)
        int64_t r8_8
        r8_8.b = 1
        int64_t* rax_61 = (*(*rbx + 0xb0))(rbx, u"r.ViewDistanceScale.ApplySecondaryScale", r8_8)
        int64_t rax_62
        
        if (rax_61 == 0)
            rax_62 = 0
        else
            int64_t rdx_7 = *rax_61
            rax_62 = (*(rdx_7 + 0x58))(rax_61, rdx_7)
        
        data_143f5b670 = rax_62
        _Init_thread_footer(&data_143f5b678)

if (data_143f5b688 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b688)
    
    if (data_143f5b688 == 0xffffffff)
        int64_t r8_9
        r8_9.b = 1
        int64_t* rax_64 = (*(*rbx + 0xb0))(rbx, u"r.ViewDistanceScale.SecondaryScale", r8_9)
        int64_t rax_65
        
        if (rax_64 == 0)
            rax_65 = 0
        else
            int64_t rdx_8 = *rax_64
            rax_65 = (*(rdx_8 + 0x60))(rax_64, rdx_8)
        
        data_143f5b680 = rax_65
        _Init_thread_footer(&data_143f5b688)

int32_t* rax_18 = data_143f5b670
float temp0[0x4] = _mm_max_ss((*data_143f5b660)[0], 0)
float zmm0[0x4]

if (*rax_18 s<= 0)
    zmm0 = 0x3f800000
else
    zmm0 = _mm_max_ss((*data_143f5b680)[0], 0)

bool cond:6 = data_143f5b698 s> *(rsi + 0x14)
temp0[0] = temp0[0] * zmm0[0]
var_f8:8.d = temp0[0]
temp0[0] = temp0[0] * temp0[0]
var_f8:0xc.d = temp0[0]

if (cond:6)
    _Init_thread_header(&data_143f5b698)
    
    if (data_143f5b698 == 0xffffffff)
        int64_t r8_10
        r8_10.b = 1
        int64_t* rax_67 = (*(*rbx + 0xb0))(rbx, u"r.ViewDistanceScale.FieldOfViewMinAngle", r8_10)
        int64_t rax_68
        
        if (rax_67 == 0)
            rax_68 = 0
        else
            int64_t rdx_9 = *rax_67
            rax_68 = (*(rdx_9 + 0x60))(rax_67, rdx_9)
        
        data_143f5b690 = rax_68
        _Init_thread_footer(&data_143f5b698)

if (data_143f5b6a8 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b6a8)
    
    if (data_143f5b6a8 == 0xffffffff)
        int64_t r8_11
        r8_11.b = 1
        int64_t* rax_70 =
            (*(*rbx + 0xb0))(rbx, r.ViewDistanceScale.FieldOfViewMinAngleScale", r8_11)
        int64_t rax_71
        
        if (rax_70 == 0)
            rax_71 = 0
        else
            int64_t rdx_10 = *rax_70
            rax_71 = (*(rdx_10 + 0x60))(rax_70, rdx_10)
        
        data_143f5b6a0 = rax_71
        _Init_thread_footer(&data_143f5b6a8)

if (data_143f5b6b8 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b6b8)
    
    if (data_143f5b6b8 == 0xffffffff)
        int64_t r8_12
        r8_12.b = 1
        int64_t* rax_73 = (*(*rbx + 0xb0))(rbx, u"r.ViewDistanceScale.FieldOfViewMaxAngle", r8_12)
        int64_t rax_74
        
        if (rax_73 == 0)
            rax_74 = 0
        else
            int64_t rdx_11 = *rax_73
            rax_74 = (*(rdx_11 + 0x60))(rax_73, rdx_11)
        
        data_143f5b6b0 = rax_74
        _Init_thread_footer(&data_143f5b6b8)

if (data_143f5b6c8 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b6c8)
    
    if (data_143f5b6c8 == 0xffffffff)
        int64_t r8_13
        r8_13.b = 1
        int64_t* rax_76 =
            (*(*rbx + 0xb0))(rbx, r.ViewDistanceScale.FieldOfViewMaxAngleScale", r8_13)
        int64_t rax_77
        
        if (rax_76 == 0)
            rax_77 = 0
        else
            int64_t rdx_12 = *rax_76
            rax_77 = (*(rdx_12 + 0x60))(rax_76, rdx_12)
        
        data_143f5b6c0 = rax_77
        _Init_thread_footer(&data_143f5b6c8)

if (data_143f5b6d8 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b6d8)
    
    if (data_143f5b6d8 == 0xffffffff)
        int64_t r8_14
        r8_14.b = 1
        int64_t* rax_79 = (*(*rbx + 0xb0))(rbx, r.ViewDistanceScale.FieldOfViewAffectsHLOD", r8_14)
        int64_t rax_80
        
        if (rax_79 == 0)
            rax_80 = 0
        else
            int64_t rdx_13 = *rax_79
            rax_80 = (*(rdx_13 + 0x58))(rax_79, rdx_13)
        
        data_143f5b6d0 = rax_80
        _Init_thread_footer(&data_143f5b6d8)

zmm0 = *data_143f5b690

if (zmm0[0] >= 0f)
    var_e8[3] = _mm_min_ss(zmm0[0], 0x43b40000)[0]
else
    var_e8[3] = 0

uint128_t* rax_27 = data_143f5b6b0
float temp0_3[0x4] = _mm_max_ss((*data_143f5b6a0)[0], 0)
uint128_t zmm1 = *rax_27
var_d8.d = temp0_3[0]

if (zmm1.d f>= 0f)
    var_d8:4.d = _mm_min_ss(zmm1.d, 0x43b40000).d
else
    var_d8:4.d = 0

int64_t rax_29 = data_143f5b6d0
zmm0 = _mm_max_ss((*data_143f5b6c0)[0], 0)
int32_t rcx_3
rcx_3.b = *rax_29 != 0
float result_1 = zmm0[0]
bool cond:9 = data_143f5b6e8 s> *(rsi + 0x14)
var_e8[0] = rcx_3

if (cond:9)
    int64_t r8_15
    r8_15, zmm0 = _Init_thread_header(&data_143f5b6e8)
    
    if (data_143f5b6e8 == 0xffffffff)
        int64_t* rcx_40 = data_143db18d0
        
        if (rcx_40 == 0)
            sub_140a53c40()
            rcx_40 = data_143db18d0
        
        r8_15.b = 1
        int64_t* rax_82 = (*(*rcx_40 + 0xb0))(rcx_40, u"r.MaterialQualityLevel", r8_15)
        int64_t rax_83
        
        if (rax_82 == 0)
            rax_83 = 0
        else
            int64_t rdx_14 = *rax_82
            rax_83 = (*(rdx_14 + 0x58))(rax_82, rdx_14)
        
        data_143f5b6e0 = rax_83
        zmm0 = _Init_thread_footer(&data_143f5b6e8)

int32_t rcx_4 = *data_143f5b6e0

if (rcx_4 s>= 0)
    int32_t rax_32 = 2
    
    if (rcx_4 s< 2)
        rax_32 = rcx_4
    
    rdi = rax_32
    var_108[3] = rax_32
else
    var_108[3] = 0

if (data_143f5b6f8 s> *(rsi + 0x14))
    int64_t r8_1
    r8_1, zmm0 = _Init_thread_header(&data_143f5b6f8)
    
    if (data_143f5b6f8 == 0xffffffff)
        int64_t* rcx_13 = data_143db18d0
        
        if (rcx_13 == 0)
            sub_140a53c40()
            rcx_13 = data_143db18d0
        
        r8_1.b = 1
        data_143f5b6f0 = (*(*rcx_13 + 0xb0))(rcx_13, u"r.StaticMeshLODDistanceScale", r8_1)
        zmm0 = _Init_thread_footer(&data_143f5b6f8)

int64_t* rcx_5 = data_143f5b6f0
float result = (*(*rcx_5 + 0x98))(rcx_5)
bool cond:10 = r12 != data_143a30368:4.d
var_e8[1] = zmm0[0]
var_108[0].b = 1

if (cond:10 || rdi != data_143a30368:0xc.d || r15 != data_143a30378.d || r14 != data_143a30378:4.d
        || temp0[0] f!= data_143a30378:8.d || temp0[0] f!= data_143a30378:0xc.d
        || zmm0[0] f!= data_143a30388:4.d || data_143a30368.b == 0)
    sub_1419a21e0(0)
    char rcx_6
    char rbx_1
    
    if (data_143a30368.b != 0)
        rcx_6 = 0
        
        if (r12 != (data_143a30368.q u>> 0x20).d)
            rcx_6 = 1
        
        rbx_1 = 0
        
        if (rdi != (data_143a30368:8 u>> 0x20).d)
            rbx_1 = 1
    
    if (data_143a30368.b != 0 && (rcx_6 != 0 || rbx_1 != 0))
        void var_c8
        sub_141ed2300(&var_c8)
        data_143a303a0 = result_1
        data_143a30368 = var_108
        data_143a30378 = var_f8
        data_143a30398 = var_d8
        data_143a30388 = var_e8
        
        if (rbx_1 != 0)
            sub_14210d400()
            sub_14211e350()
        
        result = sub_141ed40e0(&var_c8)
    else
        result = result_1
        data_143a303a0 = result
        data_143a30368 = var_108
        data_143a30378 = var_f8
        data_143a30388 = var_e8
        data_143a30398 = var_d8

__security_check_cookie(rax_1 ^ &var_128)
return result
