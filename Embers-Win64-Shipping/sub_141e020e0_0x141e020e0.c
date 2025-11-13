// 函数: sub_141e020e0
// 地址: 0x141e020e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
*arg2 = 0
arg2[1] = 0
int64_t* rcx = *(arg1 + 0xa8)

if (rcx == 0)
    return arg2

int64_t* rax_1 = (*(*rcx + 0x88))(rcx)
int64_t rbx_1 = *arg3
int64_t* rdx_5

if (rax_1[1].d == *(rax_1 + 0x34))
label_141e0217e:
    rdx_5 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
    void* r8 = &rax_1[7]
    void* rcx_3 = *(r8 + 8)
    
    if (rcx_3 != 0)
        r8 = rcx_3
    
    int32_t rax_5 = *(r8 + (((sx.q(rax_1[9].d) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_141e0217e_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_5) << 5) + *rax_1
            
            if (*rdx_5 == rbx_1)
                break
            
            rax_5 = rdx_5[3].d
            
            if (rax_5 == 0xffffffff)
                goto label_141e0217e_2
        
        if (rax_5 == 0xffffffff)
        label_141e0217e_2:
            rdx_5 = nullptr

void* rax_6 = &rdx_5[1]

if (rdx_5 == 0)
    rax_6 = nullptr

if (rax_6 == 0)
    return arg2

int32_t* r14_1 = *rax_6
uint64_t r12_1 = sx.q(*(rax_6 + 8)) << 2 u>> 2

if (r14_1 u> &r14_1[sx.q(*(rax_6 + 8))])
    r12_1 = 0

if (r12_1 == 0)
    return arg2

do
    int32_t rbp_1 = *r14_1
    void* rax_9 = sub_142468100()
    int64_t* rcx_4 = *(arg1 + 0xa8)
    
    if (rcx_4 != 0)
        int64_t rdx_6 = *rcx_4
        int64_t* rax_10 = (*(rdx_6 + 0x20))(rcx_4, rdx_6)
        int32_t r8_2 = rax_10[1].d
        int32_t rdx_8 = r8_2 - rbp_1
        
        if (rdx_8 s> 0 && rdx_8 - 1 s< r8_2)
            void* rdx_9 = *(*rax_10 + (sx.q(rdx_8) << 3) - 8)
            
            if (rax_9 != 0)
                void* rax_12 = *(rdx_9 + 0x78)
                int64_t rcx_7 = sx.q(*(rax_9 + 0x38))
                
                if (rcx_7.d s<= *(rax_12 + 0x38)
                        && *(*(rax_12 + 0x30) + (rcx_7 << 3)) == rax_9 + 0x30)
                    int64_t rbx_3 = sx.q(*(rdx_9 + 0x4c))
                    int64_t rbx_4 = rbx_3 + *(arg1 + 0xa0)
                    
                    if (rbx_3 != neg.q(*(arg1 + 0xa0)))
                        int64_t rbp_2 = sx.q(arg2[1].d)
                        int32_t rax_14 = (rbp_2 + 1).d
                        arg2[1].d = rax_14
                        
                        if (rax_14 s> *(arg2 + 0xc))
                            sub_1405a4d70(arg2)
                        
                        *(*arg2 + (rbp_2 << 3)) = rbx_4
    
    r14_1 = &r14_1[1]
    rsi += 1
while (rsi != r12_1)

return arg2
