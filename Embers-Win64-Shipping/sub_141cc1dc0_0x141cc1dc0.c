// 函数: sub_141cc1dc0
// 地址: 0x141cc1dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = arg3
int64_t rcx = sx.q(arg1[1].d)
uint64_t* r14 = arg2
int64_t r12
r12.b = 1

if (rcx.d s>= 0)
    arg2 = *arg1

uint64_t i

if (rcx.d s< 0 || rcx.d s>= *(arg2 + 0x20))
    arg1[2].b = 1
    arg2.b = 0
    i.b = 1
else
    arg1[1].d = (rcx + 1).d
    arg2 = zx.q(*(rcx + *(arg2 + 0x18)))
    i = zx.q(arg1[2].b)

if (i.b == 0)
    int32_t rsi_1 = 0
    
    if (arg2.b == 0)
        return zx.q(r12.b)
    
    while (true)
        int64_t rcx_1 = sx.q(arg1[1].d)
        
        if (rcx_1.d s>= 0)
            void* rbx_1 = *arg1
            
            if (rcx_1.d s< *(rbx_1 + 0x20))
                arg1[1].d = (rcx_1 + 1).d
                
                if (arg1[2].b != 0)
                    break
                
                if (rbp == 0)
                    int64_t rbx_3 = *(*(rbx_1 + 8) + (zx.q(*(rcx_1 + *(rbx_1 + 0x18))) << 3))
                    int32_t rcx_2
                    rcx_2.b = sub_140b5b8a0(rbx_3.d, 0) == 0
                    i.b = (rbx_3 u>> 0x20).d != 0
                    rcx_2.b |= i.b
                    
                    if (rcx_2.b != 0)
                        i = *r14
                        
                        for (int64_t rdx = i + (sx.q(r14[1].d) << 3); i != rdx; i += 8)
                            if (*i == rbx_3)
                                goto label_141cc1ed4
                        
                        for (int64_t* i_1 = r14[2]; i_1 != &i_1[sx.q(r14[3].d)]; i_1 = &i_1[1])
                            if (*i_1 == rbx_3)
                                goto label_141cc1ed4
                    
                    rbp = 1
                    r12.b = 0
                
            label_141cc1ed4:
                rsi_1 += 1
                
                if (rsi_1 s>= zx.d(arg2.b))
                    return zx.q(r12.b)
                
                continue
        
        arg1[2].b = 1
        break

i.b = 0
return i
