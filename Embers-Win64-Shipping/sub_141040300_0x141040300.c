// 函数: sub_141040300
// 地址: 0x141040300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (**(arg1 + 0x68) != 0)
    int64_t* rbx_2 = *(**(arg1 + 0x68) + 8)
    void* rdx_2 = **(arg1 + 0x68)
    
    if (rdx_2 != 0)
        rbx_2 = *(rdx_2 + 8)
        int64_t rcx = *(arg1 + 0x68)
        *(arg1 + 0x68) = rdx_2
        *(rdx_2 + 8) = 0
        j_sub_140a74f90(rcx)
    
    int64_t* rcx_1 = rbx_2[8]
    
    if (rcx_1 == 0)
        bool z_1
        
        if (0 == rbx_2[6].d)
            rbx_2[6].d = 0
            z_1 = true
        else
            rbx_2[6].d
            z_1 = false
        
        if (not(z_1))
            sub_14104a150(rbx_2)
        
        goto label_1410403a4
    
    if ((*(*rcx_1 + 0x18))(rcx_1, rbx_2) == 0)
    label_1410403a4:
        
        if (rbx_2[8] != 0)
            int64_t* rcx_5 = rbx_2[7]
            (*(*rcx_5 + 0x20))(rcx_5, 0xffffffff, 0)
            rbx_2[8] = 0
    else
        sub_14104a150(rbx_2)
        int64_t* rcx_3 = rbx_2[7]
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x10))(rcx_3)
        
        rbx_2[8] = 0
    
    (*(*rbx_2 + 0x10))(rbx_2, 1)

while (*(arg1 + 0x68) != 0)
    int64_t* rcx_7 = *(arg1 + 0x68)
    *(arg1 + 0x68) = *rcx_7
    j_sub_140a74f90(rcx_7)

while (*(arg1 + 0x48) != 0)
    int64_t* rcx_8 = *(arg1 + 0x48)
    *(arg1 + 0x48) = *rcx_8
    j_sub_140a74f90(rcx_8)

return DeleteCriticalSection(arg1 + 0x10) __tailcall
