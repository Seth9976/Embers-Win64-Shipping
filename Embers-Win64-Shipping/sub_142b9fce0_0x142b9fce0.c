// 函数: sub_142b9fce0
// 地址: 0x142b9fce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x10)
int32_t arg_8 = 0
int32_t r10 = 0

if (rax s< 0xc)
    if (*(arg1 + 0x18) == 0)
        *(arg1 + 0x14) = 0xc
        *(arg1 + 0x18) = arg1 + 0x538
    
    goto label_142b9fd2d

int32_t r8_1 = *(arg1 + 0x14)

if (rax s< r8_1)
    goto label_142b9fd2d

if (r8_1 s>= 0x1c71c71)
    *arg6 = nullptr
    return 0x40

int32_t rbp_2 = r8_1 + 4 + (r8_1 s>> 2)

if (rbp_2 s< r8_1 || rbp_2 s> 0x1c71c71)
    rbp_2 = 0x1c71c71

int64_t rax_8 = *(arg1 + 0x18)
void* rbx_1 = arg1 + 0x538
uint128_t zmm0

if (rax_8 == rbx_1)
    uint128_t* rax_9 = sub_142b99a90(arg5, 0x48, 0, rbp_2, 0, &arg_8)
    int32_t rcx_3 = arg_8
    *(arg1 + 0x18) = rax_9
    
    if (rcx_3 != 0)
        *arg6 = nullptr
        return zx.q(rcx_3)
    
    int64_t i_1 = 6
    int64_t i
    
    do
        rax_9 = &rax_9[8]
        zmm0 = *rbx_1
        rbx_1 += 0x80
        rax_9[-8] = zmm0
        rax_9[-7] = *(rbx_1 - 0x70)
        rax_9[-6] = *(rbx_1 - 0x60)
        rax_9[-5] = *(rbx_1 - 0x50)
        rax_9[-4] = *(rbx_1 - 0x40)
        rax_9[-3] = *(rbx_1 - 0x30)
        rax_9[-2] = *(rbx_1 - 0x20)
        rax_9[-1] = *(rbx_1 - 0x10)
        i = i_1
        i_1 -= 1
    while (i != 1)
    *rax_9 = *rbx_1
    rax_9[1] = *(rbx_1 + 0x10)
    rax_9[2] = *(rbx_1 + 0x20)
    rax_9[3] = *(rbx_1 + 0x30)
    rax_9[4] = *(rbx_1 + 0x40)
    rax_9[5] = *(rbx_1 + 0x50)
    r10 = arg_8
    *(arg1 + 0x14) = rbp_2
    goto label_142b9fd2d

int64_t rax_11 = sub_142b99a90(arg5, 0x48, r8_1, rbp_2, rax_8, &arg_8)
r10 = arg_8
*(arg1 + 0x18) = rax_11

if (r10 != 0)
    *arg6 = nullptr
else
    *(arg1 + 0x14) = rbp_2
label_142b9fd2d:
    int64_t r9 = *(arg1 + 0x18)
    uint128_t* rdx = r9 + sx.q(*(arg1 + 0x10)) * 0x48
    
    if (rdx u> r9)
        int16_t* rax_3 = rdx - 0x48
        
        do
            int32_t r8 = sx.d(*rax_3)
            int32_t rcx_1
            
            if (arg4 == 0)
                rcx_1.b = r8 s< arg2
            else
                rcx_1.b = r8 s> arg2
            
            if (rcx_1 != 0)
                break
            
            if (r8 == arg2 && arg3 == *(arg1 + 0x20))
                break
            
            int128_t zmm1 = *(rax_3 + 0x10)
            *rdx = *rax_3
            zmm0 = *(rax_3 + 0x20)
            rdx[1] = zmm1
            zmm1 = *(rax_3 + 0x30)
            rdx[2] = zmm0
            zmm0 = zx.o(*(rax_3 + 0x40))
            rax_3 -= 0x48
            rdx[3] = zmm1
            rdx[4].q = zmm0.q
            rdx -= 0x48
        while (rdx u> r9)
        
        r10 = arg_8
    
    *(arg1 + 0x10) += 1
    *arg6 = rdx

return zx.q(r10)
