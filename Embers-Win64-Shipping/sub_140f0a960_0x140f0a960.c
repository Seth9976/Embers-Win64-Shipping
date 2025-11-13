// 函数: sub_140f0a960
// 地址: 0x140f0a960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg4 + 0x70)
char rax_1

if (r14 != 0)
    int64_t rbx_1 = *r14
    sub_140f04dd0()
    rax_1 = (*(rbx_1 + 0x58))(r14, &data_143e20f00)

void* const rdx
int64_t* rbx_2
int64_t* rsi_1

if (r14 == 0 || rax_1 == 0)
    rdx = nullptr
    rbx_2 = nullptr
    rsi_1 = nullptr
else
    rbx_2 = *(arg4 + 0x78)
    rdx = *(arg4 + 0x70)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    rsi_1 = rbx_2

if (rdx == 0 || (*(rdx + 0x60) & 1) == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp2_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
else
    void var_68
    int64_t* rax_2 = sub_140aae420(&var_68, rdx + 0x40)
    int64_t var_50 = *rax_2
    int64_t* rcx_3 = rax_2[1]
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
    
    int64_t* rcx_4 = *(arg1 + 0x2c0)
    int32_t var_40_1 = rax_2[2].d
    char var_38_1 = 1
    int64_t var_30 = 0
    int32_t var_28_1 = 0
    sub_140f8cfc0(rcx_4, &var_50)
    sub_140745b20(&var_30)
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            (**rcx_3)(rcx_3)
            int32_t rax_6 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (rax_6 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
    
    int64_t* var_60
    
    if (var_60 != 0)
        var_60[1].d -= 1
        
        if (var_60[1].d == 1)
            (**var_60)(var_60)
            int32_t rbp_1 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*var_60 + 8))(var_60, zx.q(rbp_1))
    
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

return arg2
