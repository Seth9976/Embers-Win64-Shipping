// 函数: sub_142446f40
// 地址: 0x142446f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t* result = arg2
void* rdx = *arg1
int64_t* var_110 = arg3
int64_t r9 = sx.q(*(rdx + 0x38))
int64_t rsi = r9

if (r9.d != 0)
    void* r8_2 = (rsi << 6) + rdx
    *((sx.q(*(r8_2 + 0x3a)) << 6) + rdx + 0x38) = *(r8_2 + 0x38)
    *((sx.q(*(r8_2 + 0x38)) << 6) + *arg1 + 0x3a) = *(r8_2 + 0x3a)
    *(r8_2 + 0x3a) = r9.w
    *(r8_2 + 0x38) = r9.w
else
    rsi = sx.q(arg1[1].d)
    int32_t rax_3 = (rsi + 1).d
    arg1[1].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xc))
        sub_1405c4fe0(arg1)
    
    int64_t rcx_1 = rsi << 6
    __builtin_memset(rcx_1 + *arg1 + 8, 0, 0x28)
    int64_t rax_5 = *arg1
    *(rcx_1 + rax_5 + 0x3a) = rsi.w
    *(rcx_1 + rax_5 + 0x38) = rsi.w

void* rdx_4 = *arg1
int64_t rdi_1 = sx.q(rsi.d) << 6
*(rdx_4 + rdi_1 + 0x38) = 1
*(rdx_4 + rdi_1 + 0x3a) = *(rdx_4 + 0x7a)
*((sx.q(*(rdx_4 + 0x7a)) << 6) + *arg1 + 0x38) = rsi.w
*(rdx_4 + 0x7a) = rsi.w
int16_t rax_10 = arg4[1].w
int32_t var_118
var_118.w = rax_10
int32_t temp1 = arg1[3].d

if (rsi.d u>= temp1)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse((rsi + 1).d)
    int32_t var_108_1 = temp0_1
    int32_t rcx_7
    
    if (rsi.d == temp1)
        rcx_7 = 0x20
    else
        rcx_7 = 0x1f - temp0_1
    
    int32_t rcx_9 = rcx_7 << 0x1a s>> 0x1f
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rsi.d)
    int32_t var_114_1 = temp0_2
    char rdx_5
    
    if (rcx_9 == 0)
        rdx_5 = 0x20
    else
        rdx_5 = 0x1f - temp0_2.b
    
    int32_t rdx_6 = 1 << ((0x20 - rdx_5) & (not.d(rcx_9)).b)
    
    if (rdx_6 u<= 0x20)
        rdx_6 = 0x20
    
    sub_140a30d10(&arg1[2], rdx_6)
    rax_10 = var_118.w

uint64_t r8_5 = zx.q(*(arg1 + 0x14)) & zx.q(rax_10)
*(arg1[5] + (zx.q(rsi.d) << 2)) = *(arg1[4] + (r8_5 << 2))
*(arg1[4] + (r8_5 << 2)) = rsi.d
int64_t rax_19 = *arg4
int64_t* r15_1 = *arg1 + rdi_1
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x80)
int32_t i = 0
*r15_1 = rax_19
*(r15_1 + 0x36) = arg4[1].w
r15_1[6].d = data_14399fa54
__builtin_memset(&r15_1[2], 0, 0x20)
int32_t* r9_1 = arg5[2]
int32_t r13_1 = r9_1[6] + (r9_1[7] << 1)

if (*r9_1 u> 0)
    int64_t* r12 = var_110
    int32_t* r8_6
    
    do
        r8_6 = r9_1
        
        if ((*(arg5 + 0x21) & (1 << i.b).b) != 0)
            uint64_t i_1 = zx.q(i)
            *(r15_1 + (i_1 << 2) + 0x10) = *sub_14243ee70(r12, &var_118, &(&var_d8)[zx.q(i) * 2], 
                zx.d(*(r9_1 + i_1 + 0x20)), r13_1)
            r8_6 = arg5[2]
        
        i += 1
        r9_1 = r8_6
    while (i u< *r8_6)
    result = arg2

void var_f0
void** rax_26 = sub_1424301d0(&var_f0, arg6, 0xff)
void* rax_27 = *rax_26
__builtin_memset(rax_27 + 0x10, 0, 0x80)
void* rcx_19 = *arg5
*(rax_27 + 0x90) = rcx_19

if (rcx_19 != 0)
    *(rcx_19 + 8) += 1

int128_t zmm0 = var_d8.o
*(rax_27 + 0x98) = arg5[1]
*(rax_27 + 0xa0) = arg5[2]
*(rax_27 + 0xa8) = arg5[3].d
*(rax_27 + 0xac) = *(arg5 + 0x1c)
*(rax_27 + 0xb0) = arg5[4].b
*(rax_27 + 0xb1) = *(arg5 + 0x21)
*(rax_27 + 0x10) = zmm0
int64_t var_c8
*(rax_27 + 0x20) = var_c8.o
int64_t var_b8
*(rax_27 + 0x30) = var_b8.o
int64_t var_a8
*(rax_27 + 0x40) = var_a8.o
int64_t var_98
*(rax_27 + 0x50) = var_98.o
int64_t var_88
*(rax_27 + 0x60) = var_88.o
int64_t var_78
*(rax_27 + 0x70) = var_78.o
int64_t var_68
*(rax_27 + 0x80) = var_68.o
void* rcx_26 = *rax_26
int32_t r8_8 = rax_26[2].d
int64_t* rax_28 = rax_26[1]
int64_t* rbx_1 = *(rcx_26 + 0xc0)
var_110 = rbx_1

if (rbx_1 != 0)
    rbx_1[9].d += 1

sub_1424457d0(rcx_26, rax_28, r8_8, 1)

if (&r15_1[1] != &var_110)
    int64_t* rcx_27 = r15_1[1]
    r15_1[1] = rbx_1
    
    if (rcx_27 != 0)
        rcx_27[9].d -= 1
        
        if (rcx_27[9].d == 1)
            sub_140a2f6e0(rcx_27)
else if (rbx_1 != 0)
    rbx_1[9].d -= 1
    
    if (rbx_1[9].d == 1)
        sub_140a2f6e0(var_110)

result[1] = zx.d(*(r15_1 + 0x34))
*result = rsi.d
__security_check_cookie(rax_1 ^ &var_148)
return result
