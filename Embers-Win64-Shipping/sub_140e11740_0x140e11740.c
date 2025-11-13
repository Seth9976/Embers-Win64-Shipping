// 函数: sub_140e11740
// 地址: 0x140e11740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg2
int32_t arg_10
sub_1405ba560(&data_1439af070, &arg_10, rdi)
int64_t rax = sx.q(arg_10)
void* const rcx_2

if (rax.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = (rax << 5) + data_1439af070

int64_t* rdx_1 = rcx_2 + 8

if (rcx_2 == 0)
    rdx_1 = nullptr

if (rdx_1 == 0)
    int64_t* arg_18 = rdi
    int64_t* var_28 = &arg_18
    void var_18
    int64_t var_20_1 = (*(*rdi + 0x150))(rdi, &var_18)
    sub_140dd2c70(&data_1439af070, &arg_10, &var_28, nullptr)
    int64_t rax_6 = data_1439af070
    int64_t rcx_5 = sx.q(arg_10) << 5
    int64_t* rdx_4 = *(rcx_5 + rax_6 + 0x10)
    int64_t* rsi_1 = *(rcx_5 + rax_6 + 8)
    var_28 = rsi_1
    
    if (rdx_4 != 0)
        rdx_4[1].d += 1
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
    
    arg_10 = *(rsi_1 + 0x64)
    sub_140dd2b50(&data_1439af0c0, &arg_10, &var_28)
    *arg1 = var_28
    arg1[1] = rdx_4
    
    if (rdx_4 != 0)
        int32_t rax_11 = rdx_4[1].d
        rdx_4[1].d = rax_11
        
        if (rax_11 == 0)
            (**rdx_4)(rdx_4)
            int32_t temp2_1 = *(rdx_4 + 0xc)
            *(rdx_4 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdx_4 + 8))(rdx_4, 1)
else
    *arg1 = *rdx_1
    void* rax_2 = rdx_1[1]
    arg1[1] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1

return arg1
