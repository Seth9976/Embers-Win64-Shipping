// 函数: sub_141a1b750
// 地址: 0x141a1b750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = &arg1[2]
__builtin_memset(arg1, 0, 0x20)
void** const var_f8
memset(&var_f8, 0, 0x90)
sub_140b4c2a0(&var_f8)
int64_t var_68 = 0
var_f8 = &data_142d6b230
int64_t var_58 = 0x7fffffffffffffff
sub_140b55290(&var_f8, 1)
var_f8[0x1b](&var_f8, 0)
int64_t* var_f0
int32_t* rdx_1 = *var_f0
char var_cf
int32_t arg_10

if (&rdx_1[1] u> var_f0[1])
    int32_t* rdx_2 = &arg_10
    void** const* rcx_5 = &var_f8
    
    if ((var_cf & 0x20) != 0)
        sub_140b54070(rcx_5, rdx_2, arg3)
    else
        var_f8[0x2a](rcx_5, rdx_2, 4)
else
    arg_10 = *rdx_1
    *var_f0 += 4

char arg_8

if (arg_10 s> 0)
    int64_t* rax_4 = j_sub_140a82f30(0x18)
    int64_t* rcx_6 = rax_4
    
    if (rax_4 == 0)
        rcx_6 = nullptr
    else
        *rax_4 = 0
    
    int32_t rax_5 = arg_10
    arg1[1] = rcx_6
    rcx_6[1].d = rax_5
    int64_t rcx_7 = *var_f0
    bool cond:4_1
    
    if (rcx_7 + 4 u> var_f0[1])
        int32_t rax_8
        rax_8.b = arg_8 != 0
        int32_t arg_20 = rax_8
        var_f8[0x2a](&var_f8, &arg_20, 4)
        cond:4_1 = arg_20 != 0
    else
        cond:4_1 = *rcx_7 != 0
        *var_f0 = rcx_7 + 4
    
    int64_t* rdx_5 = arg1[1]
    void** const* rcx_9 = &var_f8
    
    if (cond:4_1 == 0)
        arg3 = sub_141a1b300(rcx_9, rdx_5, arg3)
    else
        arg3 = sub_141a1b0d0(rcx_9, rdx_5, arg3)

int32_t* rdx_6 = *var_f0
int32_t arg_18

if (&rdx_6[1] u> var_f0[1])
    int32_t* rdx_7 = &arg_18
    void** const* rcx_11 = &var_f8
    
    if ((var_cf & 0x20) != 0)
        sub_140b54070(rcx_11, rdx_7, arg3)
    else
        var_f8[0x2a](rcx_11, rdx_7, 4)
else
    arg_18 = *rdx_6
    *var_f0 += 4

uint64_t rax_13 = zx.q(arg_18)
int64_t rbx_1 = 0
int64_t var_128 = 0
uint32_t r14 = 0
uint32_t var_120 = 0
uint32_t rcx_13 = (rax_13 * 3).d << 2

if (rcx_13 s> 0)
    sub_1405daba0(&var_128)
    rbx_1 = var_128
    r14 = rcx_13
else if (rcx_13 s< 0 && rcx_13 != 0)
    sub_1405dac10(&var_128)
    rbx_1 = var_128
    r14 = rcx_13

int64_t r15 = sx.q(r14)

if (r14 != 0 && (var_cf & 1) == 0)
    if (var_68 + r15 s> var_f8[5](&var_f8))
        var_cf |= 1
    else
        memcpy(rbx_1, sx.q(var_68.d) + *arg2, r15.d)
        var_68 += r15

void*** rax_17 = j_sub_140a82f30(0x30)

if (rax_17 == 0)
    *arg1 = 0
    
    if (rbx_1 != 0)
        arg3 = sub_140a74f90(rbx_1)
else
    rax_17[1].d = 0xffffffff
    *(rax_17 + 0xc) = 4
    rax_17[2] = 0
    *rax_17 = &data_143021ee8
    rax_17[3] = 0
    rax_17[4].d = r14
    
    if (r14 != 0)
        sub_1405da9e0(&rax_17[3], r14, 0)
        memcpy(rax_17[3], rbx_1, r15.d)
    else
        *(rax_17 + 0x24) = 0
    
    rax_17[5].d = r14
    
    if (rbx_1 != 0)
        arg3 = sub_140a74f90(rbx_1)
    
    *arg1 = rax_17
    r12 = &arg1[2]

int32_t* rdx_15 = *var_f0

if (&rdx_15[1] u> var_f0[1])
    int32_t* rdx_16 = &arg_8
    void** const* rcx_23 = &var_f8
    
    if ((var_cf & 0x20) != 0)
        sub_140b54070(rcx_23, rdx_16, arg3)
    else
        var_f8[0x2a](rcx_23, rdx_16, 4)
else
    arg_8.d = *rdx_15
    *var_f0 += 4

if (arg_8.d s> 0)
    void*** rax_21 = j_sub_140a82f30(0x20)
    
    if (rax_21 == 0)
        rax_21 = nullptr
    else
        rax_21[1].d = 1
        *rax_21 = &data_142df7bd8
        *(rax_21 + 0xc) = 1
        rax_21[2] = 0
        rax_21[3] = 0
    
    uint128_t zmm0_1 = (&rax_21[2]).o
    uint128_t var_118 = zmm0_1
    void*** rbx_2 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rbx_2 = rax_21
    
    if (r12 != &var_118)
        *r12 = var_118.q
        var_118.q = 0
        sub_1405aeff0(r12 + 8, &var_118:8)
        rbx_2 = rax_21
    
    void* rcx_25 = var_118:8.q
    
    if (rcx_25 != 0)
        int32_t rax_23 = *(rcx_25 + 8)
        *(rcx_25 + 8) -= 1
        
        if (rax_23 == 1)
            int64_t* rbx_3 = var_118:8.q
            (**rbx_3)(rbx_3)
            int32_t rax_25 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (rax_25 == 1)
                int64_t* rcx_27 = var_118:8.q
                (*(*rcx_27 + 8))(rcx_27, 1)
        
        rbx_2 = rax_21
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rdi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*rbx_2)[1](rbx_2, zx.q(rdi_1))
    
    int64_t* rcx_30 = *r12
    int32_t r8_4 = arg_8.d
    int32_t rax_30 = rcx_30[1].d
    
    if (r8_4 s> rax_30)
        rcx_30[1].d = r8_4
        
        if (r8_4 s> *(rcx_30 + 0xc))
            sub_140638a00(rcx_30)
        
        r8_4 = arg_8.d
    else if (r8_4 s< rax_30 && rax_30 != r8_4)
        rcx_30[1].d = r8_4
        sub_140775970(rcx_30)
        r8_4 = arg_8.d
    
    int64_t rdi_2 = **r12
    int64_t rbx_5 = sx.q(r8_4) * 0xc
    
    if (rbx_5 != 0 && (var_cf & 1) == 0)
        if (var_68 + rbx_5 s> var_f8[5](&var_f8))
            char var_cf_1 = var_cf | 1
        else
            memcpy(rdi_2, sx.q(var_68.d) + *arg2, rbx_5.d)
            int64_t var_68_1 = var_68 + rbx_5

sub_140b4cb40(&var_f8)
return arg1
