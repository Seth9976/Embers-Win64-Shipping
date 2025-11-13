// 函数: sub_142b2ca60
// 地址: 0x142b2ca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_144016b3c
int32_t arg_10 = 0
char rax_1

if (rax != 2)
    rax_1 = sub_142a85f00(&data_144016b3c)

int32_t rcx_1

if (rax == 2 || rax_1 == 0)
    int32_t rax_3 = data_144016b40
    rcx_1 = arg_10
    
    if (rax_3 s> 0)
        rcx_1 = rax_3
else
    sub_142b2caf0(&arg_10)
    data_144016b40 = arg_10
    sub_142a85e80(&data_144016b3c)
    rcx_1 = arg_10

if (rcx_1 s<= 0)
    void* result = *(&data_1440169b0 + (sx.q(arg1) << 3))
    
    if (result != 0)
        return result

return &data_144016a70
