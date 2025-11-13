// 函数: sub_141d37d90
// 地址: 0x141d37d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* temp0 = *(arg1 + 0x40)
*(arg1 + 0x40) = *(arg1 + 0x30)
*(arg1 + 0x30) = temp0

if (*temp0 == 0)
    int64_t* rax_2 = j_sub_140a82f30(0x30)
    int64_t* rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = rax_2
    else
        __builtin_memset(rbx_1, 0, 0x30)
    
    int64_t* rax_3 = *(arg1 + 0x30)
    void arg_8
    
    if (rax_3 != &arg_8)
        int64_t* rsi_1 = *rax_3
        *rax_3 = rbx_1
        
        if (rsi_1 != 0)
            int64_t rcx = rsi_1[4]
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            int64_t rcx_1 = rsi_1[2]
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = *rsi_1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            j_sub_140a74f90(rsi_1)
    else if (rbx_1 != 0)
        int64_t rcx_3 = rbx_1[4]
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = rbx_1[2]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *rbx_1
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        j_sub_140a74f90(rbx_1)

*(arg1 + 0x48) += 1
*(*(arg1 + 0x30) + 8) = *(arg1 + 0x48)
return **(arg1 + 0x30)
