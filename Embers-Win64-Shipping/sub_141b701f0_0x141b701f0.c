// 函数: sub_141b701f0
// 地址: 0x141b701f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d8ad18
arg1[1].d = 0x42000000
*(arg1 + 0xc) = 0x42000000
*(arg1 + 0x14) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = data_14399f5c0
arg1[6].b = 0
__builtin_memset(&arg1[7], 0, 0x20)
int64_t zmm1 = data_143dbb1f0
arg1[0xc].d = zmm1.d
arg1[0xb].d = zmm1.d
arg1[0xd].b = 0
int128_t zmm0 = zmm1:4.d
*(arg1 + 0x64) = zmm0.d
*(arg1 + 0x5c) = zmm0.d
*(arg1 + 0x6c) = 3
arg1[0xe] = 0
arg1[0xf] = 0
arg1[0x10].b &= 0xfc
arg1[0x12] = 0
arg1[0x13].d = 0
arg1[0x11].b = 1
void*** rax = sub_140a84c80(0, 0x30, 0)
int64_t* rbx = rax

if (rax != 0)
    sub_141b794c0(rax, arg2, arg3)

void var_28

if (&var_28 != &arg1[0x12])
    if (rbx != 0)
        (*(*rbx + 0x40))(rbx, &arg1[0x12])
    else if (arg1[0x13].d != 0)
        int64_t* rcx_2 = arg1[0x12]
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2, 0)
            int64_t rcx_3 = arg1[0x12]
            
            if (rcx_3 != 0)
                arg1[0x12] = sub_140a84c80(rcx_3, 0, 0)
            
            arg1[0x13].d = 0

if (rbx != 0)
    (*(*rbx + 0x38))(rbx, 0)
    int64_t rax_5 = sub_140a84c80(rbx, 0, 0)
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)

return arg1
