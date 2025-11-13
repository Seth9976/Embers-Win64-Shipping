// 函数: sub_141a285f0
// 地址: 0x141a285f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
TEB* gsbase

if (data_143f2a880 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2a880)
    
    if (data_143f2a880 == 0xffffffff)
        int64_t rax_20 = data_143f29fa0 + 1
        data_143f29fa0 = rax_20
        data_143f2a878 = sub_141a4fae0(&data_143f29fa0, rax_20.d)
        _Init_thread_footer(&data_143f2a880)

int64_t rax_4 = data_143f2a878
char var_48
char rcx = var_48 & 0xfe
char result_1 = rcx | 2
char rax_6 = arg3[1].b
void** const var_68 = &data_14302f4c8
int64_t* var_50

if ((rax_6 & 1) != 0)
    rax_6 &= 0xfe
    arg3[1].b = rax_6
    result_1 = (((rax_6 ^ rcx) & 2) ^ rcx) | 1
    var_50 = *arg3

int32_t rax_8 = arg3[4].d
int64_t rbx_1 = sx.q(arg1[1].d)
char rax_9 = arg3[5].b
int32_t rax_10 = (rbx_1 + 1).d
int128_t var_40 = *(arg3 + 0x10)
int32_t var_2c = (*(arg3 + 0x24)).d
arg1[1].d = rax_10

if (rax_10 s> *(arg1 + 0xc))
    sub_1405c5340(arg1)

void*** rcx_3 = rbx_1 * 0x88 + *arg1
rcx_3[0x10].b = (rcx_3[0x10].b & 0xfe) | 3
*rcx_3 = &data_142d4ba58
rcx_3[1] = arg2
rcx_3[2] = rax_4
*rcx_3 = &data_14302f4c8
char rax_14 = (rcx_3[4].b & 0xfe) | 2
rcx_3[4].b = rax_14

if ((result_1 & 1) != 0)
    rcx_3[4].b = rax_14 | 1
    char result_2 = result_1 & 0xfe
    result_1 = result_2
    rcx_3[4].b &= 0xfd
    rcx_3[4].b |= result_2 & 2
    rcx_3[3] = var_50

*(rcx_3 + 0x28) = var_40
rcx_3[7].d = rax_8
*(rcx_3 + 0x3c) = var_2c.d
rcx_3[8].b = rax_9
char result = result_1

if ((result & 1) != 0)
    int64_t* rcx_4 = &var_50
    
    if ((result & 2) == 0)
        rcx_4 = var_50
    
    char var_48_1 = result & 0xfe
    result = (**rcx_4)(rcx_4, 0)
    
    if ((var_48_1 & 2) == 0)
        result = sub_140a74f90(var_50)

__security_check_cookie(rax_1 ^ &var_88)
return result
