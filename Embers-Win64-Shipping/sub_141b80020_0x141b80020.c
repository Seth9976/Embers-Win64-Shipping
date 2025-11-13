// 函数: sub_141b80020
// 地址: 0x141b80020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_1430765e0
arg1[0x21].b &= 0xfc
*(arg1 + 0x109) = 0
arg1[0x23] = 0
arg1[0x24].d = 0
*(arg1 + 0x10d) &= 0xfe
__builtin_memset(&arg1[0x22], 0, 0x14)
*(arg1 + 0x124) = 0x3f800000
*arg1 = &data_143078f60
sub_140a96170(&arg1[0x25])
sub_140a96170(&arg1[0x28])
sub_140d3a3a0(&arg1[0x2b], nullptr)
arg1[0x2c] = 0
sub_140ddd1b0(&arg1[0x2d])
sub_140d93b50(&arg1[0x7b])
void* rdx = data_143f31748
*(arg1 + 0x42d) = 0
__builtin_memset(&arg1[0x86], 0, 0x30)
void arg_8

if (rdx == 0)
    void*** rax_1 = j_sub_140a82f30(0x268)
    void*** rbx_2
    
    if (rax_1 == 0)
        rbx_2 = nullptr
    else
        int64_t* rbx_1 = data_143e243c8
        int64_t* rax_2 = sub_140b58170(&arg_8, "NormalText", 1)
        int64_t r9_1 = *rbx_1
        int64_t r8_1 = *rax_2
        int64_t arg_18 = r8_1
        int64_t arg_20 = r8_1
        void* rax_3 = (*(r9_1 + 0x88))(rbx_1, data_143e243e0, r8_1, r9_1)
        
        if (rax_3 == 0)
            rax_3 = sub_140e13900()
        
        rbx_2 = sub_140ddd070(rax_1, rax_3)
    
    data_143f31748 = rbx_2
    sub_141bf3c80(&rbx_2[0xb])
    sub_141bf3c80(&rbx_2[0x13])
    sub_141bf3c80(&rbx_2[0x1e])
    sub_141bf3c80(&rbx_2[0x2f])
    sub_141bf3c80(&rbx_2[0x40])
    rdx = data_143f31748

sub_140de1940(&arg1[0x2d], rdx)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*(arg1 + 0x10d) |= 1
arg1[0x7a].b = 0
arg1[0x85].d = 0x1000100
int64_t rcx_15 = *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
*(arg1 + 0x42c) = 1
*(arg1 + 0xc2) = 1
*(arg1 + 0x42e) = 0
int32_t var_a8

if (data_143f31768 s> *(0x14 + rcx_15))
    _Init_thread_header(&data_143f31768)
    
    if (data_143f31768 == 0xffffffff)
        var_a8.q = 0
        int32_t var_a0_2 = 0
        sub_1405947f0(&var_a8, 0x1b)
        int32_t rax_11 = var_a0_2 + 0x1b
        
        if (rax_11 s> 0)
            sub_140594770(&var_a8)
        
        UnDecorator::getReferenceType(var_a8.q, u"/Engine/EngineFonts/Roboto", 0x36)
        sub_140af5b90(data_143ddb400, u"SlateStyle", u"DefaultFontName", &var_a8, &data_143de5780)
        int16_t* const rdx_7 = &data_142d40450
        
        if (rax_11 != 0)
            rdx_7 = var_a8.q
        
        sub_141b78fd0(&data_143f31750, rdx_7, 0)
        int64_t rcx_26 = var_a8.q
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        atexit(sub_142cf6510)
        _Init_thread_footer(&data_143f31768)

int128_t zmm0 = data_14399f5e0
var_a8 = 0
int16_t var_a4 = 0
int64_t var_a0_1 = 0
int128_t var_98 = zmm0
int64_t* rax_6 = sub_140b58170(&arg_8, "Bold", 1)
void var_88
sub_140693420(&arg1[0x7b], sub_140d93a40(&var_88, data_143f31760, 0xc, rax_6, &var_a8))
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp1_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

sub_140d962e0(&arg1[0x2e], &arg1[0x7b])
return arg1
