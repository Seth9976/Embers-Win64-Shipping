// 函数: sub_142793580
// 地址: 0x142793580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rax_2 = *(arg1 + 0x710)
int512_t zmm1
zmm1.o = zx.o(0)
int32_t r9 = *(rax_2 + 8)
*(arg1 + 0x168) = r9
uint64_t rax_3 = zx.q(*(rax_2 + 0x18))
int64_t var_118
__builtin_memset(&var_118, 0, 0x30)
*(arg1 + 0x16c) = (rax_3 * 3).d
int32_t var_a8 = 0
int32_t var_a4 = 4
int64_t var_a0
__builtin_memset(&var_a0, 0, 0x40)
int64_t var_60 = -1
int32_t var_58 = 0xffffffff
int32_t var_54
__builtin_memset(&var_54, 0, 0x1c)
sub_1422a3c90(arg1 + 0x4f8, r9, 1)
sub_1422c8fe0(arg1 + 0x470, *(arg1 + 0x168), 1, 1)
sub_1422a3a50(arg1 + 0x538, *(arg1 + 0x168), 1)
(*(*(arg1 + 0x4f8) + 0x28))(arg1 + 0x4f8, zmm1)
(*(*(arg1 + 0x470) + 0x28))(arg1 + 0x470)
(*(*(arg1 + 0x538) + 0x28))(arg1 + 0x538)
sub_142290930(arg1 + 0x4f8, arg1 + 0x170, &var_118)
sub_1422b9c80(arg1 + 0x470, arg1 + 0x170, &var_118)
sub_1422b9b10(arg1 + 0x470, arg1 + 0x170, &var_118)
sub_1422b9a60(arg1 + 0x470, arg1 + 0x170, &var_118, 0)
sub_142290850(arg1 + 0x538, arg1 + 0x170, &var_118)
*(arg1 + 0x590) = *(arg1 + 0x16c)
(*(*(arg1 + 0x578) + 0x28))(arg1 + 0x578)
*(arg1 + 0x5b0) = *(arg1 + 0x16c)
(*(*(arg1 + 0x598) + 0x28))(arg1 + 0x598)
int128_t var_50
int64_t var_40_1
int64_t var_38

if (*(arg1 + 0x468) != 0)
    void* rbx_1 = arg1 + 0x5e0
    *(arg1 + 0x5d0) = *(arg1 + 0x168)
    int64_t rdi_1 = sx.q(*(rbx_1 + 0x80))
    int32_t rax_12 = (rdi_1 + 1).d
    *(rbx_1 + 0x80) = rax_12
    
    if (rax_12 s> *(rbx_1 + 0x84))
        sub_142795cf0(rbx_1, rdi_1.d)
    
    void* rax_13 = *(rbx_1 + 0x78)
    int64_t rcx_14 = rdi_1 * 5
    void* rdi_2 = arg1 + 0x668
    void* rdx_10 = rbx_1
    
    if (rax_13 != 0)
        rdx_10 = rax_13
    
    *(rdx_10 + (rcx_14 << 3) + 8) = 0xffffffff
    *(rdx_10 + (rcx_14 << 3) + 0xc) = 4
    *(rdx_10 + (rcx_14 << 3) + 0x10) = 0
    *(rdx_10 + (rcx_14 << 3)) = &data_1434ad558
    *(rdx_10 + (rcx_14 << 3) + 0x20) = 0
    int64_t rsi_1 = sx.q(*(rdi_2 + 0x80))
    int32_t rax_14 = (rsi_1 + 1).d
    *(rdi_2 + 0x80) = rax_14
    
    if (rax_14 s> *(rdi_2 + 0x84))
        sub_142795cf0(rdi_2, rsi_1.d)
    
    void* rax_15 = *(rdi_2 + 0x78)
    int64_t rcx_16 = rsi_1 * 5
    void* rdx_12 = rdi_2
    
    if (rax_15 != 0)
        rdx_12 = rax_15
    
    *(rdx_12 + (rcx_16 << 3) + 8) = 0xffffffff
    *(rdx_12 + (rcx_16 << 3) + 0xc) = 4
    *(rdx_12 + (rcx_16 << 3) + 0x10) = 0
    *(rdx_12 + (rcx_16 << 3)) = &data_1434ad558
    *(rdx_12 + (rcx_16 << 3) + 0x20) = 0
    void* rdx_13 = rbx_1
    void* rax_16 = *(rbx_1 + 0x78)
    
    if (rax_16 != 0)
        rdx_13 = rax_16
    
    *(rdx_13 + 0x18) = *(*(arg1 + 0x710) + 0xa0)
    void* rdx_14 = rdi_2
    void* rax_18 = *(rdi_2 + 0x78)
    
    if (rax_18 != 0)
        rdx_14 = rax_18
    
    void* rcx_19 = rbx_1
    *(rdx_14 + 0x18) = *(*(arg1 + 0x710) + 0xa0)
    void* rax_20 = *(rbx_1 + 0x78)
    
    if (rax_20 != 0)
        rcx_19 = rax_20
    
    (*(*rcx_19 + 0x28))(rcx_19)
    void* rax_22 = *(rdi_2 + 0x78)
    void* rcx_20 = rdi_2
    
    if (rax_22 != 0)
        rcx_20 = rax_22
    
    (*(*rcx_20 + 0x28))(rcx_20)
    (*(*(arg1 + 0x5b8) + 0x28))(arg1 + 0x5b8)
    var_38 = *(arg1 + 0x5d8)
    void* rax_26 = *(rbx_1 + 0x78)
    
    if (rax_26 != 0)
        rbx_1 = rax_26
    
    var_50:8.q = *(rbx_1 + 0x20)
    void* rax_28 = *(rdi_2 + 0x78)
    
    if (rax_28 != 0)
        rdi_2 = rax_28
    
    var_40_1 = *(rdi_2 + 0x20)

sub_142079dc0(arg1 + 0x2a0, &var_118)
sub_142079dc0(arg1 + 0x380, &var_118)
*(arg1 + 0x450) = var_50:8.q
*(arg1 + 0x458) = var_40_1
*(arg1 + 0x460) = var_38
sub_1419ba620(arg1 + 0x170)
int64_t result

if (*(arg1 + 0x178) != 0xffffffff)
    result = sub_1419ba620(arg1 + 0x170)
else
    result = (*(*(arg1 + 0x170) + 0x28))(arg1 + 0x170)

__security_check_cookie(rax_1 ^ &var_138)
return result
