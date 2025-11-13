// 函数: sub_142120960
// 地址: 0x142120960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* r12_1 = arg2

if (arg2 == arg1)
    return 

arg2.b = 1
sub_142120460(arg1, arg2.b)
int64_t rax_1 = *arg1
uint64_t i_5 = 0
int64_t var_70
__builtin_memset(&var_70, 0, 0x18)
uint64_t var_68
(*(rax_1 + 0x320))(arg1, &i_5, &var_68)
uint64_t i = i_5
char var_88
void var_58
int32_t arg_10
int64_t arg_18

for (int64_t r15_3 = (sx.q(var_70.d) << 4) + i; i != r15_3; i += 0x10)
    int64_t arg_20 = 0
    sub_140b4c620(&var_58, i)
    int32_t var_50_1 = *(i + 0xc)
    char var_4c_1 = *(i + 8)
    var_88 = 0
    
    if ((*(*r12_1 + 0x3d8))(r12_1, &var_58, &arg_20, &arg_10, 0) != 0)
        int64_t rsi_1 = sx.q(arg1[0x25].d)
        int32_t rax_6 = (rsi_1 + 1).d
        arg1[0x25].d = rax_6
        
        if (rax_6 s> *(arg1 + 0x12c))
            sub_1405c4f50(&arg1[0x24])
        
        int64_t rcx_5 = rsi_1 * 0x30
        int64_t* rcx_6 = rcx_5 + arg1[0x24]
        
        if (rcx_5 == neg.q(arg1[0x24]))
            rcx_6 = nullptr
        else
            arg_18 = 0
            *rcx_6 = 0
            rcx_6[1].b = 2
            *(rcx_6 + 0xc) = 0xffffffff
            __builtin_memset(&rcx_6[2], 0, 0x1c)
        
        *rcx_6 = *i
        rcx_6[2] = arg_20
        rcx_6[3].d = arg_10

int32_t rax_9 = var_70:4.d
var_70.d = 0

if (rax_9 s< 0 && rax_9 != 0)
    sub_1405a5410(&i_5, 0)

int64_t var_60
var_60.d = 0
int32_t var_5c

if (var_5c s< 0 && var_5c != 0)
    sub_1405a5410(&var_68, 0)

(*(*arg1 + 0x300))(arg1, &i_5, &var_68)
uint64_t i_1 = i_5

for (int64_t r15_6 = (sx.q(var_70.d) << 4) + i_1; i_1 != r15_6; i_1 += 0x10)
    arg_10 = 0x3f800000
    sub_140b4c620(&var_58, i_1)
    int32_t var_50_2 = *(i_1 + 0xc)
    char var_4c_2 = *(i_1 + 8)
    
    if ((*(*r12_1 + 0x398))(r12_1, &var_58, &arg_10, 0, var_88) != 0)
        int64_t rsi_2 = sx.q(arg1[0x1d].d)
        int32_t rax_16 = (rsi_2 + 1).d
        arg1[0x1d].d = rax_16
        
        if (rax_16 s> *(arg1 + 0xec))
            sub_140adefe0(&arg1[0x1c])
        
        int64_t* rdx_8 = arg1[0x1c] + rsi_2 * 0x24
        
        if (rdx_8 == 0)
            rdx_8 = nullptr
        else
            arg_18 = 0
            *rdx_8 = 0
            rdx_8[1].b = 2
            *(rdx_8 + 0xc) = 0xffffffff
            __builtin_memset(&rdx_8[2], 0, 0x14)
        
        *rdx_8 = *i_1
        rdx_8[2].d = arg_10.d

int32_t rax_18 = var_70:4.d
var_70.d = 0

if (rax_18 s< 0 && rax_18 != 0)
    sub_1405a5410(&i_5, 0)

var_60.d = 0

if (var_5c s< 0 && var_5c != 0)
    sub_1405a5410(&var_68, 0)

(*(*arg1 + 0x308))(arg1, &i_5, &var_68)
uint64_t i_2 = i_5

for (int64_t r15_9 = (sx.q(var_70.d) << 4) + i_2; i_2 != r15_9; i_2 += 0x10)
    sub_140b4c620(&var_58, i_2)
    int32_t var_50_3 = *(i_2 + 0xc)
    char var_4c_3 = *(i_2 + 8)
    int128_t var_48
    
    if ((*(*r12_1 + 0x3a8))(r12_1, &var_58, &var_48, 0, var_88) != 0)
        int64_t rsi_3 = sx.q(arg1[0x1f].d)
        int32_t rax_25 = (rsi_3 + 1).d
        arg1[0x1f].d = rax_25
        
        if (rax_25 s> *(arg1 + 0xfc))
            sub_1405c4f50(&arg1[0x1e])
        
        int64_t rcx_21 = rsi_3 * 0x30
        int64_t* rcx_22 = rcx_21 + arg1[0x1e]
        
        if (rcx_21 == neg.q(arg1[0x1e]))
            rcx_22 = nullptr
        else
            arg_10.q = 0
            *rcx_22 = 0
            rcx_22[1].b = 2
            *(rcx_22 + 0xc) = 0xffffffff
            __builtin_memset(&rcx_22[2], 0, 0x20)
            rcx_22[4] = 0
            rcx_22[5] = 0
        
        *rcx_22 = *i_2
        *(rcx_22 + 0x10) = var_48

int32_t rax_26 = var_70:4.d
var_70.d = 0

if (rax_26 s< 0 && rax_26 != 0)
    sub_1405a5410(&i_5, 0)

var_60.d = 0

if (var_5c s< 0 && var_5c != 0)
    sub_1405a5410(&var_68, 0)

(*(*arg1 + 0x310))(arg1, &i_5, &var_68)
uint64_t i_3 = i_5

for (int64_t r15_12 = (sx.q(var_70.d) << 4) + i_3; i_3 != r15_12; i_3 += 0x10)
    arg_18 = 0
    sub_140b4c620(&var_58, i_3)
    int32_t var_50_4 = *(i_3 + 0xc)
    char var_4c_4 = *(i_3 + 8)
    
    if ((*(*r12_1 + 0x3c8))(r12_1, &var_58, &arg_18, 0, var_88) != 0)
        int64_t rsi_4 = sx.q(arg1[0x21].d)
        int32_t rax_33 = (rsi_4 + 1).d
        arg1[0x21].d = rax_33
        
        if (rax_33 s> *(arg1 + 0x10c))
            sub_1405c4ec0(&arg1[0x20])
        
        int64_t* rdx_17 = arg1[0x20] + rsi_4 * 0x28
        
        if (rdx_17 == 0)
            rdx_17 = nullptr
        else
            arg_10.q = 0
            *rdx_17 = 0
            rdx_17[1].b = 2
            *(rdx_17 + 0xc) = 0xffffffff
            __builtin_memset(&rdx_17[2], 0, 0x18)
            rdx_17[3] = 0
            rdx_17[4] = 0
        
        *rdx_17 = *i_3
        rdx_17[2] = arg_18

int32_t rax_36 = var_70:4.d
var_70.d = 0

if (rax_36 s< 0 && rax_36 != 0)
    sub_1405a5410(&i_5, 0)

var_60.d = 0

if (var_5c s< 0 && var_5c != 0)
    sub_1405a5410(&var_68, 0)

(*(*arg1 + 0x318))(arg1, &i_5, &var_68)
uint64_t i_4 = i_5

for (int64_t r15_15 = (sx.q(var_70.d) << 4) + i_4; i_4 != r15_15; i_4 += 0x10)
    arg_18 = 0
    sub_140b4c620(&var_58, i_4)
    int32_t var_50_5 = *(i_4 + 0xc)
    char var_4c_5 = *(i_4 + 8)
    
    if ((*(*r12_1 + 0x3d0))(r12_1, &var_58, &arg_18, 0, var_88) != 0)
        int64_t rsi_5 = sx.q(arg1[0x23].d)
        int32_t rax_43 = (rsi_5 + 1).d
        arg1[0x23].d = rax_43
        
        if (rax_43 s> *(arg1 + 0x11c))
            sub_1405c4ec0(&arg1[0x22])
        
        int64_t* rdx_22 = arg1[0x22] + rsi_5 * 0x28
        
        if (rdx_22 == 0)
            rdx_22 = nullptr
        else
            arg_10.q = 0
            *rdx_22 = 0
            rdx_22[1].b = 2
            *(rdx_22 + 0xc) = 0xffffffff
            __builtin_memset(&rdx_22[2], 0, 0x18)
            rdx_22[3] = 0
            rdx_22[4] = 0
        
        *rdx_22 = *i_4
        rdx_22[2] = arg_18

sub_142129e50(arg1)
uint64_t rcx_38 = var_68

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

uint64_t i_6 = i_5

if (i_6 != 0)
    sub_140a74f90(i_6)
