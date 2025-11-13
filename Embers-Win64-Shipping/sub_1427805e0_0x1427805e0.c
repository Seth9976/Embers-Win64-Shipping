// 函数: sub_1427805e0
// 地址: 0x1427805e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
arg_18.d = result.d

if (result.d s>= 0)
    int32_t rcx = ((result << 1) + 1).d
    int32_t arg_10 = rcx
    
    do
        int32_t r14_1 = result.d
        
        if (rcx s< arg2)
            uint64_t rdi_1
            
            do
                int32_t rbp_1 = r14_1 * 2
                rdi_1 = zx.q(rbp_1 + 1)
                
                if ((rdi_1 + 1).d s< arg2)
                    if (sub_142788fc0(arg4, arg1[sx.q(rbp_1) + 2], arg1[sx.q(rdi_1.d)]) != 0)
                        rdi_1 = zx.q(rbp_1)
                    
                    rdi_1 = zx.q(rdi_1.d + 1)
                
                int64_t rax_6 = sx.q(rdi_1.d)
                int32_t r12_1 = arg1[rax_6]
                int64_t rax_7 = sx.q(r14_1)
                int32_t r13_1 = arg1[rax_7]
                
                if (sub_142788fc0(arg4, r13_1, r12_1) == 0)
                    break
                
                arg1[rax_7] = r12_1
                arg1[rax_6] = r13_1
                r14_1 = rdi_1.d
            while (((rdi_1 << 1) + 1).d s< arg2)
            result = zx.q(arg_18.d)
            rcx = arg_10
        
        result = zx.q(result.d - 1)
        rcx -= 2
        arg_18.d = result.d
        arg_10 = rcx
    while (result.d s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)
int64_t i_1 = i

if (j s> 0)
    do
        int32_t rcx_4 = *arg1
        int32_t r15_1 = 0
        result = zx.q(arg1[i])
        *arg1 = result.d
        arg1[i] = rcx_4
        
        if (j s> 1)
            uint64_t rdi_2
            
            do
                int32_t r14_3 = r15_1 * 2
                rdi_2 = zx.q(r14_3 + 1)
                
                if ((rdi_2 + 1).d s< j)
                    if (sub_142788fc0(arg4, arg1[sx.q(r14_3) + 2], arg1[sx.q(rdi_2.d)]) != 0)
                        rdi_2 = zx.q(r14_3)
                    
                    rdi_2 = zx.q(rdi_2.d + 1)
                
                int64_t rax_13 = sx.q(rdi_2.d)
                int32_t r12_2 = arg1[rax_13]
                int64_t rax_14 = sx.q(r15_1)
                int32_t r13_2 = arg1[rax_14]
                result = sub_142788fc0(arg4, r13_2, r12_2)
                
                if (result.b == 0)
                    break
                
                arg1[rax_14] = r12_2
                r15_1 = rdi_2.d
                arg1[rax_13] = r13_2
            while (((rdi_2 << 1) + 1).d s< j)
            i = i_1
        
        i -= 1
        j -= 1
        i_1 = i
    while (i s> 0)

return result
