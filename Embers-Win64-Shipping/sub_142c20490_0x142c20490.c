// 函数: sub_142c20490
// 地址: 0x142c20490
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
int32_t* rax_2 = sub_142c18920(&var_58, sub_142bfb150(arg2, 0x47504f53))
*arg1 = rax_2
int32_t* r8 = &data_14369a5d0

if (rax_2 != 0)
    r8 = rax_2

int128_t* const r8_1

if (r8[6] u>= 0xa)
    r8_1 = *(r8 + 0x10)
else
    r8_1 = &data_14369a5d0

uint16_t rdx_1 = zx.w(*(r8_1 + 8))
uint64_t r9 = zx.q(*(r8_1 + 9))
void* rdx_2

if (0 != rdx_1 * 0x100 + r9.w)
    rdx_2 = &r8_1[zx.q(rdx_1.b) * 0x10] + r9
else
    rdx_2 = &data_14369a5d0

uint32_t rdx_7 = zx.d(*(rdx_2 + 1)) + (zx.d(*rdx_2) << 8)
arg1[1].d = rdx_7
int64_t result = sub_140dc0ea0(zx.q(rdx_7), 0x20)
arg1[2] = result

if (result == 0)
    arg1[1].d = 0

int32_t i = 0

if (arg1[1].d u> 0)
    do
        int32_t* rcx_8 = *arg1
        int32_t* rax_3 = &data_14369a5d0
        
        if (rcx_8 != 0)
            rax_3 = rcx_8
        
        int128_t* const rcx_9 = &data_14369a5d0
        
        if (rax_3[6] u>= 0xa)
            rcx_9 = *(rax_3 + 0x10)
        
        int128_t* rax_4 = sub_142c1f4d0(rcx_9, i)
        int32_t* rbx_3 = &arg1[2][zx.q(i) * 8]
        int32_t* var_78 = rbx_3
        int32_t var_70_1 = 0
        *rbx_3 = 0
        rbx_3[2] = 0
        sub_142c15860(rax_4, &var_78)
        *(rbx_3 + 0x10) = 0
        *(rbx_3 + 0x18) = 0
        void* var_68 = &rbx_3[4]
        int32_t var_60_1 = 0
        result = sub_142c15a30(rax_4, &var_68)
        i += 1
    while (i u< arg1[1].d)

return result
