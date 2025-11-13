// 函数: sub_14230c3a0
// 地址: 0x14230c3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg5)
int64_t* rcx = *(arg1 + 0x158)
int64_t* rdi = arg7
rdi[0xf] = (*(*rcx + 0x30))(rcx, arg2, zx.q(arg4), zx.q(rbp.d))
int64_t* rcx_1 = *arg6
rdi[0x10] = (*(*rcx_1 + 0x280))(rcx_1)
*(rdi + 0x9b) = rbp.b
*(rdi + 0x9c) ^= (zx.d(arg6[1].b) << 0x1a ^ *(rdi + 0x9c)) & 0x4000000
int64_t* rax_8 = rdi[0xd]

if (rax_8 != 0)
    rdi = rax_8

int64_t rbx_1 = rbp * 0xe8
rdi[8].d = *(*arg3 + rbx_1 + 4)
rdi[2] = arg3[3]
rdi[0xa].d = *(*arg3 + rbx_1 + 0x10)
int64_t rax_12 = *arg3
*(rdi + 0x54) = *(rax_12 + rbx_1 + 0x38) + *(rax_12 + rbx_1 + 0x10)
int64_t rcx_6 = *(*(arg1 + 0x158) + 0x58)
int64_t rax_14

if (rcx_6 == 0)
    rax_14 = 0
else
    rax_14 = sub_1420609e0(rcx_6, rbp.d)

rdi[5] = rax_14
*rdi = *(arg1 + 0x140)
int64_t result = *arg3
*(rdi + 0x44) = *(result + rbx_1 + 8)
return result
