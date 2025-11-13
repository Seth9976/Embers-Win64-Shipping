// 函数: sub_1426aaa20
// 地址: 0x1426aaa20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg1[8].b)
int64_t r10 = *(arg2 + 0x120)
void* rbp_1 = rax * 0x38 + r10
int64_t r9 = sx.q(*(rbp_1 + 0x30))

if (r9.d s>= 0)
    int32_t rdx = *(arg2 + 0x138)
    
    if (rax.d + 1 s< *(arg2 + 0x128))
        int64_t rcx_1 = zx.q(rax.d) * 0x38
        
        if (*(rcx_1 + r10 + 0x68) s<= rdx)
            rdx = *(rcx_1 + r10 + 0x68)
    
    int64_t rsi_1 = sx.q(rdx)
    int64_t rbx_1 = r9
    
    if (r9 s< rsi_1)
        do
            int64_t* rcx_2 = *(*(arg2 + 0x130) + (rbx_1 << 3))
            (*(*rcx_2 + 0x290))(rcx_2, arg2)
            rbx_1 += 1
        while (rbx_1 s< rsi_1)

void* result = sub_1426aabb0(arg1, arg2, *arg1, arg3)

if (arg3 != 0)
    result = &arg1[6]
    
    if (rbp_1 + 0x20 != result)
        uint32_t count = *(result + 8)
        int64_t rsi_2 = *result
        int32_t r8_2 = *(rbp_1 + 0x2c)
        *(rbp_1 + 0x28) = count
        
        if (count == 0 && r8_2 == 0)
            *(rbp_1 + 0x2c) = count
            return result
        
        sub_1405da9e0(rbp_1 + 0x20, count, r8_2)
        return memcpy(*(rbp_1 + 0x20), rsi_2, count)
else
    bool cond:1_1 = *(rbp_1 + 0x2c) == 0
    *(rbp_1 + 0x28) = 0
    
    if (not(cond:1_1))
        return sub_1405c5510(rbp_1 + 0x20, 0) __tailcall

return result
