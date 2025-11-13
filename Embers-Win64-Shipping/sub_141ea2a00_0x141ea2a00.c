// 函数: sub_141ea2a00
// 地址: 0x141ea2a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = 0
int64_t arg_8 = 0
void* r14 = arg1

if (arg1 != 0)
    void* rax_6
    int64_t rax_7
    void* rdx_6
    
    do
        void* rax_1 = *(r14 + 0x278)
        
        if (rax_1 != 0)
            int64_t* rsi_1 = *(rax_1 + 0x38)
            int64_t r15_1 = 0
            uint64_t r12_2 = sx.q(*(rax_1 + 0x40)) << 3 u>> 3
            
            if (rsi_1 u> &rsi_1[sx.q(*(rax_1 + 0x40))])
                r12_2 = 0
            
            if (r12_2 != 0)
                do
                    void* rbp_1 = *rsi_1
                    
                    if (r14 == arg1)
                        int64_t rdi_1 = sx.q(arg2[1].d)
                        int32_t rax_4 = (rdi_1 + 1).d
                        arg2[1].d = rax_4
                        
                        if (rax_4 s> *(arg2 + 0xc))
                            sub_1405a4d70(arg2)
                        
                        *(*arg2 + (rdi_1 << 3)) = rbp_1
                    
                    int64_t rax_5 = sub_1422e4590(rbp_1, arg1)
                    int64_t rdi_2 = sx.q(arg2[1].d)
                    int32_t rcx_2 = (rdi_2 + 1).d
                    arg2[1].d = rcx_2
                    
                    if (rcx_2 s> *(arg2 + 0xc))
                        sub_1405a4d70(arg2)
                    
                    rsi_1 = &rsi_1[1]
                    r15_1 += 1
                    *(*arg2 + (rdi_2 << 3)) = rax_5
                while (r15_1 != r12_2)
        
        r14 = *(r14 + 0x40)
        
        if (r14 == 0)
            break
        
        rax_6 = sub_14247bf70()
        rdx_6 = *(r14 + 0x10)
        rax_7 = sx.q(*(rax_6 + 0x38))
        
        if (rax_7.d s> *(rdx_6 + 0x38))
            break
    while (*(*(rdx_6 + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
    rdx = 0

int64_t* rdi_3 = *(arg1 + 0x248)
void* result = &rdi_3[sx.q(*(arg1 + 0x250))]
uint64_t r14_2 = sx.q(*(arg1 + 0x250)) << 3 u>> 3

if (rdi_3 u> result)
    r14_2 = 0

if (r14_2 != 0)
    do
        int64_t rbp_3 = *rdi_3
        
        if (rbp_3 != 0)
            int64_t rsi_2 = sx.q(arg2[1].d)
            int32_t rax_10 = (rsi_2 + 1).d
            arg2[1].d = rax_10
            
            if (rax_10 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
                rdx = arg_8
            
            result = *arg2
            *(result + (rsi_2 << 3)) = rbp_3
        
        rdx += 1
        rdi_3 = &rdi_3[1]
        arg_8 = rdx
    while (rdx != r14_2)

void* i = *(arg1 + 0x268)

for (void* r14_5 = (sx.q(*(arg1 + 0x270)) << 4) + i; i != r14_5; i += 0x10)
    int64_t rbp_4 = *(i + 8)
    
    if (rbp_4 != 0)
        int64_t rsi_3 = sx.q(arg2[1].d)
        int32_t rax_11 = (rsi_3 + 1).d
        arg2[1].d = rax_11
        
        if (rax_11 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        result = *arg2
        *(result + (rsi_3 << 3)) = rbp_4

return result
