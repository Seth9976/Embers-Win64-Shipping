// 函数: sub_140d16260
// 地址: 0x140d16260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
void* rdi

if ((arg1[0x29].b & 1) != 0)
    rdi = *arg1
    
    if (rdi != 0)
        goto label_140d162c4
else
    char arg_8 = 0
    char* var_10_1 = &arg_8
    void*** (* var_18)() = sub_140884c50
    void* rax_1 = sub_140a756e0(&var_18, &data_14397f5f0)
    *(rax_1 + 0x18) -= 1
    *(rax_1 + 0x34) -= 1
    *(rax_1 + 0x38) = rbx[0x28]
    rdi = *rbx
label_140d162c4:
    int64_t* rdi_1 = *(rdi + 0x10)
    
    if (rdi_1 != sub_140d41340() && rbx[1] == 0 && rdi_1[2] != 0)
        int64_t rax_3 = rdi_1[0x23]
        
        if (rax_3 == 0)
            (*(*rdi_1 + 0x390))(rdi_1)
            rax_3 = rdi_1[0x23]
        
        rbx[1] = rax_3
    
    char rax_5 = sub_140bac7f0()
    int64_t* rax
    
    if (rax_5 == 0)
        rax = sub_140ba0870(rbx)
    
    if (rax_5 != 0 || rax == 0)
        sub_140d26170(rbx)
    else
        rax[0x29].b |= 1
int64_t rcx_5 = rbx[0x26]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = rbx[0x14]

if (rcx_6 == 0)
    return 

return sub_140a74f90(rcx_6) __tailcall
