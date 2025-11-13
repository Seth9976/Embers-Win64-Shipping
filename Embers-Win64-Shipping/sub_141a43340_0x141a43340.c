// 函数: sub_141a43340
// 地址: 0x141a43340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x18)
uint64_t rsi = 0
uint64_t var_b8
uint64_t var_a8
void* var_58
char arg_8
char arg_20

if (i s> 0)
    int32_t r10_1 = 0
    
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(i)
        int32_t i_2 = (temp1_1 - temp0_1) s>> 1
        i = i_2
        int32_t rax_4 = i_2 + r10_1
        
        if (arg2 s>= *(*(arg1 + 0x10) + (sx.q(rax_4) << 2)))
            r10_1 = rax_4 + rcx_1
    while (i s> 0)
    
    int32_t rax_5 = r10_1 - 1
    
    if (rax_5 s<= 0)
        rax_5 = 0
    
    uint64_t rax_7 = sub_141a4ff70(sx.q(rax_5) * 0x30 + *(arg1 + 0x20))
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x20)
    int32_t var_88 = 0xffffffff
    int64_t var_84_1 = 0
    arg_8.q = 0
    sub_141a34590(&var_88, rax_7)
    uint64_t rax_8 = *(arg1 + 0x10)
    void* r12_1 = arg1 + 0x60
    var_a8 = rax_8
    var_b8 = rax_8
    var_58 = arg1 + 0x10
    int32_t rdi_2 = *(arg1 + 0x18)
    int64_t var_a0
    var_a0.d = rdi_2
    void* var_50_1 = r12_1
    void* var_48_1 = arg1 + 0x20
    arg_8.d = 0
    var_a8.o = var_a8.o
    sub_141a4bf00(&var_a8, arg2, 0, 1, &arg_8, &arg_20)
    int64_t r15_1 = sx.q(arg_8.d)
    int32_t rax_11
    
    if (r15_1.d s>= 0 && r15_1.d s< rdi_2)
        int32_t rax_10 = *(var_b8 + (r15_1 << 2))
        rax_11 = rax_10 - arg2
        
        if (rax_10 - arg2 s< 0)
            rax_11 = neg.d(rax_11)
    
    int64_t var_70
    int64_t var_60
    
    if (r15_1.d s< 0 || r15_1.d s>= rdi_2 || rax_11 s> 0 || r15_1.d == 0xffffffff)
        int32_t rax_16 = sub_141a376d0(&var_58, arg2)
        int32_t r12_2 = *(arg1 + 0x28)
        r15_1 = sx.q(rax_16)
        *(arg1 + 0x28) = r12_2 + 1
        
        if (r12_2 + 1 s> *(arg1 + 0x2c))
            sub_1405c4f50(arg1 + 0x20)
        
        int64_t rdi_7 = r15_1 * 0x30
        int64_t rdx_8 = *(arg1 + 0x20) + rdi_7
        memmove(rdx_8 + 0x30, rdx_8, (r12_2 - r15_1.d) * 0x30)
        void* r14_2 = *(arg1 + 0x20)
        void* r12_4 = rdi_7 + r14_2
        arg_8.q = 0
        int64_t* rcx_15 = r14_2 + 0x18 + rdi_7
        *rcx_15 = 0
        rcx_15[1] = 0
        *(rdi_7 + r14_2) = 0xffffffff
        *(rdi_7 + r14_2 + 4) = 0
        *(rdi_7 + r14_2 + 0x10) = 0
        *(r12_4 + 0x20) = 0
        
        if (*(r12_4 + 0x24) s<= 0xffffffff)
            sub_1405947f0(r12_4 + 0x18, 0)
            rcx_15 = r14_2 + 0x18 + rdi_7
        
        int16_t* rax_19 = *(r12_4 + 0x18)
        
        if (rax_19 != 0)
            *rax_19 = 0
        
        *(rdi_7 + r14_2 + 8) = 0
        *(rdi_7 + r14_2) = var_88.q
        *(rdi_7 + r14_2 + 8) = var_84_1:4.d
        *(rdi_7 + r14_2 + 0x10) = var_78
        sub_140597df0(rcx_15, &var_70)
        r12_1 = arg1 + 0x60
        *(rdi_7 + r14_2 + 0x28) = var_60
    else
        int64_t* rdi_5 = r15_1 * 0x30 + *(arg1 + 0x20)
        *rdi_5 = var_88.q
        rdi_5[1].d = var_84_1:4.d
        rdi_5[2] = var_78
        sub_140597df0(&rdi_5[3], &var_70)
        rdi_5[5] = var_60
    
    if (r12_1 == 0)
        sub_141f79930(&arg_20)
    else
        sub_141f880d0(r12_1, &arg_8, r15_1.d)
    
    int64_t rcx_20 = var_70
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)

int32_t arg_c = 0
var_58 = arg1 + 0x10
arg_8 = 2
void* var_50_2 = arg1 + 0x60
int32_t arg_24 = 0
void* var_48_2 = arg1 + 0x20
var_b8 = arg_8.q
arg_20 = 2
int64_t var_b0 = arg_20.q
__builtin_memset(&var_a8, 0, 0x1c)
uint64_t var_98
sub_141a51280(&var_58, &var_b8, &var_98, &var_a8)
int32_t rdx_12 = 0
uint64_t r13_1 = var_a8
int32_t r8_4 = 0
uint64_t r14_3 = var_98
var_b8 = 0
var_b0:4.d = 0
int32_t i_4

if (i_4 s> 0)
    char rcx_22 = arg3
    uint64_t rdi_8 = r13_1
    uint64_t i_3 = zx.q(i_4)
    uint64_t i_1
    
    do
        int32_t rax_30 = *(rdi_8 + r14_3 - r13_1)
        
        if (rcx_22 == 0)
            if (rax_30 s> arg2)
            label_141a43672:
                int64_t r14_4 = sx.q(rdx_12)
                rdx_12 = (r14_4 + 1).d
                var_b0.d = rdx_12
                
                if (rdx_12 s> r8_4)
                    sub_1405a4cf0(&var_b8)
                    r8_4 = var_b0:4.d
                    rdx_12 = var_b0.d
                    rsi = var_b8
                
                rcx_22 = arg3
                *(rsi + (r14_4 << 2)) = *rdi_8
        else if (rax_30 s< arg2)
            goto label_141a43672
        
        rdi_8 += 4
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    r14_3 = var_98

int64_t var_a0_1
var_a0_1.d = rdx_12
var_a8 = rsi
var_a8.o = var_a8.o
int64_t result = sub_141a425a0(&var_58, &var_a8)

if (rsi != 0)
    result = sub_140a74f90(rsi)

if (r13_1 != 0)
    result = sub_140a74f90(r13_1)

if (r14_3 == 0)
    return result

return sub_140a74f90(r14_3)
