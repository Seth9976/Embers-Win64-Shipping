// 函数: sub_142bf81c0
// 地址: 0x142bf81c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = data_144019c00
int32_t var_28
int32_t var_28_1 = var_28

if (rax != 0)
    return rax

int64_t i

do
    int32_t* rax_1 = sub_142bf7d40()
    int32_t* rbx_1 = rax_1
    
    if (rax_1 == 0)
        rbx_1 = &data_143699d90
    
    bool z_1
    
    if (0 == data_144019c00)
        data_144019c00 = rbx_1
        z_1 = true
    else
        data_144019c00
        z_1 = false
    
    if (z_1)
        return rbx_1
    
    if (rbx_1 != 0 && rbx_1 != &data_143699d90)
        sub_142bf2740(rbx_1)
    
    i = data_144019c00
while (i == 0)

return i
