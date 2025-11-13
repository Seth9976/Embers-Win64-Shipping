// 函数: sub_141d96e20
// 地址: 0x141d96e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int32_t result = 0
bool z

if (0 == *(rdx + 0x1c))
    *(rdx + 0x1c) = 0
    z = true
else
    result = *(rdx + 0x1c)
    z = false

if (z)
    int64_t* rbx_1 = arg1[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t var_38_1 = 0
    int64_t var_20_1 = *arg1
    int64_t* var_18_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void** const var_28_1 = &data_1432399c0
    int64_t (* var_48)(int64_t* arg1) = sub_141822d90
    result = sub_140a20e40(2, &var_48)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        rbx_1[1].d -= 1
        
        if (result == 1)
            result = (**rbx_1)(rbx_1)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))

return result
