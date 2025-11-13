// 函数: sub_14187c490
// 地址: 0x14187c490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t rdi = sx.q(*(arg1 + 0xe0))
int32_t rax_2 = (rdi + 1).d
*(arg1 + 0xe0) = rax_2

if (rax_2 s> *(arg1 + 0xe4))
    sub_1405a4df0(arg1 + 0xd8)

int64_t rax_3 = *(arg1 + 0xd8)
int64_t rcx_1 = rdi * 3
*(rax_3 + (rcx_1 << 3)) = 0
*(rax_3 + (rcx_1 << 3) + 8) = 0
*(rax_3 + (rcx_1 << 3) + 0x10) = 0
int64_t r13_1 = *(arg1 + 0xd8)
int64_t r12 = sx.q(*(arg1 + 0xe0)) * 3
void*** rax_5 = j_sub_140a82f30(0x10)

if (rax_5 == 0)
    rax_5 = nullptr
else
    rax_5[1] = arg2
    *rax_5 = &data_142fe7ee0

void*** rcx_2 = *(r13_1 + (r12 << 3) - 0x18)
void*** rdx_1 = rcx_2

if (rcx_2 != rax_5)
    *(r13_1 + (r12 << 3) - 0x18) = rax_5
    rdx_1 = rax_5
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
        rdx_1 = *(r13_1 + (r12 << 3) - 0x18)

void*** rax_7 = sub_1418a1010(0x64, rdx_1, 0, *(arg1 + 0xc0))
int64_t* rcx_3 = *(r13_1 + (r12 << 3) - 0x10)

if (rcx_3 != rax_7)
    *(r13_1 + (r12 << 3) - 0x10) = rax_7
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)

int128_t zmm0 = *(arg1 + 0x98)
int32_t var_128 = *(arg1 + 0x80)
int32_t var_124 = *(arg1 + 0x84)
int32_t var_120 = *(arg1 + 0x88)
int32_t var_11c = *(arg1 + 0x8c)
int32_t var_118 = *(arg1 + 0x90)
char var_100 = *(arg1 + 0xa8)
int32_t var_fc = *(arg1 + 0xac)
int32_t var_f8 = *(arg1 + 0xb0)
int128_t var_110 = zmm0
void*** rax_17 = sub_14187c960(&var_128, 0)
void*** rcx_5 = *(r13_1 + (r12 << 3) - 8)
void*** var_148 = rcx_5

if (rcx_5 != rax_17)
    *(r13_1 + (r12 << 3) - 8) = rax_17
    var_148 = rax_17
    
    if (rcx_5 != 0)
        (*rcx_5)[1](rcx_5, 1)
        var_148 = *(r13_1 + (r12 << 3) - 8)

int64_t rdi_1 = *(arg1 + 0xd0)
int64_t rsi_1 = *(arg1 + 0xc8)
int64_t r14 = *(r13_1 + (r12 << 3) - 0x10)
int64_t r15 = *(arg1 + 0xb8)
int64_t* rax_21 = (*(*arg2 + 8))(arg2, &var_128)
void var_d8
void*** result = sub_14187c280(sub_141861750(&var_d8, arg1 + 0x30), r15, r14, *(arg1 + 0x10), arg3, 
    arg4, arg2, *(arg1 + 0x18), *(arg1 + 0x20), rsi_1, var_148, rdi_1, *(arg1 + 0x28), rax_21)
void*** result_1 = result
void*** var_78 = nullptr
void** const var_68 = &data_142e347e8
var_118.q = 0
int64_t (* var_88)(int64_t* arg1) = sub_141822d90
int64_t* rbx_2 = *(r13_1 + (r12 << 3) - 0x10)
var_128.q = sub_141822d90
sub_140956100(&var_68, &var_118)
int64_t r8_1 = *rbx_2
(*(r8_1 + 0x28))(rbx_2, &var_128, r8_1)

if (var_88 != 0)
    void** const* rcx_11 = &var_68
    
    if (var_78 != 0)
        rcx_11 = var_78
    
    (*rcx_11)[2](rcx_11)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
