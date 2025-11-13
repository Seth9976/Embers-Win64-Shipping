// 函数: sub_142c630c0
// 地址: 0x142c630c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t arg_8 = 0
int64_t arg_20 = 0
int64_t rax = 0

if (arg1 != 0)
    int64_t* r9_1 = &arg_20
    int64_t* r8 = &arg_8
    
    if (arg3 == 0)
        r9_1 = nullptr
    
    if (arg2 == 0)
        r8 = nullptr
    
    void* rdx = -ffffffffffffffff
    
    do
        rdx += 1
    while (*(arg1 + rdx) != 0)
    
    int32_t rax_1 = sub_142c61500(arg1, rdx, r8, r9_1, nullptr)
    rbx = rax_1
    
    if (rax_1 != 0)
        return rax_1
    
    rax = arg_8

if (arg2 != 0)
    if (rax == 0 && arg1 != 0 && *arg1 == 0x3a)
        int64_t rax_2 = data_143ccb8b0(&data_1434cce10)
        arg_8 = rax_2
        
        if (rax_2 == 0)
            rbx = 0x1b
    
    data_143ccb8a0(*arg2)
    *arg2 = arg_8

if (arg3 != 0)
    data_143ccb8a0(*arg3)
    *arg3 = arg_20

return rbx
