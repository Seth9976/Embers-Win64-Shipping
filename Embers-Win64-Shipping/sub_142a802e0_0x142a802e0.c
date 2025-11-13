// 函数: sub_142a802e0
// 地址: 0x142a802e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx_1 = &arg1[0x3f + sx.q(*(arg1 + 0x1f4)) * 2]
int64_t rbp = sx.q(arg2)
int64_t r12
r12.b = 1
int64_t r15 = sx.q(arg3)
int32_t* rdi = arg1[0x3d] + rbp * 0x18
uint32_t r14_1 = zx.d(*(rbx_1 + 8)) & 1
bool cond:0_1

if (r14_1 != 0)
    if (r14_1 == 1)
        cond:0_1 = (rdi[3].b & 2) != 0
        goto label_142a80350
    
label_142a80352:
    
    if ((rdi[3].b & 3) == 0)
        *(rbx_1 + 6) = rbp.w
        uint64_t result
        result.b = 0xa
        return result
    
    r12.b = rbp.d == zx.d(*(rbx_1 + 4))
    
    if (r14_1 != rdi[4])
        r14_1 = zx.d(rdi[4].b)
else
    cond:0_1 = (rdi[3].b & 1) != 0
label_142a80350:
    
    if (not(cond:0_1))
        goto label_142a80352
*(sx.q(*rdi) + *(*arg1 + 0x70)) = r14_1.b
*(r15 + *(*arg1 + 0x70)) = r14_1.b
sub_142a809a0(arg1, rbp.d, *rdi, r14_1.b)

if (r12.b == 0)
    int32_t i = (rbp - 1).d
    rdi[1] = neg.d(r15.d)
    
    if (i s>= zx.d(*(rbx_1 + 4)))
        int64_t rcx_4 = sx.q(i) * 0x18
        
        do
            int32_t* r8_2 = arg1[0x3d]
            
            if (*(r8_2 + rcx_4) != *rdi)
                break
            
            *(r8_2 + rcx_4 + 4) = 0
            i -= 1
            rcx_4 -= 0x18
        while (i s>= zx.d(*(rbx_1 + 4)))
    
    int32_t i_1 = (rbp + 1).d
    
    if (i_1 s< zx.d(*(rbx_1 + 6)))
        int32_t* rdx_3 = sx.q(i_1) * 0x18
        
        do
            int64_t rax_18 = arg1[0x3d]
            
            if (*(rdx_3 + rax_18) s>= r15.d)
                break
            
            if (*(rdx_3 + rax_18 + 4) s> 0)
                *(rdx_3 + rax_18 + 4) = 0
            
            i_1 += 1
            rdx_3 = &rdx_3[6]
        while (i_1 s< zx.d(*(rbx_1 + 6)))
else
    int16_t r9_3 = *(rbx_1 + 4)
    *(rbx_1 + 6) = rbp.w
    
    if (rbp.w u> r9_3)
        while (true)
            uint32_t r8_1 = zx.d(*(rbx_1 + 6))
            
            if (*(arg1[0x3d] + sx.q(r8_1 - 1) * 0x18) != *rdi)
                break
            
            r8_1.w -= 1
            *(rbx_1 + 6) = r8_1.w
            
            if (r8_1.w u<= r9_3)
                return zx.q(r14_1.b)

return zx.q(r14_1.b)
