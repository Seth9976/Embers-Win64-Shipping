// 函数: sub_1412f0580
// 地址: 0x1412f0580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t rbx = 0
int64_t var_8c
__builtin_memset(&var_8c, 0, 0x43)
void* rcx = arg2[8]
int128_t var_e8
__builtin_memset(&var_e8, 0, 0x30)
int128_t var_a0 = zx.o(0)
int16_t var_48 = 0
sub_140fdc870(rcx, &var_e8)
int64_t var_b8 = data_14395da00
int64_t var_b0 = data_14395da18
int64_t var_a8 = data_14395d9e8
int32_t var_90 = 0
void* var_108
sub_1419a2ec0(arg2[0xc], &var_108, &data_143ed5e80, 0)
void* var_f8
sub_1419a2ec0(arg2[0xc], &var_f8, &data_143eb7c90, 0)
void* r12 = var_108
var_e8.q = data_1439c9210
int64_t rax_6 = 0
void* var_100

if (r12 != 0)
    int64_t rdx_3 = sx.q(*(r12 + 0x10c))
    int64_t* rdi_2 = *(var_100 + 0x10)
    int64_t rsi_1 = rdx_3 << 3
    int64_t rax_7 = rdi_2[3]
    
    if (*(rsi_1 + rax_7) == 0)
        sub_1419ccf30(rdi_2, rdx_3.d)
        rax_7 = rdi_2[3]
    
    rax_6 = *(rsi_1 + rax_7)

void* rdi_3 = var_f8
var_e8:8.q = rax_6

if (rdi_3 != 0)
    int64_t rdx_4 = sx.q(*(rdi_3 + 0x10c))
    void* var_f0
    int64_t* rsi_2 = *(var_f0 + 0x10)
    int64_t r14_1 = rdx_4 << 3
    int64_t rbx_1 = rsi_2[3]
    
    if (*(r14_1 + rbx_1) == 0)
        sub_1419ccf30(rsi_2, rdx_4.d)
        rbx_1 = rsi_2[3]
    
    rbx = *(r14_1 + rbx_1)

int128_t var_c8
var_c8.q = rbx
sub_1419870b0(arg2[8], &var_e8, 2)
sub_14131ff20(rdi_3, arg2)
arg1[1] = var_100
*arg1 = r12
__security_check_cookie(rax_1 ^ &var_128)
return arg1
