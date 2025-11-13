// 函数: sub_141ca3a70
// 地址: 0x141ca3a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = 0
void* r12 = *(arg1 + 0x70)
int64_t r13 = sx.q(*(arg1 + 0x78)) << 3
int64_t* i = r12 + r13
uint64_t r13_1 = r13 u>> 3

if (r12 u> i)
    r13_1 = 0

if (r13_1 != 0)
    do
        void* rdi_1 = *r12
        i.b = 0
        
        if (arg3 == 0x1f)
        label_141ca3bca:
            int64_t rsi_1 = sx.q(arg2[1].d)
            int32_t rax_1 = (rsi_1 + 1).d
            arg2[1].d = rax_1
            
            if (rax_1 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            i = *arg2
            i[rsi_1] = rdi_1
        else
            if ((arg3.b & 2) != 0)
                int64_t* rcx = *(rdi_1 + 0x20)
                void* rdx = &rcx[sx.q(*(rdi_1 + 0x28))]
                
                if (rcx == rdx)
                label_141ca3af8:
                    i.b = 0
                else
                    while (*rcx != arg1)
                        rcx = &rcx[1]
                        
                        if (rcx == rdx)
                            goto label_141ca3af8
                    
                    i.b = 1
            
            if ((arg3.b & 1) != 0 && i.b == 0)
                int64_t* rcx_1 = *(rdi_1 + 0x30)
                void* rdx_1 = &rcx_1[sx.q(*(rdi_1 + 0x38))]
                
                if (rcx_1 == rdx_1)
                label_141ca3b27:
                    i.b = 0
                else
                    while (*rcx_1 != arg1)
                        rcx_1 = &rcx_1[1]
                        
                        if (rcx_1 == rdx_1)
                            goto label_141ca3b27
                    
                    i.b = 1
            
            if ((arg3.b & 0x10) != 0 && i.b == 0)
                int64_t* rcx_2 = *(rdi_1 + 0x60)
                void* rdx_2 = &rcx_2[sx.q(*(rdi_1 + 0x68))]
                
                if (rcx_2 == rdx_2)
                label_141ca3b52:
                    i.b = 0
                else
                    while (*rcx_2 != arg1)
                        rcx_2 = &rcx_2[1]
                        
                        if (rcx_2 == rdx_2)
                            goto label_141ca3b52
                    
                    i.b = 1
            
            if ((arg3.b & 8) != 0 && i.b == 0)
                int64_t* rcx_3 = *(rdi_1 + 0x50)
                void* rdx_3 = &rcx_3[sx.q(*(rdi_1 + 0x58))]
                
                if (rcx_3 == rdx_3)
                label_141ca3b7e:
                    i.b = 0
                else
                    while (*rcx_3 != arg1)
                        rcx_3 = &rcx_3[1]
                        
                        if (rcx_3 == rdx_3)
                            goto label_141ca3b7e
                    
                    i.b = 1
            
            if ((arg3.b & 4) != 0)
                if (i.b != 0)
                    goto label_141ca3bca
                
                for (i = *(rdi_1 + 0x40); i != &i[sx.q(*(rdi_1 + 0x48))]; i = &i[1])
                    if (*i == arg1)
                        goto label_141ca3bca
            else if (i.b != 0)
                goto label_141ca3bca
        
        r12 += 8
        r15 += 1
    while (r15 != r13_1)

return i
