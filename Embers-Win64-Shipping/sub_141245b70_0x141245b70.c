// 函数: sub_141245b70
// 地址: 0x141245b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg3 + 0x40
int64_t r12 = 0
int32_t arg_20 = 0
int32_t var_4c = 0
int32_t rdx = 0
int64_t var_80 = 0
int32_t arg_10 = 0
int64_t result_2 = 0
int32_t var_5c = 0
int64_t rax = *(arg2 + 0x1b0)
int32_t rbx = 0
int64_t rax_1 = 7
int64_t result = 0
uint64_t r14 = 0
int64_t var_70 = 7
int64_t result_1 = 0
int16_t* rdi_1 = arg1 + 0x118
int64_t var_58 = 0

while (true)
    if (rdi_1[1] u> 0)
        uint32_t r12_1 = zx.d(*rdi_1)
        void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_2 = &rcx_2[5]
        
        if (rax_2 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rdx = arg_10
            rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_2 = &rcx_2[5]
        
        *(arg2 + 0x30) = rax_2
        int64_t* rax_3 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_3 = rcx_2
        *(arg2 + 8) = &rcx_2[1]
        rcx_2[1] = 0
        rcx_2[2] = rax
        rax_1 = var_70
        rcx_2[3].d = r12_1
        r12 = var_80
        *rcx_2 = &data_142da77b8
        rcx_2[4] = 0
        result_2 = result
    
    if (rdi_1[0xf] u> 0)
        uint32_t r12_2 = zx.d(rdi_1[0xe])
        int64_t r15_1 = sx.q(rbx)
        rbx = (r15_1 + 1).d
        
        if (rbx s> rdx)
            sub_1405a4cf0(&result_1)
            result_2 = result_1
            result = result_2
            arg_10 = var_5c
        
        *(result_2 + (r15_1 << 2)) = r12_2
        int64_t r15_2 = sx.q(r14.d)
        r14 = zx.q((r15_2 + 1).d)
        int32_t var_50_1 = r14.d
        
        if (r14.d s<= arg_20)
            r12 = var_80
        else
            sub_1405a4d70(&var_58)
            r12 = var_58
            r14 = zx.q(var_50_1)
            arg_20 = var_4c
            var_80 = r12
        
        *(r12 + (r15_2 << 3)) = *r13
        rax_1 = var_70
    
    result_2 = result
    r13 = &r13[1]
    rdi_1 = &rdi_1[2]
    int64_t temp0_1 = rax_1
    rax_1 -= 1
    var_70 = rax_1
    
    if (temp0_1 == 1)
        break
    
    rdx = arg_10

void* rdx_3 = arg1

if (*(rdx_3 + 0x156) u> 0)
    uint32_t r15_3 = zx.d(*(rdx_3 + 0x154))
    void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_10[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rdx_3 = arg1
        rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_10[5]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_10
    *(arg2 + 8) = &rcx_10[1]
    rcx_10[1] = 0
    rcx_10[2] = rax
    *rcx_10 = &data_142d99560
    rcx_10[3].d = r15_3
    rcx_10[4] = 0

int64_t result_3

if (*(rdx_3 + 0x15a) u<= 0)
    result_3 = result
else
    uint32_t r15_4 = zx.d(*(rdx_3 + 0x158))
    int64_t rdi_2 = sx.q(rbx)
    rbx = (rdi_2 + 1).d
    
    if (rbx s<= arg_10)
        result_3 = result
    else
        sub_1405a4cf0(&result_1)
        result_3 = result_1
        arg_10 = var_5c
        result = result_3
    
    *(result_3 + (rdi_2 << 2)) = r15_4
    int64_t rdi_3 = sx.q(r14.d)
    r14 = zx.q((rdi_3 + 1).d)
    int32_t var_50_2 = r14.d
    
    if (r14.d s> arg_20)
        sub_1405a4d70(&var_58)
        r12 = var_58
        r14 = zx.q(var_50_2)
        arg_20 = var_4c
        var_80 = r12
    
    rdx_3 = arg1
    *(r12 + (rdi_3 << 3)) = *(arg3 + 0x80)

if (*(rdx_3 + 0x15e) u> 0)
    uint32_t r15_5 = zx.d(*(rdx_3 + 0x15c))
    void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_17 = &rcx_18[5]
    
    if (rax_17 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rdx_3 = arg1
        rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_18[5]
    
    *(arg2 + 0x30) = rax_17
    void**** rax_18 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_18 = rcx_18
    *(arg2 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    *rcx_18 = &data_142d99560
    rcx_18[2] = rax
    rcx_18[3].d = r15_5
    rcx_18[4] = 0

if (*(rdx_3 + 0x162) u> 0)
    uint32_t r15_6 = zx.d(*(rdx_3 + 0x160))
    int64_t rdi_4 = sx.q(rbx)
    rbx = (rdi_4 + 1).d
    
    if (rbx s> arg_10)
        sub_1405a4cf0(&result_1)
        result_3 = result_1
        arg_10 = var_5c
        result = result_3
    
    *(result_3 + (rdi_4 << 2)) = r15_6
    int64_t rdi_5 = sx.q(r14.d)
    r14 = zx.q((rdi_5 + 1).d)
    int32_t var_50_3 = r14.d
    
    if (r14.d s> arg_20)
        sub_1405a4d70(&var_58)
        r12 = var_58
        r14 = zx.q(var_50_3)
        arg_20 = var_4c
        var_80 = r12
    
    rdx_3 = arg1
    *(r12 + (rdi_5 << 3)) = *(arg3 + 0x90)

void* rdi_6 = rdx_3 + 0x164
int64_t i_2 = 2
void* r13_2 = arg3 + 0xb0
int64_t i_4 = 2
int64_t i

do
    if (*(rdi_6 + 2) u> 0)
        uint32_t r12_3 = zx.d(*rdi_6)
        void*** rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_25 = &rcx_26[5]
        
        if (rax_25 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_26 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_25 = &rcx_26[5]
        
        *(arg2 + 0x30) = rax_25
        void**** rax_26 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_26 = rcx_26
        *(arg2 + 8) = &rcx_26[1]
        rcx_26[1] = 0
        *rcx_26 = &data_142da77b8
        rcx_26[2] = rax
        i_2 = i_4
        rcx_26[3].d = r12_3
        r12 = var_80
        rcx_26[4] = 0
    
    if (*(rdi_6 + 0xa) u> 0)
        uint32_t r12_4 = zx.d(*(rdi_6 + 8))
        int64_t r15_7 = sx.q(rbx)
        rbx = (r15_7 + 1).d
        
        if (rbx s> arg_10)
            sub_1405a4cf0(&result_1)
            arg_10 = var_5c
            result = result_1
        
        *(result + (r15_7 << 2)) = r12_4
        int64_t r15_8 = sx.q(r14.d)
        r14 = zx.q((r15_8 + 1).d)
        int32_t var_50_4 = r14.d
        
        if (r14.d s<= arg_20)
            r12 = var_80
        else
            sub_1405a4d70(&var_58)
            r12 = var_58
            r14 = zx.q(var_50_4)
            arg_20 = var_4c
            var_80 = r12
        
        *(r12 + (r15_8 << 3)) = *r13_2
        i_2 = i_4
    
    r13_2 += 8
    rdi_6 += 4
    i = i_2
    i_2 -= 1
    i_4 = i_2
while (i != 1)
void* rdx_10 = arg1
int64_t result_4

if (*(rdx_10 + 0x186) u<= 0)
    result_4 = result
else
    uint32_t r15_9 = zx.d(*(rdx_10 + 0x184))
    int64_t rdi_7 = sx.q(rbx)
    rbx = (rdi_7 + 1).d
    
    if (rbx s<= arg_10)
        result_4 = result
    else
        sub_1405a4cf0(&result_1)
        result_4 = result_1
        arg_10 = var_5c
        result = result_4
    
    *(result_4 + (rdi_7 << 2)) = r15_9
    int64_t rdi_8 = sx.q(r14.d)
    r14 = zx.q((rdi_8 + 1).d)
    int32_t var_50_5 = r14.d
    
    if (r14.d s> arg_20)
        sub_1405a4d70(&var_58)
        r12 = var_58
        r14 = zx.q(var_50_5)
        arg_20 = var_4c
        var_80 = r12
    
    rdx_10 = arg1
    *(r12 + (rdi_8 << 3)) = *(arg3 + 0xe8)

if (*(rdx_10 + 0x18a) u> 0)
    uint32_t r15_10 = zx.d(*(rdx_10 + 0x188))
    void*** rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_37 = &rcx_37[5]
    
    if (rax_37 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rdx_10 = arg1
        rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_37 = &rcx_37[5]
    
    *(arg2 + 0x30) = rax_37
    void**** rax_38 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_38 = rcx_37
    *(arg2 + 8) = &rcx_37[1]
    rcx_37[1] = 0
    *rcx_37 = &data_142d99560
    rcx_37[2] = rax
    rcx_37[3].d = r15_10
    rcx_37[4] = 0

if (*(rdx_10 + 0x17a) u> 0)
    uint32_t r15_11 = zx.d(*(rdx_10 + 0x178))
    int64_t rdi_9 = sx.q(rbx)
    rbx = (rdi_9 + 1).d
    
    if (rbx s> arg_10)
        sub_1405a4cf0(&result_1)
        result_4 = result_1
        arg_10 = var_5c
        result = result_4
    
    *(result_4 + (rdi_9 << 2)) = r15_11
    int64_t rdi_10 = sx.q(r14.d)
    r14 = zx.q((rdi_10 + 1).d)
    int32_t var_50_6 = r14.d
    
    if (r14.d s> arg_20)
        sub_1405a4d70(&var_58)
        r12 = var_58
        r14 = zx.q(var_50_6)
        arg_20 = var_4c
        var_80 = r12
    
    rdx_10 = arg1
    *(r12 + (rdi_10 << 3)) = *(arg3 + 0xe0)

if (*(rdx_10 + 0x182) u> 0)
    uint32_t r15_12 = zx.d(*(rdx_10 + 0x180))
    int64_t rdi_11 = sx.q(rbx)
    rbx = (rdi_11 + 1).d
    
    if (rbx s> arg_10)
        sub_1405a4cf0(&result_1)
        result_4 = result_1
        result = result_4
    
    *(result_4 + (rdi_11 << 2)) = r15_12
    int64_t rdi_12 = sx.q(r14.d)
    r14 = zx.q((rdi_12 + 1).d)
    int32_t var_50_7 = r14.d
    
    if (r14.d s> arg_20)
        sub_1405a4d70(&var_58)
        r12 = var_58
        r14 = zx.q(var_50_7)
        var_80 = r12
    
    rdx_10 = arg1
    *(r12 + (rdi_12 << 3)) = *(arg3 + 0xd0)

int64_t r12_5

if (*(rdx_10 + 0x176) u<= 0)
    r12_5 = rax
else
    uint32_t r15_13 = zx.d(*(rdx_10 + 0x174))
    void*** rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_47 = &rcx_47[5]
    
    if (rax_47 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rdx_10 = arg1
        rcx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_47 = &rcx_47[5]
    
    r12_5 = rax
    *(arg2 + 0x30) = rax_47
    void**** rax_48 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_48 = rcx_47
    *(arg2 + 8) = &rcx_47[1]
    rcx_47[1] = 0
    *rcx_47 = &data_142d99560
    rcx_47[2] = r12_5
    rcx_47[3].d = r15_13
    rcx_47[4] = 0

if (*(rdx_10 + 0x17e) u> 0)
    uint32_t r15_14 = zx.d(*(rdx_10 + 0x17c))
    void*** rcx_53 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_50 = &rcx_53[5]
    
    if (rax_50 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_53 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_50 = &rcx_53[5]
    
    *(arg2 + 0x30) = rax_50
    void**** rax_51 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_51 = rcx_53
    *(arg2 + 8) = &rcx_53[1]
    rcx_53[1] = 0
    *rcx_53 = &data_142d99560
    rcx_53[2] = r12_5
    rcx_53[3].d = r15_14
    rcx_53[4] = 0

uint32_t rdx_17 = (r14 << 3).d
int64_t r12_6 = sx.q(rdx_17)
int64_t* r15_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_53 = r15_17 + r12_6

if (rax_53 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, rdx_17 + 8)
    r15_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_53 = r15_17 + r12_6

int64_t r13_3 = var_80
*(arg2 + 0x30) = rax_53
int64_t i_3 = sx.q(r14.d)

if (r14.d s> 0)
    int64_t* rcx_58 = r15_17
    int64_t i_1
    
    do
        *rcx_58 = *(r13_3 - r15_17 + rcx_58)
        rcx_58 = &rcx_58[1]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

void*** rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_55 = &rcx_61[6]

if (rax_55 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_55 = &rcx_61[6]

*(arg2 + 0x30) = rax_55
void**** rax_56 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_56 = rcx_61
*(arg2 + 8) = &rcx_61[1]
rcx_61[1] = 0
rcx_61[3] = r15_17
int32_t r15_20 = 0
*rcx_61 = &data_142da7798
rcx_61[2].d = r14.d
rcx_61[4].d = 0
*(rcx_61 + 0x24) = 1
rcx_61[5] = 0

if (rbx s> 0)
    int32_t* r14_1 = nullptr
    
    do
        int32_t r12_7 = *(r14_1 + result)
        void*** rcx_67 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_58 = &rcx_67[5]
        
        if (rax_58 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_67 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_58 = &rcx_67[5]
        
        *(arg2 + 0x30) = rax_58
        r15_20 += 1
        int64_t* rax_59 = *(arg2 + 8)
        r14_1 = &r14_1[1]
        *(arg2 + 0x14) += 1
        *rax_59 = rcx_67
        *(arg2 + 8) = &rcx_67[1]
        rcx_67[1] = 0
        *rcx_67 = &data_142da77d8
        rcx_67[2] = rax
        rcx_67[3].d = r12_7
        rcx_67[4] = 0
    while (r15_20 s< rbx)
    
    r13_3 = var_80

if (r13_3 != 0)
    sub_140a74f90(r13_3)

if (result == 0)
    return result

return sub_140a74f90(result)
