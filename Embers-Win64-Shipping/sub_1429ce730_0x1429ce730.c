// 函数: sub_1429ce730
// 地址: 0x1429ce730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[2]
int64_t r9 = arg1[1]
int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, rcx - r9)

if ((rcx - r9) s/ 0x18 u>= arg2)
    return rdx s>> 2 u>> 0x3f

int64_t rax_3
int64_t rdx_3
rdx_3:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, r9 - *arg1)
int64_t rdx_4 = rdx_3 s>> 2
int64_t rdx_5 = rdx_4 + (rdx_4 u>> 0x3f)

if (0xaaaaaaaaaaaaaaa - rdx_5 u< arg2)
    std::_Xlength_error("vector<T> too long")
    noreturn

int64_t r8_2 = rdx_5 + arg2
int64_t rax_7
int64_t rdx_6
rdx_6:rax_7 = muls.dp.q(0x2aaaaaaaaaaaaaab, rcx - *arg1)
int64_t rcx_2 = 0
int64_t rdx_7 = rdx_6 s>> 2
int64_t rdx_8 = rdx_7 + (rdx_7 u>> 0x3f)
uint64_t rax_11 = rdx_8 u>> 1

if (0xaaaaaaaaaaaaaaa - rax_11 u>= rdx_8)
    rcx_2 = rax_11 + rdx_8

if (rcx_2 u>= r8_2)
    r8_2 = rcx_2

return sub_1429ce650(arg1, r8_2) __tailcall
