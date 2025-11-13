// 函数: sub_142bc0470
// 地址: 0x142bc0470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t rcx = 0
int64_t var_40 = 0
int32_t arg_8 = 0
int64_t r14 = 0
int64_t rbx = *(*arg1 + 0x30)
*arg2 = 0
int32_t rax_1

if (arg1[4] == 0)
    rax_1 = sub_142bc0820(arg1, arg5)
    arg_8 = rax_1
    rcx = rax_1

if (arg1[4] != 0 || rax_1 == 0)
    int32_t r9 = arg1[2].d
    int32_t rdi_2 = *(arg1 + 0x1c) + r9
    
    if (r9 == 0)
        return rcx
    
    int64_t* rax_2 = sub_142b99a90(rbx, 8, 0, r9 + 1, 0, &arg_8)
    rax_1 = arg_8
    
    if (rax_1 == 0)
        if (arg3 != 0)
            int64_t rax_3 = sub_142b99860(rbx, rdi_2, &arg_8)
            r14 = rax_3
            var_40 = rax_3
            rax_1 = arg_8
        
        if (arg3 == 0 || rax_1 == 0)
            int64_t r13_1 = arg1[5]
            int64_t rax_4 = r14
            
            if (arg3 == 0)
                rax_4 = r13_1
            
            uint64_t rdx_1 = 0
            int32_t i = 1
            *rax_2 = rax_4
            
            if (arg1[2].d u>= 1)
                do
                    uint64_t i_1 = zx.q(i)
                    int32_t rbx_2 = *(arg1[4] + (i_1 << 2)) - 1
                    
                    if (rbx_2 u< rdx_1.d)
                        rbx_2 = rdx_1.d
                    else if (rbx_2 u> *(arg1 + 0x1c))
                        rbx_2 = *(arg1 + 0x1c)
                    
                    uint64_t rax_6 = zx.q(rbx_2)
                    
                    if (arg3 != 0)
                        int64_t r9_3 = zx.q(rbp) + rax_6 + r14
                        void* r14_1 = &rax_2[i_1]
                        *r14_1 = r9_3
                        
                        if (rbx_2 != rdx_1.d)
                            int64_t rcx_4 = rax_2[zx.q(i - 1)]
                            memcpy(rcx_4, rdx_1 + r13_1, r9_3.d - rcx_4.d)
                            **r14_1 = 0
                            *r14_1 += 1
                            rbp += 1
                        
                        r14 = var_40
                    else
                        rax_2[i_1] = rax_6 + r13_1
                    
                    i += 1
                    rdx_1 = zx.q(rbx_2)
                while (i u<= arg1[2].d)
            
            *arg2 = rax_2
            
            if (arg3 != 0)
                *arg3 = r14
            
            if (arg4 != 0)
                *arg4 = rdi_2
            
            return arg_8

return rax_1
