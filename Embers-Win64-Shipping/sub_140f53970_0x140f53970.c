// 函数: sub_140f53970
// 地址: 0x140f53970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rbx = *(arg4 + 0x48)
int64_t rax_2 = *(arg4 + 0x38)

if (rbx != 0)
    rbx[1].d += 1

char rax_4

if (rax_2 == data_143e1e008)
    int32_t rdx = *(arg4 + 0xc)
    int32_t var_128 = *(arg4 + 0x50)
    char var_124_1 = 1
    rax_4 = sub_140e19910(arg1, rdx, &var_128, arg5)

int64_t r14

if (rax_2 != data_143e1e008 || rax_4 == 0)
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
    int32_t var_58 = *(arg1 + 0x380)
    char var_54_1 = 1
    char var_50_1 = 1
    int64_t var_48 = 0
    int32_t var_40_1 = 0
    sub_140e23ec0(arg1, &var_58)
    sub_140745b20(&var_48)
    
    if (*(arg1 + 0x3d0) != 0)
        int64_t* rcx_4 = *(arg1 + 0x3c8)
        
        if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
            int64_t* rcx_5
            
            if (*(arg1 + 0x3d0) == 0)
                rcx_5 = nullptr
            else
                rcx_5 = *(arg1 + 0x3c8)
            
            (*(*rcx_5 + 0x50))(rcx_5)
    
    sub_140f5be70(arg1)
    char var_118 = 1
    int64_t var_110_1 = 0
    int64_t var_108_1 = 0
    int32_t var_64
    int32_t var_64_1 = (var_64 & 0xffffff01) | 1
    char var_f8_1 = 0
    int64_t var_f0
    __builtin_memset(&var_f0, 0, 0x88)
    int32_t var_68_1 = 0x20702
    sub_140596b00(arg2, &var_118)
    sub_140597700(&var_118)

__security_check_cookie(rax_1 ^ &var_148)
return arg2
