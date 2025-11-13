// 函数: sub_140599550
// 地址: 0x140599550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18

if (arg1 + 0x30 != &var_18)
    *(arg1 + 0x30) = 0
    int64_t* rbx_1 = *(arg1 + 0x38)
    
    if (rbx_1 != 0)
        *(arg1 + 0x38) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t rcx_2 = *(arg1 + 0x20)
*(arg1 + 0x18) = 0
int64_t result = j_sub_140a74f90(rcx_2)
void* rbx_2 = *(arg1 + 0x28)
*(arg1 + 0x20) = 0

if (rbx_2 != 0)
    sub_140b365b0(rbx_2)
    sub_140597850(rbx_2)
    result = j_sub_140a74f90(rbx_2)

*(arg1 + 0x28) = 0
return result
