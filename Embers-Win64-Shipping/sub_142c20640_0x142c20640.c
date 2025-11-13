// 函数: sub_142c20640
// 地址: 0x142c20640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = 0x10000
int32_t var_58 = 0
int128_t var_50
__builtin_memset(&var_50, 0, 0x15)
int32_t var_38 = 0
int64_t var_30 = 0
char var_24 = 0
int32_t var_28_1 = sub_142bfb130(arg2)
char var_24_1 = 1
int32_t* rax_2 = sub_142c18a90(&var_58, sub_142bfb150(arg2, 0x47535542))
*arg1 = rax_2
int128_t* const rcx_3 = &data_14369a5d0

if (rax_2 != 0)
    rcx_3 = rax_2

int128_t* const rcx_4

if (*(rcx_3 + 0x18) u>= 0xa)
    rcx_4 = rcx_3[1].q
else
    rcx_4 = &data_14369a5d0

if (sub_142c20c60(rcx_4, rax_2, arg2) != 0)
    sub_142c09b70(*arg1)
    *arg1 = &data_14369a5d0

int32_t* rax_4 = *arg1
int32_t* rcx_6 = &data_14369a5d0
int128_t* const r8_1 = &data_14369a5d0

if (rax_4 != 0)
    rcx_6 = rax_4

if (rcx_6[6] u>= 0xa)
    r8_1 = *(rcx_6 + 0x10)

uint16_t rdx_2 = zx.w(*(r8_1 + 8))
uint64_t r9 = zx.q(*(r8_1 + 9))
void* rdx_3

if (0 != rdx_2 * 0x100 + r9.w)
    rdx_3 = &r8_1[zx.q(rdx_2.b) * 0x10] + r9
else
    rdx_3 = &data_14369a5d0

uint32_t rdx_8 = zx.d(*(rdx_3 + 1)) + (zx.d(*rdx_3) << 8)
arg1[1].d = rdx_8
int64_t result = sub_140dc0ea0(zx.q(rdx_8), 0x20)
arg1[2] = result

if (result == 0)
    arg1[1].d = 0

int32_t i = 0

if (arg1[1].d u> 0)
    do
        int32_t* rax_5 = *arg1
        int32_t* rcx_12 = &data_14369a5d0
        
        if (rax_5 != 0)
            rcx_12 = rax_5
        
        int128_t* const rcx_13
        
        if (rcx_12[6] u>= 0xa)
            rcx_13 = *(rcx_12 + 0x10)
        else
            rcx_13 = &data_14369a5d0
        
        int128_t* rax_6 = sub_142c1f4d0(rcx_13, i)
        int32_t* rbx_3 = &arg1[2][zx.q(i) * 8]
        int32_t* var_78 = rbx_3
        int32_t var_70_1 = 0
        *rbx_3 = 0
        rbx_3[2] = 0
        sub_142c15f50(rax_6, &var_78)
        *(rbx_3 + 0x10) = 0
        *(rbx_3 + 0x18) = 0
        void* var_68 = &rbx_3[4]
        int32_t var_60_1 = 0
        result = sub_142c16120(rax_6, &var_68)
        i += 1
    while (i u< arg1[1].d)

return result
