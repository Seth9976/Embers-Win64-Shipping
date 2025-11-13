// 函数: sub_142c8d670
// 地址: 0x142c8d670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if (arg1 == 0 || *arg1 == 0 || arg2 == 0 || *arg2 == 0)
    return 0

char* rax = data_143ccb8b0()

if (rax != 0)
    char* rax_1 = data_143ccb8b0(arg2)
    
    if (rax_1 != 0)
        if (sub_142c8d700(rax_1, rax) == 1)
            rbx = 1
        
        data_143ccb8a0(rax_1)
    
    data_143ccb8a0(rax)

return zx.q(rbx)
