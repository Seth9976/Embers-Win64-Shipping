// 函数: sub_141a51f20
// 地址: 0x141a51f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_4

if (arg1[8] == arg1[0x13])
label_141a51faa:
    int64_t* rax_5 = sub_141a528b0(arg1, arg2)
    int64_t r8_1 = *rax_5
    rax_4 = (*(r8_1 + 0x2d8))(rax_5, arg3, r8_1)
    int64_t arg_8 = rax_4
    
    if (rax_4 != 0)
        sub_141a28df0(&arg1[6], arg2, &arg_8)
        return arg_8
else
    void* r10_1 = *(arg1 + 0x58)
    void* r11_1 = &arg1[0x14]
    int64_t rdi_1 = sx.q(*arg2)
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(arg1[0x18]) - 1) & rdi_1) << 2))
    
    if (rax_1 == 0xffffffff)
        goto label_141a51faa
    
    int64_t r8 = *(arg1 + 0x18)
    int64_t rdx
    
    while (true)
        rdx = sx.q(rax_1)
        int64_t rcx = rdx * 3
        
        if (*(r8 + (rcx << 3)) == rdi_1.d)
            break
        
        rax_1 = *(r8 + (rcx << 3) + 0x10)
        
        if (rax_1 == 0xffffffff)
            goto label_141a51faa
    
    if (rax_1 == 0xffffffff)
        goto label_141a51faa
    
    void* rax_3 = r8 + rdx * 0x18
    
    if (rax_3 == 0)
        goto label_141a51faa
    
    rax_4 = *(rax_3 + 8)
    
    if (rax_4 == 0)
        goto label_141a51faa

return rax_4
