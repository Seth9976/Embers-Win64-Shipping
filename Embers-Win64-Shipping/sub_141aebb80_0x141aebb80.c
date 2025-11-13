// 函数: sub_141aebb80
// 地址: 0x141aebb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
TEB* gsbase

if (data_143f2c620 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c620)
    
    if (data_143f2c620 == 0xffffffff)
        sub_141a6b800(&data_143f2c618)
        _Init_thread_footer(&data_143f2c620)

int64_t rax_4 = data_143f2c618
char var_48
char rcx = var_48 & 0xfe
char result_1 = rcx | 2
char rax_6 = *(arg3 + 0x28)
void** const var_88 = &data_14305db50
uint128_t var_70
int128_t var_60
uint64_t var_50

if ((rax_6 & 1) != 0)
    uint128_t zmm0 = *arg3
    rax_6 &= 0xfe
    int128_t zmm1 = arg3[1]
    *(arg3 + 0x28) = rax_6
    var_70 = zmm0
    result_1 = (((rax_6 ^ rcx) & 2) ^ rcx) | 1
    var_60 = zmm1
    var_50 = arg3[2].q

int32_t rax_7 = arg3[4].d
int64_t rbx_1 = sx.q(arg1[1].d)
char rax_8 = *(arg3 + 0x48)
int32_t rax_9 = (rbx_1 + 1).d
uint128_t var_40 = arg3[3]
int32_t var_2c = (*(arg3 + 0x44)).d
arg1[1].d = rax_9

if (rax_9 s> *(arg1 + 0xc))
    sub_1405c5340(arg1)

void*** rcx_3 = rbx_1 * 0x88 + *arg1
rcx_3[0x10].b = (rcx_3[0x10].b & 0xfe) | 3
*rcx_3 = &data_142d4ba58
rcx_3[1] = arg2
rcx_3[2] = rax_4
*rcx_3 = &data_14305db50
char rax_13 = (rcx_3[8].b & 0xfe) | 2
rcx_3[8].b = rax_13

if ((result_1 & 1) != 0)
    rcx_3[8].b = rax_13 | 1
    char result_2 = result_1 & 0xfe
    result_1 = result_2
    rcx_3[8].b &= 0xfd
    rcx_3[8].b |= result_2 & 2
    *(rcx_3 + 0x18) = var_70
    *(rcx_3 + 0x28) = var_60
    rcx_3[7] = var_50

*(rcx_3 + 0x48) = var_40
rcx_3[0xb].d = rax_7
*(rcx_3 + 0x5c) = var_2c.d
rcx_3[0xc].b = rax_8
char result = result_1

if ((result & 1) != 0)
    uint128_t* rcx_4 = &var_70
    
    if ((result & 2) == 0)
        rcx_4 = var_70.q
    
    char var_48_1 = result & 0xfe
    result = (**rcx_4)(rcx_4, 0)
    
    if ((var_48_1 & 2) == 0)
        result = sub_140a74f90(var_70.q)

__security_check_cookie(rax_1 ^ &var_a8)
return result
