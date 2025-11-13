// 函数: sub_142625b70
// 地址: 0x142625b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi_1 = zx.q(zx.d(*(arg2 + 0x32)) * zx.d(arg2[3].w))
uint32_t r13 = (rdi_1 * 3).d
int32_t rbp = (**arg1)(arg1, zx.q(r13)) + 0x3c
int128_t* rax_3 = j_sub_1426075c0(zx.q(rbp), 0)

if (rax_3 == 0)
    return 0x80000004

memset(rax_3, 0, sx.q(rbp))
uint32_t r12 = (rdi_1 << 2).d
*rax_3 = *arg2
rax_3[1] = arg2[1]
rax_3[2] = arg2[2]
rax_3[3].q = arg2[3].q
*(rax_3 + 0x38) = *(arg2 + 0x38)
int64_t rax_6 = j_sub_1426075c0(zx.q(r12), 1)

if (rax_6 == 0)
    sub_142609160(rax_3)
    return 0x80000004

int64_t rbx_1 = sx.q((rdi_1 * 2).d)
memcpy(rax_6, arg3, rbx_1.d)
uint32_t count = rdi_1.d
memcpy(rbx_1 + rax_6, arg4, count)
memcpy(sx.q(r13) + rax_6, arg5, count)
int64_t r10_1 = *arg1
int32_t arg_8 = 0
int32_t rax_10 = (*(r10_1 + 8))(arg1, rax_6, zx.q(r12), rax_3 + 0x3c, rbp - 0x3c, &arg_8)
sub_142609160(rax_6)
int32_t rdx_6 = arg_8 + 0x3c
*arg6 = rax_3
*arg7 = rdx_6
return zx.q(rax_10)
