// 函数: sub_141cc1f10
// 地址: 0x141cc1f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int64_t rcx = sx.q(arg1[1].d)
char rbp = arg3
uint64_t* r14 = arg2
void* r9_1

if (rcx.d s>= 0)
    r9_1 = *arg1

uint64_t result

if (rcx.d s< 0 || rcx.d s>= *(r9_1 + 0x20))
    arg1[2].b = 1
    arg2.b = 0
    result.b = 1
else
    arg1[1].d = (rcx + 1).d
    arg2 = zx.q(*(rcx + *(r9_1 + 0x18)))
    result = zx.q(arg1[2].b)

if (result.b == 0)
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
                    int64_t i = *(*(rbx_1 + 8) + (zx.q(*(rcx_1 + *(rbx_1 + 0x18))) << 3))
                    int32_t rcx_2
                    rcx_2.b = sub_140b5b8a0(i.d, 0) == 0
                    result.b = (i u>> 0x20).d != 0
                    rcx_2.b |= result.b
                    
                    if (rcx_2.b != 0)
                        result = *r14
                        int64_t rdx = result + (sx.q(r14[1].d) << 3)
                        
                        if (result == rdx)
                        label_141cc1ffe:
                            int64_t* rcx_4 = r14[2]
                            void* rdx_1 = &rcx_4[sx.q(r14[3].d)]
                            
                            if (rcx_4 != rdx_1)
                                while (*rcx_4 != i)
                                    rcx_4 = &rcx_4[1]
                                    
                                    if (rcx_4 == rdx_1)
                                        goto label_141cc2027
                                
                                rbp = 1
                                r12 = 1
                        else
                            while (*result != i)
                                result += 8
                                
                                if (result == rdx)
                                    goto label_141cc1ffe
                            
                            rbp = 1
                            r12 = 1
                
            label_141cc2027:
                rsi_1 += 1
                
                if (rsi_1 s>= zx.d(arg2.b))
                    return zx.q(r12.b)
                
                continue
        
        arg1[2].b = 1
        break

result.b = 0
return result
