// 函数: sub_14077da80
// 地址: 0x14077da80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
sub_14077e420(arg1, arg2, sub_140745220(&var_38, arg3))
void* r9 = *arg1
arg1[7] = 0
arg1[8] = 0

if (r9 != 0)
    void* rdx_2 = arg1[1]
    
    if (rdx_2 != 0)
        void* r8_1 = *(r9 + 0x98)
        
        if (r8_1 != 0)
            arg1[7] = zx.q(*(r8_1 + 0xbc) * *(rdx_2 + 4)) + *(r8_1 + 0x28)
            void* r8_2 = *(r9 + 0xa0)
            
            if (r8_2 != 0)
                arg1[8] = zx.q(*(r8_2 + 0xbc) * *(rdx_2 + 4)) + *(r8_2 + 0x28)

int64_t rcx_8 = arg3[3]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg1
