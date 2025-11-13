// 函数: sub_142b3f5b0
// 地址: 0x142b3f5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
uint64_t var_18 = rdi
uint64_t r12
uint64_t var_20 = r12
int64_t var_68 = -2
void var_60
void* result = sub_140dda8f0(&var_60)

while (true)
    int32_t r15_1 = -1
    r12.b = 0xd
    int32_t r13_1 = *(arg1 + 0x80)
    int32_t var_50
    int32_t rbx_2 = var_50 + r13_1
    int32_t rcx_2 = *(arg1 + 0x84) + r13_1
    
    if (rbx_2 s> rcx_2)
        break
    
    int64_t r14_1 = sx.q(rbx_2)
    int32_t var_78_1
    
    while (true)
        if (rbx_2 s>= rcx_2)
            rdi.b = 0xff
        else
            result = sub_142b3f8c0(arg1)
            rdi = zx.q(*(result + r14_1))
        
        if (r12.b == 0xd)
            result = sub_142b3be80(&var_60, 2, 0)
            
            if (result.b == 0)
            label_142b3f6f1:
                
                if (rdi.b != 0 && rdi.b != 0xd && rdi.b != 0xff)
                    uint32_t rax_3 = zx.d(rdi.b)
                    uint32_t rdx_2 = rax_3 u>> 4
                    int32_t arg_c = rax_3 & 0xf
                    
                    if (rdx_2 == 0)
                        rdx_2 = 2
                    
                    result = sub_142b3be80(&var_60, rdx_2, (rdx_2.q u>> 0x20).d)
                    
                    if (result.b != 0)
                        r15_1 = rbx_2 - *(arg1 + 0x80)
                        r12 = zx.q(rdi.b)
            else
                int32_t rcx_7 = *(arg1 + 0x80)
                
                if (rbx_2 s<= rcx_7)
                    goto label_142b3f6f1
                
                result = zx.q(rbx_2 - rcx_7)
                
                if (result.d s<= var_50)
                    goto label_142b3f6f1
                
                result = sub_142b3f8c0(arg1)
                char rcx_9 = *(result + r14_1 - 1)
                
                if (rcx_9 != 0 && rcx_9 != 6)
                    goto label_142b3f6f1
                
                if (rdi.b != 0)
                    if (rdi.b == 6)
                        goto label_142b3f6f1
                    
                    int32_t rdi_3 = rbx_2 - 1
                    int32_t r14_2 = *(arg1 + 0x80)
                    
                    if (rdi_3 s>= r14_2)
                        int64_t rbp_3 = sx.q(rdi_3)
                        
                        do
                            char rcx_17 = *(sub_142b3f8c0(arg1) + rbp_3)
                            
                            if (rcx_17 != 0 && rcx_17 != 6)
                                break
                            
                            rdi_3 -= 1
                            rbp_3 -= 1
                        while (rdi_3 s>= r14_2)
                    
                    var_78_1 = rbx_2 - r14_2
                    sub_142b3bed0(&var_60, 2, 0, rdi_3 - r14_2 + 1, var_78_1)
                    break
        else if (r12.b != rdi.b)
            int32_t rbp_2 = rbx_2 - r13_1
            
            if (r12.b != 6)
                void* rcx_4
                
                if (*arg1 == 0)
                    rcx_4 = &arg1[8]
                else
                    rcx_4 = *(arg1 + 8)
                
                result = sub_142aa0950(sub_142b2ca60(1), rcx_4 + (sx.q(r13_1) << 1), rbp_2, 1)
                rbp_2 = result.d
            
            if (rbp_2 s> r15_1)
                if (r12.b != 6)
                    void* rdx_3
                    
                    if (*arg1 == 0)
                        rdx_3 = &arg1[8]
                    else
                        rdx_3 = *(arg1 + 8)
                    
                    r15_1 += sub_142aa0780(sub_142b2ca60(1), 
                        rdx_3 + ((sx.q(*(arg1 + 0x80)) + sx.q(r15_1)) << 1), 
                        *(arg1 + 0x84) - r15_1, 1)
                
                uint32_t rax_8 = zx.d(r12.b)
                uint32_t rdx_6 = rax_8 u>> 4
                int32_t arg_24 = rax_8 & 0xf
                
                if (rdx_6 == 0)
                    rdx_6 = 2
                
                var_78_1 = rbp_2
                sub_142b3bed0(&var_60, rdx_6, (rdx_6.q u>> 0x20).d, r15_1, var_78_1)
                break
            
            r15_1 = -1
            r12.b = 0xd
            rbx_2 -= 1
            r14_1 -= 1
        
        rbx_2 += 1
        r14_1 += 1
        r13_1 = *(arg1 + 0x80)
        rcx_2 = *(arg1 + 0x84) + r13_1
        
        if (rbx_2 s> rcx_2)
            return result
    
    int32_t var_58
    int32_t var_54
    result = (*(*arg2 + 8))(arg2, zx.q(var_58), zx.q(var_54), zx.q(var_50), var_78_1)

return result
