// 函数: sub_140da8c00
// 地址: 0x140da8c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result_1 = arg2
int32_t rax = 0
int32_t rsi = arg3
int32_t* result_2 = arg2
int32_t arg_18 = 0

if (arg5 != 0 && rsi s> 0)
    int32_t rax_2 = rsi - arg1[0xb].d
    
    if (rax_2 - 1 s< 0 || rax_2 - 1 s>= arg1[0xd].d)
        arg2.b = 0
    else
        arg2 = arg1[0xc] + ((sx.q(rax_2) * 3 - 3) << 3)
        
        if (arg2 == 0)
            arg2.b = 0
        else
            int64_t rax_5 = sx.q(*arg2)
            
            if (rax_5.d == 0xffffffff)
                arg2.b = 0
            else
                arg2 = zx.q(*(rax_5 * 0x68 + *arg1 + 0x20))
    
    rax = sx.d(arg2.b)
    arg_18 = rax

int32_t* var_48 = &arg_18
bool cond:1 = rsi != arg4
int32_t* result

if (rsi == arg4)
label_140da8d61:
    *result_2 = rax
    result = result_2
    result_2[1].b = 1
else
    if (rsi s< arg4)
        do
            int32_t rax_8 = rsi - arg1[0xb].d
            
            if (rsi - arg1[0xb].d s< 0)
                goto label_140da8d6e
            
            if (rax_8 s>= arg1[0xd].d)
                goto label_140da8d6e
            
            int32_t* rax_11 = arg1[0xc] + sx.q(rax_8) * 0x18
            
            if (rax_11 == 0)
                goto label_140da8d6e
            
            int64_t rbx_1 = sx.q(*rax_11)
            
            if (rbx_1.d == 0xffffffff)
                goto label_140da8d6e
            
            int32_t rdx_2
            
            if (rax_11[4] s<= 0)
                rdx_2 = rbx_1.d
            else
                rdx_2 = *(*(rax_11 + 8) + (sx.q(rax_11[4]) << 2) - 4)
            
            int64_t r12_1 = sx.q(rdx_2)
            int64_t rdi_1 = rbx_1
            
            if (rbx_1 s<= r12_1)
                int64_t r14_1 = rdi_1 * 0x68
                
                do
                    void* rbp_2 = *arg1 + r14_1
                    arg5.d = rbx_1.d
                    
                    if (sub_140d9b240(&var_48, rbp_2) == 0)
                        goto label_140da8d6e
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                    rsi += zx.d(*(rbp_2 + 0x21))
                    rdi_1 += 1
                    r14_1 += 0x68
                while (rdi_1 s<= r12_1)
            
            cond:1 = rsi != arg4
        while (rsi s< arg4)
        
        rax = arg_18
        result_2 = result_1
    
    if (not(cond:1))
        goto label_140da8d61
    
label_140da8d6e:
    result = result_1
    result[1].b = 0

return result
