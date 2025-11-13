// 函数: sub_1420eb2b0
// 地址: 0x1420eb2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
int64_t* r13 = arg2
int32_t r12 = 0
int64_t* var_48
sub_1424373a0((*(*arg2 + 0x150))(arg2), &var_48)
int32_t result_1
uint64_t result = zx.q(result_1)

while (true)
    int64_t* rdx_1 = var_48
    int64_t rcx_1
    
    if (result.d s< 0 || result.d s>= rdx_1[1].d)
        rcx_1.b = 0
    else
        rcx_1.b = 1
    
    if (rcx_1.b == 0)
        return result
    
    result, rcx_1 = sub_140d3c6e0(*rdx_1 + (sx.q(result.d) << 3))
    
    if (r13 == result)
        if (r12 s>= 0)
            int32_t rbx_1 = *(arg1 + 0x268)
            int32_t rbx_2 = rbx_1 - 1
            var_48 = nullptr
            int32_t rdi_1 = 0
            int32_t var_3c_1 = 0
            
            if (rbx_1 - 1 s>= 0)
                int32_t r13_1 = 0
                int64_t r15_2 = sx.q(rbx_2) * 0xc
                int64_t rcx_4 = r15_2
                int64_t arg_18 = rcx_4
                int32_t temp1_1
                
                do
                    int32_t* rbp_2 = *(arg1 + 0x260) + r15_2
                    
                    if (rbp_2[2] == r12)
                        if (sub_140d3e110(rbp_2) != 0)
                            int64_t rax_6 = sub_140d3c6e0(rbp_2)
                            int64_t rbp_3 = sx.q(rdi_1)
                            rdi_1 = (rbp_3 + 1).d
                            
                            if (rdi_1 s> r13_1)
                                sub_1405a4d70(&var_48)
                                rsi = var_48
                                r13_1 = var_3c_1
                            
                            rsi[rbp_3] = rax_6
                        
                        int32_t rax_10 = *(arg1 + 0x268)
                        int32_t r8_3 = rax_10 - rbx_2 - 1
                        
                        if (r8_3 s>= 1)
                            r8_3 = 1
                        
                        if (r8_3 != 0)
                            int64_t r9_1 = *(arg1 + 0x260)
                            memcpy(arg_18 + r9_1, r9_1 + sx.q(rax_10 - r8_3) * 0xc, r8_3 * 0xc)
                            rax_10 = *(arg1 + 0x268)
                        
                        *(arg1 + 0x268) = rax_10 - 1
                        sub_140775970(arg1 + 0x260)
                        rcx_4 = arg_18
                    
                    rcx_4 -= 0xc
                    r15_2 -= 0xc
                    temp1_1 = rbx_2
                    rbx_2 -= 1
                    arg_18 = rcx_4
                while (temp1_1 - 1 s>= 0)
                r13 = arg2
            
            result = zx.q(rdi_1 - 1)
            int64_t rdi_2 = sx.q(result.d)
            
            if (result.d s>= 0)
                int64_t temp2_1
                
                do
                    int64_t* rbx_3 = rsi[rdi_2]
                    
                    if (rbx_3 == 0)
                        result = (*(*rbx_3 + 0x2e0))(rbx_3, r13)
                    else
                        void* rax_12 = sub_14255d000()
                        void* rdx_4 = rbx_3[2]
                        int64_t rax_13 = sx.q(*(rax_12 + 0x38))
                        
                        if (rax_13.d s> *(rdx_4 + 0x38)
                                || *(*(rdx_4 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
                            rbx_3 = rsi[rdi_2]
                            result = (*(*rbx_3 + 0x2e0))(rbx_3, r13)
                        else
                            result = sub_141f8fd20(r13, rbx_3)
                    
                    temp2_1 = rdi_2
                    rdi_2 -= 1
                while (temp2_1 - 1 s>= 0)
            
            if (rsi != 0)
                return sub_140a74f90(rsi)
        
        return result
    
    r12 += 1
    result = zx.q(result_1 + 1)
    result_1 = result.d
