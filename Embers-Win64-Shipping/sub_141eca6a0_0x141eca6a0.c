// 函数: sub_141eca6a0
// 地址: 0x141eca6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t i_1 = arg2
int32_t* rsi_1 = arg1
int32_t i

do
    int32_t* rbx_1 = rsi_1
    rsi_1 = &rsi_1[0x40]
    rbx_1[0x3e] = 0
    
    if (rbx_1[0x3f] != 0)
        sub_1405a5130(&rbx_1[0x3c], 0)
    
    if (sub_140d3e110(rbx_1) != 0)
        sub_141eb0c40(sub_140d3c6e0(rbx_1), &rbx_1[0x28], &rbx_1[0x30], &rbx_1[0x34], &rbx_1[0x3c], 
            rbx_1[0x2c], &rbx_1[2], &rbx_1[0x1e], &rbx_1[0x26])
    
    i = i_1
    i_1 -= 1
while (i != 1)
