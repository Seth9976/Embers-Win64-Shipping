// 函数: sub_140d974d0
// 地址: 0x140d974d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

sub_142bf3f70(*(arg2 + 0x60))
*(arg2 + 0x60) = 0
int64_t* rbx_1 = *(arg2 + 0x40)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rcx_3 = *(arg2 + 0x30)

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

j_sub_140a74f90(arg2)
