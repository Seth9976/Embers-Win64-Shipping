// 函数: sub_141b6c8d0
// 地址: 0x141b6c8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
TEB* gsbase

if (data_143f315a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f315a8)
    
    if (data_143f315a8 == 0xffffffff)
        sub_141a6b800(&data_143f315a0)
        _Init_thread_footer(&data_143f315a8)

int64_t rax_4 = data_143f315a0
char var_50
char rcx = var_50 & 0xfe
char result_1 = rcx | 2
char rax_6 = arg3[1].b
void** const var_78 = &data_143084358
int128_t var_60

if ((rax_6 & 1) != 0)
    rax_6 &= 0xfe
    arg3[1].b = rax_6
    result_1 = (((rax_6 ^ rcx) & 2) ^ rcx) | 1
    var_60 = *arg3

int32_t rax_7 = *(arg3 + 0x28)
int64_t rbx_1 = sx.q(arg1[1].d)
char rax_8 = arg3[3].b
int32_t rax_9 = (rbx_1 + 1).d
int128_t var_48 = *(arg3 + 0x18)
int32_t var_34 = (*(arg3 + 0x2c)).d
arg1[1].d = rax_9

if (rax_9 s> *(arg1 + 0xc))
    sub_1405c5340(arg1)

void*** rcx_3 = rbx_1 * 0x88 + *arg1
rcx_3[0x10].b = (rcx_3[0x10].b & 0xfe) | 3
*rcx_3 = &data_142d4ba58
rcx_3[1] = arg2
rcx_3[2] = rax_4
*rcx_3 = &data_143084358
char rax_13 = (rcx_3[5].b & 0xfe) | 2
rcx_3[5].b = rax_13

if ((result_1 & 1) != 0)
    rcx_3[5].b = rax_13 | 1
    char result_2 = result_1 & 0xfe
    result_1 = result_2
    rcx_3[5].b &= 0xfd
    rcx_3[5].b |= result_2 & 2
    *(rcx_3 + 0x18) = var_60

*(rcx_3 + 0x30) = var_48
rcx_3[8].d = rax_7
*(rcx_3 + 0x44) = var_34.d
rcx_3[9].b = rax_8
char result = result_1

if ((result & 1) != 0)
    int128_t* rcx_4 = &var_60
    
    if ((result & 2) == 0)
        rcx_4 = var_60.q
    
    char var_50_1 = result & 0xfe
    result = (**rcx_4)(rcx_4, 0)
    
    if ((var_50_1 & 2) == 0)
        result = sub_140a74f90(var_60.q)

__security_check_cookie(rax_1 ^ &var_98)
return result
