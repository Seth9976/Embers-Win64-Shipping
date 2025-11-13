// 函数: sub_14091cf00
// 地址: 0x14091cf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14091c9a0(arg1, arg2 + 0x30)
int64_t* rsi = *(arg2 + 8)
int64_t var_18
(*(*rsi + 0x58))(rsi, &var_18)
uint32_t count_1
uint32_t count = count_1
int64_t rcx_1

if (*(arg1 + 0x14) == 0)
    rcx_1 = sx.q(arg1[2].d)

int32_t rax_1

if (*(arg1 + 0x14) != 0 || (rcx_1 + 4).d u> arg1[1].d)
    *(arg1 + 0x14) = 1
    rax_1.b = 1
else
    *(rcx_1 + *arg1) = (count u>> 0x18).b
    *(sx.q(arg1[2].d) + *arg1 + 1) = (count u>> 0x10).b
    *(sx.q(arg1[2].d) + *arg1 + 2) = (count u>> 8).b
    *(sx.q(arg1[2].d) + *arg1 + 3) = count.b
    arg1[2].d += 4
    rax_1 = zx.d(*(arg1 + 0x14))
    count = count_1

int64_t rcx_5

if (rax_1.b == 0)
    rcx_5 = sx.q(arg1[2].d)

if (rax_1.b != 0 || rcx_5.d + count u> arg1[1].d)
    *(arg1 + 0x14) = 1
else
    memcpy(rcx_5 + *arg1, var_18, count)
    arg1[2].d += count

int32_t rax_8 = (*(*rsi + 0x30))(rsi)
int64_t rax_9

if (*(arg1 + 0x14) == 0)
    rax_9 = sx.q(arg1[2].d)

if (*(arg1 + 0x14) != 0 || (rax_9 + 4).d u> arg1[1].d)
    *(arg1 + 0x14) = 1
else
    *(rax_9 + *arg1) = (rax_8 u>> 0x18).b
    *(sx.q(arg1[2].d) + *arg1 + 1) = (rax_8 u>> 0x10).b
    *(sx.q(arg1[2].d) + *arg1 + 2) = (rax_8 u>> 8).b
    *(sx.q(arg1[2].d) + *arg1 + 3) = rax_8.b
    arg1[2].d += 4

int64_t rcx_13 = var_18

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return arg1
