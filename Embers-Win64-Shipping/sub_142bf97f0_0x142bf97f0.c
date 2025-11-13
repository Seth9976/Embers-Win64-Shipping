// 函数: sub_142bf97f0
// 地址: 0x142bf97f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48 = 0
int32_t var_28 = 0
int64_t var_20 = 0
int32_t rax = *(arg2 + 0x30)
int128_t var_40
__builtin_memset(&var_40, 0, 0x15)

if (rax == 0xffffffff)
    rax = sub_142bf77e0(arg2)

int32_t var_18 = rax
int64_t rax_1 = *(arg2 + 0x10)
char var_14 = 1
int32_t* rax_2

if (rax_1 != 0)
    rax_2 = rax_1(arg2, 0x636d6170, *(arg2 + 0x18))

if (rax_1 == 0 || rax_2 == 0)
    rax_2 = sub_142c09c40()

int32_t* rax_3 = sub_142bf86f0(&var_48, rax_2)
arg1[0xa] = rax_3
int128_t* const rdi_1 = &data_14369a5d0
int32_t* rcx_3 = &data_14369a5d0

if (rax_3 != 0)
    rcx_3 = rax_3

int128_t* const rcx_4

if (rcx_3[6] u>= 4)
    rcx_4 = *(rcx_3 + 0x10)
else
    rcx_4 = &data_14369a5d0

char arg_8
*arg1 = sub_142bf8b10(rcx_4, &arg_8)
int128_t* const rcx_5 = &data_14369a5d0
arg1[1] = &data_14369a5d0
int128_t* rax_5 = arg1[0xa]

if (rax_5 != 0)
    rcx_5 = rax_5

int128_t* const rcx_6

if (*(rcx_5 + 0x18) u>= 4)
    rcx_6 = rcx_5[1].q
else
    rcx_6 = &data_14369a5d0

int128_t* rax_6 = sub_142bf8c10(rcx_6, 0, 5)

if (rax_6 != 0 && zx.w(*rax_6) * 0x100 + zx.w(*(rax_6 + 1)) == 0xe)
    arg1[1] = rax_6

int128_t* rax_7 = *arg1
int128_t* const rcx_8 = &data_14369a5d0

if (rax_7 != 0)
    rcx_8 = rax_7

bool cond:1 = arg_8 == 0
arg1[3] = rcx_8

if (not(cond:1))
    arg1[2] = sub_142bf8270
    return sub_142bf8270

int128_t* rax_8 = &data_14369a5d0

if (rax_7 != 0)
    rax_8 = rax_7

uint32_t rcx_11 = (zx.d(*rax_8) << 8) + zx.d(*(rax_8 + 1))

if (rcx_11 != 4)
    uint32_t (* result)(void* arg1, int32_t arg2, int32_t* arg3) = j_sub_142bf90d0
    
    if (rcx_11 != 0xc)
        result = j_sub_142bf9400
    
    arg1[2] = result
    return result

if (rax_7 != 0)
    rdi_1 = rax_7

uint32_t rcx_13 = zx.d(*(rdi_1 + 7)) + (zx.d(*(rdi_1 + 6)) << 8)
arg1[4] = rdi_1 + 0xe
uint64_t rcx_14 = zx.q(rcx_13 u>> 1)
arg1[9].d = rcx_14.d
uint64_t rdx_3 = zx.q(rcx_14.d)
arg1[5] = rdi_1 + 0xe + (rcx_14 << 1) + 2
void* rcx_15 = rdi_1 + 0xe + (rcx_14 << 1) + 2 + (rcx_14 << 1)
arg1[6] = rcx_15
void* rax_15 = rcx_15 + (rdx_3 << 1)
arg1[7] = rax_15
arg1[8] = rax_15 + (rdx_3 << 1)
*(arg1 + 0x4c) = (zx.d(*(rdi_1 + 3)) - 0x10 + (((zx.d(*(rdi_1 + 2)) << 5) - rdx_3.d) << 3)) u>> 1
arg1[3] = &arg1[4]
arg1[2] = j_sub_142bf9540
return j_sub_142bf9540
