// 函数: sub_141953230
// 地址: 0x141953230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = zx.q(arg1[1].b)
void* r13 = arg1[2]
int32_t r12 = (&data_1439c85f4)[rdx * 0xa]
int64_t rcx = sx.q(data_1439c74c8)
void* r14_1 = rdx * 0x1c + &data_143efeda0
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

data_1439c74c8 = rbp

if (r13 != 0)
    rdx.b = 1
    int32_t rsi_2 = data_1439c7498 - 1
    void* rax_2 = sub_14190d690(*arg1, rdx.b)
    int64_t rdx_2 = sx.q(rsi_2) * 5
    int64_t rcx_5 = *(rax_2 + 8)
    int32_t var_40
    int32_t var_38
    
    if (*(rcx_5 + (rdx_2 << 3) + 0x10) != 0x8c2a || *(rcx_5 + (rdx_2 << 3) + 0x14) != rbx)
        var_38 = 1
        var_40 = 0xffffffff
        sub_14190a090(*arg1, rax_2, rsi_2, 0x8c2a, rbx, 0xffffffff)
    
    uint64_t rcx_7 = zx.q(arg1[4].d)
    int32_t rax_3 = *(arg1 + 0x24)
    uint64_t r8_5 = zx.q(*(r13 + 0x28))
    uint64_t rdx_4 = zx.q(*r14_1)
    
    if (rcx_7.d != 0 || rax_3 != 0xffffffff)
        int32_t var_48
        var_48.q = zx.q(rax_3 * r12)
        data_143f001c0(0x8c2a, rdx_4, r8_5, rcx_7, var_48, var_40, var_38)
    else
        data_143f001b8(0x8c2a, rdx_4, r8_5)

void*** result = j_sub_140a82f30(0x50)

if (result == 0)
    return 0

void* rax_5 = arg1[2]
char r8_6 = arg1[1].b
int32_t rcx_8 = arg_18
int64_t r9_2 = *arg1
*result = &data_142ff7520
result[1].d = 0
result[2].d = rcx_8
*(result + 0x14) = 0x8c2a
result[3] = 0
result[4].d = 0xffffffff
result[5] = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

void* rax_6 = result[5]
result[6] = 0
result[7].b = r8_6
result[8] = r9_2
result[9].b = 1

if (rax_6 != 0)
    result[6] = *(rax_6 + 0x30)

return result
