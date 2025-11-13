// 函数: sub_1422cae20
// 地址: 0x1422cae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1

if (*(arg1 + 0x30) == 0)
    int64_t result
    result.b = 0
    return result

char rbp = sub_1422cb230(arg1, arg2 + 0x20, arg4)
void* rax_1 = *(rsi + 0x58)

if (rax_1 == 0)
    return zx.q(rbp)

int64_t* r8_1 = arg3
int64_t rbx = r8_1[0xa]

if (rbx == 0)
    return zx.q(rbp)

int32_t rdi_1 = 0
uint32_t r13_1 = zx.d(*(rax_1 + 8))

if (r13_1 == 0)
    return zx.q(rbp)

do
    uint64_t r12_1 = zx.q(rdi_1.w)
    int64_t* r14_3 = zx.q(*(**(rsi + 0x58) + r12_1 * 0x18)) * 0x30 + *(rsi + 0x28)
    void* rsi_1 = *r14_3
    int64_t* r15_1 = *(*(rsi_1 + 0x78) + 0xb8)
    void var_c8
    sub_1422b40f0(&var_c8, r8_1)
    int64_t var_90_1 = *(rsi_1 + 0x78)
    int16_t var_58_1 = r12_1.w
    int64_t var_98_1 = sx.q(*(r14_3 + 0x14)) + rbx
    char var_7d_1 = 0
    char var_7f_1 = 0
    r8_1 = arg3
    
    if ((*(*r15_1 + 0x80))(r15_1, &var_c8) != 0)
        rbp = 1
    
    *(r8_1 + 0x4b) |= var_7d_1
    *(r8_1 + 0x49) |= var_7f_1
    int64_t var_50
    
    if (var_50 != 0)
        sub_140a74f90(var_50)
        r8_1 = arg3
    
    rsi = arg1
    rdi_1 += 1
while (rdi_1 s< r13_1)

return zx.q(rbp)
