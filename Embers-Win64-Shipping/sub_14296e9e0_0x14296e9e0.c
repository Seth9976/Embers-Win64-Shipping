// 函数: sub_14296e9e0
// 地址: 0x14296e9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x170)
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
uint64_t rbx = zx.q(*arg3)
uint64_t rsi = zx.q(arg3[1])
uint64_t r14 = zx.q(arg3[2])
uint64_t r12 = zx.q(arg3[3])
uint64_t r13 = zx.q(arg3[4])
int32_t r10 = 0
int32_t r9 = 0
int64_t var_70
__builtin_memset(&var_70, 0, 0x34)
int32_t r11 = 0
int32_t var_38 = 0
int32_t var_120 = 0
int32_t r8 = var_70:4.d
int32_t var_128 = 0
int32_t var_130 = 0
int32_t var_138 = 0
int32_t var_140 = 0
int32_t var_148 = 0
int32_t var_158 = 0
int32_t var_160 = 0
int32_t var_168 = 0
int32_t rax_11 = var_70.d
int32_t* var_118 = arg2
uint64_t var_a0 = rbx
uint64_t var_98 = rsi
uint64_t var_90 = r14
uint64_t var_88 = r12
uint64_t var_80 = r13
int64_t var_110 = 0xe
uint64_t rax_92

while (true)
    uint64_t rcx = zx.q(*arg2)
    int64_t rdi_3 = rbx * rcx + zx.q(rax_11)
    int64_t rsi_3 = rsi * rcx + (rdi_3 u>> 0x20) + zx.q(r8)
    int64_t r15_4 = r14 * rcx + (rsi_3 u>> 0x20) + zx.q(r9)
    int64_t r12_3 = r12 * rcx + (r15_4 u>> 0x20) + zx.q(r10)
    int64_t rdx_3 = r13 * rcx + (r12_3 u>> 0x20) + zx.q(r11)
    int64_t r8_4 = zx.q(arg3[5]) * rcx + (rdx_3 u>> 0x20) + zx.q(var_168)
    int64_t rdx_7 = zx.q(arg3[6]) * rcx + (r8_4 u>> 0x20) + zx.q(var_160)
    int64_t r8_8 = zx.q(arg3[7]) * rcx + (rdx_7 u>> 0x20) + zx.q(var_158)
    int64_t r13_4 = zx.q(arg3[8]) * rcx + (r8_8 u>> 0x20) + zx.q(var_148)
    int64_t r14_4 = zx.q(arg3[9]) * rcx + (r13_4 u>> 0x20) + zx.q(var_140)
    int64_t r11_4 = zx.q(arg3[0xa]) * rcx + (r14_4 u>> 0x20) + zx.q(var_138)
    int64_t r10_4 = zx.q(arg3[0xb]) * rcx + (r11_4 u>> 0x20) + zx.q(var_130)
    int32_t var_40_1
    int64_t r9_4 = zx.q(arg3[0xc]) * rcx + (r10_4 u>> 0x20) + zx.q(var_40_1)
    int64_t rbx_4 = zx.q(arg3[0xd]) * rcx + (r9_4 u>> 0x20) + zx.q(var_128)
    int32_t rax_52 = rdi_3.d * 0xae918bc5
    uint64_t rbx_5 = rbx_4 u>> 0x20
    int32_t var_38_1 = rbx_5.d
    uint64_t rdx_8 = zx.q(rax_52)
    int64_t rdi_6 =
        rdx_8 * 0x2378c292 + ((zx.q(rax_52) * 0xab5844f3 + zx.q(rdi_3.d)) u>> 0x20) + zx.q(rsi_3.d)
    var_70.d = rdi_6.d
    int64_t rcx_8 = zx.q(rdx_8.d) * 0x8dc58f55 + (rdi_6 u>> 0x20) + zx.q(r15_4.d)
    var_70:4.d = rcx_8.d
    int64_t rcx_11 = (rcx_8 u>> 0x20) + rdx_8 * 0x216cc272 + zx.q(r12_3.d)
    int64_t var_68_1
    var_68_1.d = rcx_11.d
    int64_t rdi_10 = zx.q(rdx_8.d) * 0xaed63690 + (rcx_11 u>> 0x20) + zx.q(rdx_3.d)
    var_68_1:4.d = rdi_10.d
    int64_t rcx_15 = zx.q(rdx_8.d) * 0xc44edb49 + (rdi_10 u>> 0x20) + zx.q(r8_4.d)
    int64_t var_60_1
    var_60_1.d = rcx_15.d
    int64_t rdi_13 = rdx_8 * 0x7cca23e9 + (rcx_15 u>> 0x20) + zx.q(rdx_7.d)
    var_168 = rdi_13.d
    var_60_1:4.d = rdi_13.d
    rsi = var_98
    r12 = var_88
    int64_t rcx_17 = zx.q(rdx_8.d) * 0xffffffff
    int64_t rdi_15 = zx.q(r8_8.d) + (rdi_13 u>> 0x20) + rcx_17
    var_160 = rdi_15.d
    int64_t var_58_1
    var_58_1.d = rdi_15.d
    r13 = var_80
    int64_t rdi_17 = zx.q(r13_4.d) + (rdi_15 u>> 0x20) + rcx_17
    var_158 = rdi_17.d
    var_58_1:4.d = rdi_17.d
    r14 = var_90
    int64_t rdi_19 = zx.q(r14_4.d) + (rdi_17 u>> 0x20) + rcx_17
    var_148 = rdi_19.d
    int64_t var_50_1
    var_50_1.d = rdi_19.d
    int64_t r11_6 = zx.q(r11_4.d) + (rdi_19 u>> 0x20) + rcx_17
    var_140 = r11_6.d
    var_50_1:4.d = r11_6.d
    r11 = rcx_15.d
    int64_t r10_6 = zx.q(r10_4.d) + (r11_6 u>> 0x20) + rcx_17
    var_138 = r10_6.d
    int64_t var_48_1
    var_48_1.d = r10_6.d
    r10 = rdi_10.d
    int64_t r9_6 = zx.q(r9_4.d) + (r10_6 u>> 0x20) + rcx_17
    arg2 = &var_118[1]
    var_130 = r9_6.d
    int64_t rcx_20 = rdx_8 * 0x3fffffff + (r9_6 u>> 0x20) + zx.q(rbx_4.d)
    r8 = rcx_8.d
    rbx = var_a0
    var_40_1 = rcx_20.d
    uint64_t rcx_22 = (rcx_20 u>> 0x20) + zx.q(var_120) + rbx_5
    var_48_1:4.d = r9_6.d
    r9 = rcx_11.d
    rax_92 = rcx_22 u>> 0x20
    int64_t temp0_1 = var_110
    var_110 -= 1
    var_128 = rcx_22.d
    var_40_1 = rcx_22.d
    var_120.q = rax_92
    var_118 = arg2
    
    if (temp0_1 == 1)
        break
    
    rax_11 = rdi_6.d

int64_t result = sub_14296eeb0(arg1, &var_70, &data_14354b1e8, &data_14354b1e8, rax_92.d)
__security_check_cookie(rax_1 ^ &var_198)
return result
