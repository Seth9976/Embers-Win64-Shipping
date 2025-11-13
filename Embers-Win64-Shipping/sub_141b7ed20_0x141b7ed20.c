// 函数: sub_141b7ed20
// 地址: 0x141b7ed20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_143078140
sub_140dd6180(&arg1[0x21])
sub_140ddd1b0(&arg1[0x70])
arg1[0xbd] = data_143e202b8
arg1[0xbe] = data_143e202c0
void* rax_2 = data_143e202c8
arg1[0xbf] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[0xc0].d &= 0xfffffff0
sub_140d93b50(&arg1[0xc1])
void*** rbx = nullptr
arg1[0xcb] = 0
arg1[0xcc] = 0
sub_140a96170(&arg1[0xcf])
sub_140a96170(&arg1[0xd2])
bool cond:0 = data_143f31718 != 0
__builtin_memset(&arg1[0xd6], 0, 0x40)

if (not(cond:0))
    void*** rax_3 = j_sub_140a82f30(0x278)
    
    if (rax_3 != 0)
        int64_t* rbx_1 = data_143e243c8
        void arg_8
        int64_t* rax_4 = sub_140b58170(&arg_8, "Button", 1)
        int64_t r9_1 = *rbx_1
        int64_t r8_1 = *rax_4
        int64_t arg_18 = r8_1
        int64_t arg_20 = r8_1
        void* rax_5 = (*(r9_1 + 0x88))(rbx_1, data_143e243e8, r8_1, r9_1)
        
        if (rax_5 == 0)
            rax_5 = sub_140e13010()
        
        rbx = sub_14068def0(rax_3, rax_5)
    
    data_143f31718 = rbx
    sub_141bf3c80(&rbx[5])
    sub_141bf3c80(&rbx[0x16])
    sub_141bf3c80(&rbx[0x27])
    sub_141bf3c80(&rbx[0x38])
    rbx = nullptr

if (data_143f31720 == 0)
    void*** rax_7 = j_sub_140a82f30(0x268)
    
    if (rax_7 != 0)
        int64_t* rbx_2 = data_143e243c8
        void var_d8
        int64_t* rax_8 = sub_140b58170(&var_d8, "NormalText", 1)
        int64_t r9_2 = *rbx_2
        int64_t r8_2 = *rax_8
        int64_t var_d0_1 = r8_2
        int64_t var_c8_1 = r8_2
        void* rax_9 = (*(r9_2 + 0x88))(rbx_2, data_143e243e0, r8_2, r9_2)
        
        if (rax_9 == 0)
            rax_9 = sub_140e13900()
        
        rbx = sub_140ddd070(rax_7, rax_9)
    
    data_143f31720 = rbx
    sub_141bf3c80(&rbx[0xb])
    sub_141bf3c80(&rbx[0x13])
    sub_141bf3c80(&rbx[0x1e])
    sub_141bf3c80(&rbx[0x2f])
    sub_141bf3c80(&rbx[0x40])

sub_140de14d0(&arg1[0x21], data_143f31718)
sub_140de1940(&arg1[0x70], data_143f31720)
void var_b8
int64_t* rax_11 = _vfprintf_p_l(&var_b8, &data_142e1f8a0, u"InputKeySelector")
int64_t rdx_6 = arg1[0xcf]
arg1[0xcf] = *rax_11
*rax_11 = rdx_6
int64_t rdx_7 = arg1[0xd0]
arg1[0xd0] = rax_11[1]
rax_11[1] = rdx_7
arg1[0xd1].d = rax_11[2].d
int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t rax_15 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rax_15 == 1)
            (*(*var_b0 + 8))(var_b0, 1)

void var_a0
int64_t* rax_17 = _vfprintf_p_l(&var_a0, u"Empty", u"InputKeySelector")
int64_t rdx_8 = arg1[0xd2]
arg1[0xd2] = *rax_17
*rax_17 = rdx_8
int64_t rdx_9 = arg1[0xd3]
arg1[0xd3] = rax_17[1]
rax_17[1] = rdx_9
arg1[0xd4].d = rax_17[2].d
int64_t* var_98

if (var_98 != 0)
    var_98[1].d -= 1
    
    if (var_98[1].d == 1)
        (**var_98)(var_98)
        int32_t rsi_3 = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (rsi_3 == 1)
            (*(*var_98 + 8))(var_98, zx.q(rsi_3))

int64_t* rbx_5 = data_143e202c8
int64_t rcx_32 = data_143e202c0

if (rbx_5 != 0)
    rbx_5[1].d += 1

int64_t var_118 = data_143e202b8
int64_t var_110 = rcx_32

if (rbx_5 != 0)
    rbx_5[1].d += 1

int32_t var_100
int32_t var_100_1 = var_100 & 0xfffffff0

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp3_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

sub_140627710(&arg1[0xbd], &var_118)
arg1[0xc0].d &= 0xfffffff0
arg1[0xc0].d |= var_100_1 & 0xf

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp4_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

arg1[0xd5].w = 1
sub_141b6d510(&arg1[0xd6], &data_143e1ec80)
TEB* gsbase

if (data_143f31740 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f31740)
    
    if (data_143f31740 == 0xffffffff)
        int16_t* var_128 = nullptr
        int32_t var_120_1 = 0
        sub_1405947f0(&var_128, 0x1b)
        int32_t rax_36 = var_120_1 + 0x1b
        
        if (rax_36 s> 0)
            sub_140594770(&var_128)
        
        UnDecorator::getReferenceType(var_128, u"/Engine/EngineFonts/Roboto", 0x36)
        sub_140af5b90(data_143ddb400, u"SlateStyle", u"DefaultFontName", &var_128, &data_143de5780)
        int16_t* const rdx_15 = &data_142d40450
        
        if (rax_36 != 0)
            rdx_15 = var_128
        
        sub_141b78fd0(&data_143f31728, rdx_15, 0)
        int16_t* rcx_50 = var_128
        
        if (rcx_50 != 0)
            sub_140a74f90(rcx_50)
        
        atexit(sub_142cf6570)
        _Init_thread_footer(&data_143f31740)

int128_t zmm0 = data_14399f5e0
int32_t var_f8 = 0
int16_t var_f4 = 0
int64_t var_f0 = 0
int128_t var_e8 = zmm0
void var_c0
int64_t* rax_31 = sub_140b58170(&var_c0, "Bold", 1)
void var_88
sub_140693420(&arg1[0x71], sub_140d93a40(&var_88, data_143f31738, 0x18, rax_31, &var_f8))
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp6_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

return arg1
