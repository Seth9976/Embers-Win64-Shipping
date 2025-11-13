// 函数: ??0TPI1@@AEAA@PEAUMSF@@PEAVPDB1@@G@Z
// 地址: 0x140e967f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142edb518
arg1[3] = 0
arg1[4].d = 0
sub_1407473e0(&arg1[3], arg2)
arg1[5] = 0
arg1[6].d = 0
sub_140692f90(&arg1[5], &arg2[2])
arg1[7] = 0
arg1[8].d = 0
sub_1407473e0(&arg1[7], &arg2[4])
arg1[9] = 0
arg1[0xa].d = 0
sub_140692f90(&arg1[9], &arg2[6])
arg1[0xb].d = arg2[8].d
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = *arg6
void* rax_2 = arg6[1]
arg1[0xf] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[0x10] = arg3
arg1[0x11].b = arg4
*(arg1 + 0x8c) = 0
*(arg1 + 0x95) = arg5
int64_t* rbx_1 = arg6[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
