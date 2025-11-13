// 函数: sub_142b4dd90
// 地址: 0x142b4dd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void** rbx = arg1

if (*arg4 s> 0)
label_142b4ddbe:
    
    if (arg3 != 0)
        arg3(arg2)
else if (*arg1 == 0)
    *arg1 = arg2
else if (*(arg1 + 0xe) != 0)
    sub_142ae7110(*rbx, arg2, arg4)
else
    void* rax = j_sub_142a7dd00(0x28)
    void* arg_20 = rax
    void* r14_1
    
    if (rax == 0)
        r14_1 = nullptr
    else
        r14_1 = sub_142ae6ec0(rax, arg3, 0, 1, arg4)
    
    if (*arg4 s> 0)
        goto label_142b4ddbe
    
    sub_142ae7110(r14_1, *rbx, arg4)
    *rbx = r14_1
    *(rbx + 0xe) = 1
    sub_142ae7110(*rbx, arg2, arg4)
