// 函数: sub_1417d1ca0
// 地址: 0x1417d1ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg2 + 2) = 0
int32_t rbp = 0x80
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
char rax = sub_1422a6b20(arg1, arg3)
arg2[1].d &= 0xfffffffb
arg2[1].d |= zx.d(rax) << 2
char rax_3 = sub_1422a69b0(arg1, arg3)
arg2[1].d &= 0xfffffff7
arg2[1].d |= zx.d(rax_3) << 3 | 2

if (*(arg1 + 0x16d) == 0)
    int64_t rax_7 = sub_14210f630(0)
    
    if (*(arg1 + 0x160) == rax_7 || *(arg1 + 0x37) s>= 0)
        rbp = 0
else if (*(arg1 + 0x37) s>= 0)
    rbp = 0

int32_t rdx_2 = 0
int32_t rax_9 = arg2[1].d & 0xffffff7f
int64_t var_28 = 0
int32_t rax_10 = rax_9 | rbp
arg2[1].d = rax_10
int32_t rcx_5 = ((zx.d(*(arg1 + 0x16c)) << 6 ^ rax_10) & 0x40) ^ rax_10
arg2[1].d = rcx_5
bool cond:0 = *(arg1 + 0x3f) != 1
int128_t var_18 = zx.o(0)

if (cond:0)
    rdx_2 = 0x1000

int32_t rdx_3 = rdx_2 | (rcx_5 & 0xffffefff)
arg2[1].d = rdx_3
arg2[1].d = ((zx.d(*(arg1 + 0x3c)) u>> 1 ^ rdx_3) & 0x20) ^ rdx_3
int64_t* rcx_7 = *(arg1 + 0x160)
int128_t* var_20 = &var_18
char rcx_8 = (*((*(*rcx_7 + 0x270))(rcx_7, &var_28) + 0x1c4) << 4 ^ *(arg2 + 2)) & 0x10
*(arg2 + 2) ^= rcx_8
return arg2
