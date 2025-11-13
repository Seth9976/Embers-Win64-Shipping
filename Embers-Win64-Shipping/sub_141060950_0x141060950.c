// 函数: sub_141060950
// 地址: 0x141060950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x10)
int64_t var_60 = 0x1688
int64_t var_48 = 0
int32_t var_64 = 1
int32_t rcx = *(rsi + 0x18)
*(arg1 + 0x28)
int32_t rbx = (&data_1439c85f4)[zx.q(*(arg1 + 0x28)) * 0xa]
uint32_t temp0 = divu.dp.d(0:rcx, rbx)

if (*(arg1 + 0x20) u<= rcx)
    rcx = *(arg1 + 0x20)

uint64_t r15 = zx.q(divu.dp.d(0:rcx, rbx))
int32_t var_68

if ((*(rsi + 0x1c) & 0x20) == 0)
    var_68 = sub_140fe7330((&data_1439c85fc)[zx.q(*(arg1 + 0x28)) * 0xa], 0)
else
    var_68 = 0x27
    rbx = 4
    var_48.d = 1

void* rcx_3 = *(arg1 + 0x18)
int64_t rax_8 = divu.dp.q(0:(*(rsi + 0xb8)), zx.q(rbx)) + r15
int32_t var_4c = 0
int32_t rbp_1 = temp0 - r15.d
bool cond:2 = *(arg1 + 0x24) u<= rbp_1
uint128_t var_40 = var_68.o

if (cond:2)
    rbp_1 = *(arg1 + 0x24)

int32_t var_50 = rbp_1
uint64_t var_20 = var_48
int128_t var_30 = rax_8.o
sub_141025d40(rcx_3, &var_40, rsi + 0x68, rbx, 0)
void* rax_9 = *(arg1 + 0x18)
int64_t* rdx_5 = rax_9 + 0x88

if (rax_9 == 0)
    rdx_5 = nullptr

return sub_14105df70(*(arg1 + 0x10) + 0x20, rdx_5) __tailcall
