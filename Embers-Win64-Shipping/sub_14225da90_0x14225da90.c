// 函数: sub_14225da90
// 地址: 0x14225da90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (arg2 == 0)
label_14225db88:
    rax.b = 0
    return rax

int64_t r14_1 = sx.q(*(arg1 + 0x2628))
int32_t r8_1 = 0

if (r14_1.d s> 0)
    int64_t* rcx = *(arg1 + 0x2620)
    int64_t rdx = 0
    
    do
        rax = *rcx
        
        if (rax != 0)
            if (rax == arg2)
                goto label_14225db88
            
            char r9_1 = *(arg2 + 0x2c)
            char r10_1 = *(rax + 0x2c)
            
            if (r9_1 u<= r10_1)
                if ((arg2[5].b & 2) != 0 && r9_1 == r10_1)
                    goto label_14225db88
                
                r14_1 = zx.q(r8_1)
                break
        
        r8_1 += 1
        rdx += 1
        rcx = &rcx[1]
    while (rdx s< r14_1)

int32_t rbp = *(arg1 + 0x2628)
*(arg1 + 0x2628) = rbp + 1

if (rbp + 1 s> *(arg1 + 0x262c))
    sub_1405a4d70(arg1 + 0x2620)

int64_t** rbx = sx.q(r14_1.d) << 3
void* rdx_3 = *(arg1 + 0x2620) + rbx
memmove(rdx_3 + 8, rdx_3, (rbp - r14_1.d) << 3)
*(rbx + *(arg1 + 0x2620)) = arg2
(*(*arg2 + 0x268))(arg2, arg1)
int64_t rax_5
rax_5.b = 1
return rax_5
