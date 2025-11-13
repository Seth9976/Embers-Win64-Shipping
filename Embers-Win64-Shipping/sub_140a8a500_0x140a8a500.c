// 函数: sub_140a8a500
// 地址: 0x140a8a500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d

if (rbx s<= 1)
    sub_140596d10(arg1, arg2)
    return arg1

int64_t rdi = *arg2
int32_t r12 = 0
int16_t* r15 = nullptr
uint64_t var_38 = 0
int32_t arg_10
int16_t* rax_1

if (rbx != 0)
    sub_1405a4c70(&var_38, rbx, 0)
    r15 = var_38
    memcpy(r15, rdi, rbx * 2)
    rax_1 = r15
    int32_t var_2c
    arg_10 = var_2c
else
    arg_10 = 0
    rax_1 = nullptr

if (rbx != 0)
    int16_t rcx_3 = *rax_1
    int32_t rdi_1 = 0
    int64_t rbp
    
    if (rcx_3 == 0)
        rbp.b = 1
    else if (rcx_3 - 0x2d u> 0x32)
        if (rcx_3 - 0x61 u<= 0x19)
            rbp.b = 1
        else
            rbp.b = 0
    else if (test_bit(0x43ffffff95ffb, zx.q(rcx_3 - 0x2d)) || rcx_3 - 0x61 u<= 0x19)
        rbp.b = 1
    else
        rbp.b = 0
    
    int64_t r14_1 = sx.q(rbx)
    int64_t i = 0
    
    do
        int64_t rdx_2 = sx.q(rdi_1)
        i += 1
        rdi_1 += 1
        
        for (; i s< r14_1; i += 1)
            int16_t rax_4 = r15[i]
            
            if (rax_4 == 0)
                rax_4.b = 1
            else if (rax_4 - 0x2d u> 0x32)
                if (rax_4 - 0x61 u<= 0x19)
                    rax_4.b = 1
                else
                    rax_4.b = 0
            else if (test_bit(0x43ffffff95ffb, zx.q(rax_4 - 0x2d)) || rax_4 - 0x61 u<= 0x19)
                rax_4.b = 1
            else
                rax_4.b = 0
            
            if (rbp.b != rax_4.b)
                break
            
            rdi_1 += 1
        
        int32_t rsi_2 = rdi_1 - rdx_2.d
        
        if (rbp.b != 0)
            if (r12 != rdx_2.d)
                memmove(&r15[sx.q(r12)], &r15[rdx_2], rsi_2 * 2)
            
            r12 += rsi_2
        
        rbp.b ^= 1
    while (i s< r14_1)
    
    rbx = r12

*arg1 = r15
*(arg1 + 0xc) = arg_10
arg1[1].d = rbx
return arg1
