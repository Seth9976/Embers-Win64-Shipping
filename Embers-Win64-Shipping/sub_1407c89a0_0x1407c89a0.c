// 函数: sub_1407c89a0
// 地址: 0x1407c89a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rax_3 = *(arg1 + 0x50) + 3
void* rdx = nullptr
void* var_58 = nullptr
int64_t var_f0 = arg3
int32_t var_50 = 0
int32_t var_4c = 0x20
int32_t rax_4 = rax_3 & 0xfffffffc
void var_d8

if (rax_4 s> 0)
    var_50 = rax_4
    
    if (rax_4 s> 0x20)
        sub_1407c3770(&var_d8, 0)
        rdx = var_58
else if (rax_4 s< 0)
    int32_t rsi_2 = neg.d(rax_4)
    
    if (rsi_2 != 0)
        int32_t rcx_2 = neg.d(rsi_2 + rax_4)
        
        if (rcx_2 != 0)
            memmove(&var_d8 + (sx.q(rax_4) << 2), &var_d8, rcx_2 << 2)
        
        var_50 -= rsi_2
        sub_1407c3eb0(&var_d8)
        rdx = var_58

int32_t r8_2 = 0

if (var_50 s> 0)
    int64_t rcx_5 = 0
    
    while (true)
        void* rax_6 = &var_d8
        rcx_5 += 4
        
        if (rdx != 0)
            rax_6 = rdx
        
        r8_2 += 1
        *(rax_6 + rcx_5 - 4) = 0xffffffff
        
        if (r8_2 s>= var_50)
            break
        
        rdx = var_58

int32_t var_e8 = 0xffffffff
int32_t var_f8

if (arg4 == 0)
    var_f8 = 0
    sub_140741e30(arg2, &var_f0, arg1 + 8, &var_f8, 0)
    var_f8 = 0
    sub_140741e30(arg2, &var_f0, arg1 + 0xe, &var_f8, 0)
    int64_t rax_7 = sub_14082c590()
    
    if (*(arg1 + 0x1c) u> 0)
        uint32_t r14_1 = zx.d(*(arg1 + 0x1a))
        void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rdx_4 = &rcx_10[5]
        
        if (rdx_4 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rdx_4 = &rcx_10[5]
        
        *(arg2 + 0x30) = rdx_4
        void**** rax_8 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_8 = rcx_10
        *(arg2 + 8) = &rcx_10[1]
        rcx_10[1] = 0
        *rcx_10 = &data_142d99560
        rcx_10[2] = arg3
        rcx_10[3].d = r14_1
        rcx_10[4] = rax_7

var_f8 = 0xffffffff
sub_140741e30(arg2, &var_f0, arg1 + 0x14, &var_f8, 0)
int64_t rax_10 = sub_14082c590()

if (*(arg1 + 0x20) u> 0)
    uint32_t r14_2 = zx.d(*(arg1 + 0x1e))
    void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_6 = &rcx_17[5]
    
    if (rdx_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_6 = &rcx_17[5]
    
    *(arg2 + 0x30) = rdx_6
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_17
    *(arg2 + 8) = &rcx_17[1]
    rcx_17[1] = 0
    *rcx_17 = &data_142d99560
    rcx_17[2] = arg3
    rcx_17[3].d = r14_2
    rcx_17[4] = rax_10

int64_t rax_13 = sub_14082c510()

if (*(arg1 + 0x24) u> 0)
    uint32_t r15_3 = zx.d(*(arg1 + 0x22))
    void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_7 = &rcx_23[5]
    
    if (rdx_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_7 = &rcx_23[5]
    
    *(arg2 + 0x30) = rdx_7
    void**** rax_14 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_14 = rcx_23
    *(arg2 + 8) = &rcx_23[1]
    rcx_23[1] = 0
    *rcx_23 = &data_142d99560
    rcx_23[2] = arg3
    rcx_23[3].d = r15_3
    rcx_23[4] = rax_13

int64_t rax_16 = sub_14082c590()

if (*(arg1 + 0x28) u> 0)
    uint32_t r15_4 = zx.d(*(arg1 + 0x26))
    void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rdx_8 = &rcx_29[5]
    
    if (rdx_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rdx_8 = &rcx_29[5]
    
    *(arg2 + 0x30) = rdx_8
    void**** rax_17 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_17 = rcx_29
    *(arg2 + 8) = &rcx_29[1]
    rcx_29[1] = 0
    *rcx_29 = &data_142d99560
    rcx_29[2] = arg3
    rcx_29[3].d = r15_4
    rcx_29[4] = rax_16

var_f8 = 0
sub_140741e30(arg2, &var_f0, arg1 + 0x2a, &var_f8, 0)
var_f8 = 0
sub_140741e30(arg2, &var_f0, arg1 + 0x30, &var_f8, 0)
void* r9_5 = &var_d8

if (var_58 != 0)
    r9_5 = var_58

sub_14077c9b0(arg2, &var_f0, arg1 + 0x36, r9_5, var_50, 0)
uint64_t result = sub_140741e30(arg2, &var_f0, arg1 + 0x3c, &var_e8, 0)

if (var_58 != 0)
    result = sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_128)
return result
