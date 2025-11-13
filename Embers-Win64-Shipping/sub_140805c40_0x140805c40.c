// 函数: sub_140805c40
// 地址: 0x140805c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int32_t rbx = arg1[0x39].d
int32_t rbx_1 = rbx - 1

if (rbx - 1 s>= 0)
    int64_t rbp_1 = sx.q(rbx_1) << 3
    int64_t r15_1 = rbp_1
    int64_t r14_2 = sx.q(rbx_1 + 1) << 3
    int32_t temp2_1
    
    do
        int64_t* rcx = arg1[0x38]
        
        if (*(rcx + rbp_1) == 0)
            int32_t rdx_1 = arg1[0x39].d
            int32_t rax_4 = rdx_1 - rbx_1
            
            if (rax_4 != 1)
                memmove(rcx + r15_1, r14_2 + rcx, (rax_4 - 1) << 3)
                rdx_1 = arg1[0x39].d
            
            arg1[0x39].d = rdx_1 - 1
            sub_1405c53d0(&arg1[0x38])
        
        r14_2 -= 8
        r15_1 -= 8
        rbp_1 -= 8
        temp2_1 = rbx_1
        rbx_1 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t rbx_2 = arg1[0x3d].d
int32_t rbx_3 = rbx_2 - 1

if (rbx_2 - 1 s>= 0)
    int64_t r14_3 = sx.q(rbx_3) << 3
    int64_t r12_1 = r14_3
    int64_t r15_3 = sx.q(rbx_3 + 1) << 3
    int32_t temp5_1
    
    do
        int64_t rcx_3 = arg1[0x3c]
        void* rax_9 = *(r14_3 + rcx_3)
        
        if (rax_9 == 0 || *(rax_9 + 0x28) == 0)
            int32_t rdx_3 = arg1[0x3d].d
            int32_t rax_11 = rdx_3 - rbx_3
            
            if (rax_11 != 1)
                memmove(rcx_3 + r12_1, r15_3 + rcx_3, (rax_11 - 1) << 3)
                rdx_3 = arg1[0x3d].d
            
            arg1[0x3d].d = rdx_3 - 1
            sub_1405c53d0(&arg1[0x3c])
        
        r15_3 -= 8
        r12_1 -= 8
        r14_3 -= 8
        temp5_1 = rbx_3
        rbx_3 -= 1
    while (temp5_1 - 1 s>= 0)

int128_t var_48 = data_14396e7c0
int64_t rsi = 0

if (sub_140cdd5d0(arg1, &var_48) s< 0x38)
    int32_t rcx_8 = arg1[0x29].d & 8
    int32_t i
    
    if (rcx_8 == 0)
        i = 0
    else
        i = arg1[0x1f].d
    
    int32_t rcx_9
    
    if (rcx_8 == 0)
        rcx_9 = 4
    else
        rcx_9 = *(arg1 + 0xfc)
    
    int32_t rdx_6 = 0
    
    for (; i s<= rcx_9; i += 1)
        rdx_6 |= 1 << (i u% 0x20)
    
    sub_1407e51f0(&arg1[0x23], sub_14081a540(&var_48, rdx_6))
    int64_t rcx_12 = var_48:8.q
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    if ((arg1[0x29].b & 0x10) != 0)
        int64_t rbp_2 = sx.q(arg1[0x28].d)
        int32_t rax_16 = (rbp_2 + 1).d
        arg1[0x28].d = rax_16
        
        if (rax_16 s> *(arg1 + 0x144))
            sub_1405c4f50(&arg1[0x27])
        
        int32_t* rbp_5 = rbp_2 * 0x30 + arg1[0x27]
        sub_14081a5b0(rbp_5)
        rbp_5[8] &= 0xfffffffe
        rbp_5[0xa] &= 0xfffffffe
        rbp_5[9] = 0x3f800000
        sub_1407e51f0(rbp_5, sub_14081a540(&var_48, 1))
        int64_t rcx_17 = var_48:8.q
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        rbp_5[0xa] |= 1
        rbp_5[8] |= 1
        rbp_5[9] = arg1[0x20].d
        int64_t rbp_6 = sx.q(arg1[0x28].d)
        int32_t rax_19 = (rbp_6 + 1).d
        arg1[0x28].d = rax_19
        
        if (rax_19 s> *(arg1 + 0x144))
            sub_1405c4f50(&arg1[0x27])
        
        int32_t* rbp_9 = rbp_6 * 0x30 + arg1[0x27]
        sub_14081a5b0(rbp_9)
        rbp_9[8] &= 0xfffffffe
        rbp_9[0xa] &= 0xfffffffe
        rbp_9[9] = 0x3f800000
        sub_1407e51f0(rbp_9, sub_14081a540(&var_48, 2))
        int64_t rcx_22 = var_48:8.q
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        rbp_9[0xa] |= 1
        rbp_9[8] |= 1
        rbp_9[9] = *(arg1 + 0x104)
        int64_t rbp_10 = sx.q(arg1[0x28].d)
        int32_t rax_22 = (rbp_10 + 1).d
        arg1[0x28].d = rax_22
        
        if (rax_22 s> *(arg1 + 0x144))
            sub_1405c4f50(&arg1[0x27])
        
        int32_t* rbp_13 = rbp_10 * 0x30 + arg1[0x27]
        sub_14081a5b0(rbp_13)
        rbp_13[8] &= 0xfffffffe
        rbp_13[0xa] &= 0xfffffffe
        rbp_13[9] = 0x3f800000
        sub_1407e51f0(rbp_13, sub_14081a540(&var_48, 4))
        int64_t rcx_27 = var_48:8.q
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        rbp_13[0xa] |= 1
        rbp_13[8] |= 1
        rbp_13[9] = arg1[0x21].d
        int64_t rbp_14 = sx.q(arg1[0x28].d)
        int32_t rax_25 = (rbp_14 + 1).d
        arg1[0x28].d = rax_25
        
        if (rax_25 s> *(arg1 + 0x144))
            sub_1405c4f50(&arg1[0x27])
        
        int32_t* rbp_17 = rbp_14 * 0x30 + arg1[0x27]
        sub_14081a5b0(rbp_17)
        rbp_17[8] &= 0xfffffffe
        rbp_17[0xa] &= 0xfffffffe
        rbp_17[9] = 0x3f800000
        sub_1407e51f0(rbp_17, sub_14081a540(&var_48, 8))
        int64_t rcx_32 = var_48:8.q
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        rbp_17[0xa] |= 1
        rbp_17[8] |= 1
        rbp_17[9] = *(arg1 + 0x10c)
        int64_t rbp_18 = sx.q(arg1[0x28].d)
        int32_t rax_28 = (rbp_18 + 1).d
        arg1[0x28].d = rax_28
        
        if (rax_28 s> *(arg1 + 0x144))
            sub_1405c4f50(&arg1[0x27])
        
        int32_t* rbp_21 = rbp_18 * 0x30 + arg1[0x27]
        sub_14081a5b0(rbp_21)
        rbp_21[8] &= 0xfffffffe
        rbp_21[0xa] &= 0xfffffffe
        rbp_21[9] = 0x3f800000
        sub_1407e51f0(rbp_21, sub_14081a540(&var_48, 0x10))
        int64_t rcx_37 = var_48:8.q
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        rbp_21[0xa] |= 1
        rbp_21[8] |= 1
        rbp_21[9] = arg1[0x22].d

void arg_8

if (arg1[0x3e] == 0)
    uint64_t rbx_5 = *sub_140b58170(&arg_8, "GPUComputeScript", 1)
    uint32_t rcx_41
    rcx_41.b = (rbx_5 u>> 0x20).d == 0
    
    if ((rcx_41.b & sub_140b5b8a0(rbx_5.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_34 = sub_140d2dfc0(sub_14087a520(), arg1, rbx_5, 8, 0, 0, 0, 0, 0)
    arg1[0x3e] = rax_34
    *(rax_34 + 0x28) = 8

if (arg1[0x11] == 0 || arg1[0x16] == 0)
    uint64_t rbx_6 = *sub_140b58170(&arg_8, "EmitterSpawnScript", 1)
    uint32_t rcx_47
    rcx_47.b = (rbx_6 u>> 0x20).d == 0
    
    if ((rcx_47.b & sub_140b5b8a0(rbx_6.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_38 = sub_140d2dfc0(sub_14087a520(), arg1, rbx_6, 8, 0, 0, 0, 0, 0)
    arg1[0x11] = rax_38
    *(rax_38 + 0x28) = 9
    uint64_t rbx_7 = *sub_140b58170(&arg_8, "EmitterUpdateScript", 1)
    uint32_t rcx_53
    rcx_53.b = (rbx_7 u>> 0x20).d == 0
    
    if ((rcx_53.b & sub_140b5b8a0(rbx_7.d, 0)) != 0)
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    void* rax_42 = sub_140d2dfc0(sub_14087a520(), arg1, rbx_7, 8, 0, 0, 0, 0, 0)
    arg1[0x16] = rax_42
    *(rax_42 + 0x28) = 0xa

int64_t* rcx_56 = arg1[0xc]

if (rcx_56 != 0)
    sub_140cd85e0(rcx_56)
    void* r8_8 = arg1[0xc]
    int32_t rdx_21 = arg1[0x29].d
    char r9_1 = *(r8_8 + 0x28)
    int32_t rcx_57
    rcx_57.b = r9_1 == 4
    
    if ((rdx_21 & 1) != rcx_57)
        arg1[0x29].d = rdx_21 & 0xfffffffe
        
        if (r9_1 == 4)
            *(r8_8 + 0x28) = 3

var_48.q = 0
var_48:8.q = 0
sub_1407feb60(arg1, &var_48, 0)
int64_t* r14_4 = var_48.q
int64_t* rbx_8 = r14_4
void* rcx_59 = &r14_4[sx.q(var_48:8.d)]
uint64_t rbp_25 = (rcx_59 - r14_4 + 7) u>> 3

if (r14_4 u> rcx_59)
    rbp_25 = 0

if (rbp_25 != 0)
    do
        sub_140cd85e0(*rbx_8)
        rsi += 1
        rbx_8 = &rbx_8[1]
    while (rsi != rbp_25)

int64_t result = sub_140809aa0(arg1)

if (r14_4 == 0)
    return result

return sub_140a74f90(r14_4)
