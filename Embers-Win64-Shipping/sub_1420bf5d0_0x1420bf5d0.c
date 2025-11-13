// 函数: sub_1420bf5d0
// 地址: 0x1420bf5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
sub_140a96390(&var_18, arg2)
sub_140aacd30(arg1, &var_18, arg3, 0, 0)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rax_3 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*var_10 + 8))(var_10, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_7 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int32_t i_1 = arg3[1].d
void* rdi_1 = *arg3

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rbx_2 = *(rdi_1 + 0x20)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_11 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t rcx_8 = *rdi_1
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rdi_1 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi_1 = *arg3

if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

return arg1
