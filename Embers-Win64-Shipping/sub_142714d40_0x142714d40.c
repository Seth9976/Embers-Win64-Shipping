// 函数: sub_142714d40
// 地址: 0x142714d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426e82c0(arg3, arg3[1].d + arg2[1].d)
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t rbp_1 = 0
    int128_t zmm6
    int128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    
    do
        int128_t* rax_1 = *arg2
        int64_t r14_1 = sx.q(arg3[4].d)
        zmm6 = *(rax_1 + rbp_1)
        zmm7 = zx.o(*(rax_1 + rbp_1 + 0x10))
        uint32_t rax_2 = zx.d(*(arg3 + 0x13c))
        int32_t rax_3 = rax_2 + r14_1.d
        arg3[4].d = rax_3
        
        if (rax_3 s> *(arg3 + 0x24))
            sub_1405daba0(&arg3[3])
        
        memset(arg3[3] + r14_1, 0, sx.q(rax_2))
        int64_t rax_4 = arg3[3]
        *(r14_1 + rax_4) = zmm6
        *(r14_1 + rax_4 + 0x10) = zmm7.q
        int64_t rbx_1 = sx.q(arg3[1].d)
        int32_t arg_1c = r14_1.d & 0x7fffffff
        int32_t rax_5 = (rbx_1 + 1).d
        arg3[1].d = rax_5
        
        if (rax_5 s> *(arg3 + 0xc))
            sub_1405a4d70(arg3)
        
        i += 1
        rbp_1 += 0x18
        *(*arg3 + (rbx_1 << 3)) = 0.q
    while (i s< arg2[1].d)

void* rcx_8 = sx.q(*(arg3 + 0x2c)) * 0x30 + arg3[0x22]
int32_t r13
r13.b = *(arg1 + 0x7b) == 1
int32_t result = *(rcx_8 + 0x28) & 0xfffffffe
*(rcx_8 + 0x28) = r13 | result
return result
