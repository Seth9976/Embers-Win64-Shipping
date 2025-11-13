// 函数: sub_142c5b510
// 地址: 0x142c5b510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
void* rbp = *arg1

if (*(arg1 + 0x164) != 2 || *(sx.q(arg4) + arg1 + 0x411) != 0)
    arg1.b = 0
else
    arg1.b = 1

void* const rax_2 = 0x360

if (arg1.b != 0)
    rax_2 = 0x3a8

int32_t r12
char* r13

if (arg1.b == 0)
    r13 = rdi[0x1a]
    r12 = *(rdi + 0x17c)
else
    r13 = rdi[0x2a]
    r12 = rdi[0x2f].d

int64_t rsi = 0
*arg2 = 0
int32_t* rax_4

if (*(rdi + 0x164) == 2)
    rax_4 = 0x314
    
    if (rdi[0x48] != -1)
        rax_4 = 0x33c

uint64_t result

if (*(rdi + 0x164) != 2 || *(rax_4 + rdi) == 2)
    result = zx.q(*(rbp + 0x488))
else
    result = zx.q(*(rbp + 0x528))

if (result.b != 0)
    result = *(rbp + 0xd0)
    void* r15_1
    
    if (result != 0)
        r15_1 = result + 0x68
    
    if (result == 0 || (*result & 0x10) == 0)
        r15_1 = rbp + 0x4ab8
    
    if (*(rbp + 0x588) u<= 0)
        result.b = 1
    else
        int64_t r14_1 = 0
        
        while (true)
            result = *(rbp + 0x4ab0)
            int64_t* rbx_1 = r14_1 + result
            
            if (*(r14_1 + result + 0x18) != 0 && sub_142c70460(r13, *rbx_1).d != 0)
                result = zx.q(*(rdi + 0x3f3))
                
                if (result.b != 0)
                label_142c5b650:
                    char* rdx_1 = rbx_1[1]
                    
                    if (rdx_1 != 0 && sub_142c70460(rdi[0x1f], rdx_1).d != 0)
                        goto label_142c5b669
                else if (rbx_1[1] == 0)
                label_142c5b669:
                    result = zx.q(*(rdi + 0x3f4))
                    
                    if (result.b != 0)
                    label_142c5b67e:
                        result = zx.q(rbx_1[6].d)
                        
                        if (result.d != 0xffffffff && rdi[0x30].d == result.d)
                            goto label_142c5b68e
                    else if (rbx_1[6].d == 0xffffffff)
                    label_142c5b68e:
                        
                        if (r12 == *(rbx_1 + 0x2c) && sub_142c70460(*rdi[0x87], rbx_1[2]).d != 0
                                && sub_142c5b1c0(rax_2 + rdi, &rbx_1[7]).b != 0)
                            *r15_1 += 1
                            rbx_1[5].d = *r15_1
                            *arg2 = rbx_1[3]
                            
                            if (arg3 != 0)
                                *arg3 = rbx_1[4]
                            
                            result.b = 0
                            break
                    else if (result.b != 0)
                        goto label_142c5b67e
                else if (result.b != 0)
                    goto label_142c5b650
            
            rsi += 1
            r14_1 -= -0x80
            
            if (rsi u>= *(rbp + 0x588))
                result.b = 1
                break
else
    result.b = 1

return result
