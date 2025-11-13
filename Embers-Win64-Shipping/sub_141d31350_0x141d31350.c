// 函数: sub_141d31350
// 地址: 0x141d31350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
int32_t* rbx

if (rax u< 0x1000000)
    rbx = nullptr
else
    int32_t r9_2 = rax & 0xffffff
    
    if (r9_2 s>= *(arg2 + 0x578))
        rbx = nullptr
    else
        void* r8_1 = arg2 + 0x560
        void* rcx = *(r8_1 + 0x10)
        
        if (rcx != 0)
            r8_1 = rcx
        
        if (not(test_bit(*(r8_1 + (zx.q(r9_2) u>> 5 << 2)), r9_2 & 0x1f))
                || zx.d(*(*(arg2 + 0x550) + ((zx.q(rax) & 0xffffff) << 2) + 3)) != rax u>> 0x18)
            rbx = nullptr
        else
            rbx = *(arg2 + 0x580) + (zx.q(rax) & 0xffffff) * 0x28

*rbx = arg1[2]
rbx[1] = arg1[3]

if (&rbx[2] != &arg1[4])
    int32_t r8_2 = rbx[5]
    int64_t rbp_1 = sx.q(arg1[6])
    int64_t r14_1 = *(arg1 + 0x10)
    rbx[4] = rbp_1.d
    
    if (rbp_1.d != 0 || r8_2 != 0)
        sub_1405c4a90(&rbx[2], rbp_1.d, r8_2)
        memcpy(*(rbx + 8), r14_1, (rbp_1 << 2).d)
    else
        rbx[5] = rbp_1.d

rbx[6] = arg1[8]
rbx[7] = arg1[9]
int32_t result = arg1[0xa]
rbx[8] = result
return result
