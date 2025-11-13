// 函数: sub_140e1e450
// 地址: 0x140e1e450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
char rax_1

if (*(arg1 + 0x768) != 0)
    rax_1 = sub_140e19840(arg1, arg5)

int64_t* rdi_1
int64_t r14

if (*(arg1 + 0x768) == 0 || rax_1 == 0)
    rdi_1 = 0.q
    r14.b = 0
else
    rdi_1 = *(arg4 + 0x48)
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    rsi = 1
    
    if (*(arg4 + 0x38) != data_143e1e008)
        r14.b = 0
    else
        r14 = 1

if ((rsi & 1) != 0 && rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp1_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

if (r14.b == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
else
    *(arg1 + 0x718) = 0
    char var_e8 = 1
    int64_t var_e0_1 = 0
    int64_t var_d8_1 = 0
    int32_t var_34
    int32_t var_34_1 = (var_34 & 0xffffff01) | 1
    char var_c8_1 = 0
    int64_t var_c0
    __builtin_memset(&var_c0, 0, 0x88)
    int32_t var_38_1 = 0x20702
    sub_140596b00(arg2, &var_e8)
    sub_140597700(&var_e8)

return arg2
