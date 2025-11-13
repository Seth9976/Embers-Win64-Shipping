// 函数: sub_140b50b90
// 地址: 0x140b50b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x60)
int32_t rdi = 0

if (rax == 0)
    rax = j_sub_140a82f30(zx.q((&rax[2]).d))
    
    if (rax == 0)
        rax = nullptr
    else
        *rax = 0
        rax[1] = 0
    
    *(arg1 + 0x60) = rax

if (*(arg1 + 0x88) != 0)
    bool cond:0_1 = (*(arg1 + 0x28) & 1) == 0
    *(arg1 + 0x88) = 0
    
    if (not(cond:0_1))
        sub_140b508e0()
        AcquireSRWLockShared(&data_143de8578)
        uint64_t var_28
        int32_t var_20
        uint64_t rbp
        int32_t var_1c
        
        if (data_143de8f98 != data_143de8fbc)
            ReleaseSRWLockShared(&data_143de8578)
            AcquireSRWLockExclusive(&data_143de8578)
            sub_140b51e40(&data_143de8578)
            int64_t r14_1 = sx.q(data_143de8588.d)
            rbp = 0
            int64_t r15_1 = data_143de8580
            var_28 = 0
            var_20 = r14_1.d
            
            if (r14_1.d != 0)
                sub_14083a1f0(&var_28, r14_1.d, 0)
                rbp = var_28
                memcpy(rbp, r15_1, (r14_1 << 5).d)
                rdi = var_1c
            
            ReleaseSRWLockExclusive(&data_143de8578)
        else
            int64_t r14 = sx.q(data_143de8588.d)
            rbp = 0
            int64_t r15 = data_143de8580
            var_28 = 0
            var_20 = r14.d
            
            if (r14.d != 0)
                sub_14083a1f0(&var_28, r14.d, 0)
                rbp = var_28
                memcpy(rbp, r15, (r14 << 5).d)
                rdi = var_1c
            
            ReleaseSRWLockShared(&data_143de8578)
        uint64_t* result = *(arg1 + 0x60)
        
        if (result == &var_28)
            if (rbp == 0)
                return result
            
            sub_140a74f90(rbp)
        else
            uint64_t rcx_6 = *result
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            *result = rbp
            result[1].d = var_20
            *(result + 0xc) = rdi
        
        return *(arg1 + 0x60)
    
    rax[1].d = 0
    
    if (*(rax + 0xc) != 0)
        sub_1405a51b0(rax, 0)

return *(arg1 + 0x60)
