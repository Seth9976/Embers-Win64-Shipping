// 函数: sub_141cd1160
// 地址: 0x141cd1160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t rdx = rdi * 5
int64_t rbx = rdx << 3
int32_t rdx_2 = *(arg1[0x1c] + (rdx << 3) + 8) - 3
arg3[1].d = 0

if (rdx_2 s> *(arg3 + 0xc))
    sub_1405dadb0(arg3, rdx_2)

uint64_t result = arg1[0x1c]
int64_t rcx_1 = sx.q(*(result + rbx + 8))

if (rcx_1.d s> 3)
    int32_t* rdx_3 = *(result + rbx)
    int32_t* arg_8 = rdx_3
    result = &rdx_3[rcx_1]
    uint64_t result_1 = result
    
    if (rdx_3 != result)
        do
            int64_t rbp_1 = 0
            int64_t rax_3 = *arg1
            int64_t rdx_5 = sx.q(*(arg1[7] + sx.q(*rdx_3) * 0x18)) << 5
            int32_t* r14_1 = *(rdx_5 + rax_3 + 0x10)
            result = &r14_1[sx.q(*(rdx_5 + rax_3 + 0x18))]
            uint64_t r13_2 = sx.q(*(rdx_5 + rax_3 + 0x18)) << 2 u>> 2
            
            if (r14_1 u> result)
                r13_2 = 0
            
            if (r13_2 != 0)
                do
                    result = *arg3
                    int64_t rdx_6 = sx.q(arg3[1].d)
                    int64_t rbx_1 = sx.q(*r14_1)
                    int64_t r15_1 = rdx_6 << 2
                    int64_t rcx_3 = r15_1 + result
                    
                    if (result == rcx_3)
                    label_141cd125d:
                        result = arg1[0xe]
                        int64_t rcx_4 = rbx_1 * 3
                        
                        if (*(result + (rcx_4 << 3) + 0x10) == 2)
                            int32_t* rcx_5 = *(result + (rcx_4 << 3) + 8)
                            int64_t r8 = arg1[0x15]
                            result = sx.q(*rcx_5) * 2
                            
                            if (*(r8 + (result << 3) + 0xc) == rdi.d)
                                result = sx.q(rcx_5[1]) * 2
                                
                                if (*(r8 + (result << 3) + 0xc) == rdi.d)
                                    int32_t rax_7 = (rdx_6 + 1).d
                                    arg3[1].d = rax_7
                                    
                                    if (rax_7 s> *(arg3 + 0xc))
                                        sub_1405a4cf0(arg3)
                                    
                                    result = *arg3
                                    *(r15_1 + result) = rbx_1.d
                    else
                        while (*result != rbx_1.d)
                            result += 4
                            
                            if (result == rcx_3)
                                goto label_141cd125d
                    
                    r14_1 = &r14_1[1]
                    rbp_1 += 1
                while (rbp_1 != r13_2)
            
            rdx_3 = &arg_8[1]
            arg_8 = rdx_3
        while (rdx_3 != result_1)

return result
