// 函数: sub_1427d1700
// 地址: 0x1427d1700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12
r12.b = 0
int64_t var_68
__builtin_memset(&var_68, 0, 0x21)
int64_t r13 = 0
int32_t r15 = 0
void* rax = *(arg1 + 0x50)
uint64_t i_5 = zx.q(*(rax + 0x74))
int64_t* r14 = *(rax + 0x48)
int32_t i_8 = i_5.d

if (i_5.d != 0)
    void* rax_1 = arg1 + 8
    uint64_t i_7 = zx.q(i_5.d)
    int64_t var_58
    uint64_t i
    
    do
        int64_t rbp = *r14
        int64_t r15_1 = r14[1]
        int32_t rsi_1 = *(arg1 + 0x48)
        var_68 = rbp
        int64_t var_60_1 = r15_1
        int64_t arg_18 = rbp
        char arg_8
        int64_t* rax_2 = sub_1427cf220(rax_1, &arg_18, &arg_8)
        
        if (arg_8 == 0 && rax_2 != 0)
            *rax_2 = rbp
            rax_2[1].d = rsi_1
        
        uint64_t rcx_1 = zx.q(*(arg1 + 0x48))
        
        if ((*(arg1 + 0x4c) & 0x7fffffff) u> rcx_1.d)
            int64_t* rsi_2 = *(arg1 + 0x40) + rcx_1 * 0x28
            
            if (rsi_2 != 0)
                *rsi_2 = rbp
                rsi_2[1] = r15_1
                sub_1427d0650(&rsi_2[2], &var_58)
                rsi_2[4].b = r12.b
            
            *(arg1 + 0x48) += 1
        else
            sub_1427d12a0(arg1 + 0x40, &var_68)
            char var_48
            r12 = zx.q(var_48)
        
        r14 = &r14[2]
        rax_1 = arg1 + 8
        i = i_7
        i_7 -= 1
    while (i != 1)
    int64_t var_50
    r15 = var_50:4.d
    r13 = var_58
    i_5 = zx.q(i_8)

if (i_5.d != 0)
    int64_t rbx_1 = 0
    uint64_t i_6 = zx.q(i_5.d)
    uint64_t i_1
    
    do
        int64_t* rcx_5 = *(arg1 + 0x58)
        int64_t* rax_7 = *(arg1 + 0x40) + rbx_1
        *(arg1 + 0x70) = rax_7
        int64_t r8_2 = *rcx_5
        int64_t* rax_9 = (*(r8_2 + 0x18))(rcx_5, zx.q(*(*rax_7 + 8)), r8_2)
        int64_t r9_1 = *rax_9
        (*(r9_1 + 8))(rax_9, **(arg1 + 0x70), arg1, r9_1)
        rbx_1 += 0x28
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)
    
    if (i_5.d != 0)
        int64_t r14_1 = 0
        uint64_t i_2
        
        do
            int64_t* rbx_3 = *(arg1 + 0x40) + r14_1
            
            if (rbx_3[4].b == 0)
                int32_t* j = rbx_3[2]
                
                if (j != &j[zx.q(rbx_3[3].d)])
                    do
                        sub_1427d0860(arg1, *(arg1 + 0x40) + zx.q(*j) * 0x28)
                        j = &j[1]
                    while (j != rbx_3[2] + (zx.q(rbx_3[3].d) << 2))
                
                uint64_t rdx_8 = zx.q(*(arg1 + 0x68))
                
                if ((*(arg1 + 0x6c) & 0x7fffffff) u> rdx_8.d)
                    uint64_t rdx_10 = rdx_8 << 4
                    int64_t* rdx_11 = rdx_10 + *(arg1 + 0x60)
                    
                    if (rdx_10 != neg.q(*(arg1 + 0x60)))
                        *rdx_11 = *rbx_3
                        rdx_11[1] = rbx_3[1]
                    
                    *(arg1 + 0x68) += 1
                else
                    sub_1427d11b0(arg1 + 0x60, rbx_3)
                
                rbx_3[4].b = 1
            
            r14_1 += 0x28
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)

void* rbx_4 = *(arg1 + 0x50)
uint64_t rax_17 = zx.q(*(rbx_4 + 0x64))

if (rax_17.d != 0 && *(rbx_4 + 0x74) != 0)
    memset(*(rbx_4 + 0x58), 0xffffffff, zx.q((rax_17 << 2).d))
    int32_t r9_2 = *(rbx_4 + 0x60)
    int32_t i_3 = 0
    
    if (r9_2 != 1)
        int64_t rdx_12 = 0
        int64_t r8_5 = 0
        
        do
            i_3 += 1
            r8_5 += 4
            *(*(rbx_4 + 0x50) + rdx_12) = i_3
            rdx_12 += 4
        while (i_3 u< r9_2 - 1)
    
    *(*(rbx_4 + 0x50) + (zx.q(*(rbx_4 + 0x60) - 1) << 2)) = 0xffffffff
    *(rbx_4 + 0x6c) = 0
    *(rbx_4 + 0x74) = 0

int64_t* r10 = *(arg1 + 0x60)
void* i_4

for (i_4 = &r10[zx.q(*(arg1 + 0x68)) * 2]; r10 != i_4; 
        i_4 = (zx.q(*(arg1 + 0x68)) << 4) + *(arg1 + 0x60))
    void* r9_4 = *(arg1 + 0x50)
    int64_t rbx_5 = *r10
    int64_t rsi_3 = r10[1]
    uint64_t r8_6 = zx.q(*(r9_4 + 0x6c))
    int64_t rcx_20 = not.q(rbx_5 << 0x20) + rbx_5
    uint64_t r11_2 = zx.q(r8_6.d) << 4
    int64_t rcx_21 = rcx_20 ^ rcx_20 u>> 0x16
    int64_t rcx_22 = rcx_21 + not.q(rcx_21 << 0xd)
    int64_t rcx_23 = (rcx_22 u>> 8 ^ rcx_22) * 9
    int64_t rcx_24 = rcx_23 ^ rcx_23 u>> 0xf
    int64_t rcx_25 = rcx_24 + not.q(rcx_24 << 0x1b)
    *(r9_4 + 0x6c) = (r8_6 + 1).d
    uint64_t rdx_17 = (zx.q((rcx_25 u>> 0x1f).d) ^ zx.q(rcx_25.d)) & zx.q(*(r9_4 + 0x64) - 1)
    *(*(r9_4 + 0x50) + (r8_6 << 2)) = *(*(r9_4 + 0x58) + (rdx_17 << 2))
    *(*(r9_4 + 0x58) + (rdx_17 << 2)) = r8_6.d
    *(r9_4 + 0x74) += 1
    *(r9_4 + 0x70) += 1
    int64_t* r11_3 = r11_2 + *(r9_4 + 0x48)
    
    if (r11_2 != neg.q(*(r9_4 + 0x48)))
        *r11_3 = rbx_5
        r11_3[1] = rsi_3
    
    r10 = &r10[2]

if ((r15 & 0x7fffffff) == 0 || r15 s< 0 || r13 == 0)
    return i_4

class physx::PxAllocatorCallback* rax_42 = physx::shdfnd::getAllocator()
int64_t r8_7 = *rax_42
return (*(r8_7 + 0x10))(rax_42, r13, r8_7)
