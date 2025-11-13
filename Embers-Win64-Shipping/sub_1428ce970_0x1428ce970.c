// 函数: sub_1428ce970
// 地址: 0x1428ce970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[2]
int32_t r9 = arg1[1]
int32_t r11 = *arg1
int32_t r10 = arg1[3]
int64_t rdi_4 =
    ((zx.q(ror.d(rax, 8)) & 0xff00ff00) | (zx.q(rol.d(rax, 8)) & 0xff00ff)) ^ zx.q(arg3[2])
int64_t rbx_4 =
    ((zx.q(ror.d(r9, 8)) & 0xff00ff00) | (zx.q(rol.d(r9, 8)) & 0xff00ff)) ^ zx.q(arg3[1])
int64_t r9_5 =
    ((zx.q(ror.d(r10, 8)) & 0xff00ff00) | (zx.q(rol.d(r10, 8)) & 0xff00ff)) ^ zx.q(arg3[3])
int64_t r8_4 = ((zx.q(ror.d(r11, 8)) & 0xff00ff00) | (zx.q(rol.d(r11, 8)) & 0xff00ff)) ^ zx.q(*arg3)
int32_t rbp_4 = *((zx.q((rbx_4 u>> 0x10).b) << 2) + 0x14350ffc0)
    ^ *((zx.q((rdi_4 u>> 8).b) << 2) + 0x1435103c0) ^ *((r8_4 u>> 0x18 << 2) + 0x14350fbc0)
    ^ *((zx.q(r9_5.b) << 2) + 0x1435107c0) ^ arg3[4]
int32_t r11_5 = *((zx.q((r9_5 u>> 8).b) << 2) + 0x1435103c0)
    ^ *((zx.q((rdi_4 u>> 0x10).b) << 2) + 0x14350ffc0) ^ *((rbx_4 u>> 0x18 << 2) + 0x14350fbc0)
    ^ *((zx.q(r8_4.b) << 2) + 0x1435107c0) ^ arg3[5]
void* r14 = &arg3[8]
int32_t rdx_7 = *((zx.q((r9_5 u>> 0x10).b) << 2) + 0x14350ffc0)
    ^ *((zx.q((r8_4 u>> 8).b) << 2) + 0x1435103c0) ^ *((rdi_4 u>> 0x18 << 2) + 0x14350fbc0)
    ^ *((zx.q(rbx_4.b) << 2) + 0x1435107c0) ^ arg3[6]
int32_t r15_1 = arg3[0x3c] s>> 1
uint64_t r10_5 = zx.q(*((zx.q((rbx_4 u>> 8).b) << 2) + 0x1435103c0))
    ^ zx.q(*((zx.q((r8_4 u>> 0x10).b) << 2) + 0x14350ffc0))
    ^ zx.q(*((r9_5 u>> 0x18 << 2) + 0x14350fbc0)) ^ zx.q(*((zx.q(rdi_4.b) << 2) + 0x1435107c0))
    ^ zx.q(arg3[7])
int32_t i_1 = r15_1 - 1

if (r15_1 != 1)
    int32_t i
    
    do
        uint64_t r8_6 = zx.q(rdx_7)
        uint64_t rdx_8 = zx.q(r11_5)
        uint64_t rsi_3 = zx.q(*((zx.q((zx.q(rbp_4) u>> 8).b) << 2) + 0x1435103c0))
            ^ zx.q(*((zx.q((zx.q(r10_5.d) u>> 0x10).b) << 2) + 0x14350ffc0))
            ^ zx.q(*((zx.q(r8_6.d) u>> 0x18 << 2) + 0x14350fbc0))
        uint64_t rsi_5 = rsi_3 ^ zx.q(*((zx.q(rdx_8.b) << 2) + 0x1435107c0)) ^ zx.q(*(r14 + 8))
        uint64_t rdi_9 = zx.q(*((zx.q((zx.q(r10_5.d) u>> 8).b) << 2) + 0x1435103c0))
            ^ zx.q(*((zx.q((zx.q(r8_6.d) u>> 0x10).b) << 2) + 0x14350ffc0))
            ^ zx.q(*((zx.q(rdx_8.d) u>> 0x18 << 2) + 0x14350fbc0))
            ^ zx.q(*((zx.q(rbp_4.b) << 2) + 0x1435107c0)) ^ zx.q(*(r14 + 4))
        uint64_t rbx_8 = zx.q(*((zx.q((zx.q(rbp_4) u>> 0x10).b) << 2) + 0x14350ffc0))
            ^ zx.q(*((zx.q((zx.q(rdx_8.d) u>> 8).b) << 2) + 0x1435103c0))
            ^ zx.q(*((zx.q(r10_5.d) u>> 0x18 << 2) + 0x14350fbc0))
        uint64_t rbx_10 = rbx_8 ^ zx.q(*((zx.q(r8_6.b) << 2) + 0x1435107c0)) ^ zx.q(*(r14 + 0xc))
        uint64_t r10_8 = zx.q(*((zx.q((rdx_8 u>> 0x10).b) << 2) + 0x14350ffc0))
            ^ zx.q(*((zx.q((r8_6 u>> 8).b) << 2) + 0x1435103c0))
            ^ zx.q(*((zx.q(rbp_4) u>> 0x18 << 2) + 0x14350fbc0))
        uint64_t r10_10 = r10_8 ^ zx.q(*((zx.q(r10_5.b) << 2) + 0x1435107c0)) ^ zx.q(*r14)
        rbp_4 = *((zx.q((rdi_9 u>> 0x10).b) << 2) + 0x14350ffc0)
            ^ *((zx.q((rsi_5 u>> 8).b) << 2) + 0x1435103c0)
            ^ *((r10_10 u>> 0x18 << 2) + 0x14350fbc0) ^ *((zx.q(rbx_10.b) << 2) + 0x1435107c0)
            ^ *(r14 + 0x10)
        r11_5 = *((zx.q((rbx_10 u>> 8).b) << 2) + 0x1435103c0)
            ^ *((zx.q((rsi_5 u>> 0x10).b) << 2) + 0x14350ffc0)
            ^ *((rdi_9 u>> 0x18 << 2) + 0x14350fbc0) ^ *((zx.q(r10_10.b) << 2) + 0x1435107c0)
            ^ *(r14 + 0x14)
        rdx_7 = *((zx.q((r10_10 u>> 8).b) << 2) + 0x1435103c0)
            ^ *((zx.q((rbx_10 u>> 0x10).b) << 2) + 0x14350ffc0)
            ^ *((rsi_5 u>> 0x18 << 2) + 0x14350fbc0) ^ *((zx.q(rdi_9.b) << 2) + 0x1435107c0)
            ^ *(r14 + 0x18)
        r10_5 = zx.q(*((zx.q((r10_10 u>> 0x10).b) << 2) + 0x14350ffc0))
            ^ zx.q(*((zx.q((rdi_9 u>> 8).b) << 2) + 0x1435103c0))
            ^ zx.q(*((rbx_10 u>> 0x18 << 2) + 0x14350fbc0))
            ^ zx.q(*((zx.q(rsi_5.b) << 2) + 0x1435107c0)) ^ zx.q(*(r14 + 0x1c))
        r14 += 0x20
        i = i_1
        i_1 -= 1
    while (i != 1)

uint64_t r9_9 = zx.q(r11_5)
int32_t rdx_22 = (*((zx.q((zx.q(r9_9.d) u>> 0x10).b) << 2) + 0x1435107c0) & 0xff0000)
    ^ (*((zx.q((zx.q(rdx_7) u>> 8).b) << 2) + 0x14350fbc0) & 0xff00)
    ^ (*((zx.q(rbp_4) u>> 0x18 << 2) + 0x1435103c0) & 0xff000000)
    ^ zx.d(*((zx.q(r10_5.b) << 2) + 0x14350ffc0)) ^ *r14
*arg2 = (ror.d(rdx_22, 8) & 0xff00ff00) | (rol.d(rdx_22, 8) & 0xff00ff)
int32_t rdx_28 = (*((zx.q((zx.q(rdx_7) u>> 0x10).b) << 2) + 0x1435107c0) & 0xff0000)
    ^ (*((zx.q((r10_5 u>> 8).b) << 2) + 0x14350fbc0) & 0xff00)
    ^ (*((zx.q(r9_9.d) u>> 0x18 << 2) + 0x1435103c0) & 0xff000000)
int32_t rdx_30 = rdx_28 ^ zx.d(*((zx.q(rbp_4.b) << 2) + 0x14350ffc0)) ^ *(r14 + 4)
arg2[1] = (ror.d(rdx_30, 8) & 0xff00ff00) | (rol.d(rdx_30, 8) & 0xff00ff)
int32_t rdx_36 = (*((zx.q((r10_5 u>> 0x10).b) << 2) + 0x1435107c0) & 0xff0000)
    ^ (*((zx.q((zx.q(rbp_4) u>> 8).b) << 2) + 0x14350fbc0) & 0xff00)
    ^ (*((zx.q(rdx_7) u>> 0x18 << 2) + 0x1435103c0) & 0xff000000)
int32_t rdx_38 = rdx_36 ^ zx.d(*((zx.q(r9_9.b) << 2) + 0x14350ffc0)) ^ *(r14 + 8)
arg2[2] = (ror.d(rdx_38, 8) & 0xff00ff00) | (rol.d(rdx_38, 8) & 0xff00ff)
int32_t rdx_44 = (*((zx.q((zx.q(rbp_4) u>> 0x10).b) << 2) + 0x1435107c0) & 0xff0000)
    ^ (*((zx.q((r9_9 u>> 8).b) << 2) + 0x14350fbc0) & 0xff00)
    ^ (*((r10_5 u>> 0x18 << 2) + 0x1435103c0) & 0xff000000)
int32_t rdx_46 = rdx_44 ^ zx.d(*((zx.q(rdx_7.b) << 2) + 0x14350ffc0)) ^ *(r14 + 0xc)
int32_t result = (ror.d(rdx_46, 8) & 0xff00ff00) | (rol.d(rdx_46, 8) & 0xff00ff)
arg2[3] = result
return result
