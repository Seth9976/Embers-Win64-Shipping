// 函数: sub_1428ce380
// 地址: 0x1428ce380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[3]
int32_t r9 = arg1[2]
int32_t r10 = arg1[1]
int32_t r11 = *arg1
int64_t rdi_4 =
    ((zx.q(ror.d(rax, 8)) & 0xff00ff00) | (zx.q(rol.d(rax, 8)) & 0xff00ff)) ^ zx.q(arg3[3])
int64_t rbx_4 =
    ((zx.q(ror.d(r9, 8)) & 0xff00ff00) | (zx.q(rol.d(r9, 8)) & 0xff00ff)) ^ zx.q(arg3[2])
int64_t r9_5 =
    ((zx.q(ror.d(r10, 8)) & 0xff00ff00) | (zx.q(rol.d(r10, 8)) & 0xff00ff)) ^ zx.q(arg3[1])
int64_t r8_4 = ((zx.q(ror.d(r11, 8)) & 0xff00ff00) | (zx.q(rol.d(r11, 8)) & 0xff00ff)) ^ zx.q(*arg3)
int32_t rbp_4 = *((zx.q((rbx_4 u>> 8).b) << 2) + 0x1435113c0)
    ^ *((zx.q((rdi_4 u>> 0x10).b) << 2) + 0x143510fc0) ^ *((r8_4 u>> 0x18 << 2) + 0x143510bc0)
    ^ *((zx.q(r9_5.b) << 2) + 0x1435117c0) ^ arg3[4]
uint64_t r10_5 = zx.q(*((zx.q((r8_4 u>> 0x10).b) << 2) + 0x143510fc0))
    ^ zx.q(*((zx.q((rdi_4 u>> 8).b) << 2) + 0x1435113c0))
    ^ zx.q(*((r9_5 u>> 0x18 << 2) + 0x143510bc0)) ^ zx.q(*((zx.q(rbx_4.b) << 2) + 0x1435117c0))
    ^ zx.q(arg3[5])
void* r14 = &arg3[8]
uint64_t rdx_7 = zx.q(*((zx.q((r9_5 u>> 0x10).b) << 2) + 0x143510fc0))
    ^ zx.q(*((zx.q((r8_4 u>> 8).b) << 2) + 0x1435113c0))
    ^ zx.q(*((rbx_4 u>> 0x18 << 2) + 0x143510bc0)) ^ zx.q(*((zx.q(rdi_4.b) << 2) + 0x1435117c0))
    ^ zx.q(arg3[6])
int32_t r15_1 = arg3[0x3c] s>> 1
uint64_t r9_11 = zx.q(*((zx.q((rbx_4 u>> 0x10).b) << 2) + 0x143510fc0))
    ^ zx.q(*((zx.q((r9_5 u>> 8).b) << 2) + 0x1435113c0))
    ^ zx.q(*((rdi_4 u>> 0x18 << 2) + 0x143510bc0)) ^ zx.q(*((zx.q(r8_4.b) << 2) + 0x1435117c0))
    ^ zx.q(arg3[7])
int32_t i_1 = r15_1 - 1

if (r15_1 != 1)
    int32_t i
    
    do
        uint64_t r8_5 = zx.q(r9_11.d)
        uint64_t rsi_3 = zx.q(*((zx.q((r10_5 u>> 8).b) << 2) + 0x1435113c0))
            ^ zx.q(*((zx.q((rdx_7 u>> 0x10).b) << 2) + 0x143510fc0))
            ^ zx.q(*((zx.q(r8_5.d) u>> 0x18 << 2) + 0x143510bc0))
        uint64_t rsi_5 = rsi_3 ^ zx.q(*((zx.q(rbp_4.b) << 2) + 0x1435117c0)) ^ zx.q(*(r14 + 0xc))
        uint64_t rdi_8 = zx.q(*((zx.q((zx.q(rbp_4) u>> 8).b) << 2) + 0x1435113c0))
            ^ zx.q(*((zx.q((r10_5 u>> 0x10).b) << 2) + 0x143510fc0))
            ^ zx.q(*((rdx_7 u>> 0x18 << 2) + 0x143510bc0))
        uint64_t rdi_10 = rdi_8 ^ zx.q(*((zx.q(r8_5.b) << 2) + 0x1435117c0)) ^ zx.q(*(r14 + 8))
        uint64_t rbx_8 = zx.q(*((zx.q((zx.q(rbp_4) u>> 0x10).b) << 2) + 0x143510fc0))
            ^ zx.q(*((zx.q((zx.q(r8_5.d) u>> 8).b) << 2) + 0x1435113c0))
            ^ zx.q(*((r10_5 u>> 0x18 << 2) + 0x143510bc0))
        uint64_t rbx_10 = rbx_8 ^ zx.q(*((zx.q(rdx_7.b) << 2) + 0x1435117c0)) ^ zx.q(*(r14 + 4))
        uint64_t r11_3 = zx.q(*((zx.q((rdx_7 u>> 8).b) << 2) + 0x1435113c0))
            ^ zx.q(*((zx.q((r8_5 u>> 0x10).b) << 2) + 0x143510fc0))
            ^ zx.q(*((zx.q(rbp_4) u>> 0x18 << 2) + 0x143510bc0))
        uint64_t r11_5 = r11_3 ^ zx.q(*((zx.q(r10_5.b) << 2) + 0x1435117c0)) ^ zx.q(*r14)
        rbp_4 = *((zx.q((rdi_10 u>> 8).b) << 2) + 0x1435113c0)
            ^ *((zx.q((rsi_5 u>> 0x10).b) << 2) + 0x143510fc0)
            ^ *((r11_5 u>> 0x18 << 2) + 0x143510bc0) ^ *((zx.q(rbx_10.b) << 2) + 0x1435117c0)
            ^ *(r14 + 0x10)
        r10_5 = zx.q(*((zx.q((r11_5 u>> 0x10).b) << 2) + 0x143510fc0))
            ^ zx.q(*((zx.q((rsi_5 u>> 8).b) << 2) + 0x1435113c0))
            ^ zx.q(*((rbx_10 u>> 0x18 << 2) + 0x143510bc0))
            ^ zx.q(*((zx.q(rdi_10.b) << 2) + 0x1435117c0)) ^ zx.q(*(r14 + 0x14))
        rdx_7 = zx.q(*((zx.q((r11_5 u>> 8).b) << 2) + 0x1435113c0))
            ^ zx.q(*((zx.q((rbx_10 u>> 0x10).b) << 2) + 0x143510fc0))
            ^ zx.q(*((rdi_10 u>> 0x18 << 2) + 0x143510bc0))
            ^ zx.q(*((zx.q(rsi_5.b) << 2) + 0x1435117c0)) ^ zx.q(*(r14 + 0x18))
        r9_11 = zx.q(*((zx.q((rbx_10 u>> 8).b) << 2) + 0x1435113c0))
            ^ zx.q(*((zx.q((rdi_10 u>> 0x10).b) << 2) + 0x143510fc0))
            ^ zx.q(*((rsi_5 u>> 0x18 << 2) + 0x143510bc0))
            ^ zx.q(*((zx.q(r11_5.b) << 2) + 0x1435117c0)) ^ zx.q(*(r14 + 0x1c))
        r14 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

uint64_t r8_7 = zx.q(rdx_7.d)
uint32_t rdx_19 = (zx.d(*(zx.q((r9_11 u>> 0x10).b) + 0x143511bc0))
    ^ zx.d(*((zx.q(rbp_4) u>> 0x18) + 0x143511bc0)) << 8) << 8
    ^ zx.d(*(zx.q((zx.q(r8_7.d) u>> 8).b) + 0x143511bc0))
int32_t rdx_22 = rdx_19 << 8 ^ zx.d(*(zx.q(r10_5.b) + 0x143511bc0)) ^ *r14
*arg2 = (ror.d(rdx_22, 8) & 0xff00ff00) | (rol.d(rdx_22, 8) & 0xff00ff)
int32_t rdx_32 = ((zx.d(*((r10_5 u>> 0x18) + 0x143511bc0)) << 8
    ^ zx.d(*(zx.q((zx.q(rbp_4) u>> 0x10).b) + 0x143511bc0))) << 8
    ^ zx.d(*(zx.q((r9_11 u>> 8).b) + 0x143511bc0))) << 8 ^ zx.d(*(zx.q(r8_7.b) + 0x143511bc0))
    ^ *(r14 + 4)
arg2[1] = (ror.d(rdx_32, 8) & 0xff00ff00) | (rol.d(rdx_32, 8) & 0xff00ff)
uint32_t rdx_38 = (zx.d(*(zx.q((r10_5 u>> 0x10).b) + 0x143511bc0))
    ^ zx.d(*((zx.q(r8_7.d) u>> 0x18) + 0x143511bc0)) << 8) << 8
    ^ zx.d(*(zx.q((zx.q(rbp_4) u>> 8).b) + 0x143511bc0))
int32_t rdx_41 = rdx_38 << 8 ^ zx.d(*(zx.q(r9_11.b) + 0x143511bc0)) ^ *(r14 + 8)
arg2[2] = (ror.d(rdx_41, 8) & 0xff00ff00) | (rol.d(rdx_41, 8) & 0xff00ff)
int32_t rcx_26 = ((zx.d(*(zx.q((r8_7 u>> 0x10).b) + 0x143511bc0))
    ^ zx.d(*((r9_11 u>> 0x18) + 0x143511bc0)) << 8) << 8
    ^ zx.d(*(zx.q((r10_5 u>> 8).b) + 0x143511bc0))) << 8 ^ zx.d(*(zx.q(rbp_4.b) + 0x143511bc0))
    ^ *(r14 + 0xc)
int32_t result = (ror.d(rcx_26, 8) & 0xff00ff00) | (rol.d(rcx_26, 8) & 0xff00ff)
arg2[3] = result
return result
