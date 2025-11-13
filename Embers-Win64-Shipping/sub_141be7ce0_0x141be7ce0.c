// 函数: sub_141be7ce0
// 地址: 0x141be7ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143f314f8 = *arg1
data_143f31500 = arg1[1]
int64_t* var_18 = nullptr
int32_t var_10 = 0
void*** rax_2 = sub_1405978f0(0x20, &var_18)

if (rax_2 != 0)
    *rax_2 = &data_142d40dc0
    rax_2[1] = sub_141bbe700
    rax_2[3] = sub_140a387b0()
    *rax_2 = &data_142d40e18

if (var_10 != 0)
    int64_t* rcx = var_18
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &data_143e2a320)
        return sub_140745b20(&var_18)

if (data_143e2a328 != 0)
    int64_t* rcx_2 = data_143e2a320
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        int64_t rcx_3 = data_143e2a320
        
        if (rcx_3 != 0)
            data_143e2a320 = sub_140a84c80(rcx_3, 0, 0)
        
        data_143e2a328 = 0

return sub_140745b20(&var_18)
