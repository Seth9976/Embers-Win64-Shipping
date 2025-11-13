// 函数: sub_142b40050
// 地址: 0x142b40050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = arg3
uint64_t r15 = arg2
int64_t arg_8
int32_t arg_c

if (arg3 != 0xd)
    uint32_t rax_1 = zx.d(r14)
    uint32_t rcx_1 = rax_1 u>> 4
    arg_c = rax_1 & 0xf
    
    if (rcx_1 == 0)
        rcx_1 = 2
    
    arg_8.d = rcx_1
else
    arg_8 = 0

int32_t r13 = *(arg1 + 0x80)
arg2.b = 0xd
int64_t rbx = arg_8
int32_t rbp_1 = *(r15 + 0x10) + r13
uint64_t rdi
uint64_t arg_20 = rdi
int32_t rcx_2 = *(arg1 + 0x84) + r13
int32_t arg_10 = 0xffffffff
arg_8.b = 0xd
int32_t result

if (rbp_1 s<= rcx_2)
    int64_t r12_1 = sx.q(rbp_1)
    
    while (true)
        if (rbp_1 s>= rcx_2)
            rdi.b = 0xff
        else
            arg2 = zx.q(arg_8.b)
            rdi = zx.q(*(sub_142b3f8c0(arg1) + r12_1))
        
        if (arg2.b == 0xd)
            if (sub_142b3be80(r15, 2, 0) != 0)
                int32_t rcx_7 = *(arg1 + 0x80)
                
                if (rbp_1 s> rcx_7 && rbp_1 - rcx_7 s> *(r15 + 0x10))
                    char rcx_9 = *(sub_142b3f8c0(arg1) + r12_1 - 1)
                    
                    if ((rcx_9 == 0 || rcx_9 == 6) && rdi.b != 0 && rdi.b != 6)
                        int64_t r12_2 = sx.q(*(arg1 + 0x80))
                        int32_t i_2 = rbp_1 - 1
                        
                        for (int64_t i = sx.q(i_2); i s>= r12_2; i -= 1)
                            char rcx_19 = *(sub_142b3f8c0(arg1) + i)
                            
                            if (rcx_19 != 0 && rcx_19 != 6)
                                break
                            
                            i_2 -= 1
                        
                        sub_142b3bed0(r15, 2, 0, i_2 - r12_2.d + 1, rbp_1 - r12_2.d)
                        result.b = 1
                        return result
            
            if (r14 != 0)
                int32_t r14_3 = rbx:4.d
                
                if (sub_142b3be80(r15, rbx.d, r14_3) != 0)
                    int32_t rcx_11 = *(arg1 + 0x80)
                    
                    if (rbp_1 s> rcx_11 && (rbp_1 - rcx_11 s> *(r15 + 0x10)
                            || *(r15 + 0x14) != rbx.d || *(r15 + 8) != r14_3)
                            && (*(sub_142b3f8c0(arg1) + r12_1 - 1) & 0xd0) == 0
                            && (rdi.b & 0xd0) != 0)
                        int64_t r13_2 = sx.q(*(arg1 + 0x80))
                        int32_t i_3 = rbp_1 - 1
                        
                        for (int64_t i_1 = sx.q(i_3); i_1 s>= r13_2; i_1 -= 1)
                            if ((*(sub_142b3f8c0(arg1) + i_1) & 0xd0) != 0)
                                break
                            
                            i_3 -= 1
                        
                        sub_142b3bed0(r15, rbx.d, rbx:4.d, i_3 - r13_2.d + 1, rbp_1 - r13_2.d)
                        result.b = 1
                        return result
            
            char rax_19
            
            if ((rdi - 1).b u<= 0xb || (rdi - 0xe).b u<= 0xf0)
                uint32_t rax_17 = zx.d(rdi.b)
                uint32_t rdx_3 = rax_17 u>> 4
                int32_t var_3c_1 = rax_17 & 0xf
                
                if (rdx_3 == 0)
                    rdx_3 = 2
                
                rax_19 = sub_142b3be80(r15, rdx_3, (rdx_3.q u>> 0x20).d)
            
            if (((rdi - 1).b u> 0xb && (rdi - 0xe).b u> 0xf0) || rax_19 == 0)
                arg2 = zx.q(arg_8.b)
            else
                arg_10 = rbp_1 - *(arg1 + 0x80)
                arg2 = zx.q(rdi.b)
                arg_8.b = arg2.b
        else if (arg2.b != rdi.b)
            int32_t r14_2 = rbp_1 - r13
            
            if (arg2.b != 6)
                void* rcx_4
                
                if (*arg1 == 0)
                    rcx_4 = &arg1[8]
                else
                    rcx_4 = *(arg1 + 8)
                
                arg2 = zx.q(arg_8.b)
                r14_2 = sub_142aa0950(sub_142b2ca60(1), rcx_4 + (sx.q(r13) << 1), r14_2, 1)
            
            int64_t r13_1 = sx.q(arg_10)
            
            if (r14_2 s> r13_1.d)
                if (arg2.b != 6)
                    void* rdx_6
                    
                    if (*arg1 == 0)
                        rdx_6 = &arg1[8]
                    else
                        rdx_6 = *(arg1 + 8)
                    
                    arg2 = zx.q(arg_8.b)
                    r13_1 = zx.q(r13_1.d + sub_142aa0780(sub_142b2ca60(1), 
                        rdx_6 + ((sx.q(*(arg1 + 0x80)) + r13_1) << 1), *(arg1 + 0x84) - r13_1.d, 1))
                
                uint32_t rax_22 = zx.d(arg2.b)
                uint32_t rdx_9 = rax_22 u>> 4
                arg_c = rax_22 & 0xf
                
                if (rdx_9 == 0)
                    rdx_9 = 2
                
                arg_8.d = rdx_9
                sub_142b3bed0(r15, rdx_9, (arg_8 u>> 0x20).d, r13_1.d, r14_2)
                result.b = 1
                return result
            
            arg2.b = 0xd
            arg_10 = 0xffffffff
            rbp_1 -= 1
            arg_8.b = 0xd
            r12_1 -= 1
        
        r13 = *(arg1 + 0x80)
        rbp_1 += 1
        r12_1 += 1
        rcx_2 = *(arg1 + 0x84) + r13
        
        if (rbp_1 s> rcx_2)
            break
        
        r14 = arg3

result.b = 0
return result
