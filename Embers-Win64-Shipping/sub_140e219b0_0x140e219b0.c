// 函数: sub_140e219b0
// 地址: 0x140e219b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_140b58170(&arg_8, "CoreStyle", 1)
void*** var_18
void**** rax = sub_140dec1f0(&var_18, &arg_8)
int64_t* rcx_2 = data_143e243c8

if (rcx_2 != 0)
    int64_t rdx_1 = *rcx_2
    sub_140943590(&data_1439ae710, *(*(rdx_1 + 8))(rcx_2, rdx_1))

void*** rsi = *rax
int64_t* rbx_1 = rax[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

int64_t* rdi = data_143e243d0
data_143e243c8 = rsi

if (rbx_1 != rdi)
    data_143e243d0 = rbx_1
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d != 1)
            rsi = data_143e243c8
        else
            (**rdi)(rdi)
            int32_t temp3_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp3_1 != 1)
                rsi = data_143e243c8
            else
                (*(*rdi + 8))(rdi, 1)
                rsi = data_143e243c8
else if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d != 1)
        rsi = data_143e243c8
    else
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 != 1)
            rsi = data_143e243c8
        else
            (*(*rbx_1 + 8))(rbx_1, 1)
            rsi = data_143e243c8

int64_t result

if (rsi == 0)
    result = sub_140e219b0()
else
    int64_t* rax_6 = (*rsi)[1](rsi)
    void*** arg_10 = rsi
    result = sub_140dd27d0(&data_1439ae710, rax_6, &arg_10)
    void* rcx_7 = data_143e20d08
    
    if (rcx_7 != 0)
        int64_t* rcx_8 = *(rcx_7 + 0x20)
        
        if (rcx_8 != 0)
            result = (*(*rcx_8 + 0xd0))(rcx_8, rsi)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp5_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*var_10 + 8))(var_10, 1)

return result
