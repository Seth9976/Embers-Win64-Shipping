// 函数: sub_140cad1f0
// 地址: 0x140cad1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(&arg1[1], 0, 0x50)
int64_t rbx = -1
int64_t* rcx = &arg1[0xb]
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x11] = 0
arg1[0x12].d = 0
*arg1 = &data_142e9fb20
arg1[0x13].d = arg2
arg1[0x14] = arg3
sub_140cd3be0(&arg1[0x15])
__builtin_memset(&arg1[0x38], 0, 0x30)

if (arg4 != 0 && *arg4 != 0)
    do
        rbx += 1
    while (arg4[rbx] != 0)
    
    int32_t rdx = 0
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&arg1[0x3c], rbx.d + 1)
        rdx = arg1[0x3d].d
    
    int32_t rax_1 = rbx.d + 1 + rdx
    arg1[0x3d].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x1ec))
        sub_140594770(&arg1[0x3c])
    
    UnDecorator::getReferenceType(arg1[0x3c], arg4, (rbx.d + 1) * 2)

arg1[0x3e].w = 0
arg1[0x3f] = 0

if (data_143de5429 != 0)
label_140cad357:
    char rax_2 = *(arg1 + 0x1f1)
    
    if (data_143de542a == 0)
        rax_2 = 1
    
    *(arg1 + 0x1f1) = rax_2
else if (data_143de542a != 0)
    arg1[0x3e].b = 1
    
    if (data_143de5429 != 0)
        goto label_140cad357

return arg1
