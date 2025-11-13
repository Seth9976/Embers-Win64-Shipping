// 函数: sub_142af44c0
// 地址: 0x142af44c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* var_10 = arg1
void* rax = sub_142a7f8c0(nullptr, "icu", "ulayout", sub_142af4480, nullptr)
data_144016860 = rax

if (*arg1 s> 0)
    return rax

int32_t* rax_1 = sub_142a95f50(rax)
uint64_t rax_2 = zx.q(*rax_1)

if (rax_2.d s< 0xc)
    *arg1 = 3
    return rax_2

uint32_t rax_3 = (rax_2 << 2).d
int64_t rbp_1 = sx.q(rax_1[1])
int32_t r9_2 = rbp_1.d - rax_3

if (r9_2 s>= 0x10)
    data_144016868 = sub_142b6a8f0(0xffffffff, 0xffffffff, sx.q(rax_3) + rax_1, r9_2, nullptr, arg1)

int64_t rsi_1 = sx.q(rax_1[2])
int32_t r9_4 = rsi_1.d - rbp_1.d

if (r9_4 s>= 0x10)
    data_144016870 = sub_142b6a8f0(0xffffffff, 0xffffffff, rax_1 + rbp_1, r9_4, nullptr, arg1)

int32_t r9_6 = rax_1[3] - rsi_1.d

if (r9_6 s>= 0x10)
    data_144016878 = sub_142b6a8f0(0xffffffff, 0xffffffff, rax_1 + rsi_1, r9_6, nullptr, arg1)

int32_t rcx_1 = rax_1[9]
data_144016880 = rcx_1 u>> 0x18
data_144016884 = zx.d((rcx_1 u>> 0x10).b)
data_144016888 = zx.d((rcx_1 u>> 8).b)
return sub_142a7db20(0xf, sub_142af4630)
