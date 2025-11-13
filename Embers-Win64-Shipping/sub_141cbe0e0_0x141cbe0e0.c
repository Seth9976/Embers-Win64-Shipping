// 函数: sub_141cbe0e0
// 地址: 0x141cbe0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int32_t rdi = 0
__builtin_memset(&arg1[1], 0, 0x30)
arg1[7] = *arg4
void* rax_1 = arg4[1]
arg1[8] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[9].w = 0xffff
int64_t r15 = sx.q(arg1[2].d)
int32_t rax_2 = (r15 + 1).d
arg1[2].d = rax_2

if (rax_2 s> *(arg1 + 0x14))
    sub_1405a4d70(&arg1[1])

*(arg1[1] + (r15 << 3)) = arg3
int64_t* r15_1 = arg1[7]

if (r15_1 != 0)
    int64_t rbx_1 = *r15_1
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(rbx_1.d, 0) == 0
    rcx_1.b |= (rbx_1 u>> 0x20).d != 0
    
    if (rcx_1.b != 0)
        uint64_t var_48 = 0
        int32_t var_40
        __builtin_memset(&var_40, 0, 0x18)
        uint64_t r14_1 = 0
        
        if (&var_48 != &r15_1[1])
            int32_t r12_1 = r15_1[2].d
            uint64_t var_38
            
            if (r12_1 != 0)
                sub_1405c5570(&var_48, r12_1)
                int32_t r12_2 = r15_1[2].d
                r14_1 = var_38
                int32_t rbx_3 = var_40
                
                if (r12_2 != 0)
                    int32_t rdx_2 = rbx_3 + r12_2
                    int32_t var_3c
                    
                    if (rdx_2 s> var_3c)
                        sub_1405c5570(&var_48, rdx_2)
                        r14_1 = var_38
                        rbx_3 = var_40
                    
                    memcpy(var_48 + (sx.q(rbx_3) << 3), r15_1[1], r12_2 << 3)
                    int32_t var_40_1 = rbx_3 + r12_2
            
            int32_t rdx_4 = r15_1[4].d
            int64_t var_30
            var_30.d = 0
            
            if (0 != rdx_4)
                sub_1405c5570(&var_38, rdx_4)
                rdi = var_30.d
                r14_1 = var_38
            
            int64_t rbx_5 = sx.q(r15_1[4].d)
            
            if (rbx_5.d != 0)
                int32_t rdx_5 = rdi + rbx_5.d
                
                if (rdx_5 s> var_30:4.d)
                    sub_1405c5570(&var_38, rdx_5)
                    rdi = var_30.d
                    r14_1 = var_38
                
                memcpy(r14_1 + (sx.q(rdi) << 3), r15_1[3], (rbx_5 << 3).d)
                rdi += rbx_5.d
        
        int64_t r15_3 = sx.q(arg1[4].d)
        int32_t rax_8 = (r15_3 + 1).d
        arg1[4].d = rax_8
        
        if (rax_8 s> *(arg1 + 0x24))
            sub_1405a4d70(&arg1[3])
        
        *(arg1[3] + (r15_3 << 3)) = *var_48
        
        if (rdi != 0)
            int32_t rax_10 = arg1[4].d
            int32_t rdx_9 = rax_10 + rdi
            
            if (rdx_9 s> *(arg1 + 0x24))
                sub_1405c5570(&arg1[3], rdx_9)
                rax_10 = arg1[4].d
            
            memcpy(arg1[3] + (sx.q(rax_10) << 3), r14_1, rdi << 3)
            arg1[4].d += rdi
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        sub_140a74f90(var_48)

int64_t* rbx_6 = arg4[1]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp1_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

return arg1
