// 函数: sub_1420c1e10
// 地址: 0x1420c1e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_140638c50(arg3, 0)

if (arg1[1].d s<= 0)
    return 

int64_t r14_1 = 0

do
    void* rbx_1 = *(r14_1 + *arg1)
    
    if (rbx_1 != 0)
        void* j = *(rbx_1 + 0xa0)
        
        if (j != 0)
            if (arg2 == 0)
            label_1420c1e98:
                uint64_t rdx_1 = *arg3
                int64_t r8 = sx.q(arg3[1].d)
                int64_t* rax_1 = rdx_1
                int64_t rcx_2 = rdx_1 + (r8 << 3)
                
                if (rdx_1 != rcx_2)
                    while (*rax_1 != j)
                        rax_1 = &rax_1[1]
                        
                        if (rax_1 == rcx_2)
                            goto label_1420c1ecc
                
                if (rdx_1 == rcx_2 || ((rax_1 - rdx_1) s>> 3).d == 0xffffffff)
                label_1420c1ecc:
                    int32_t rax_3 = (r8 + 1).d
                    arg3[1].d = rax_3
                    
                    if (rax_3 s> *(arg3 + 0xc))
                        sub_1405a4d70(arg3)
                    
                    *(*arg3 + (r8 << 3)) = j
            else
                uint64_t rax = *(j + 0x10)
                int64_t rcx_1 = sx.q(*(arg2 + 0x38))
                
                if (rcx_1.d s<= *(rax + 0x38) && *(*(rax + 0x30) + (rcx_1 << 3)) == arg2 + 0x30)
                    goto label_1420c1e98
    
    i += 1
    r14_1 += 8
while (i s< arg1[1].d)
