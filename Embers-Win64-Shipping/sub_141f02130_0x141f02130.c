// 函数: sub_141f02130
// 地址: 0x141f02130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x40))()
void* result = sub_142494d30()

if (result != 0)
    sub_140d3a3a0(&arg1[1], result)
    int32_t r8_1 = *(result + 0x5c)
    int32_t rcx_4 = (*(result + 0x58) - 1 + r8_1) & not.d(r8_1 - 1)
    int32_t rax_3 = 1
    
    if (rcx_4 != 0)
        rax_3 = rcx_4
    
    void*** rax_4 = sub_140a82f30(sx.q(rax_3), 0)
    arg1[2] = rax_4
    sub_141f02720(rax_4, arg2)
    void* rdx_2 = &rax_4[0xd]
    *rax_4 = &data_14309b408
    rax_4[0xb] = 0
    rax_4[0xc] = 0
    *(rdx_2 + 0x10) = 0
    *(rdx_2 + 0x18) = 0
    *(rdx_2 + 0x1c) = 0x80
    void* rax_5 = *(rdx_2 + 0x10)
    
    if (rax_5 != 0)
        rdx_2 = rax_5
    
    *rdx_2 = 0
    *(rdx_2 + 8) = 0
    rax_4[0x11].d = 0xffffffff
    *(rax_4 + 0x8c) = 0
    rax_4[0x13] = 0
    rax_4[0x14].d = 0
    sub_141c212a0(&rax_4[0xb], arg2 + 0x58)
    *rax_4 = &data_143266710
    rax_4[0x15] = *(arg2 + 0xa8)
    rax_4[0x16] = *(arg2 + 0xb0)
    rax_4[0x17] = 0
    int64_t rbp_1 = sx.q(*(arg2 + 0xc0))
    int64_t r15_1 = *(arg2 + 0xb8)
    rax_4[0x18].d = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1407c35c0(&rax_4[0x17], rbp_1.d, 0)
        memcpy(rax_4[0x17], r15_1, (rbp_1 << 6).d)
    else
        *(rax_4 + 0xc4) = 0
    
    rax_4[0x19] = *(arg2 + 0xc8)
    result = *(arg2 + 0xd0)
    rax_4[0x1a] = result
    
    if (result != 0)
        *(result + 8) += 1
    
    arg1[4].b = 1

return result
