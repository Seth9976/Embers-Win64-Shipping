// 函数: sub_1426924b0
// 地址: 0x1426924b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *arg2
void* r10 = arg1
int64_t result = sx.q(arg2[1].d)
int32_t* arg_18 = rbx
void* rdi = &rbx[result * 2]
void* arg_20 = rdi

if (rbx != rdi)
    int64_t r14
    int64_t var_38_1 = r14
    
    do
        int64_t var_58
        result = sub_142692200(r10, &var_58, *rbx, rbx[1], nullptr)
        int64_t rcx_1 = var_58
        
        if (rcx_1 != 0)
            result = sub_140a74f90(rcx_1)
        
        r10 = arg1
        
        if (*(r10 + 0xf8) s> 0)
            int64_t rcx_2 = sx.q(*(r10 + 0xf8))
            int32_t r13_1 = *rbx
            int32_t r12_1 = rbx[1]
            
            if (rcx_2.d != 0)
                result = *(r10 + 0xf0)
                int32_t rbx_1 = 0
                int32_t rbp_1 = 0
                int32_t arg_10 = 0
                int64_t rsi_1 = 0
                
                if (*result != r13_1 || *(result + 4) != r12_1)
                    r14.b = 1
                else
                    r14.b = 0
                
                int64_t r15_1 = rcx_2
                
                do
                    int64_t rdx_1 = sx.q(rbp_1)
                    rsi_1 += 1
                    rbp_1 += 1
                    
                    if (rsi_1 s< r15_1)
                        result = (rsi_1 << 5) + *(r10 + 0xf0)
                        
                        do
                            if (*result != r13_1 || *(result + 4) != r12_1)
                                rcx_2.b = 1
                            else
                                rcx_2.b = 0
                            
                            if (r14.b != rcx_2.b)
                                break
                            
                            rbp_1 += 1
                            rsi_1 += 1
                            result += 0x20
                        while (rsi_1 s< r15_1)
                    
                    int32_t i_1 = rbp_1 - rdx_1.d
                    
                    if (r14.b == 0)
                        if (i_1 != 0)
                            int64_t* rbx_5 = (rdx_1 << 5) + 0x10 + *(r10 + 0xf0)
                            int32_t i
                            
                            do
                                rcx_2 = *rbx_5
                                
                                if (rcx_2 != 0)
                                    result, rcx_2 = sub_140a74f90(rcx_2)
                                
                                rbx_5 = &rbx_5[4]
                                i = i_1
                                i_1 -= 1
                            while (i != 1)
                        
                        rbx_1 = arg_10
                    else
                        if (rbx_1 != rdx_1.d)
                            int64_t rax_2 = *(r10 + 0xf0)
                            result, rcx_2 =
                                memmove((sx.q(rbx_1) << 5) + rax_2, (rdx_1 << 5) + rax_2, i_1 << 5)
                        
                        rbx_1 += i_1
                        arg_10 = rbx_1
                    
                    r10 = arg1
                    r14.b ^= 1
                while (rsi_1 s< r15_1)
                
                rdi = arg_20
                *(r10 + 0xf8) = rbx_1
                rbx = arg_18
        
        void* rcx_6 = *(r10 + 0x960)
        
        if (rcx_6 != 0)
            result = zx.q(*rbx)
            
            if (*(rcx_6 + 0x60) == result.d)
                result = zx.q(rbx[1])
                
                if (*(rcx_6 + 0x64) == result.d)
                    result = sub_142692b60(r10)
                    r10 = arg1
        
        rbx = &rbx[2]
        arg_18 = rbx
    while (rbx != rdi)

return result
