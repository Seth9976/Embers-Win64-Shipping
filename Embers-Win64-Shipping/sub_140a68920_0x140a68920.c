// 函数: sub_140a68920
// 地址: 0x140a68920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = data_143db7a50

if (lpCriticalSection != 0)
    int64_t* rbx_1 = arg1[1]
    int64_t var_18 = 0
    int64_t* rax_1 = rbx_1
    int64_t* var_10_1 = rbx_1
    
    if (rbx_1 != 0)
        int32_t rax_2 = rbx_1[1].d
        
        if (rax_2 == 0)
            rbx_1 = nullptr
            int64_t var_10_2 = 0
            rax_1 = nullptr
        else
            rbx_1[1].d = rax_2 + 1
            rax_1 = rbx_1
    
    if (rax_1 != 0)
        int64_t rax_4 = *arg1
        var_18 = rax_4
        
        if (rax_4 != 0)
            EnterCriticalSection(lpCriticalSection)
            sub_140a87520(&lpCriticalSection[1], &var_18)
            
            if (lpCriticalSection != 0)
                LeaveCriticalSection(lpCriticalSection)
    
    if (arg1 != &var_18)
        *arg1 = 0
        int64_t* rcx_3 = arg1[1]
        arg1[1] = 0
        
        if (rcx_3 != 0)
            int32_t temp2_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rcx_6 = arg1[1]

if (rcx_6 != 0)
    int32_t temp0_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_6 + 8))(rcx_6, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
