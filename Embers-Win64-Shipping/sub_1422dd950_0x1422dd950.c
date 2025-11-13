// 函数: sub_1422dd950
// 地址: 0x1422dd950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x528)
void*** result

if (rax == 0)
    result = nullptr
else
    result = sub_1405de720(rax, 0, 0, arg1, arg2)

int32_t arg_8 = arg3
int32_t arg_c = arg2
sub_1419d2b00(arg1, &arg_8, &result[0x18])
TEB* gsbase

if (data_143f56d08 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f56d08)
    
    if (data_143f56d08 == 0xffffffff)
        sub_1405947f0(&data_143f56cf8, 7)
        int32_t rax_12 = data_143f56d00 + 7
        bool cond:0_1 = rax_12 s<= data_143f56d04
        data_143f56d00 = rax_12
        
        if (not(cond:0_1))
            sub_140594770(&data_143f56cf8)
        
        UnDecorator::getReferenceType(data_143f56cf8, u"Global", 0xe)
        atexit(sub_142d0d170)
        _Init_thread_footer(&data_143f56d08)

int64_t var_58
__builtin_memset(&var_58, 0, 0x20)
void*** result_1 = result
void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 == 0)
    rax_4 = nullptr
else
    rax_4[1].d = 1
    *rax_4 = &data_142d42ea8
    *(rax_4 + 0xc) = 1
    rax_4[2] = result

void*** var_30 = rax_4
int32_t var_98
var_98.q = *(arg1 + 0x38)
int64_t var_48
sub_1422e5ed0(&data_143f56cf8, nullptr, arg1, arg4, var_98, *(arg1 + 0x40), 
    (zx.d(*(arg1 + 0x48)) & 0xf) | (arg3 & 0x7f) << 4 | (arg5 & 0xfffff800), &result_1, arg6, 1, 
    &var_58, &var_48)
int64_t rcx_5 = var_58

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_48

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return result
