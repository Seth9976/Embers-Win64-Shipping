// 函数: sub_142163dd0
// 地址: 0x142163dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    return arg4

int32_t arg_20
sub_1421693f0(*(arg2 + 0x150), &arg_20, arg3, arg4)
int64_t rdx_1 = sx.q(arg_20)

if (rdx_1.d == 1)
    return 0

void* rdi

if (*(arg2 + 0x330) == *(arg2 + 0x35c))
label_142163e95:
    rdi = sub_14215b0a0(arg2 + 0x328, rdx_1.d, &arg_20)
else
    void* rcx_1 = *(arg2 + 0x368)
    void* r9 = arg2 + 0x360
    
    if (rcx_1 != 0)
        r9 = rcx_1
    
    int32_t rax_3 = *(r9 + (((sx.q(*(arg2 + 0x370)) - 1) & rdx_1) << 2))
    
    if (rax_3 == 0xffffffff)
    label_142163e95_1:
        rdi = sub_14215b0a0(arg2 + 0x328, rdx_1.d, &arg_20)
    else
        int64_t r9_1 = *(arg2 + 0x328)
        void* rcx_3
        
        while (true)
            int64_t r8_3 = sx.q(rax_3) * 3
            rcx_3 = r9_1 + (r8_3 << 3)
            
            if (*(r9_1 + (r8_3 << 3)) == rdx_1.d)
                break
            
            rax_3 = *(rcx_3 + 0x10)
            
            if (rax_3 == 0xffffffff)
                goto label_142163e95_2
        
        if (rax_3 == 0xffffffff || rcx_3 == 0)
        label_142163e95_2:
            rdi = sub_14215b0a0(arg2 + 0x328, rdx_1.d, &arg_20)
        else
            rdi = rcx_3 + 8

int64_t var_50

if (*rdi == 0)
    int32_t* rax_5 = j_sub_140a82f30(0x40)
    int32_t* rbx_1 = rax_5
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    else
        *rax_5 = 0xffffffff
        rax_5[1] = 0
        rax_5[2] = 0xffffffff
        rax_5[3] = 0
        __builtin_memset(&rax_5[7], 0, 0x1e)
    
    if (rdi != &var_50)
        int32_t* r14_1 = *rdi
        *rdi = rbx_1
        
        if (r14_1 != 0)
            int64_t rcx_5 = *(r14_1 + 0x20)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            j_sub_140a74f90(r14_1)
    else if (rbx_1 != 0)
        int64_t rcx_6 = *(rbx_1 + 0x20)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        j_sub_140a74f90(rbx_1)

void* rax_6 = arg3[0x26]
int32_t* rdi_1 = *rdi
float var_48

if (rax_6 == 0)
    float rax_7 = data_143dbb200
    var_50 = data_143dbb1f8.q
    var_48 = rax_7
else
    float zmm1_1[0x4] = *(rax_6 + 0x1d0)
    var_50.d = zmm1_1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    var_48 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
    var_50:4.d = temp0_1[0]

*(rdi_1 + 0x10) = var_50
rdi_1[6] = var_48
rdi_1[7] = arg_20
sub_140d3a3a0(rdi_1, sub_141dc9840(arg3))
sub_140d3a3a0(&rdi_1[2], arg3[4])
var_50 = arg3[3]
int64_t var_40
sub_140b63b70(&var_50, &var_40)

if (&rdi_1[8] == &var_40)
    int64_t rcx_13 = var_40
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
else
    int64_t rcx_12 = *(rdi_1 + 0x20)
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    *(rdi_1 + 0x20) = var_40
    int32_t var_38
    rdi_1[0xa] = var_38
    int32_t var_34
    rdi_1[0xb] = var_34

int64_t rbx_2 = arg3[3]
int32_t rax_15 = *(arg2 + 0x380)
var_50 = rbx_2
int32_t var_58
int32_t var_54
int32_t rcx_17

if (rax_15 == *(arg2 + 0x3ac))
label_14216407d:
    rcx_17 = 0
    var_54 = 0
    var_58 = 0
else
    int32_t rax_17 = sub_140b5ead0(rbx_2.d) + var_50:4.d
    void* r8_5 = arg2 + 0x3b0
    void* rcx_15 = *(r8_5 + 8)
    
    if (rcx_15 != 0)
        r8_5 = rcx_15
    
    int32_t rax_19 = *(r8_5 + (((sx.q(*(arg2 + 0x3c0)) - 1) & sx.q(rax_17)) << 2))
    
    if (rax_19 == 0xffffffff)
        goto label_14216407d
    
    int64_t r8_6 = *(arg2 + 0x378)
    int64_t rcx_16
    
    while (true)
        rcx_16 = sx.q(rax_19)
        int64_t rdx_9 = rcx_16 * 3
        
        if (*(r8_6 + (rdx_9 << 3)) == rbx_2)
            break
        
        rax_19 = *(r8_6 + (rdx_9 << 3) + 0x10)
        
        if (rax_19 == 0xffffffff)
            goto label_14216407d
    
    if (rax_19 == 0xffffffff)
        goto label_14216407d
    
    void* rax_28 = r8_6 + rcx_16 * 0x18
    
    if (rax_28 == 0)
        goto label_14216407d
    
    var_58.q = *(rax_28 + 8)
    rcx_17 = var_58

if ((var_54 != 0 | sub_140b5b8a0(rcx_17, 0) == 0) != 0)
    sub_140597da0(&rdi_1[8], sub_140b63b70(&var_58, &var_40))
    int64_t rcx_20 = var_40
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)

char rax_22 = sub_140d3e110(rdi_1)
char rax_24

if (rax_22 != 0)
    rax_24 = sub_1420e6590(sub_140d3c6e0(rdi_1))

int64_t rcx_26

if (rax_22 == 0 || rax_24 != 0)
    var_50 = 0
    rcx_26 = 0
else
    rcx_26 = *(sub_140d21d80(sub_140d3c6e0(rdi_1)) + 0x18)

rdi_1[0xe].b = 0
*(rdi_1 + 0x30) = rcx_26
return rdi_1
