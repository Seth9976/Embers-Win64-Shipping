// 函数: sub_141b7e310
// 地址: 0x141b7e310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b82ae0(arg1, arg2)
*arg1 = &data_143076bc8
sub_140a96170(&arg1[0x21])
sub_140d3a3a0(&arg1[0x24], nullptr)
void*** rsi = nullptr
arg1[0x25] = 0
sub_140dd79c0(&arg1[0x26])
sub_140a96170(&arg1[0x125])
sub_140d3a3a0(&arg1[0x128], nullptr)
arg1[0x129] = 0
sub_140d93b50(&arg1[0x12a])
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rcx_6 = zx.q(data_14401b1a0)
arg1[0x13b] = 0
arg1[0x13c] = 0
*(arg1 + 0x9ef) = 0
*(arg1 + 0x9f3) &= 0xfc
int64_t rcx_7 = *(ThreadLocalStoragePointer + (rcx_6 << 3))
*(arg1 + 0x9f4) = 0
__builtin_memset(&arg1[0x13f], 0, 0x30)
*(arg1 + 0x9a0) = data_14399f5e0
*(arg1 + 0x9b0) = data_14399f5c0
*(arg1 + 0x9c0) = data_14399f5e0
int16_t* var_a8

if (data_143f31700 s> *(0x14 + rcx_7))
    _Init_thread_header(&data_143f31700)
    
    if (data_143f31700 == 0xffffffff)
        var_a8 = nullptr
        int32_t var_a0_1 = 0
        sub_1405947f0(&var_a8, 0x1b)
        int32_t rax_10 = var_a0_1 + 0x1b
        
        if (rax_10 s> 0)
            sub_140594770(&var_a8)
        
        UnDecorator::getReferenceType(var_a8, u"/Engine/EngineFonts/Roboto", 0x36)
        sub_140af5b90(data_143ddb400, u"SlateStyle", u"DefaultFontName", &var_a8, &data_143de5780)
        int16_t* const rdx_6 = &data_142d40450
        
        if (rax_10 != 0)
            rdx_6 = var_a8
        
        sub_141b78fd0(&data_143f316e8, rdx_6, 0)
        int16_t* rcx_22 = var_a8
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        atexit(sub_142cf6450)
        _Init_thread_footer(&data_143f31700)

int128_t zmm0 = data_14399f5e0
int32_t var_98 = 0
int16_t var_94 = 0
int64_t var_90 = 0
int128_t var_88 = zmm0
void arg_8
int64_t* rax_1 = sub_140b58170(&arg_8, "Bold", 1)
void var_78
sub_140693420(&arg1[0x12a], sub_140d93a40(&var_78, data_143f316f8, 0xc, rax_1, &var_98))
int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t temp1_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_40 + 8))(var_40, 1)

void* rdx_4 = data_143f316e0
arg1[0x13a].w = 0
__builtin_memset(arg1 + 0x9d4, 0, 0x14)
arg1[0x13d].d = 0x1000001
*(arg1 + 0x9ec) = 0x100
*(arg1 + 0x9f1) = 0

if (rdx_4 == 0)
    void*** rax_5 = j_sub_140a82f30(0x7f0)
    
    if (rax_5 != 0)
        int64_t* rbx_1 = data_143e243c8
        void arg_18
        int64_t* rax_6 = sub_140b58170(&arg_18, "NormalEditableTextBox", 1)
        int64_t r9_2 = *rbx_1
        int64_t rdx_2 = data_143e24410
        int16_t* r8_1 = *rax_6
        int16_t* arg_20 = r8_1
        var_a8 = r8_1
        void* rax_7 = (*(r9_2 + 0x88))(rbx_1, rdx_2, r8_1, r9_2)
        
        if (rax_7 == 0)
            rax_7 = sub_140e132e0()
        
        rsi = sub_140dd7810(rax_5, rax_7)
    
    data_143f316e0 = rsi
    sub_141bf3cf0(rsi)
    rdx_4 = data_143f316e0

sub_140de1700(&arg1[0x26], rdx_4)
return arg1
