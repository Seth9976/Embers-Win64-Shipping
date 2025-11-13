// 函数: sub_1419c6780
// 地址: 0x1419c6780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t rdi = sx.q(arg1)
arg2.b = rdi.d == rbx.d

if (rdi.d == rbx.d)
    return zx.q(arg2.b)

if ((rdi.d u> 0x1b || not(test_bit(0x857c041, rdi.d)))
        && ((*(rdi * 0x14 + &data_143f025fc) u>> 2).b & 1) == 0)
    return zx.q(arg2.b)

if ((rbx.d u> 0x1b || not(test_bit(0x857c041, rbx.d)))
        && ((*(rbx * 0x14 + &data_143f025fc) u>> 2).b & 1) == 0)
    return zx.q(arg2.b)

void arg_8
int32_t r14 = *sub_1410f8320(&arg_8, rbx.d)
void arg_10
int32_t r15 = *sub_1410f8320(&arg_10, rdi.d)
int64_t rbp

if (rbx.d == 0 || rbx.d == 0xe)
    rbp.b = 1
else
    rbp.b = 0

int64_t rsi

if (rdi.d == 0 || rbx.d == 0xe)
    rsi.b = 1
else
    rsi.b = 0

int64_t rax_7 = data_143f025b0
char r8

if (rdi.d u> 0x1f)
    if (*(&data_143f025f0 + rdi * 0x14) == rax_7)
        r8 = 1
    else
        r8 = 0
else if (test_bit(0xc8451800, rdi.d) || *(&data_143f025f0 + rdi * 0x14) == rax_7)
    r8 = 1
else
    r8 = 0

if (rbx.d u> 0x1f)
    if (*(&data_143f025f0 + rbx * 0x14) == rax_7)
        rax_7.b = 1
    else
        rax_7.b = 0
else if (test_bit(0xc8451800, rbx.d) || *(&data_143f025f0 + rbx * 0x14) == rax_7)
    rax_7.b = 1
else
    rax_7.b = 0

char rax_8

if (r8 == rax_7.b)
    rax_8 = sub_141132080(rdi.d)

char r9

if (r8 != rax_7.b || rax_8 != 0)
    r9 = 0
else
    r9 = 1

int64_t result = data_143f025b8

if (rdi.d u> 0x18)
    if (*(&data_143f025f0 + rdi * 0x14) == result)
        r8 = 1
    else
        r8 = 0
else if (test_bit(0x100a040, rdi.d) || *(&data_143f025f0 + rdi * 0x14) == result)
    r8 = 1
else
    r8 = 0

if (rbx.d u> 0x18)
    if (*(&data_143f025f0 + rbx * 0x14) == result)
        result.b = 1
    else
        result.b = 0
else if (test_bit(0x100a040, rbx.d) || *(&data_143f025f0 + rbx * 0x14) == result)
    result.b = 1
else
    result.b = 0

if (r15 s< r14 || rsi.b != rbp.b || r9 == 0 || r8 != result.b)
    result.b = 0
else
    result.b = 1

return result
