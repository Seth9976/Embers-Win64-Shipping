// 函数: sub_141b16690
// 地址: 0x141b16690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
TEB* gsbase

if (data_143f2c73c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c73c)
    
    if (data_143f2c73c == 0xffffffff)
        sub_141a387d0(&data_143f2c738)
        _Init_thread_footer(&data_143f2c73c)

int32_t rbx = data_143f2c738
void* result = sub_141b1ff90(arg1, rbx)

if (result == 0)
    char var_20
    char result_1 = var_20 | 3
    int32_t var_38_1 = 0xffffff9c
    void** const var_40 = &data_143056468
    int32_t var_48 = rbx
    sub_141aede20(arg1 + 0x10, &var_48, &var_40)
    result = zx.q(result_1)
    
    if ((result.b & 1) != 0)
        void** const* rcx_4 = &var_40
        
        if ((result.b & 2) == 0)
            rcx_4 = var_40
        
        result.b &= 0xfe
        char var_20_1 = result.b
        result = (**rcx_4)(rcx_4, 0)
        
        if ((var_20_1 & 2) == 0)
            result = sub_140a74f90(var_40)

__security_check_cookie(rax_1 ^ &var_68)
return result
