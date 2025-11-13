// 函数: sub_141336560
// 地址: 0x141336560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t var_7c
__builtin_memset(&var_7c, 0, 0x43)
void* rcx = arg1[8]
int128_t var_d8
__builtin_memset(&var_d8, 0, 0x30)
int128_t var_90 = zx.o(0)
int16_t var_38 = 0
sub_140fdc870(rcx, &var_d8)
int64_t var_a8 = data_14395da00
int64_t var_a0 = data_14395da18
int64_t var_98 = data_14395d9e8
void* var_f8
sub_1419a2ec0(arg1[0xc], &var_f8, &data_143ebb760, 0)
void* var_e8
sub_1419a2ec0(arg1[0xc], &var_e8, &data_143ebf8c0, 0)
void* r15 = var_f8
var_d8.q = data_1439c9210
int64_t rax_6 = 0

if (r15 != 0)
    int64_t rdx_3 = sx.q(*(r15 + 0x10c))
    void* var_f0
    int64_t* rbx_1 = *(var_f0 + 0x10)
    int64_t rdi_1 = rdx_3 << 3
    int64_t rax_8 = rbx_1[3]
    
    if (*(rdi_1 + rax_8) == 0)
        sub_1419ccf30(rbx_1, rdx_3.d)
        rax_8 = rbx_1[3]
    
    rax_6 = *(rdi_1 + rax_8)

void* rdi_2 = var_e8
var_d8:8.q = rax_6
int64_t rax_9 = 0

if (rdi_2 != 0)
    int64_t rdx_4 = sx.q(*(rdi_2 + 0x10c))
    void* var_e0
    int64_t* rbx_2 = *(var_e0 + 0x10)
    int64_t rsi_1 = rdx_4 << 3
    int64_t rax_11 = rbx_2[3]
    
    if (*(rsi_1 + rax_11) == 0)
        sub_1419ccf30(rbx_2, rdx_4.d)
        rax_11 = rbx_2[3]
    
    rax_9 = *(rsi_1 + rax_11)

int128_t var_b8
var_b8.q = rax_9
int32_t var_80 = 0
sub_1419870b0(arg1[8], &var_d8, 2)
void* rdx_6 = arg1[8]
int64_t rbx_3 = *(rdx_6 + 0x188)
sub_141080be0(r15, rdx_6, rbx_3, *(*arg1 + 0x10))
sub_1413aa060(r15 + 0x118, rbx_3, arg1, data_14395fa10, 0, nullptr)
void* rdx_8 = arg1[8]
int64_t rbx_4 = *(rdx_8 + 0x1a0)
sub_141080ac0(rdi_2, rdx_8, rbx_4, *(*arg1 + 0x10))
int64_t* var_110
var_110.d = 0
int32_t var_118
var_118.q = data_14395fa10
uint64_t result = j_sub_14137eb70(rdi_2 + 0x118, arg1[8], rbx_4, arg1, var_118, var_110.d, nullptr)
__security_check_cookie(rax_1 ^ &var_138)
return result
