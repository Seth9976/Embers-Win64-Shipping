// 函数: sub_141d36290
// 地址: 0x141d36290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x38)

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t i = 0
*arg1 = 0xffffff
__builtin_memset(&arg1[0xe], 0, 0x14)
sub_140774790(&arg1[6])
arg1[4] = 0

if (arg1[5] s<= 0xffffffff)
    sub_1405dadb0(&arg1[2], 0)

arg1[0x11] = arg2[0x11]

if (&arg1[2] != &arg2[2])
    int64_t rbp_1 = sx.q(arg2[4])
    int32_t r8_1 = arg1[5]
    int64_t r12_1 = *(arg2 + 8)
    arg1[4] = rbp_1.d
    
    if (rbp_1.d != 0 || r8_1 != 0)
        sub_1405c4a90(&arg1[2], rbp_1.d, r8_1)
        memcpy(*(arg1 + 8), r12_1, (rbp_1 << 2).d)
    else
        arg1[5] = 0

void* rbp_2 = &arg2[6]

if (&arg1[6] != rbp_2)
    sub_14059a8e0(&arg1[6], *(rbp_2 + 0x18))
    int32_t rax_2 = *(rbp_2 + 0x18)
    arg1[0xc] = rax_2
    
    if (rax_2 != 0)
        void* rcx_6 = *(rbp_2 + 0x10)
        void* r9_1 = *(arg1 + 0x28)
        
        if (rcx_6 != 0)
            rbp_2 = rcx_6
        
        void* rcx_7 = &arg1[6]
        
        if (r9_1 != 0)
            rcx_7 = r9_1
        
        memcpy(rcx_7, rbp_2, (zx.q(rax_2 + 0x1f) u>> 5 << 2).d)

*arg1 = *arg2
int64_t result = sx.q(arg1[0x11])

if (result.d s> 0)
    *(arg1 + 0x38) = sub_140a82f30(result * 0x30, 8)
    int32_t rcx_10 = arg2[0x10]
    arg1[0x10] = rcx_10
    result = zx.q(arg2[0x12])
    arg1[0x12] = result.d
    
    if (rcx_10 s> 0)
        do
            void* rax_5 = *(arg1 + 0x28)
            void* r8_7 = &arg1[6]
            
            if (rax_5 != 0)
                r8_7 = rax_5
            
            int32_t i_1 = i
            
            if (i s< 0)
                i_1 = i + 0x1f
            
            result = zx.q(*(r8_7 + (sx.q(i_1 s>> 5) << 2)))
            
            if (test_bit(result.d, i & 0x1f))
                int64_t rdx_5 = *(arg2 + 0x38)
                result = *(arg1 + 0x38)
                int64_t rcx_14 = sx.q(i) * 6
                *(result + (rcx_14 << 3)) = *(rdx_5 + (rcx_14 << 3))
                *(result + (rcx_14 << 3) + 0x10) = *(rdx_5 + (rcx_14 << 3) + 0x10)
                *(result + (rcx_14 << 3) + 0x20) = *(rdx_5 + (rcx_14 << 3) + 0x20)
            
            i += 1
        while (i s< arg1[0x10])

return result
