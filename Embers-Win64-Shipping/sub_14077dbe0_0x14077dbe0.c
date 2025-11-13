// 函数: sub_14077dbe0
// 地址: 0x14077dbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
sub_14077e420(arg1, arg2, sub_140745220(&var_38, arg3))
void* r9 = *arg1
__builtin_memset(&arg1[7], 0, 0x40)
void* r8_1 = *(r9 + 0x98)

if (r9 != 0)
    int32_t* rdx_2 = arg1[1]
    
    if (rdx_2 != 0 && r8_1 != 0)
        arg1[7] = zx.q(*(r8_1 + 0xb8) * *rdx_2) + *(r8_1 + 0x18)
        arg1[8] = zx.q((*rdx_2 + 1) * *(r8_1 + 0xb8)) + *(r8_1 + 0x18)
        arg1[9] = zx.q((*rdx_2 + 2) * *(r8_1 + 0xb8)) + *(r8_1 + 0x18)
        arg1[0xa] = zx.q((*rdx_2 + 3) * *(r8_1 + 0xb8)) + *(r8_1 + 0x18)
        void* r8_2 = *(r9 + 0xa0)
        
        if (r8_2 != 0)
            arg1[0xb] = zx.q(*(r8_2 + 0xb8) * *rdx_2) + *(r8_2 + 0x18)
            arg1[0xc] = zx.q((*rdx_2 + 1) * *(r8_2 + 0xb8)) + *(r8_2 + 0x18)
            arg1[0xd] = zx.q((*rdx_2 + 2) * *(r8_2 + 0xb8)) + *(r8_2 + 0x18)
            arg1[0xe] = zx.q((*rdx_2 + 3) * *(r8_2 + 0xb8)) + *(r8_2 + 0x18)

int64_t rcx_8 = arg3[3]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
