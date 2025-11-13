// 函数: sub_141952bb0
// 地址: 0x141952bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg1
int64_t rcx = sx.q(data_1439c74c8)
int32_t arg_18 = 0
int32_t rbx
int32_t rbp

if (0x400 - rcx.d s<= 1)
    memcpy(&arg_18, &data_143efbd00 + (rcx << 2), (0x400 - rcx.d) << 2)
    data_143effa28(0x400, &data_143efbd00)
    rbp = 1 - (0x400 - rcx.d)
    memcpy(&(&arg_18)[sx.q(0x400 - rcx.d)], &data_143efbd00, rbp << 2)
    rbx = arg_18
else
    rbx = *(&data_143efbd00 + (rcx << 2))
    rbp = (rcx + 1).d
    arg_18 = rbx

int32_t rsi_1 = data_1439c7498
data_1439c74c8 = rbp
void* rax_2 = sub_14190d690(arg1[1], 1)
int64_t rdx_2 = sx.q(rsi_1 - 1) * 5
int64_t rcx_5 = *(rax_2 + 8)
int32_t var_48
int32_t var_40
int32_t var_38

if (*(rcx_5 + (rdx_2 << 3) + 0x10) != 0x8c2a || *(rcx_5 + (rdx_2 << 3) + 0x14) != rbx)
    var_38 = 1
    var_40 = 0xffffffff
    var_48 = rbx
    sub_14190a090(arg1[1], rax_2, rsi_1 - 1, 0x8c2a, var_48, 0xffffffff)

int64_t rdx_4 = 0x8236
int32_t r9 = arg1[3].d
uint64_t r8_5 = zx.q(*(r15 + 0x28))
int32_t rcx_7 = *(*arg1 + 0x18)

if (rcx_7 == 2)
    rdx_4 = 0x8234

int32_t rax_4 = *(arg1 + 0x1c)

if (r9 != 0 || rax_4 != 0xffffffff)
    var_48.q = zx.q(rax_4 * rcx_7)
    data_143f001c0(0x8c2a, rdx_4, r8_5, r9, var_48, var_40, var_38)
else
    data_143f001b8(0x8c2a, rdx_4, r8_5, r9, var_48, var_40, var_38)

void*** result = j_sub_140a82f30(0x50)

if (result == 0)
    return 0

int32_t rcx_8 = arg_18
int64_t rdx_5 = arg1[1]
*result = &data_142ff7520
result[1].d = 0
result[2].d = rcx_8
*(result + 0x14) = 0x8c2a
result[3] = 0
result[4].d = 0xffffffff
__builtin_memset(&result[5], 0, 0x11)
result[8] = rdx_5
result[9].b = 1
return result
