// 函数: sub_1421a19d0
// 地址: 0x1421a19d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || (*(arg2 + 0xe0) & 0x100) == 0)
    return 

int32_t rax_1 = *(arg2 + 0x118)
int64_t r12_1 = *(arg2 + 0xf8)
int64_t r14_1 = *(arg2 + 0xf0)
int32_t r15_1 = *(arg2 + 0x114)
int64_t rbp_1 = sx.q(rax_1 - 1)

if (rax_1 - 1 s< 0)
    return 

int64_t temp1_1

do
    void* rcx_2 = zx.q(zx.d(*(r12_1 + (rbp_1 << 1))) * r15_1) + r14_1
    
    if ((*(rcx_2 + 0x5c) & 0x4000000) == 0)
        uint64_t rax = 0
        int32_t* rbx_1 = nullptr
        
        if ((*(arg2 + 0xe0) & 0x100) != 0)
            if (*(arg2 + 0x1f0) != 0)
                rax = sx.q(*(arg2 + 0x1f8)) + rcx_2
            
            if (*(arg2 + 0x200) != 0)
                rbx_1 = sx.q(*(arg2 + 0x208)) + rcx_2
        
        if (*(arg1 + 0x30) == 0)
            rbx_1 = rax
        
        if (rbx_1 != 0)
            *rbx_1 ^= (*(arg1 + 0x34) ^ *rbx_1) & 1
            int32_t rdx = *rbx_1
            int32_t var_58
            int64_t var_50
            
            if (((*(arg1 + 0x34)).b & 5) == 1)
                var_50 = 0
                var_58 = 0
                void var_48
                int64_t* rax_7
                rax_7, arg3 = sub_141fe56b0(arg1 + 0x38, &var_48, *(arg2 + 0x12c), arg3, 
                    (*(arg2 + 0x18)).d, nullptr)
                *(rbx_1 + 4) = *rax_7
                rbx_1[3] = rax_7[1].d
                *rbx_1 ^= (*(arg1 + 0x34) ^ *rbx_1) & 2
                rdx = *rbx_1
            
            int32_t rcx_8 = ((*(arg1 + 0x80) << 2 ^ rdx) & 4) ^ rdx
            *rbx_1 = rcx_8
            
            if (((*(arg1 + 0x80)).b & 5) == 1)
                var_50 = 0
                var_58 = 0
                void var_3c
                int64_t* rax_13
                rax_13, arg3 = sub_141fe56b0(arg1 + 0x88, &var_3c, *(arg2 + 0x12c), arg3, 
                    (*(arg2 + 0x18)).d, nullptr)
                *(rbx_1 + 0x10) = *rax_13
                rbx_1[6] = rax_13[1].d
                *rbx_1 ^= (*(arg1 + 0x80) << 2 ^ *rbx_1) & 8
                rcx_8 = *rbx_1
            
            *rbx_1 = ((*(arg1 + 0xd4) << 4 ^ rcx_8) & 0x10) ^ rcx_8
            rax.b = (*(arg1 + 0xd4)).b & 5
            
            if (rax.b == 1)
                int32_t zmm0_3
                zmm0_3, arg3 = sub_141fe5610(arg1 + 0xd8, *(arg2 + 0x12c), *(arg2 + 0x18), nullptr, 
                    var_58, var_50)
                rbx_1[7] = zmm0_3
                *rbx_1 ^= (*(arg1 + 0xd4) << 4 ^ *rbx_1) & 0x20
    
    temp1_1 = rbp_1
    rbp_1 -= 1
while (temp1_1 - 1 s>= 0)
