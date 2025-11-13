// 函数: sub_14193cec0
// 地址: 0x14193cec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1
uint64_t rbp = zx.q(arg3)
uint64_t r14 = zx.q(arg2)
sub_14193d400()
void* rax = sub_141927100(&data_1439c7670, arg_8, &arg_8)
uint64_t rdi = zx.q(*(rax + 8))
int32_t r9 = *(rax + 0x34)
uint64_t result
void* rcx_3

if (rdi.d == r9)
label_14193cf5f:
    
    if (r9 == 0)
        int32_t rax_3 = (rdi + 1).d
        *(rax + 8) = rax_3
        
        if (rax_3 s> *(rax + 0xc))
            sub_1405a4df0(rax)
        
        sub_1405b2ba0(rax + 0x10, 0)
    else
        rdi = sx.q(*(rax + 0x30))
        int64_t rdx_5 = *rax
        int64_t rax_2 = sx.q(*(rdx_5 + rdi * 0x18 + 4))
        int32_t temp0_1 = *(rax + 0x34)
        *(rax + 0x34) -= 1
        *(rax + 0x30) = rax_2.d
        
        if (temp0_1 != 1)
            *(rdx_5 + rax_2 * 0x18) = 0xffffffff
    
    void* rax_4 = *(rax + 0x20)
    void* r8_3 = rax + 0x10
    
    if (rax_4 != 0)
        r8_3 = rax_4
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rdi.d)
    void* r8_4 = r8_3 + (sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5) << 2)
    *r8_4 |= 1 << (rdi.b & 0x1f)
    int64_t rcx_11 = sx.q(rdi.d) * 3
    int64_t rdx_10 = *rax
    *(rdx_10 + (rcx_11 << 3)) = r14
    int64_t* r9_1 = rdx_10 + (rcx_11 << 3)
    r9_1[1] = 0
    r9_1[2].d = 0xffffffff
    int32_t arg_10
    sub_141938920(rax, &arg_10, (r14 s>> 0x20).d * 0x17 + r14.d, r9_1, rdi.d, nullptr)
    int64_t rax_12 = sx.q(arg_10)
    result = *rax
    *(result + ((rax_12 * 3 + 1) << 3)) = -1
    rcx_3 = result + ((rax_12 * 3 + 1) << 3)
else
    void* r8_1 = rax + 0x38
    void* rcx = *(r8_1 + 8)
    
    if (rcx != 0)
        r8_1 = rcx
    
    result = zx.q(*(r8_1 + (((sx.q(*(rax + 0x48)) - 1) & sx.q(r14.d)) << 2)))
    
    if (result.d == 0xffffffff)
        goto label_14193cf5f
    
    int64_t r8_2 = *rax
    void* rcx_2
    
    while (true)
        int64_t rdx_4 = sx.q(result.d) * 3
        rcx_2 = r8_2 + (rdx_4 << 3)
        
        if (*(r8_2 + (rdx_4 << 3)) == r14)
            break
        
        result = zx.q(*(rcx_2 + 0x10))
        
        if (result.d == 0xffffffff)
            goto label_14193cf5f
    
    if (result.d == 0xffffffff || rcx_2 == 0)
        goto label_14193cf5f
    
    rcx_3 = rcx_2 + 8
    
    if (rcx_2 == -8)
        goto label_14193cf5f

if (*rcx_3 == rbp)
    return result

*rcx_3 = rbp
return data_143efff08(zx.q(arg_8), zx.q(r14.d), zx.q(rbp.d))
