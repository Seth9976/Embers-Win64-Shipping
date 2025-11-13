// 函数: sub_140660120
// 地址: 0x140660120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) != 0)
    int64_t* rcx = *(arg1 + 0x18)
    
    if (rcx != 0)
        (*(*rcx + 0x38))(rcx, 0)
        int64_t rcx_1 = *(arg1 + 0x18)
        
        if (rcx_1 != 0)
            *(arg1 + 0x18) = sub_140a84c80(rcx_1, 0, 0)
        
        *(arg1 + 0x20) = 0

int64_t rcx_2 = *(arg1 + 0x18)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx_1 + 8))
