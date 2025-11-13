// 函数: sub_140b58320
// 地址: 0x140b58320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
*arg1 = 0
int16_t* r14 = arg2
arg1[1].b = 0
*(arg1 + 0x806) = 0
char rax = *arg2 & 1
arg1[1].b = rax
uint32_t count = zx.d(*r14) u>> 6

if (rax == 0)
    memcpy(arg1 + 6, &arg2[2], count)
    int16_t* r8_5 = arg1 + 6
    *((zx.q(*r14) u>> 6) + arg1 + 6) = 0
    char i = *(arg1 + 6)
    
    while (i != 0)
        r8_5 += 1
        int32_t rax_13
        rax_13.b = sbb.b(i - 0x61, i - 0x61, sx.d(i) - 0x61 u< 0x1a)
        rax_13.b &= 0x20
        uint64_t rdx_4 = zx.q(i - rax_13.b) ^ zx.q(rbx.b)
        i = *r8_5
        rbx = *((rdx_4 << 2) + &data_1439a2500) ^ rbx u>> 8
    
    *(arg1 + 0x806) = rbx.w
    int32_t r8_6 = -1
    char i_1 = *(arg1 + 6)
    void* rsi_1 = arg1 + 7
    
    while (i_1 != 0)
        rsi_1 += 1
        int32_t rdx_6 = *(((zx.q(i_1) ^ zx.q(r8_6.b)) << 2) + &data_1439a0500) ^ r8_6 u>> 8
        int32_t r8_9 = *((zx.q(rdx_6.b) << 2) + &data_1439a0500) ^ rdx_6 u>> 8
        int32_t rdx_9 = *((zx.q(r8_9.b) << 2) + &data_1439a0500) ^ r8_9 u>> 8
        i_1 = *(rsi_1 - 1)
        r8_6 = *((zx.q(rdx_9.b) << 2) + &data_1439a0500) ^ rdx_9 u>> 8
    
    r8_6.w = not.w(r8_6.w)
    arg1[0x202].w = r8_6.w
else
    memcpy(arg1 + 6, &arg2[2], count * 2)
    int16_t* r10_1 = arg1 + 6
    (arg1 + 6)[zx.q(*r14) u>> 6] = 0
    int16_t i_2 = *(arg1 + 6)
    
    while (i_2 != 0)
        r10_1 = &r10_1[1]
        int32_t rax_4
        rax_4.w = sbb.w(i_2 - 0x61, i_2 - 0x61, zx.d(i_2) - 0x61 u< 0x1a)
        rax_4.w &= 0x20
        uint64_t r8_2 = zx.q(i_2 - rax_4.w)
        i_2 = *r10_1
        int32_t rdx_2 = *(((zx.q(rbx.b) ^ zx.q(r8_2.b)) << 2) + &data_1439a2500) ^ rbx u>> 8
        rbx = *(((zx.q((r8_2 u>> 8).b) ^ zx.q(rdx_2.b)) << 2) + &data_1439a2500) ^ rdx_2 u>> 8
    
    *(arg1 + 0x806) = rbx.w
    arg1[0x202].w = sub_140a5ff80(arg1 + 6, 0)

return arg1
