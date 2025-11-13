// 函数: sub_141c922a0
// 地址: 0x141c922a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0

if (arg2[1].d == 0)
    return arg1

int64_t* rax = j_sub_140a82f30(0x10)
int64_t* rsi = rax

if (rax == 0)
    rsi = nullptr
else
    *rax = 0
    *rax = *arg2
    *arg2 = 0
    rax[1].d = arg2[1].d
    *(rax + 0xc) = *(arg2 + 0xc)
    arg2[1] = 0

void*** rax_1 = j_sub_140a82f30(0x18)
void*** rbx_1 = rax_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    rax_1[1].d = 1
    *(rax_1 + 0xc) = 1
    *rbx_1 = &data_143211990
    rbx_1[2] = rsi

int64_t* var_18 = rsi
void*** var_10 = rbx_1

if (arg1 == &var_18)
label_141c9239a:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
else
    *arg1 = rsi
    int64_t* rsi_1 = arg1[1]
    var_18 = nullptr
    
    if (rbx_1 == rsi_1)
        goto label_141c9239a
    
    void*** var_10_1 = nullptr
    arg1[1] = rbx_1
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp3_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
        
        rbx_1 = var_10_1
        goto label_141c9239a

return arg1
