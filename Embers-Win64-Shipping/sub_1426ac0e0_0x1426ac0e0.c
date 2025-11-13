// 函数: sub_1426ac0e0
// 地址: 0x1426ac0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x64) == 0)
    return 

void* i_1 = sub_1426b06a0(arg2, arg1[9])

if (i_1 == 0)
    return 

int64_t r9_1 = sx.q(*(arg2 + 0x118))

if (r9_1.d == 0)
    return 

uint64_t rdx_1 = zx.q(*(arg2 + 0x260))
int64_t* r10_1 = *(arg2 + 0x110)
int32_t rbx_1

if (r10_1[rdx_1 * 0xb + 1] != i_1)
    for (void* i = *(i_1 + 0x48); i != 0; i = *(i + 0x48))
        i_1 = i
    
    rbx_1 = 0
    
    if (r9_1.d s> 0)
        int64_t rdx_2 = 0
        int64_t* rcx_2 = r10_1
        
        while (*rcx_2 != i_1)
            rbx_1 += 1
            rdx_2 += 1
            rcx_2 = &rcx_2[0xb]
            
            if (rdx_2 s>= r9_1)
                return 
        
        goto label_1426ac18a
    
    return 

rbx_1 = rdx_1.d
label_1426ac18a:

if (rbx_1 == 0xffffffff)
    return 

int64_t rbp_2

if (rbx_1 s< 0 || rbx_1 s>= r9_1.d)
    rbp_2 = 0
else
    rbp_2 = zx.q(*(arg1 + 0x52)) + r10_1[sx.q(rbx_1) * 0xb + 6]

char rax_1 = sub_1426b6270(arg2, arg1, zx.d(*(arg1 + 0x59)))
i_1 = sub_1426c3430(arg1, arg2, rbp_2)
char rcx_6

if ((*(arg2 + 0x263) & 4) != 0)
    rcx_6 = 1
else if (*(arg2 + 0x1a0) != 0)
    if ((*(arg2 + 0x1a8) & 2) == 0)
        rcx_6 = 1
    else
        rcx_6 = 0
else if ((*(arg2 + 0x1a8) & 1) == 0 || (*(arg2 + 0x1a8) & 2) != 0)
    rcx_6 = 0
else
    rcx_6 = 1

if (rax_1 != i_1.b)
    uint32_t r14_2 = zx.d(*(arg1 + 0x64))
    
    if (r14_2 != 0)
        void* r12_1 = arg1[9]
        i_1 = sub_1426b06a0(arg2, r12_1)
        
        if (i_1 != 0)
            int64_t r8_3 = sx.q(*(arg2 + 0x118))
            
            if (r8_3.d != 0)
                uint64_t r9_2 = zx.q(*(arg2 + 0x260))
                int64_t* rdx_6 = *(arg2 + 0x110)
                
                if (rdx_6[r9_2 * 0xb + 1] == i_1)
                    rbx_1 = r9_2.d
                label_1426ac2ab:
                    
                    if (rbx_1 != 0xffffffff)
                        uint32_t rbp_3 = zx.d(*(arg1 + 0x59))
                        
                        if (r14_2 == 3)
                            r14_2 = zx.d(sub_1426b6270(arg2, arg1, rbp_3)) + 1
                        
                        char var_28_1 = 1
                        int32_t r15_1
                        r15_1.b = r14_2 != 2
                        sub_1426bcb00(arg2, r12_1, rbx_1, arg1, rbp_3, r15_1 + 1)
                else
                    for (void* i_2 = *(i_1 + 0x48); i_2 != 0; i_2 = *(i_2 + 0x48))
                        i_1 = i_2
                    
                    rbx_1 = 0
                    
                    if (r8_3.d s> 0)
                        int64_t rcx_9 = 0
                        
                        while (*rdx_6 != i_1)
                            rbx_1 += 1
                            rcx_9 += 1
                            rdx_6 = &rdx_6[0xb]
                            
                            if (rcx_9 s>= r8_3)
                                return 
                        
                        goto label_1426ac2ab
else if (rax_1 != 0)
    if (i_1.b != 0 && (arg3 == 1 || rcx_6 != 0))
        char var_28_2 = 1
        sub_1426bcb00(arg2, arg1[9], rbx_1, arg1, zx.d(*(arg1 + 0x59)), 2)
else if (i_1.b == 0)
    void* rdx_9 = arg1[9]
    
    if (rdx_9 != 0)
        i_1 = zx.q(*(arg1 + 0x59))
        
        if (i_1.d s< *(rdx_9 + 0x60))
            sub_1426c15e0(arg2, *(*(rdx_9 + 0x58) + i_1 * 0x30), 1, arg4)
