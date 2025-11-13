// 函数: sub_142be7970
// 地址: 0x142be7970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r11 = arg3
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
uint32_t rbx = arg3
uint32_t rdi = arg3
uint32_t rsi = arg3
int32_t rax_3 = (temp1 + (temp0 & 0xf)) s>> 4
char* r8_1 = sx.q(rax_3 << 4) + arg1
int32_t rax_4 = neg.d(rax_3)
int64_t r9_2 = sx.q(rax_4)

if (rax_4 != 0)
    void* rdx_3 = &r8_1[8 + (r9_2 << 4)]
    int64_t i_1 = neg.q(r9_2)
    int64_t i
    
    do
        int32_t rax_7 = *(rdx_3 - 8) * 0x239b961b
        rdx_3 += 0x10
        uint64_t rcx_3 = zx.q(ror.d((rol.d(rax_7, 0xf) * 0xab0e9789) ^ r11, 0xd) + rbx)
        r11 = ((rcx_3 << 2) + 0x561ccd1b).d + rcx_3.d
        uint64_t rcx_7 =
            zx.q(ror.d((rol.d(*(rdx_3 - 0x14) * 0xab0e9789, 0x10) * 0x38b34ae5) ^ rbx, 0xf) + rdi)
        rbx = ((rcx_7 << 2) + 0xbcaa747).d + rcx_7.d
        rdi = (rol.d((ror.d(*(rdx_3 - 0x10) * 0x38b34ae5, 0xf) * 0xa1e38b93) ^ rdi, 0xf)
            - 0x150a2d8f + rsi) * 5
        uint64_t rcx_16 =
            zx.q(rol.d((ror.d(*(rdx_3 - 0xc) * 0xa1e38b93, 0xe) * 0x239b961b) ^ rsi, 0xd) + r11)
        rsi = ((rcx_16 << 2) + 0x32ac3b17).d + rcx_16.d
        i = i_1
        i_1 -= 1
    while (i != 1)

uint32_t rax_16 = 0
uint64_t rcx_19 = zx.q((arg2 & 0xf) - 1)

if (rcx_19.d u<= 0xe)
    switch (rcx_19)
        case 1
            rax_16 ^= zx.d(r8_1[1]) << 8
        case 2
            rax_16 = rax_16 ^ zx.d(r8_1[2]) << 0x10 ^ zx.d(r8_1[1]) << 8
        case 3
            goto label_142be7b20
        case 4
            goto label_142be7b19
        case 5
            goto label_142be7b01
        case 6
            goto label_142be7af7
        case 7
            goto label_142be7aec
        case 8
            goto label_142be7ae5
        case 9
            goto label_142be7acd
        case 0xa
            goto label_142be7ac3
        case 0xb
            goto label_142be7ab8
        case 0xc
            goto label_142be7ab1
        case 0xd
            goto label_142be7a99
        case 0xe
            rax_16 = zx.d(r8_1[0xe]) << 0x10
        label_142be7a99:
            rax_16 ^= zx.d(r8_1[0xd]) << 8
        label_142be7ab1:
            rsi ^= ror.d((zx.d(r8_1[0xc]) ^ rax_16) * 0xa1e38b93, 0xe) * 0x239b961b
        label_142be7ab8:
            rax_16 = zx.d(r8_1[0xb]) << 0x18
        label_142be7ac3:
            rax_16 ^= zx.d(r8_1[0xa]) << 0x10
        label_142be7acd:
            rax_16 ^= zx.d(r8_1[9]) << 8
        label_142be7ae5:
            rdi ^= ror.d((zx.d(r8_1[8]) ^ rax_16) * 0x38b34ae5, 0xf) * 0xa1e38b93
        label_142be7aec:
            rax_16 = zx.d(r8_1[7]) << 0x18
        label_142be7af7:
            rax_16 ^= zx.d(r8_1[6]) << 0x10
        label_142be7b01:
            rax_16 ^= zx.d(r8_1[5]) << 8
        label_142be7b19:
            rbx ^= rol.d((zx.d(r8_1[4]) ^ rax_16) * 0xab0e9789, 0x10) * 0x38b34ae5
        label_142be7b20:
            rax_16 = zx.d(r8_1[3]) << 0x18 ^ zx.d(r8_1[2]) << 0x10 ^ zx.d(r8_1[1]) << 8
    
    r11 ^= rol.d((zx.d(*r8_1) ^ rax_16) * 0x239b961b, 0xf) * 0xab0e9789

int32_t rsi_2 = rsi ^ arg2
int32_t rdi_1 = rdi ^ arg2
int32_t rbx_2 = rbx ^ arg2
int32_t r11_5 = (r11 ^ arg2) + rsi_2 + rdi_1 + rbx_2
int32_t rcx_42 = (r11_5 u>> 0x10 ^ r11_5) * 0x85ebca6b
int32_t r10_1 = (rcx_42 u>> 0xd ^ rcx_42) * 0xc2b2ae35
int32_t rax_38 = rbx_2 + r11_5
int32_t rax_39 = (rax_38 u>> 0x10 ^ rax_38) * 0x85ebca6b
int32_t rax_40 = (rax_39 u>> 0xd ^ rax_39) * 0xc2b2ae35
int32_t r9_5 = rax_40 u>> 0x10 ^ rax_40
int32_t rax_41 = rdi_1 + r11_5
int32_t rax_42 = (rax_41 u>> 0x10 ^ rax_41) * 0x85ebca6b
int32_t rax_43 = (rax_42 u>> 0xd ^ rax_42) * 0xc2b2ae35
int32_t r8_4 = rax_43 u>> 0x10 ^ rax_43
int32_t rax_44 = rsi_2 + r11_5
int32_t rax_45 = (rax_44 u>> 0x10 ^ rax_44) * 0x85ebca6b
int32_t rax_46 = (rax_45 u>> 0xd ^ rax_45) * 0xc2b2ae35
int32_t rdx_8 = rax_46 u>> 0x10 ^ rax_46
int32_t rcx_66 = (r10_1 u>> 0x10 ^ r10_1) + rdx_8 + r8_4 + r9_5
*arg4 = rcx_66
arg4[1] = r9_5 + rcx_66
arg4[2] = r8_4 + rcx_66
int32_t result = rdx_8 + rcx_66
arg4[3] = result
return result
