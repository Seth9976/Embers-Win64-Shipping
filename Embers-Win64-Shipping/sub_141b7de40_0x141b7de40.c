// 函数: sub_141b7de40
// 地址: 0x141b7de40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_1430768a8
sub_140a96170(&arg1[0x21])
sub_140d3a3a0(&arg1[0x24], nullptr)
arg1[0x25] = 0
sub_140a96170(&arg1[0x26])
sub_140d3a3a0(&arg1[0x29], nullptr)
arg1[0x2a] = 0
sub_140dd7e20(&arg1[0x2b])
sub_140d93b50(&arg1[0x72])
void* rdx = data_143f316b8
__builtin_memcpy(&arg1[0x7c], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
arg1[0x7f] = 0
arg1[0x80] = 0
*(arg1 + 0x417) = 0
*(arg1 + 0x41b) &= 0xfc
*(arg1 + 0x41c) = 0
__builtin_memset(&arg1[0x84], 0, 0x30)
int16_t* var_c8

if (rdx == 0)
    void*** rax_1 = j_sub_140a82f30(0x218)
    void*** rsi_1 = rax_1
    
    if (rax_1 == 0)
        rsi_1 = nullptr
    else
        int64_t* rbx_1 = data_143e243c8
        void var_98
        int64_t* rax_2 = sub_140b58170(&var_98, "NormalEditableText", 1)
        int64_t rdx_1 = data_143e24408
        int16_t* r8_1 = *rax_2
        int64_t rax_3 = *rbx_1
        int16_t* var_90_1 = r8_1
        var_c8 = r8_1
        void* rax_4 = (*(rax_3 + 0x88))(rbx_1, rdx_1)
        void* rbx_2 = rax_4
        
        if (rax_4 == 0)
            sub_140e13360()
            rbx_2 = &data_143e25180
        
        *rsi_1 = &data_142ec9288
        rsi_1[1] = *(rbx_2 + 8)
        rsi_1[2] = *(rbx_2 + 0x10)
        *(rsi_1 + 0x18) = *(rbx_2 + 0x18)
        *(rsi_1 + 0x28) = *(rbx_2 + 0x28)
        rsi_1[7] = *(rbx_2 + 0x38)
        void* rax_8 = *(rbx_2 + 0x40)
        rsi_1[8] = rax_8
        
        if (rax_8 != 0)
            *(rax_8 + 8) += 1
        
        rsi_1[9] = *(rbx_2 + 0x48)
        rsi_1[0xa].d = *(rbx_2 + 0x50)
        *(rsi_1 + 0x54) = *(rbx_2 + 0x54)
        *(rsi_1 + 0x58) = *(rbx_2 + 0x58)
        rsi_1[0xd].b = *(rbx_2 + 0x68)
        rsi_1[0xe] = *(rbx_2 + 0x70)
        void* rax_14 = *(rbx_2 + 0x78)
        rsi_1[0xf] = rax_14
        
        if (rax_14 != 0)
            *(rax_14 + 8) += 1
        
        sub_14068e310(&rsi_1[0x10], rbx_2 + 0x80)
        sub_14068e310(&rsi_1[0x21], rbx_2 + 0x108)
        sub_14068e310(&rsi_1[0x32], rbx_2 + 0x190)
    
    data_143f316b8 = rsi_1
    sub_141bf3c80(&rsi_1[0xb])
    sub_141bf3c80(&rsi_1[0x14])
    sub_141bf3c80(&rsi_1[0x25])
    sub_141bf3c80(&rsi_1[0x36])
    rdx = data_143f316b8

sub_141b85ed0(&arg1[0x2b], rdx)
arg1[0x7e].b = 0
*(arg1 + 0x3e0) = data_14399f5e0
uint128_t zmm0_2

if (&var_c8 != &arg1[0x7f])
    zmm0_2 = *(arg1 + 0x3f8)
    *(arg1 + 0x3f8) = zx.o(0)
    int64_t* rbx_3 = _mm_bsrli_si128(zmm0_2, 8).q
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp2_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

TEB* gsbase

if (data_143f316d8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f316d8)
    
    if (data_143f316d8 == 0xffffffff)
        var_c8 = nullptr
        int32_t var_c0_1 = 0
        sub_1405947f0(&var_c8, 0x1b)
        int32_t rax_24 = var_c0_1 + 0x1b
        
        if (rax_24 s> 0)
            sub_140594770(&var_c8)
        
        UnDecorator::getReferenceType(var_c8, u"/Engine/EngineFonts/Roboto", 0x36)
        sub_140af5b90(data_143ddb400, u"SlateStyle", u"DefaultFontName", &var_c8, &data_143de5780)
        int16_t* const rdx_8 = &data_142d40450
        
        if (rax_24 != 0)
            rdx_8 = var_c8
        
        sub_141b78fd0(&data_143f316c0, rdx_8, 0)
        int16_t* rcx_29 = var_c8
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        atexit(sub_142cf64e0)
        _Init_thread_footer(&data_143f316d8)

zmm0_2 = data_14399f5e0
int32_t var_b8 = 0
int16_t var_b4 = 0
int64_t var_b0 = 0
uint128_t var_a8 = zmm0_2
int64_t* rax_19 = sub_140b58170(&var_c8, "Bold", 1)
void var_88
sub_140693420(&arg1[0x72], sub_140d93a40(&var_88, data_143f316d0, 0xc, rax_19, &var_b8))
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp3_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

arg1[0x81].w = 0
*(arg1 + 0x40c) = 0
arg1[0x82].d = 0x1000001
*(arg1 + 0x414) = 0x100
arg1[0x83].w = 0
*(arg1 + 0xc2) = 1
return arg1
