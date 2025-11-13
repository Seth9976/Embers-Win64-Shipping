// 函数: sub_141d2d8f0
// 地址: 0x141d2d8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
InitializeSRWLock(&arg1[8])
void*** rbx = nullptr
*(arg1 + 0x10) = 0
uint32_t rdx = zx.d(*arg2)

if (rdx == 1)
    void*** rax_7 = j_sub_140a82f30(0x68)
    
    if (rax_7 != 0)
        void* rcx_4 = &rax_7[5]
        *rax_7 = &data_143222640
        __builtin_memset(&rax_7[1], 0, 0x20)
        *(rcx_4 + 0x10) = 0
        *(rcx_4 + 0x18) = 0
        *(rcx_4 + 0x1c) = 0x80
        void* rax_8 = *(rcx_4 + 0x10)
        
        if (rax_8 != 0)
            rcx_4 = rax_8
        
        *rcx_4 = 0
        *(rcx_4 + 8) = 0
        *(rax_7 + 0x4c) = 0
        rax_7[9].d = 0xffffffff
        rax_7[0xb] = 0
        rax_7[0xc].d = 0
        rbx = rax_7
else if (rdx == 2)
    void*** rax_5 = j_sub_140a82f30(0xd8)
    
    if (rax_5 != 0)
        rbx = sub_141d2c550(rax_5)
else if (rdx == 3)
    void*** rax_3 = j_sub_140a82f30(0x130)
    
    if (rax_3 != 0)
        rbx = sub_141d2cb50(rax_3)
else if (rdx == 4)
    void*** rax_1 = j_sub_140a82f30(0x50)
    
    if (rax_1 != 0)
        rbx = sub_141d2c960(rax_1)

void arg_8

if (&arg1[0x10] != &arg_8)
    void*** rcx_5 = *(arg1 + 0x10)
    *(arg1 + 0x10) = rbx
    
    if (rcx_5 != 0)
        (**rcx_5)(rcx_5, 1)
else if (rbx != 0)
    (**rbx)(rbx, 1)

return arg1
