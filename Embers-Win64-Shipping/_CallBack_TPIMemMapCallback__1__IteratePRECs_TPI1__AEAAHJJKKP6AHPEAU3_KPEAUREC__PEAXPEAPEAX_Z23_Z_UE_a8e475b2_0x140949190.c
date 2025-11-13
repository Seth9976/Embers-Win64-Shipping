// 函数: ?CallBack@TPIMemMapCallback@?1??IteratePRECs@TPI1@@AEAAHJJKKP6AHPEAU3@KPEAUREC@@PEAXPEAPEAX@Z23@Z@UEAA_NAEAVMemMapDataContainer@@@Z
// 地址: 0x140949190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

InitializeCriticalSection(&arg1[0xe])
SetCriticalSectionSpinCount(&arg1[0xe], 0xfa0)
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
sub_141c30760(&arg1[0x20])
*(arg1 + 0x10) = *(arg2 + 0x10)
int32_t rax_1 = arg2[6]
*(arg2 + 0x10) = 0
arg1[6] = rax_1
int64_t rax_2 = *(arg2 + 0x20)
arg2[6] = 0
*(arg1 + 0x20) = rax_2
*(arg2 + 0x20) = 0

if (&arg1[0x1c] != &arg2[0x1c])
    *(arg1 + 0x70) = *(arg2 + 0x70)
    *(arg2 + 0x70) = 0
    int64_t rax_4 = *(arg2 + 0x78)
    int64_t* rbx_1 = *(arg1 + 0x78)
    
    if (rax_4 != rbx_1)
        *(arg2 + 0x78) = 0
        *(arg1 + 0x78) = rax_4
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

void var_28

if (&arg2[0x1c] != &var_28)
    *(arg2 + 0x70) = 0
    int64_t* rbx_2 = *(arg2 + 0x78)
    
    if (rbx_2 != 0)
        *(arg2 + 0x78) = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

*arg1 = *arg2
int32_t rax_10 = arg2[1]
*arg2 = 0
arg1[1] = rax_10
int32_t rax_11 = arg2[2]
arg2[1] = 0
arg1[2] = rax_11
int32_t rax_12 = arg2[0x3c]
arg2[2] = 0
arg1[0x3c] = rax_12
arg2[0x3c] = 0
EnterCriticalSection(&arg2[0xe])

if (&arg1[0x18] != &arg2[0x18])
    int64_t rcx_8 = *(arg1 + 0x60)
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *(arg1 + 0x60) = *(arg2 + 0x60)
    *(arg2 + 0x60) = 0
    arg1[0x1a] = arg2[0x1a]
    arg1[0x1b] = arg2[0x1b]
    *(arg2 + 0x68) = 0

if (arg2 != -0x38)
    LeaveCriticalSection(&arg2[0xe])

return arg1
