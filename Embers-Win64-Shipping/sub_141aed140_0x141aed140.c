// 函数: sub_141aed140
// 地址: 0x141aed140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
*(arg6 + 0x58) = *arg4
*(arg6 + 0x68) = *(arg5 + 0x50)
void* rax_4 = sub_1405a8fd0(arg1 + 0x50, sub_1405be5b0(arg2), arg2)
TEB* gsbase

if (data_143f2c700 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c700)
    
    if (data_143f2c700 == 0xffffffff)
        sub_141a6b800(&data_143f2c6f8)
        _Init_thread_footer(&data_143f2c700)

int64_t rax_5 = data_143f2c6f8
void** const var_b8 = &data_14305dba0
int64_t* var_a0
sub_141af5d00(&var_a0, arg6)
int64_t rbx_1 = sx.q(*(rax_4 + 8))
int32_t rax_6 = (rbx_1 + 1).d
*(rax_4 + 8) = rax_6

if (rax_6 s> *(rax_4 + 0xc))
    sub_1405c5340(rax_4)

void**** rbx_3 = rbx_1 * 0x88 + *rax_4
rbx_3[0x10].b &= 0xfc
void*** rax_7 = sub_140a82f30(0x90, 8)
char rcx_6 = rbx_3[0x10].b
void*** rdx_6 = rax_7
*rbx_3 = rax_7
rcx_6 |= 1
rbx_3[0x10].b = rcx_6

if ((rcx_6 & 2) != 0)
    rdx_6 = rbx_3

*rdx_6 = &data_142d4ba58
rdx_6[1] = arg3
rdx_6[2] = rax_5
*rdx_6 = &data_14305dba0
sub_141af5d00(&rdx_6[3], &var_a0)
char result_1
char result = result_1

if ((result & 1) != 0)
    int64_t* rcx_8 = &var_a0
    
    if ((result & 2) == 0)
        rcx_8 = var_a0
    
    char var_50 = result & 0xfe
    result = (**rcx_8)(rcx_8, 0)
    
    if ((var_50 & 2) == 0)
        result = sub_140a74f90(var_a0)

__security_check_cookie(rax_1 ^ &var_d8)
return result
