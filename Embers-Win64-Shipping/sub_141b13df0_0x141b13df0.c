// 函数: sub_141b13df0
// 地址: 0x141b13df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
char var_e8
char var_e8_1 = var_e8 | 3
void** const var_128 = &data_143053388
int64_t var_120 = arg1
void var_e0
int128_t* rax_2 = sub_1405ab790(&var_e0, &arg3[0x22], arg3 + 0x124, &arg3[0x27], &var_128)
int64_t rdi = sx.q(arg3[1].d)
int32_t rcx_1 = (rdi + 1).d
arg3[1].d = rcx_1

if (rcx_1 s> *(arg3 + 0xc))
    sub_1405c5190(arg3)

sub_1405ab620(rdi * 0xc8 + *arg3, rax_2)
char var_20

if ((var_20 & 1) != 0)
    int64_t* var_60
    int64_t* rcx_5 = &var_60
    
    if ((var_20 & 2) == 0)
        rcx_5 = var_60
    
    (**rcx_5)(rcx_5, 0)
    
    if ((var_20 & 2) == 0)
        sub_140a74f90(var_60)

int64_t var_80

if (var_80 != 0)
    sub_140a74f90(var_80)

if ((var_e8_1 & 1) != 0)
    void** const* rcx_8 = &var_128
    
    if ((var_e8_1 & 2) == 0)
        rcx_8 = var_128
    
    (**rcx_8)(rcx_8, 0)
    
    if ((var_e8_1 & 2) == 0)
        sub_140a74f90(var_128)

TEB* gsbase
int32_t* rdi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f2c684 s> *rdi_2)
    _Init_thread_header(&data_143f2c684)
    
    if (data_143f2c684 == 0xffffffff)
        sub_141a387d0(&data_143f2c680)
        _Init_thread_footer(&data_143f2c684)

void* rax_10 = sub_141b1ff90(arg3, data_143f2c680)
int32_t var_198
int32_t* rdx_4 = &var_198
int32_t* result

if (rax_10 == 0)
    int32_t var_14c_1 = 0x80
    int32_t var_180_1 = 0
    void** const var_188 = &data_143053378
    int64_t var_178
    __builtin_memset(&var_178, 0, 0x2c)
    int32_t var_144_1 = 0
    int64_t var_138_1 = 0
    int32_t var_130_1 = 0
    int32_t var_148_1 = 0xffffffff
    sub_141aedd10(&var_178, rdx_4, arg2, nullptr)
    int32_t var_180_2 = 0x3e8
    
    if (data_143f2c684 s> *rdi_2)
        _Init_thread_header(&data_143f2c684)
        
        if (data_143f2c684 == 0xffffffff)
            sub_141a387d0(&data_143f2c680)
            _Init_thread_footer(&data_143f2c684)
    
    var_198 = data_143f2c680
    sub_141aeb310(&var_128, &var_188)
    sub_141aede20(&arg3[2], &var_198, &var_128)
    char var_108
    
    if ((var_108 & 1) != 0)
        void** const rcx_16 = &var_128
        
        if ((var_108 & 2) == 0)
            rcx_16 = var_128
        
        (**rcx_16)(rcx_16, 0)
        
        if ((var_108 & 2) == 0)
            sub_140a74f90(var_128)
    
    int32_t var_130_2 = 0
    
    if (var_138_1 != 0)
        sub_140a74f90(var_138_1)
    
    int64_t var_170
    var_170.d = 0
    int32_t var_148_2 = 0xffffffff
    int32_t var_144_2 = 0
    int64_t var_168
    result = sub_14059a8e0(&var_168, 0)
    int64_t var_158
    
    if (var_158 != 0)
        result = sub_140a74f90(var_158)
    
    int64_t rcx_22 = var_178
    
    if (rcx_22 != 0)
        result = sub_140a74f90(rcx_22)
else
    result = sub_141aedd10(rax_10 + 0x10, rdx_4, arg2, nullptr)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
