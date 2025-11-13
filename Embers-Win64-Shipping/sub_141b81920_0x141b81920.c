// 函数: sub_141b81920
// 地址: 0x141b81920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_14307d5d0
sub_140d3a3a0(arg1 + 0x10c, nullptr)
*(arg1 + 0x114) = 0
sub_140ddb740(&arg1[0x24])
sub_140d93b50(&arg1[0x85])
uint64_t rcx_3 = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memcpy(&arg1[0x91], 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
int64_t rax = *(ThreadLocalStoragePointer + (rcx_3 << 3))
__builtin_memset(&arg1[0x94], 0, 0x50)
arg1[0xa1] = 0
arg1[0xa2] = 0
int16_t* var_c8

if (data_143f317f8 s> *(0x14 + rax))
    _Init_thread_header(&data_143f317f8)
    
    if (data_143f317f8 == 0xffffffff)
        var_c8 = nullptr
        int32_t var_c0_1 = 0
        sub_1405947f0(&var_c8, 0x1b)
        int32_t rax_15 = var_c0_1 + 0x1b
        
        if (rax_15 s> 0)
            sub_140594770(&var_c8)
        
        UnDecorator::getReferenceType(var_c8, u"/Engine/EngineFonts/Roboto", 0x36)
        sub_140af5b90(data_143ddb400, u"SlateStyle", u"DefaultFontName", &var_c8, &data_143de5780)
        int16_t* const rdx_10 = &data_142d40450
        
        if (rax_15 != 0)
            rdx_10 = var_c8
        
        sub_141b78fd0(&data_143f317e0, rdx_10, 0)
        int16_t* rcx_30 = var_c8
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        atexit(sub_142cf6480)
        _Init_thread_footer(&data_143f317f8)

int128_t zmm0 = data_14399f5e0
int32_t var_b8 = 0
int16_t var_b4 = 0
int64_t var_b0 = 0
int128_t var_a8 = zmm0
void var_98
int64_t* rax_1 = sub_140b58170(&var_98, "Bold", 1)
void var_80
sub_140693420(&arg1[0x85], sub_140d93a40(&var_80, data_143f317f0, 0xc, rax_1, &var_b8))
int64_t* var_48

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        (**var_48)(var_48)
        int32_t temp1_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_48 + 8))(var_48, 1)

arg1[0x21].d = 0
*(arg1 + 0x4f4) = 0
*(arg1 + 0x4fc) = 0
arg1[0x82].d = 1
*(arg1 + 0x414) = 6
arg1[0x83].b = 0
*(arg1 + 0x41c) = 0
arg1[0x84].d = 0x3f800000
*(arg1 + 0x47c) = 0
arg1[0x90].w = 0x100
arg1[0x93].b = 0
*(arg1 + 0x488) = data_14399f5e0

if (&var_c8 != &arg1[0x94])
    uint128_t zmm0_1 = *(arg1 + 0x4a0)
    *(arg1 + 0x4a0) = zx.o(0)
    int64_t* rbx_1 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

void* rdx_8 = data_143f317d8

if (rdx_8 == 0)
    void*** rax_7 = j_sub_140a82f30(0x2e8)
    void*** rdi_1 = rax_7
    
    if (rax_7 == 0)
        rdi_1 = nullptr
    else
        int64_t* rbx_2 = data_143e243c8
        void var_90
        int64_t* rax_8 = sub_140b58170(&var_90, "SpinBox", 1)
        int64_t rdx_2 = data_143e24458
        int16_t* r8_1 = *rax_8
        int64_t rax_9 = *rbx_2
        int16_t* var_88_1 = r8_1
        var_c8 = r8_1
        int64_t* rax_10 = (*(rax_9 + 0x88))(rbx_2, rdx_2)
        int64_t* rbx_3 = rax_10
        
        if (rax_10 == 0)
            sub_140e13700()
            rbx_3 = &data_143e266b0
        
        *rdi_1 = &data_142ec9360
        sub_14068e310(&rdi_1[1], &rbx_3[1])
        sub_14068e310(&rdi_1[0x12], &rbx_3[0x12])
        sub_14068e310(&rdi_1[0x23], &rbx_3[0x23])
        sub_14068e310(&rdi_1[0x34], &rbx_3[0x34])
        sub_14068e310(&rdi_1[0x45], &rbx_3[0x45])
        *(rdi_1 + 0x2b0) = *(rbx_3 + 0x2b0)
        rdi_1[0x58].b = rbx_3[0x58].b
        rdi_1[0x59] = rbx_3[0x59]
        void* rax_13 = rbx_3[0x5a]
        rdi_1[0x5a] = rax_13
        
        if (rax_13 != 0)
            *(rax_13 + 8) += 1
        
        *(rdi_1 + 0x2d8) = *(rbx_3 + 0x2d8)
    
    data_143f317d8 = rdi_1
    sub_141bf3c80(&rdi_1[5])
    sub_141bf3c80(&rdi_1[0x16])
    sub_141bf3c80(&rdi_1[0x27])
    sub_141bf3c80(&rdi_1[0x38])
    sub_141bf3c80(&rdi_1[0x49])
    sub_141bf3c80(&rdi_1[0x56])
    rdx_8 = data_143f317d8

sub_141b85fb0(&arg1[0x24], rdx_8)
return arg1
