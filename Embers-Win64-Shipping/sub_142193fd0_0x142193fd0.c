// 函数: sub_142193fd0
// 地址: 0x142193fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
void* r8

if (arg1[0xca] != 0)
    r8.b = 1
    result, r8, arg2 = sub_1421a5650(arg1, 0, r8.b, arg2)

uint64_t rbp
rbp.b = 1
char r12 = 1

if (*(arg1 + 0x43f) != 0)
    result.b = 0
    return result

int64_t rbx
rbx.b = 0
int32_t r13 = 0

if (arg1[0xc1].d s<= 0)
label_1421941af:
    void* rax_14 = arg1[0x81]
    
    if (rax_14 != 0 && (*(rax_14 + 0xb1) & 4) != 0)
        r8, arg2 = sub_14218b3c0(arg1, arg2)
else
    int32_t rax = arg1[0xc1].d
    int64_t r15_1 = 0
    
    do
        int32_t rdx_1 = rax
        int64_t* r14_1 = *(arg1[0xc0] + (r15_1 << 3))
        rax = rdx_1
        
        if (r14_1 != 0)
            r8 = r14_1[5]
            
            if (r8 != 0 && (r14_1[0x1c].b & 1) != 0)
                char rcx = 0
                
                if (*(r14_1 + 0x194) != 0)
                    rcx = r12
                
                r12 = rcx
                
                if ((*(r8 + 0x2c) & 1) == 0)
                    int64_t rcx_6 = *(r8 + 0x20)
                    rax = rdx_1
                    
                    if (rcx_6 != 0)
                        r12 = rcx
                        
                        if (*(rcx_6 + 0x37) s< 0)
                            rbp.b = 0
                else if (*(*(r8 + 0x30) + 0xe4) s> 0)
                label_1421940d3:
                    
                    if ((arg1[0x86].b & 0x12) != 0x12)
                        char rax_9
                        rax_9, r8 = (*(*r14_1 + 0xd8))(r14_1)
                        
                        if (rax_9 == 0)
                            rbp.b = 0
                            rax = arg1[0xc1].d
                        else if ((r14_1[0x1c].b & 4) == 0)
                            rax = arg1[0xc1].d
                        else
                            int32_t i = 0
                            rbx = 0
                            
                            if (arg1[0xc1].d s> 0)
                                do
                                    if (rbx != r15_1)
                                        int64_t* rcx_4 = *(arg1[0xc0] + (rbx << 3))
                                        
                                        if (rcx_4 != 0)
                                            (*(*rcx_4 + 0x170))(rcx_4, r14_1)
                                    
                                    i += 1
                                    rbx += 1
                                while (i s< arg1[0xc1].d)
                            
                            (**r14_1)(r14_1, 1)
                            rbx.b = 1
                            *(arg1[0xc0] + (r15_1 << 3)) = 0
                            rax = arg1[0xc1].d
                    else
                    label_1421940db:
                        char rcx_2 = 0
                        
                        if (r14_1[0x23].d == 0)
                            rcx_2 = rbp.b
                        
                        rax = arg1[0xc1].d
                        rbp = zx.q(rcx_2)
                else
                    char rax_5
                    rax_5, r8 = (*(*r14_1 + 0x1f0))(r14_1)
                    
                    if (rax_5 != 0)
                        goto label_1421940d3
                    
                    if ((arg1[0x86].b & 0x10) != 0)
                        goto label_1421940db
                    
                    rbp.b = 0
                    rax = arg1[0xc1].d
        
        r13 += 1
        r15_1 += 1
    while (r13 s< rax)
    
    if (r12 != 0)
        goto label_1421941af

if (rbx.b != 0)
    if (arg1[0xca] != 0)
        r8.b = 1
        sub_1421a5650(arg1, 1, r8.b, arg2)
    
    int64_t rcx_9 = arg1[0x7d]
    
    if (rcx_9 != 0)
        sub_142208350(rcx_9)

return zx.q(rbp.b)
