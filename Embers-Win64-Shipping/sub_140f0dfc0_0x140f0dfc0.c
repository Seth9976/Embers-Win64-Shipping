// 函数: sub_140f0dfc0
// 地址: 0x140f0dfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg4 + 0x48)
int64_t rax = *(arg4 + 0x38)

if (rbx != 0)
    rbx[1].d += 1

char rax_1

if (rax == data_143e1e008)
    rax_1 = sub_140e19840(arg1, arg5)

int64_t r14

if (rax != data_143e1e008 || rax_1 == 0)
    r14.b = 0
else
    r14.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (r14.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    if (*(arg1 + 0x2f8) != 0)
        int64_t* rcx_2 = *(arg1 + 0x2f0)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (*(arg1 + 0x2f8) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(arg1 + 0x2f0)
            
            (*(*rcx_3 + 0x50))(rcx_3)
    
    char var_c8 = 1
    int64_t var_c0_1 = 0
    int64_t var_b8_1 = 0
    char var_a8_1 = 0
    int32_t var_14
    int32_t var_14_1 = (var_14 & 0xffffff01) | 1
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x88)
    int32_t var_18_1 = 0x20702
    sub_140596b00(arg2, &var_c8)
    sub_140597700(&var_c8)

return arg2
