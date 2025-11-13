// 函数: sub_140ca2f70
// 地址: 0x140ca2f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = arg3
int32_t* rbx = arg4
int64_t rsi = arg2
int32_t var_68
int64_t var_60

if (rbp - 2 u<= 1)
    if (*(arg1 + 0x10) != 0)
        char rax_1 = arg3
        
        if (arg3 == 3)
            rax_1 = 2
        
        rbp = rax_1
    
    int64_t* rcx = *(arg1 + 0x90)
    int64_t r12_1 = 0
    int32_t rdi_1 = 0
    int64_t var_58
    int64_t var_48
    
    if (rcx != 0)
        int64_t* rax_3 = (*(*rcx + 8))(rcx, &var_48)
        int64_t rcx_1 = *rax_3
        int32_t rdx_1 = rax_3[1].d
        int32_t rdx_2 = neg.d(rdx_1)
        *rax_3 = 0
        int32_t r8 = rax_3[1].d
        var_58 = rcx_1
        int32_t rcx_2 = *(rax_3 + 0xc)
        int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 4 + r8
        int32_t var_4c_1 = rcx_2
        rax_3[1] = 0
        
        if (rdx_5 s> rcx_2)
            sub_1405947f0(&var_58, rdx_5)
        
        sub_140a20ba0(&var_58, &data_142e5e6f8, 3)
        int64_t rcx_5 = var_48
        r12_1 = var_58
        rdi_1 = r8
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    var_60 = -0x4010000000000000
    var_68 = 0
    int64_t* rax_4 = sub_140b16600(&var_48, rbp, rbx, rsi, 0f)
    int32_t rsi_1
    int64_t r14_1
    
    if (rdi_1 s> 1)
        int32_t rax_5 = rax_4[1].d
        int32_t rsi_2 = rax_5 - 1
        
        if (rax_5 == 0)
            rsi_2 = 0
        
        int32_t rax_6
        
        if (rdi_1 == 0)
            rax_6 = rdi_1 + 1
        
        if (rdi_1 != 0 || rsi_2 == 0)
            rax_6 = 0
        
        var_58 = 0
        int32_t rcx_7 = rsi_2 + rax_6
        
        if (rdi_1 != 0 || rcx_7 != 0)
            sub_1405a4c70(&var_58, rdi_1 + rcx_7, 0)
            memcpy(var_58, r12_1, rdi_1 * 2)
        else
            int32_t var_4c_2 = 0
        
        sub_140a20ba0(&var_58, *rax_4, rsi_2)
        r14_1 = var_58
        rsi_1 = rdi_1
    else
        r14_1 = *rax_4
        *rax_4 = 0
        rsi_1 = rax_4[1].d
        rax_4[1] = 0
    
    int64_t rcx_11 = var_48
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    EnterCriticalSection(arg1 + 0x38)
    int64_t* rdi_4
    
    if (rbp != 2)
        int64_t rdi_5 = sx.q(*(arg1 + 0x20))
        int32_t rax_8 = (rdi_5 + 1).d
        *(arg1 + 0x20) = rax_8
        
        if (rax_8 s> *(arg1 + 0x24))
            sub_1405a4f90(arg1 + 0x18)
        
        rdi_4 = (rdi_5 << 4) + *(arg1 + 0x18)
        *rdi_4 = 0
        rdi_4[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rdi_4, rsi_1, 0)
            memcpy(*rdi_4, r14_1, rsi_1 * 2)
        else
            *(rdi_4 + 0xc) = 0
    else
        int64_t rdi_2 = sx.q(*(arg1 + 0x30))
        int32_t rax_7 = (rdi_2 + 1).d
        *(arg1 + 0x30) = rax_7
        
        if (rax_7 s> *(arg1 + 0x34))
            sub_1405a4f90(arg1 + 0x28)
        
        rdi_4 = (rdi_2 << 4) + *(arg1 + 0x28)
        *rdi_4 = 0
        rdi_4[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rdi_4, rsi_1, 0)
            memcpy(*rdi_4, r14_1, rsi_1 * 2)
        else
            *(rdi_4 + 0xc) = 0
    
    if (arg1 != -0x38)
        LeaveCriticalSection(arg1 + 0x38)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    rsi = arg2
    rbx = arg4

int64_t* rcx_20 = data_143ddb410

if (rcx_20 != 0)
    (*(*rcx_20 + 0x10))(rcx_20, rsi, zx.q(rbp), rbx, var_68, var_60)

sub_140b19e60()
char result = sub_140b1d490(&data_1439a8bd0, arg1)

if (result != 0)
    return result

sub_140b19e60()
return (*(data_1439a8bd0 + 0x10))(&data_1439a8bd0, rsi, zx.q(rbp), rbx, var_68, var_60)
