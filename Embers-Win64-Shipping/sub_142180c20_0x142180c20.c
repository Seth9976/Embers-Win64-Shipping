// 函数: sub_142180c20
// 地址: 0x142180c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
void* r10 = &arg1[4]
*arg1 = &data_1432e6ba8
arg1[2] = 0
arg1[3] = 0
*(r10 + 0x10) = 0
*(r10 + 0x18) = 0
*(r10 + 0x1c) = 0x80
void* rax = *(r10 + 0x10)

if (rax != 0)
    r10 = rax

*r10 = 0
*(r10 + 8) = 0
arg1[8].d = 0xffffffff
__builtin_memset(arg1 + 0x44, 0, 0x14)
void* rcx = &arg1[0xb]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x10] = 0
arg1[0x11].d = arg2
*(arg1 + 0x8c) = arg3
arg1[0x12] = arg4

if (arg4 != 0)
    *(arg4 + 8) += 1

__builtin_memset(&arg1[0x13], 0, 0x24)
*(arg1 + 0xbc) = 2
sub_1421b9a90(arg1)

if (arg1[0x12] != 0)
    void*** var_18 = nullptr
    void*** rax_2 = sub_140a84c80(0, 0x20, 0)
    var_18 = rax_2
    int32_t var_10_1 = 2
    
    if (rax_2 != 0)
        rax_2[1] = arg1
        *rax_2 = &data_1432e9a00
        rax_2[3] = sub_140a387b0()
        *rax_2 = &data_1432e9a58
    
    sub_142064a90(arg1[0x12], &var_18, 0x79, &data_143f4d480)
    void*** rax_5
    
    if (var_10_1 == 0)
        rax_5 = var_18
    label_142180dc0:
        
        if (rax_5 != 0)
            sub_140a74f90(rax_5)
    else
        void*** rcx_3 = var_18
        
        if (rcx_3 != 0)
            (*rcx_3)[7](rcx_3, 0)
            rax_5 = var_18
            
            if (rax_5 != 0)
                rax_5 = sub_140a84c80(rax_5, 0, 0)
                var_18 = rax_5
            
            int32_t var_10_2 = 0
            goto label_142180dc0

return arg1
