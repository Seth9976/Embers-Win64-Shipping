// 函数: sub_141b803e0
// 地址: 0x141b803e0
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
*arg1 = &data_143079290
sub_140a96170(&arg1[0x25])
sub_140a96170(&arg1[0x28])
sub_140d3a3a0(&arg1[0x2b], nullptr)
arg1[0x2c] = 0
sub_140dd79c0(&arg1[0x2d])
sub_140ddd1b0(&arg1[0x12b])
*(arg1 + 0xbc2) = 0
sub_140d93b50(&arg1[0x17a])
bool cond:0 = data_143f31770 != 0
__builtin_memset(&arg1[0x18a], 0, 0x30)
*(arg1 + 0xc20) = data_14399f5e0
*(arg1 + 0xc30) = data_14399f5c0
*(arg1 + 0xc40) = data_14399f5e0
int16_t* var_c8
int64_t var_b8

if (not(cond:0))
    void*** rax_1 = j_sub_140a82f30(0x7f0)
    void*** rax_5
    
    if (rax_1 == 0)
        rax_5 = nullptr
    else
        int64_t* rbx_1 = data_143e243c8
        int64_t* rax_2 = sub_140b58170(&var_b8, "NormalEditableTextBox", 1)
        int64_t rdx = data_143e24410
        int16_t* r8_1 = *rax_2
        int64_t rax_3 = *rbx_1
        int16_t* var_b0_1 = r8_1
        var_c8 = r8_1
        void* rax_4 = (*(rax_3 + 0x88))(rbx_1, rdx)
        
        if (rax_4 == 0)
            rax_4 = sub_140e132e0()
        
        rax_5 = sub_140dd7810(rax_1, rax_4)
    
    data_143f31770 = rax_5
    sub_141bf3cf0(rax_5)

if (data_143f31778 == 0)
    void*** rax_6 = j_sub_140a82f30(0x268)
    void*** rbx_3
    
    if (rax_6 == 0)
        rbx_3 = nullptr
    else
        int64_t* rbx_2 = data_143e243c8
        int64_t* rax_7 = sub_140b58170(&var_c8, "NormalText", 1)
        int64_t rdx_2 = data_143e243e0
        int64_t r8_2 = *rax_7
        int64_t rax_8 = *rbx_2
        int64_t var_b0_2 = r8_2
        var_b8 = r8_2
        void* rax_9 = (*(rax_8 + 0x88))(rbx_2, rdx_2)
        
        if (rax_9 == 0)
            rax_9 = sub_140e13900()
        
        rbx_3 = sub_140ddd070(rax_6, rax_9)
    
    data_143f31778 = rbx_3
    sub_141bf3c80(&rbx_3[0xb])
    sub_141bf3c80(&rbx_3[0x13])
    sub_141bf3c80(&rbx_3[0x1e])
    sub_141bf3c80(&rbx_3[0x2f])
    sub_141bf3c80(&rbx_3[0x40])

sub_140de1700(&arg1[0x2d], data_143f31770)
sub_140de1940(&arg1[0x12b], data_143f31778)
uint64_t rcx_20 = zx.q(data_14401b1a0)
*(arg1 + 0x10d) |= 1
TEB* gsbase
int64_t rax_12 = *(gsbase->ThreadLocalStoragePointer + (rcx_20 << 3))
arg1[0x178].w = 0x100
*(arg1 + 0xbc3) = 0

if (data_143f31798 s> *(0x14 + rax_12))
    _Init_thread_header(&data_143f31798)
    
    if (data_143f31798 == 0xffffffff)
        var_c8 = nullptr
        int32_t var_c0_1 = 0
        sub_1405947f0(&var_c8, 0x1b)
        int32_t rax_25 = var_c0_1 + 0x1b
        
        if (rax_25 s> 0)
            sub_140594770(&var_c8)
        
        UnDecorator::getReferenceType(var_c8, u"/Engine/EngineFonts/Roboto", 0x36)
        sub_140af5b90(data_143ddb400, u"SlateStyle", u"DefaultFontName", &var_c8, &data_143de5780)
        int16_t* const rdx_10 = &data_142d40450
        
        if (rax_25 != 0)
            rdx_10 = var_c8
        
        sub_141b78fd0(&data_143f31780, rdx_10, 0)
        int16_t* rcx_38 = var_c8
        
        if (rcx_38 != 0)
            sub_140a74f90(rcx_38)
        
        atexit(sub_142cf65a0)
        _Init_thread_footer(&data_143f31798)

int128_t zmm0_1 = data_14399f5e0
int32_t var_a8 = 0
int16_t var_a4 = 0
int64_t var_a0 = 0
int128_t var_98 = zmm0_1
int64_t* rax_13 = sub_140b58170(&var_c8, "Bold", 1)
void var_88
sub_140693420(&arg1[0x17a], sub_140d93a40(&var_88, data_143f31790, 0xc, rax_13, &var_a8))
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp1_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

sub_140d962e0(&arg1[0x74], &arg1[0x17a])
arg1[0x80].b = 0
int512_t zmm1
zmm1.o = zx.o(0)
*(arg1 + 0x3f0) = *(arg1 + 0xc20)
uint128_t zmm0_2

if (&var_c8 != &arg1[0x81])
    zmm0_2 = *(arg1 + 0x408)
    *(arg1 + 0x408) = zx.o(0)
    int64_t* rbx_5 = _mm_bsrli_si128(zmm0_2, 8).q
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp4_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)

arg1[0x85].b = 0
zmm1.o = zx.o(0)
*(arg1 + 0x418) = *(arg1 + 0xc30)

if (&var_c8 != &arg1[0x86])
    zmm0_2 = *(arg1 + 0x430)
    *(arg1 + 0x430) = zx.o(0)
    int64_t* rbx_6 = _mm_bsrli_si128(zmm0_2, 8).q
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            (**rbx_6)(rbx_6)
            int32_t temp6_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_6 + 8))(rbx_6, 1)

arg1[0x8a].b = 0
zmm1.o = zx.o(0)
*(arg1 + 0x440) = *(arg1 + 0xc40)

if (&var_c8 != &arg1[0x8b])
    zmm0_2 = *(arg1 + 0x458)
    *(arg1 + 0x458) = zx.o(0)
    int64_t* rbx_7 = _mm_bsrli_si128(zmm0_2, 8).q
    
    if (rbx_7 != 0)
        rbx_7[1].d -= 1
        
        if (rbx_7[1].d == 1)
            int64_t r8_3 = *rbx_7
            (*r8_3)(rbx_7, zmm1, r8_3)
            int32_t temp7_1 = *(rbx_7 + 0xc)
            *(rbx_7 + 0xc) -= 1
            
            if (temp7_1 == 1)
                int64_t r8_4 = *rbx_7
                (*(r8_4 + 8))(rbx_7, 1, r8_4)

return arg1
