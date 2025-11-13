// 函数: sub_14062e840
// 地址: 0x14062e840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* r12 = *(arg1 + 0x430)
int32_t result_1 = arg2 + 1
int32_t* r14 = nullptr
int64_t result = sx.q(result_1)
int32_t* var_38 = nullptr
int32_t var_2c = 0
int64_t r15 = sx.q(*(r12 + 0x1b0))
int32_t r8 = 0
int32_t result_2 = 0

if (result s< r15)
    int64_t rsi_2 = result * 0xc
    int64_t i_1 = r15 - result
    int64_t i
    
    do
        result = *(r12 + 0x1a8)
        
        if (arg2 == *(rsi_2 + result + 8))
            int64_t result_3 = sx.q(result_2)
            result_2 = (result_3 + 1).d
            
            if (result_2 s> r8)
                result = sub_1405a4cf0(&var_38)
                r8 = var_2c
                r14 = var_38
            
            r14[result_3] = result_1
        
        result_1 += 1
        rsi_2 += 0xc
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (result_2 s>= 1)
        result = sx.q(result_2)
        int32_t* rbx_1 = r14
        void* rbp = &r14[result]
        
        if (r14 != rbp)
            void* r15_1 = arg_8
            
            do
                sub_141f5e650(r15_1, &arg_8, *rbx_1)
                int64_t rsi_3 = sx.q(arg3[1].d)
                int32_t rax = (rsi_3 + 1).d
                arg3[1].d = rax
                
                if (rax s> *(arg3 + 0xc))
                    sub_1405a4d70(arg3)
                
                *(*arg3 + (rsi_3 << 3)) = arg_8
                result = sub_14062e840(r15_1, zx.q(*rbx_1), arg3)
                rbx_1 = &rbx_1[1]
            while (rbx_1 != rbp)
    
    if (r14 != 0)
        return sub_140a74f90(r14)

return result
