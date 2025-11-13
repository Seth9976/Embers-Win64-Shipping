// 函数: sub_140842620
// 地址: 0x140842620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
void*** var_28 = nullptr
void*** rax = sub_140a84c80(0, 0x30, 0)
var_28 = rax
int32_t var_20 = 3

if (rax != 0)
    rax[1] = arg1
    *rax = &data_142d3fe58
    rax[2] = sub_140a222e0
    rax[4] = sub_140a387b0()
    *rax = &data_142d3feb0

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

arg1[1] = (*(*rcx + 0x90))(rcx, arg2, arg3, &var_28, 0)
*arg1 = &data_142d3ff10
void*** rax_5

if (var_20 == 0)
    rax_5 = var_28
label_140842716:
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)
else
    void*** rcx_1 = var_28
    
    if (rcx_1 != 0)
        (*rcx_1)[7](rcx_1, 0)
        rax_5 = var_28
        
        if (rax_5 != 0)
            rax_5 = sub_140a84c80(rax_5, 0, 0)
            var_28 = rax_5
        
        int32_t var_20_1 = 0
        goto label_140842716
arg1[2] = 0
arg1[3] = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&arg1[2], rbx_1.d + 1)
        rbp = arg1[3].d
    
    int32_t rax_6 = rbx_1.d + 1 + rbp
    arg1[3].d = rax_6
    
    if (rax_6 s> *(arg1 + 0x1c))
        sub_140594770(&arg1[2])
    
    UnDecorator::getReferenceType(arg1[2], arg2, (rbx_1.d + 1) * 2)

*(arg1 + 0x24) = arg5
arg1[5].d = arg6
*(arg1 + 0x2c) = arg7
arg1[4].d = arg4
return arg1
