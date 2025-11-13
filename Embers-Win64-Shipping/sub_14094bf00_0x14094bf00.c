// 函数: sub_14094bf00
// 地址: 0x14094bf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18

if (arg1 + 0x70 != &var_18)
    *(arg1 + 0x70) = 0
    int64_t* rbx_1 = *(arg1 + 0x78)
    
    if (rbx_1 != 0)
        *(arg1 + 0x78) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

sub_1409767c0(arg1)
sub_141c32420(arg1 + 0x80)
int64_t* rbx_2 = *(arg1 + 0x78)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t rcx_6 = *(arg1 + 0x60)

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return DeleteCriticalSection(arg1 + 0x38) __tailcall
