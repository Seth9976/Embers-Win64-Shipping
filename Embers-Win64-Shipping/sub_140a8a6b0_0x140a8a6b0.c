// 函数: sub_140a8a6b0
// 地址: 0x140a8a6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2[1].d
int64_t* result = arg1

if (rbx s<= 1)
    sub_140596d10(arg1, arg2)
    return result

int64_t rdi = *arg2
int32_t r13 = 0
uint64_t var_48 = 0
int16_t* r12 = nullptr
int32_t arg_10
int16_t* rax_1

if (rbx != 0)
    sub_1405a4c70(&var_48, rbx, 0)
    r12 = var_48
    memcpy(r12, rdi, rbx * 2)
    rax_1 = r12
    int32_t var_3c
    arg_10 = var_3c
else
    arg_10 = 0
    rax_1 = nullptr

int32_t rsi = 0

if (rbx != 0)
    int16_t rcx_3 = *rax_1
    int32_t rdi_1 = 0
    
    if (rcx_3 == 0)
        result.b = 1
    else if (rcx_3 - 0x41 u<= 0x19 || rcx_3 - 0x61 u<= 0x19)
        rsi = 1
        result = 1
    else
        result.b = 0
    
    int64_t r15_1 = sx.q(rbx)
    int64_t i = 0
    
    do
        int64_t rdx_2 = sx.q(rdi_1)
        i += 1
        rdi_1 += 1
        
        for (; i s< r15_1; i += 1)
            int16_t rax_3 = r12[i]
            
            if (rax_3 != 0 && (rax_3 - 0x41 u<= 0x19 || rax_3 - 0x61 u<= 0x19))
                rsi += 1
            
            if (rax_3 == 0 || ((rax_3 - 0x41 u<= 0x19 || rax_3 - 0x61 u<= 0x19) && rsi s<= 3))
                rax_3.b = 1
            else
                rax_3.b = 0
            
            if (result.b != rax_3.b)
                break
            
            rdi_1 += 1
        
        int32_t rbp_2 = rdi_1 - rdx_2.d
        
        if (result.b != 0)
            if (r13 != rdx_2.d)
                memmove(&r12[sx.q(r13)], &r12[rdx_2], rbp_2 * 2)
            
            r13 += rbp_2
        
        result.b ^= 1
    while (i s< r15_1)
    
    result = arg1
    rbx = r13

*result = r12
*(result + 0xc) = arg_10
result[1].d = rbx
return result
