// 函数: sub_140b2e750
// 地址: 0x140b2e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg5
arg1[1].b = arg2
*arg1 = *arg3
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t rdx = sx.q(*arg1)
arg1[6] = 0xffffffff
*(arg1 + 0x28) = arg4
arg1[0xc] = 0xffffffff
arg1[0xd].b = 0
*(arg1 + 0x20) = 0
arg5.d = *(*(rbx + 0xb8) + (rdx << 2))
sub_140597df0(&arg1[2], (rdx << 4) + *(rbx + 0xa8))
uint32_t rcx_2
rcx_2.b = *(sx.q(*arg1) + *(rbx + 0xc8)) & 1
int64_t* var_58
int64_t* var_48
uint64_t var_38
int32_t var_2c

if (arg1[1].b - 1 u> 1 || rcx_2.b != 0)
    int32_t rsi_1 = arg6[1].d
    int64_t rbx_1 = *arg6
    var_58 = nullptr
    sub_1405a4c70(&var_58, sbb.d(rcx_2, rcx_2, rsi_1 != 0) + 2 + rsi_1, 0)
    memcpy(var_58, rbx_1, rsi_1 * 2)
    sub_140a20ba0(&var_58, &data_142d5a024, 1)
    int64_t* r14 = var_58
    var_58 = nullptr
    int32_t var_50_1
    var_50_1.q = 0
    int32_t rbx_2 = arg1[4]
    int64_t* rsi_3
    int32_t r15_1
    
    if (rsi_1 s> 1)
        int32_t r15_2 = rbx_2 - 1
        
        if (rbx_2 == 0)
            r15_2 = 0
        
        int32_t rcx_11
        
        if (rsi_1 == 0)
            rcx_11 = 1
        
        if (rsi_1 != 0 || r15_2 == 0)
            rcx_11 = 0
        
        var_48 = r14
        r14 = nullptr
        int32_t rdx_11 = rsi_1 + r15_2 + rcx_11
        int32_t var_4c
        
        if (rdx_11 s> var_4c)
            sub_1405947f0(&var_48, rdx_11)
        
        sub_140a20ba0(&var_48, *(arg1 + 8), r15_2)
        rsi_3 = var_48
        rbx_2 = rsi_1
        r15_1 = var_4c
        var_48 = nullptr
        int32_t var_40_1
        var_40_1.q = 0
    else
        int64_t rsi_2 = *(arg1 + 8)
        var_38 = 0
        
        if (rbx_2 != 0)
            sub_1405a4c70(&var_38, rbx_2, 0)
            rsi_3 = var_38
            memcpy(rsi_3, rsi_2, rbx_2 * 2)
            r15_1 = var_2c
        else
            r15_1 = 0
            rsi_3 = nullptr
    
    if (&arg1[2] != &var_38)
        int64_t rcx_14 = *(arg1 + 8)
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        *(arg1 + 8) = rsi_3
        arg1[4] = rbx_2
        arg1[5] = r15_1
    else if (rsi_3 != 0)
        sub_140a74f90(rsi_3)
    
    if (r14 != 0)
        sub_140a74f90(r14)

int64_t rbx_3 = sx.q(arg5.d)

if (rbx_3.d s> 0)
    CRITICAL_SECTION* lpCriticalSection = sub_140b3cce0()
    EnterCriticalSection(lpCriticalSection)
    var_38 = 0
    int64_t* rsi_4 = nullptr
    int64_t* rcx_20 = (rbx_3 << 4) + lpCriticalSection->__offset(0x78).q
    int32_t rbx_4 = rcx_20[1].d
    int64_t r14_1 = *rcx_20
    int32_t r14_2
    
    if (rbx_4 != 0)
        sub_1405a4c70(&var_38, rbx_4, 0)
        rsi_4 = var_38
        memcpy(rsi_4, r14_1, rbx_4 * 2)
        r14_2 = var_2c
    else
        r14_2 = 0
    
    LeaveCriticalSection(lpCriticalSection)
    var_48 = rsi_4
    int32_t rax_8
    rax_8.b = rbx_4 == 0
    int32_t rdx_16 = rbx_4 + 1 + rax_8
    
    if (rdx_16 s> r14_2)
        sub_1405947f0(&var_48, rdx_16)
    
    sub_140a20ba0(&var_48, &data_142d5a024, 1)
    int64_t* r15_3 = var_48
    var_48 = nullptr
    int32_t var_40_2
    var_40_2.q = 0
    int32_t rsi_5 = arg1[4]
    int64_t* rbx_6
    int32_t r14_3
    
    if (rbx_4 s> 1)
        int32_t r12_2 = rsi_5 - 1
        
        if (rsi_5 == 0)
            r12_2 = 0
        
        int32_t rax_9
        
        if (rbx_4 == 0)
            rax_9 = rbx_4 + 1
        
        if (rbx_4 != 0 || r12_2 == 0)
            rax_9 = 0
        
        var_58 = r15_3
        int32_t rdx_20 = rax_9 + r12_2 + rbx_4
        r15_3 = nullptr
        
        if (rdx_20 s> r14_2)
            sub_1405947f0(&var_58, rdx_20)
        
        sub_140a20ba0(&var_58, *(arg1 + 8), r12_2)
        rbx_6 = var_58
        rsi_5 = rbx_4
        r14_3 = r14_2
        var_58 = nullptr
        int32_t var_50_2
        var_50_2.q = 0
    else
        int64_t rbx_5 = *(arg1 + 8)
        var_38 = 0
        
        if (rsi_5 != 0)
            sub_1405a4c70(&var_38, rsi_5, 0)
            rbx_6 = var_38
            memcpy(rbx_6, rbx_5, rsi_5 * 2)
            r14_3 = var_2c
        else
            r14_3 = 0
            rbx_6 = nullptr
    
    if (&arg1[2] != &var_38)
        int64_t rcx_30 = *(arg1 + 8)
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        *(arg1 + 8) = rbx_6
        arg1[4] = rsi_5
        arg1[5] = r14_3
    else if (rbx_6 != 0)
        sub_140a74f90(rbx_6)
    
    if (r15_3 != 0)
        sub_140a74f90(r15_3)

if (rcx_2.b != 0)
    int32_t rax_10 = arg1[4]
    var_58 = nullptr
    int32_t rdx_22 = 0
    int32_t var_4c_2 = 0
    int64_t* rsi_6 = nullptr
    int32_t var_50_3 = 0
    int32_t rbx_7 = rax_10 - 1
    int32_t r14_4 = 0
    
    if (rax_10 == 0)
        rbx_7 = 0
    
    if (rbx_7 + 8 s> 0)
        sub_1405947f0(&var_58, rbx_7 + 8)
        rdx_22 = var_50_3
        r14_4 = var_4c_2
        rsi_6 = var_58
    
    int32_t r15_5 = rbx_7 + 8 + rdx_22
    
    if (r15_5 s> r14_4)
        sub_140594770(&var_58)
        r14_4 = var_4c_2
        rsi_6 = var_58
    
    *rsi_6 = 0x4e0055004f0043
    rsi_6[1].d = 0x530054
    *(rsi_6 + 0xc) = 0x2f
    int64_t rbx_8 = sx.q(rbx_7)
    memcpy(rsi_6 + 0xe, *(arg1 + 8), rbx_8.d * 2)
    *(rsi_6 + (rbx_8 << 1) + 0xe) = 0
    
    if (&arg1[2] != &var_38)
        int64_t rcx_36 = *(arg1 + 8)
        
        if (rcx_36 != 0)
            sub_140a74f90(rcx_36)
        
        *(arg1 + 8) = rsi_6
        arg1[4] = r15_5
        arg1[5] = r14_4
    else if (rsi_6 != 0)
        sub_140a74f90(rsi_6)

void* rcx_38 = *(arg1 + 0x28)
arg1[0xc] = *(rcx_38 + 0xb0)
int64_t rdi_1 = sx.q(*(rcx_38 + 0xb0))
int32_t rax_13 = (rdi_1 + 1).d
*(rcx_38 + 0xb0) = rax_13

if (rax_13 s> *(rcx_38 + 0xb4))
    sub_1405a4d70(rcx_38 + 0xa8)

*(*(rcx_38 + 0xa8) + (rdi_1 << 3)) = arg1
return arg1
