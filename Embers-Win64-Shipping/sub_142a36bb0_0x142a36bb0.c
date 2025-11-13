// 函数: sub_142a36bb0
// 地址: 0x142a36bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg5

if (*rdi != 0)
    return 0xffffffff

int64_t* rax_1 = j_sub_140a82f30(0xb8)
arg5 = rax_1

if (rax_1 == 0)
    return 0xffffffff

rax_1[1] = arg1
rax_1[2] = arg3
rax_1[3] = arg4
*rax_1 = &mkvparser::Track::`vftable'
__builtin_memset(&rax_1[5], 0, 0x51)
rax_1[0x13] = 0
rax_1[0x12] = &mkvparser::Track::EOSBlock::`vftable'{for `mkvparser::BlockEntry'}
rax_1[0x14].d = 0x80000000
rax_1[0x15] = 0
rax_1[0x16] = 0
int32_t rax_2 = sub_142a36900(arg2, &rax_1[4])

if (rax_2 == 0)
    *rdi = rax_1
    return 0

int64_t r8 = *rax_1
(*r8)(rax_1, 1, r8)
return zx.q(rax_2)
