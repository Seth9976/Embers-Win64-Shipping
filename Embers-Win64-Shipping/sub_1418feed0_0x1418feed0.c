// 函数: sub_1418feed0
// 地址: 0x1418feed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rax_3 = (*(*arg2 + 0x48))(arg2)
int64_t rdx = *arg3
void* rax_4 = (*(rdx + 0x48))(arg3, rdx)
int32_t var_108
sub_140865c40(arg1 + 0x2e8, &var_108, *(rax_3 + 0x18))
int64_t rcx_3 = sx.q(var_108)
void* const rdx_2

if (rcx_3.d == 0xffffffff)
    rdx_2 = nullptr
else
    rdx_2 = *(arg1 + 0x2e8) + rcx_3 * 0x18

int64_t rdx_3 = *(rax_4 + 0x18)
int32_t r12_1 = *(rax_4 + 0x78) & 6
var_108 = *(rdx_2 + 8)
int32_t* rax_7 = sub_1418e1230(arg1 + 0x248, rdx_3, 0)
void* rdi_1 = *(arg1 + 0x240)

if (*(rdi_1 + 0x78) != 0)
    sub_1418c86c0(rdi_1, 0, 0)

void* rax_8 = *(rdi_1 + 0x70)
int64_t rax_9 = *(rax_8 + 0x40)
int64_t var_100
__builtin_memset(&var_100, 0, 0x14)
int64_t var_e8 = 0
int32_t var_e0 = 0
int32_t rsi_1 = *(rax_3 + 0x78)
int64_t rdi_2 = *(rax_3 + 0x18)
int32_t var_f0 = 1
int32_t* var_f8
sub_140775520(&var_f8)
__builtin_memset(var_f8, 0, 0x48)
int32_t* rax_11 = var_f8
*rax_11 = 0x2d
*(rax_11 + 0x28) = rdi_2
rax_11[0xc] = rsi_1
rax_11[0xe] = 1
rax_11[0x10] = 1
*(rax_11 + 0x20) = -1
int64_t rax_12 = *(rax_4 + 0x18)
int64_t rdi_3 = sx.q(var_f0)
int32_t rsi_2 = *(rax_4 + 0x78)
int32_t rax_13 = (rdi_3 + 1).d

if (rax_13 s> 0)
    sub_140775520(&var_f8)

int64_t rdx_6 = rdi_3 * 0x48
__builtin_memset(&var_f8[rdi_3 * 0x12], 0, 0x48)
int32_t* rax_15 = var_f8
*(rdx_6 + rax_15 + 0x28) = rax_12
int32_t rcx_11 = var_108
rax_15[rdi_3 * 0x12] = 0x2d
rax_15[rdi_3 * 0x12 + 0xc] = rsi_2
rax_15[rdi_3 * 0x12 + 0xe] = 1
rax_15[rdi_3 * 0x12 + 0x10] = 1
*(rdx_6 + rax_15 + 0x20) = -1
int32_t* rdx_7 = var_f8
rdx_7[0xd] = arg4[0xc]
rdx_7[0xe] = arg4[0xe]
rdx_7[0xf] = arg4[9]
rdx_7[0x10] = arg4[0xb]
int32_t rax_20 = sub_1418e1d20(rcx_11)
int32_t* rdi_4 = var_f8
var_108 = rax_20
int32_t rax_21 = sub_1418bfb90(rax_20, &rdi_4[4], &rdi_4[6])
var_100.d |= rax_21
int64_t rsi_3 = rdx_6
rdi_4[5] = 0x800
rdi_4[7] = 6
var_100:4.d |= 0x1000
void* rcx_14 = var_f8 + rsi_3
*(rcx_14 + 0x34) = arg4[0xd]
*(rcx_14 + 0x38) = arg4[0xe]
*(rcx_14 + 0x3c) = arg4[0xa]
*(rcx_14 + 0x40) = arg4[0xb]
int32_t* rax_26 = var_f8
*(rsi_3 + rax_26 + 0x10) = 0
*(rsi_3 + rax_26 + 0x18) = 0
var_100.d |= 1
*(rsi_3 + rax_26 + 0x14) = 0x1000
*(rsi_3 + rax_26 + 0x1c) = 7
var_100:4.d |= 0x1000

if (rax_13 s> 0 || var_e0 s> 0)
    void* r8_1
    r8_1.b = 1
    sub_1418c1fc0(&var_100, rax_8)

uint32_t rcx_16 = *arg4
int32_t var_90 = 0
int32_t var_74 = 0
uint32_t var_70
uint32_t rax_32
int32_t rdx_10

if (rcx_16 != data_143dbb188 || arg4[1] != data_143dbb18c || arg4[2] != data_143dbb190)
    rax_32 = arg4[1]
    rdx_10 = arg4[0xc]
    var_70 = rcx_16
else
    rdx_10 = arg4[0xc]
    char rcx_17 = rdx_10.b
    uint32_t rax_30 = *(rax_3 + 0x28) u>> rcx_17
    
    if (rax_30 u<= 1)
        rax_30 = 1
    
    var_70 = rax_30
    rax_32 = *(rax_3 + 0x2c) u>> rcx_17
    
    if (rax_32 u<= 1)
        rax_32 = 1

int32_t i = 0
int32_t rcx_18 = arg4[0xb]
uint32_t var_6c = rax_32
int32_t var_68 = 1
int32_t var_a8 = *(rax_3 + 0x78)
int32_t var_a0 = arg4[9]
int32_t var_98 = arg4[3]
int32_t var_94 = arg4[4]
int32_t var_9c = rcx_18
int32_t var_a4 = rdx_10
int32_t var_8c = *(rax_4 + 0x78)
int32_t var_84 = arg4[0xa]
int32_t var_88 = arg4[0xd]
int32_t var_7c = arg4[6]
int32_t var_78 = arg4[7]
int32_t var_80 = rcx_18

if (arg4[0xe] u> 0)
    do
        data_143efb9f8(rax_9, *(rax_3 + 0x18), 6, *(rax_4 + 0x18), 7, 1, &var_a8)
        uint32_t rax_43 = var_70 u>> 1
        
        if (rax_43 u<= 1)
            rax_43 = 1
        
        var_70 = rax_43
        uint32_t rax_45 = var_6c u>> 1
        
        if (rax_45 u<= 1)
            rax_45 = 1
        
        var_a4 += 1
        var_88 += 1
        i += 1
        var_6c = rax_45
    while (i u< arg4[0xe])
    
    rsi_3 = rdx_6

int32_t* rdx_12 = var_f8
int32_t rcx_20 = var_108
var_100 = 0
rdx_12[4] = 0x800
rdx_12[6] = 6
var_100.d |= 0x1000
int32_t rax_46 = sub_1418bfb90(rcx_20, &rdx_12[5], &rdx_12[7])
var_100:4.d |= rax_46
int32_t* rax_47 = var_f8
int32_t r14
r14.b = r12_1 != 0
*(rsi_3 + rax_47 + 0x10) = 0x1000
*(rsi_3 + rax_47 + 0x18) = 7
var_100.d |= 0x1000
int32_t rax_48 = sub_1418bfb90(r14 + 6, &rax_47[5] + rsi_3, &rax_47[7] + rsi_3)
var_100:4.d |= rax_48
int32_t result = sbb.d(rax_48, rax_48, r12_1 != 0) + 5
*rax_7 = result

if (rax_13 s> 0 || var_e0 s> 0)
    void* r8_4
    r8_4.b = 1
    result = sub_1418c1fc0(&var_100, rax_8)

if (var_e8 != 0)
    result = sub_140a74f90(var_e8)

int32_t* rcx_25 = var_f8

if (rcx_25 != 0)
    result = sub_140a74f90(rcx_25)

__security_check_cookie(rax_1 ^ &var_148)
return result
