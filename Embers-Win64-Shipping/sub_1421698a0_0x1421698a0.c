// 函数: sub_1421698a0
// 地址: 0x1421698a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
void* rbx = arg3
int32_t arg_8
sub_1405ba450(&arg1[0x8e], &arg_8, arg3)
int64_t rax = sx.q(arg_8)
void* rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = arg1[0x8e] + rax * 0x28

int64_t* rsi = rcx_1 + 8

if (rcx_1 == 0)
    rsi = nullptr

if (rsi == 0)
    goto label_142169957

if (sub_140d3e110(&rsi[2]) != 0)
    rbx = arg_18
    
    if (rsi == 0)
        goto label_142169957
else
    sub_142173c60(&arg1[0x8e], arg_18)
    rbx = arg_18
label_142169957:
    void** var_58
    int64_t* rax_3 = sub_142168ae0(arg1, &var_58, *(rbx + 0x10))
    int64_t* rbx_1 = rax_3[1]
    void* rsi_1 = *rax_3
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp1_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    char rax_7 = (*(*arg1 + 0x428))(arg1)
    int64_t** rax_8 = sub_1422c1750(rsi_1, &var_58, arg_18, rax_7)
    void* rdx_5 = arg_18
    int64_t* var_48 = *rax_8
    int64_t* rcx_10 = rax_8[1]
    
    if (rcx_10 != 0)
        rcx_10[1].d += 1
    
    void var_38
    sub_140d3a3a0(&var_38, rdx_5)
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp4_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    var_58 = &arg_18
    int64_t** var_50_1 = &var_48
    sub_14215a640(&arg1[0x8e], &arg_8, &var_58, nullptr)
    rsi = arg1[0x8e] + ((sx.q(arg_8) * 5 + 1) << 3)
    
    if (rcx_10 != 0)
        rcx_10[1].d -= 1
        
        if (rcx_10[1].d == 1)
            (**rcx_10)(rcx_10)
            int32_t temp6_1 = *(rcx_10 + 0xc)
            *(rcx_10 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rcx_10 + 8))(rcx_10, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp7_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

*arg2 = *rsi
void* rax_18 = rsi[1]
arg2[1] = rax_18

if (rax_18 != 0)
    *(rax_18 + 8) += 1

return arg2
