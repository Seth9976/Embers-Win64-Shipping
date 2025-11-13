// 函数: sub_141cedf20
// 地址: 0x141cedf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4]
uint32_t var_18[0x4] = zmm6
uint32_t zmm7[0x4]
uint32_t var_28[0x4] = zmm7
int32_t rax_3

if (arg1[1].d != *(arg1 + 0x34))
    zmm7 = arg3.d
    uint32_t arg_8
    
    if (_mm_and_ps(zmm7, 0x7fffffff)[0] f> 9.99999994e-09f)
        arg_8 = zmm7[0]
    else
        arg_8 = 0
    
    zmm6 = arg3:4.d
    
    if (_mm_and_ps(zmm6, 0x7fffffff)[0] f> 9.99999994e-09f)
        uint32_t arg_c = zmm6[0]
    else
        arg_c = 0
    
    int32_t rax_1 = sub_140b21160(&arg_8, 8, 0)
    void* rcx_1 = arg1[8]
    void* r8 = &arg1[7]
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    rax_3 = *(r8 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_1)) << 2))

if (arg1[1].d == *(arg1 + 0x34) || rax_3 == 0xffffffff)
label_141cee008:
    *arg2 = 0xffffffff
else
    int64_t r8_1 = *arg1
    
    while (true)
        uint32_t (* rdx_3)[0x4] = sx.q(rax_3) * 0x1c
        
        if (not((*(rdx_3 + r8_1))[0] f!= zmm7[0]) && (*(rdx_3 + r8_1 + 4))[0] f== zmm6[0])
            *arg2 = rax_3
            break
        
        rax_3 = *(rdx_3 + r8_1 + 0x14)
        
        if (rax_3 == 0xffffffff)
            goto label_141cee008

return arg2
