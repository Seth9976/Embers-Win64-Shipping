// 函数: sub_141e5bfa0
// 地址: 0x141e5bfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int64_t* var_18 = nullptr
int64_t var_10 = 0

if (*(arg1 + 0x10) != 0)
    int64_t* rcx = *(arg1 + 8)
    
    if (rcx != 0)
        char rax
        int64_t rdx_1
        rax, rdx_1 = (*(*rcx + 0x28))(rcx)
        
        if (rax != 0)
            if (*(arg1 + 0x10) != 0)
                rbx = *(arg1 + 8)
            
            rdx_1.b = 1
            (*(*rbx + 0x50))(rbx, rdx_1, &var_18)
        
        rbx = var_18

if (rbx != 0)
    sub_140a74f90(rbx)
