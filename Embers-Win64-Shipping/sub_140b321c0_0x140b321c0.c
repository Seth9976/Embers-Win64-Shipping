// 函数: sub_140b321c0
// 地址: 0x140b321c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
sub_140b3e980()
int32_t rbp = arg4[3]
int32_t r13 = arg4[2]
int32_t r15 = arg4[1]
int32_t r14 = data_143de7cdc
int32_t rbx = data_143de7cd8
int32_t r12 = data_143de7cd4
int32_t rsi = data_143de7cd0
int32_t rdi_1 = *arg4
sub_140b3e980()
void* r8_1 = &arg4[6]

if (((r13 ^ rbx) | (r14 ^ rbp) | (rsi ^ rdi_1) | (r12 ^ r15)) != 0)
    r8_1 = nullptr

void* rdx = &arg3[6]

if (((arg3[3] ^ data_143de7cdc) | (arg3[2] ^ data_143de7cd8) | (arg3[1] ^ data_143de7cd4)
        | (*arg3 ^ data_143de7cd0)) != 0)
    rdx = nullptr

bool rax_9 = sub_140b328d0(arg1, rdx, r8_1, arg6, arg5)
*(arg2 + 0x18) = 0
sub_140b3ea00()
bool var_70 = rax_9
void** const var_78 = &data_142e786e8
int128_t var_88 = data_143de7a60.o
sub_140b0a670(arg2 + 0x20, &var_88)
*(arg2 + 0x60) = 1
sub_140b0bbf0(&var_88)
__security_check_cookie(rax_1 ^ &var_d8)
return arg2
