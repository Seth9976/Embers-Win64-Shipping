// 函数: sub_140a1d810
// 地址: 0x140a1d810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2[1].d)
int64_t r13 = *arg2

if (rbp.d != 0)
    uint64_t rdx = *arg1
    int64_t rax_3
    
    if (r13 u< rdx + (sx.q(arg1[1].d) << 1))
        rax_3 = rbp << 1
    
    if (r13 u>= rdx + (sx.q(arg1[1].d) << 1) || rdx u>= rax_3 + r13)
        int32_t rax_9 = (rbp + 1).d
        arg1[1].d = 0
        int32_t rdx_4 = 0
        
        if (*(arg1 + 0xc) != rax_9)
            sub_1405947f0(arg1, rax_9)
            rdx_4 = arg1[1].d
        
        int32_t rax_11 = (rbp + 1).d + rdx_4
        arg1[1].d = rax_11
        
        if (rax_11 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        uint64_t rbx_3 = *arg1
        memcpy(rbx_3, r13, (rbp << 1).d)
        *(rbx_3 + (rbp << 1)) = 0
    else
        uint64_t r14_1 = 0
        uint64_t var_38 = 0
        int32_t r15_1 = 0
        int64_t var_30_1 = 0
        int32_t r12_1 = 0
        
        if (rbp.d != 0)
            int32_t rdx_1 = (rbp + 1).d
            
            if (rdx_1 s> 0)
                sub_1405947f0(&var_38, rdx_1)
                r13 = *arg2
                r12_1 = var_30_1:4.d
                r15_1 = var_30_1.d
                r14_1 = var_38
            
            int64_t rbx_1 = sx.q(r15_1)
            int32_t rax_5
            rax_5.b = r15_1 == 0
            r15_1 = rbx_1.d + rax_5 + rbp.d
            var_30_1.d = r15_1
            
            if (r15_1 s> r12_1)
                sub_140594770(&var_38)
                r12_1 = var_30_1:4.d
                r15_1 = var_30_1.d
                r14_1 = var_38
            
            int64_t rcx_3
            rcx_3.b = rbx_1.d != 0
            int64_t rbx_2 = r14_1 + ((rbx_1 - rcx_3) << 1)
            UnDecorator::getReferenceType(rbx_2, r13, rax_3.d)
            *(rbx_2 + (rbp << 1)) = 0
        
        if (arg1 != &var_38)
            uint64_t rcx_5 = *arg1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            *arg1 = r14_1
            arg1[1].d = r15_1
            *(arg1 + 0xc) = r12_1
        else if (r14_1 != 0)
            sub_140a74f90(r14_1)
else
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != 0)
        sub_1405947f0(arg1, 0)

return arg1
