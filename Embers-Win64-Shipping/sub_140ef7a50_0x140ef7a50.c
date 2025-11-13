// 函数: sub_140ef7a50
// 地址: 0x140ef7a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x120)
void*** rsi = rax

if (rax == 0)
    rsi = nullptr
else
    int64_t* rbx_1 = arg4[2].q
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    char var_38_1 = arg4[1].b
    int64_t var_30_1 = *(arg4 + 0x18)
    int64_t* var_28_1 = rbx_1
    uint128_t zmm0_1 = *arg6
    int128_t var_48 = *arg4
    uint128_t var_58 = zmm0_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_140ee2c10(rsi, arg2, arg3, &var_48, arg5, &var_58)
    *rsi = &data_142ee0f20
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 != 0)
    rax_4[1].d = 1
    *rax_4 = &data_142d42ea8
    *(rax_4 + 0xc) = 1
    rax_4[2] = rsi

*arg1 = rsi
arg1[1] = rax_4
int64_t* rbx_2 = arg4[2].q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg1
