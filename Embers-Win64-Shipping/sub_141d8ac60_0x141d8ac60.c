// 函数: sub_141d8ac60
// 地址: 0x141d8ac60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) != 0)
    int64_t* rcx = *(arg1 + 0x58)
    
    if (rcx != 0)
        int64_t var_18 = *arg2
        void* rax_2 = arg2[1]
        void* var_10_1 = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        (*(*rcx + 0x240))(rcx, &var_18)

int64_t* rbx_1 = arg2[1]

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
