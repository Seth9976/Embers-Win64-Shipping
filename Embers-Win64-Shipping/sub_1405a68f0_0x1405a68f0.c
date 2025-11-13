// 函数: sub_1405a68f0
// 地址: 0x1405a68f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
TEB* gsbase

if (data_143cd6330 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd6330)
    
    if (data_143cd6330 == 0xffffffff)
        sub_141a6b800(&data_143cd6328)
        _Init_thread_footer(&data_143cd6330)

int64_t rax_4 = data_143cd6328
char var_48
char rcx = var_48 & 0xfe
char result_1 = rcx | 2
char rax_6 = *(arg3 + 0x18)
void** const var_78 = &data_142d4cbe0
int128_t var_60
int64_t var_50

if ((rax_6 & 1) != 0)
    int128_t zmm0 = *arg3
    rax_6 &= 0xfe
    int64_t zmm1 = arg3[1].q
    *(arg3 + 0x18) = rax_6
    var_50 = zmm1
    result_1 = (((rax_6 ^ rcx) & 2) ^ rcx) | 1
    var_60 = zmm0

int32_t rax_7 = arg3[3].d
int64_t rbx_1 = sx.q(arg1[1].d)
char rax_8 = *(arg3 + 0x38)
int32_t rax_9 = (rbx_1 + 1).d
int128_t var_40 = arg3[2]
int32_t var_2c = (*(arg3 + 0x34)).d
arg1[1].d = rax_9

if (rax_9 s> *(arg1 + 0xc))
    sub_1405c5340(arg1)

void*** rcx_3 = rbx_1 * 0x88 + *arg1
rcx_3[0x10].b = (rcx_3[0x10].b & 0xfe) | 3
*rcx_3 = &data_142d4ba58
rcx_3[1] = arg2
rcx_3[2] = rax_4
*rcx_3 = &data_142d4cbe0
char rax_13 = (rcx_3[6].b & 0xfe) | 2
rcx_3[6].b = rax_13

if ((result_1 & 1) != 0)
    rcx_3[6].b = rax_13 | 1
    char result_2 = result_1 & 0xfe
    result_1 = result_2
    rcx_3[6].b &= 0xfd
    rcx_3[6].b |= result_2 & 2
    *(rcx_3 + 0x18) = var_60
    rcx_3[5] = var_50

*(rcx_3 + 0x38) = var_40
rcx_3[9].d = rax_7
*(rcx_3 + 0x4c) = var_2c.d
rcx_3[0xa].b = rax_8
char result = result_1

if ((result & 1) != 0)
    int128_t* rcx_4 = &var_60
    
    if ((result & 2) == 0)
        rcx_4 = var_60.q
    
    char var_48_1 = result & 0xfe
    result = (**rcx_4)(rcx_4, 0)
    
    if ((var_48_1 & 2) == 0)
        result = sub_140a74f90(var_60.q)

__security_check_cookie(rax_1 ^ &var_98)
return result
