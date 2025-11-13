// 函数: sub_141cc1b90
// 地址: 0x141cc1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2[1].d)
char rbp = *arg1
int32_t rax = (rbx + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405daba0(arg2)

*(rbx + *arg2) = rbp
uint64_t rax_2 = zx.q(*arg1)

if (rax_2.d s> 0)
    if (rax_2.d s<= 3)
        int64_t rbx_3 = sx.q(arg2[1].d)
        char rbp_2 = arg1[0x20]
        int32_t rax_6 = (rbx_3 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_1405daba0(arg2)
        
        int64_t r15_1 = 0
        *(rbx_3 + *arg2) = rbp_2
        int64_t* r12_1 = *(arg1 + 0x18)
        rax_2 = &r12_1[sx.q(*(arg1 + 0x20))]
        uint64_t rcx_6 = sx.q(*(arg1 + 0x20)) << 3 u>> 3
        
        if (r12_1 u> rax_2)
            rcx_6 = 0
        
        if (rcx_6 != 0)
            do
                int64_t* rcx_7 = *arg3
                int64_t rbp_3 = sx.q(arg3[1].d)
                int64_t* rdi_2 = rcx_7
                int64_t i = *r12_1
                void* rax_9 = &rcx_7[rbp_3]
                int32_t rdi_4
                
                if (rcx_7 != rax_9)
                    while (*rdi_2 != i)
                        rdi_2 = &rdi_2[1]
                        
                        if (rdi_2 == rax_9)
                            goto label_141cc1cec
                    
                    rdi_4 = ((rdi_2 - rcx_7) s>> 3).d
                
                if (rcx_7 == rax_9 || rdi_4 == 0xffffffff)
                label_141cc1cec:
                    int32_t rax_10 = (rbp_3 + 1).d
                    arg3[1].d = rax_10
                    
                    if (rax_10 s> *(arg3 + 0xc))
                        sub_1405a4d70(arg3)
                    
                    rdi_4 = rbp_3.d
                    (*arg3)[rbp_3] = i
                
                int64_t rbx_4 = sx.q(arg2[1].d)
                int32_t rax_12 = (rbx_4 + 1).d
                arg2[1].d = rax_12
                
                if (rax_12 s> *(arg2 + 0xc))
                    sub_1405daba0(arg2)
                
                rax_2 = *arg2
                r12_1 = &r12_1[1]
                r15_1 += 1
                *(rbx_4 + rax_2) = rdi_4.b
            while (r15_1 != rcx_6)
    else if (rax_2.d s<= 6)
        int64_t rbx_1 = sx.q(arg2[1].d)
        char rbp_1 = arg1[0x10]
        int32_t rax_3 = (rbx_1 + 1).d
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_1405daba0(arg2)
        
        *(rbx_1 + *arg2) = rbp_1
        rax_2 = sx.q(*(arg1 + 0x10))
        int64_t rbx_2 = *(arg1 + 8)
        int64_t rdi_1 = rbx_2 + rax_2 * 0x28
        
        if (rbx_2 != rdi_1)
            int64_t rax_5
            
            do
                rax_5 = sub_141cc1b90(rbx_2, arg2, arg3)
                rbx_2 += 0x28
            while (rbx_2 != rdi_1)
            
            return rax_5

return rax_2
