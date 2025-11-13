// 函数: sub_140f61420
// 地址: 0x140f61420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t rbx = arg2

if (arg2 == 0)
    void var_228
    sub_140f1fc10(&var_228)
    int64_t var_88
    rbx = var_88
    void var_28
    sub_140745b20(&var_28)
    void var_50
    sub_140745b20(&var_50)
    void var_80
    sub_140745b20(&var_80)
    sub_140ddea30(&var_228)

int32_t r9 = *(arg1 + 0x51c)
arg1[0xa6] = rbx + 0x338
arg1[0xa7] = rbx + 0x3c0
int64_t r8 = 0x118

if (r9 != 1)
    r8 = 0x1a0

arg1[0xa8] = rbx + 0x448
int64_t rdx = 0x228
int64_t rax_5 = 0x90

if (r9 != 1)
    rdx = 0x2b0

if (r9 != 1)
    rax_5 = 8

arg1[0xa9] = rax_5 + rbx
arg1[0xaa] = r8 + rbx
arg1[0xab] = rdx + rbx
int64_t rdx_1
rdx_1.b = 1
int64_t result = sub_140e19ef0(arg1, rdx_1.b)
__security_check_cookie(rax_1 ^ &var_248)
return result
