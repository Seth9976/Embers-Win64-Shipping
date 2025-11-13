// 函数: sub_14118c420
// 地址: 0x14118c420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1
void* r13 = data_143e6d188
int64_t result = sx.q(data_143e6d190)
void* r9 = arg3
void* rsi_1 = result * 0x160 + r13
void* var_58 = rsi_1

if (r13 != rsi_1)
    int32_t* r14_1 = r13 + 0x90
    
    do
        if (r14_1[-0x22] == arg1)
            void var_50
            sub_14205a1d0(r9, &var_50, r14_1[-0x23])
            int32_t result_1
            result = zx.q(result_1)
            int32_t temp0_1 = result.d
            
            if (temp0_1 != 0 && temp0_1 s> 0)
                if (arg2 == 0)
                    int64_t* rbp_1 = *(r14_1 - 0x18)
                    result = sx.q(r14_1[-4])
                    void* r15_2 = result * 0x70 + rbp_1
                    
                    if (rbp_1 != r15_2)
                        do
                            int64_t rsi_2 = sx.q(arg4[1].d)
                            int32_t rax = (rsi_2 + 1).d
                            arg4[1].d = rax
                            
                            if (rax s> *(arg4 + 0xc))
                                sub_1405fdd60(arg4)
                            
                            sub_14117b2a0(rsi_2 * 0x70 + *arg4, rbp_1)
                            int64_t rsi_3 = sx.q(arg5[1].d)
                            int32_t rax_1 = (rsi_3 + 1).d
                            arg5[1].d = rax_1
                            
                            if (rax_1 s> *(arg5 + 0xc))
                                sub_1405a4cf0(arg5)
                            
                            rbp_1 = &rbp_1[0xe]
                            result = zx.q(r14_1[0x30])
                            *(*arg5 + (rsi_3 << 2)) = result.d
                        while (rbp_1 != r15_2)
                        
                        rsi_1 = var_58
                else if (arg2 == 1)
                    int64_t* rbp_2 = *(r14_1 - 8)
                    result = sx.q(*r14_1)
                    void* r15_4 = result * 0x70 + rbp_2
                    
                    if (rbp_2 != r15_4)
                        do
                            int64_t rsi_4 = sx.q(arg4[1].d)
                            int32_t rax_2 = (rsi_4 + 1).d
                            arg4[1].d = rax_2
                            
                            if (rax_2 s> *(arg4 + 0xc))
                                sub_1405fdd60(arg4)
                            
                            sub_14117b2a0(rsi_4 * 0x70 + *arg4, rbp_2)
                            int64_t rsi_5 = sx.q(arg5[1].d)
                            int32_t rax_3 = (rsi_5 + 1).d
                            arg5[1].d = rax_3
                            
                            if (rax_3 s> *(arg5 + 0xc))
                                sub_1405a4cf0(arg5)
                            
                            rbp_2 = &rbp_2[0xe]
                            result = zx.q(r14_1[0x30])
                            *(*arg5 + (rsi_5 << 2)) = result.d
                        while (rbp_2 != r15_4)
                        
                        rsi_1 = var_58
            
            int64_t var_48
            
            if (var_48 != 0)
                result = sub_140a74f90(var_48)
            
            r9 = arg3
            arg1 = arg_8
        
        r13 += 0x160
        r14_1 = &r14_1[0x58]
    while (r13 != rsi_1)

return result
