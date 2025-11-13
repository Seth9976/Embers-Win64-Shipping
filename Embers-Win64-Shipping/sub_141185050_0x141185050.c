// 函数: sub_141185050
// 地址: 0x141185050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[0x18]
int32_t r8 = 0

if (r9 s> 0)
    void* rax_1 = *(arg1 + 0x58)
    void* r10_1 = &arg1[2]
    int64_t* rcx = nullptr
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    do
        if ((*(rcx + r10_1) u>> 0x20).d s>= arg2)
            if (r8 == 0xffffffff)
                break
            
            void* r9_1 = r10_1 + (sx.q(r8) << 3)
            int64_t rbx = *r9_1
            
            if ((rbx u>> 0x20).d s> arg2)
                int32_t arg_c = (rbx u>> 0x20).d - arg2
                *r9_1 = (arg2 + rbx.d).q
                return zx.q(rbx.d)
            
            int32_t rdx = arg1[0x18]
            int32_t rax_12 = rdx - r8 - 1
            
            if (rax_12 s>= 1)
                rax_12 = 1
            
            if (rax_12 != 0)
                memcpy(r9_1, r10_1 + (sx.q(rdx - rax_12) << 3), rax_12 << 3)
                rdx = arg1[0x18]
            
            arg1[0x18] = rdx - 1
            sub_14119ad10(&arg1[2])
            return zx.q(rbx.d)
        
        r8 += 1
        rcx = &rcx[1]
    while (r8 s< r9)

int32_t result = *arg1
*arg1 = result + arg2
return result
