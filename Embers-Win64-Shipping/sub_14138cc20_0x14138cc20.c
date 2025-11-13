// 函数: sub_14138cc20
// 地址: 0x14138cc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_58 = arg2
int64_t* rdi = arg3
int64_t* var_50 = arg3
uint64_t rbx = arg2
int64_t rsi = arg1
var_58.o = var_58.o
sub_14137da20(rdi[1].d, &var_58, 0)
int64_t* rcx_1 = *rdi
int64_t rdx_1 = 0
int64_t* var_70 = rcx_1
int64_t var_68 = 0
uint64_t result = &rcx_1[rdi[1]]
uint64_t r8_1 = sx.q(rdi[1].d) << 3 u>> 3

if (rcx_1 u> result)
    r8_1 = 0

var_58 = r8_1

if (r8_1 != 0)
    do
        void* r12_1 = *rcx_1
        int32_t i = 0
        
        if (*(r12_1 + 0x50) s> 0)
            uint64_t r10_1 = arg2
            int64_t r14_1 = 0
            int64_t r15_1 = 0
            uint64_t* rsi_1 = r10_1 + 0x1ba8
            
            do
                int32_t rcx_2 = *(rsi_1 + 0x34)
                void* r9_1 = *(r12_1 + 0x48) + r14_1
                int64_t r13_1 = *(r12_1 + 0x38)
                void* var_78_1 = r9_1
                int64_t rbx_1
                void* rdi_1
                
                if (rcx_2 == 0)
                    rbx_1 = zx.q(rsi_1[1].d)
                    int32_t rax_2 = (rbx_1 + 1).d
                    rsi_1[1].d = rax_2
                    
                    if (rax_2 s> *(rsi_1 + 0xc))
                        sub_1405a4d70(rsi_1)
                    
                    rdi_1 = &rsi_1[2]
                    sub_1405b2ba0(rdi_1, 0)
                    r9_1 = var_78_1
                    r10_1 = arg2
                else
                    rbx_1 = sx.q(rsi_1[6].d)
                    uint64_t rdx_2 = *rsi_1
                    int64_t r8_2 = sx.q(*(rdx_2 + (rbx_1 << 3) + 4))
                    rsi_1[6].d = r8_2.d
                    *(rsi_1 + 0x34) = rcx_2 - 1
                    
                    if (rcx_2 != 1)
                        *(rdx_2 + (r8_2 << 3)) = 0xffffffff
                    
                    rdi_1 = &rsi_1[2]
                
                void* rax_3 = *(rdi_1 + 0x10)
                
                if (rax_3 != 0)
                    rdi_1 = rax_3
                
                int32_t rax_4 = rbx_1.d
                
                if (rbx_1.d s< 0)
                    rax_4 = (rbx_1 + 0x1f).d
                
                void* r8_3 = rdi_1 + (sx.q(rax_4 s>> 5) << 2)
                *r8_3 |= 1 << (rbx_1.b & 0x1f)
                result = *rsi_1
                *(result + (sx.q(rbx_1.d) << 3)) = r9_1
                *(r9_1 + 0xa8) = rbx_1.d
                *(r13_1 + r15_1 + 4) = rbx_1.d
                
                if ((*(r9_1 + 0x9c) & 0x100000) != 0)
                    uint64_t* rbx_2 = r10_1 + 0x1be0
                    int32_t rcx_8 = *(rbx_2 + 0x34)
                    int64_t rdi_2
                    
                    if (rcx_8 == 0)
                        rdi_2 = zx.q(rbx_2[1].d)
                        int32_t rax_8 = (rdi_2 + 1).d
                        rbx_2[1].d = rax_8
                        
                        if (rax_8 s> *(rbx_2 + 0xc))
                            sub_1405a4d70(rbx_2)
                        
                        sub_1405b2ba0(&rbx_2[2], 0)
                        r9_1 = var_78_1
                        r10_1 = arg2
                    else
                        rdi_2 = sx.q(rbx_2[6].d)
                        uint64_t rdx_5 = *rbx_2
                        int64_t r8_4 = sx.q(*(rdx_5 + (rdi_2 << 3) + 4))
                        rbx_2[6].d = r8_4.d
                        *(rbx_2 + 0x34) = rcx_8 - 1
                        
                        if (rcx_8 != 1)
                            *(rdx_5 + (r8_4 << 3)) = 0xffffffff
                    
                    void* rax_9 = rbx_2[4]
                    void* rcx_11 = &rbx_2[2]
                    
                    if (rax_9 != 0)
                        rcx_11 = rax_9
                    
                    int32_t rax_10 = rdi_2.d
                    
                    if (rdi_2.d s< 0)
                        rax_10 = (rdi_2 + 0x1f).d
                    
                    void* r8_5 = rcx_11 + (sx.q(rax_10 s>> 5) << 2)
                    *r8_5 |= 1 << (rdi_2.b & 0x1f)
                    *(r9_1 + 0xac) = rdi_2.d
                    result = *rbx_2
                    *(result + (sx.q(rdi_2.d) << 3)) = 1
                
                i += 1
                r15_1 += 0x14
                r14_1 += 0xb0
            while (i s< *(r12_1 + 0x50))
            
            rcx_1 = var_70
            rdx_1 = var_68
            r8_1 = var_58
        
        rcx_1 = &rcx_1[1]
        rdx_1 += 1
        var_70 = rcx_1
        var_68 = rdx_1
    while (rdx_1 != r8_1)
    
    rbx = arg2
    rdi = arg3
    rsi = arg1

if (arg4 == 0)
    return result

return sub_141396540(rsi, rbx, rdi)
