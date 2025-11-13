// 函数: sub_142167c50
// 地址: 0x142167c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = sub_141ccddc0(arg1[0x21])
int64_t* i_1 = i

while (i != 0)
    void* rax = i_1[7]
    int64_t var_18 = i_1[6]
    void* var_10_1 = rax
    
    if (rax != 0)
        *(rax + 8) += 1
    
    (*(*arg1 + 0x308))(arg1, &var_18, *i_1, zx.q(i_1[1].d), i_1 + 0xc)
    j_sub_140a74f90(*i_1)
    int64_t* rbx_1 = i_1[7]
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    j_sub_140a74f90(i_1)
    i = sub_141ccddc0(arg1[0x21])
    i_1 = i

return i
