// 函数: sub_1427da610
// 地址: 0x1427da610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3
int64_t* r13 = arg4
uint64_t result = sub_1427e5d10(arg1, *arg3)
int64_t i = *r13

if (i != 0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    
    do
        sub_1427e4f10(arg1)
        int64_t* r8 = *arg1
        char rax = arg1[9].b
        int64_t i_1 = i
        uint64_t rcx_1 = zx.q(r8[2].d)
        char var_100_1 = 0
        
        if ((*(r8 + 0x14) & 0x7fffffff) u> rcx_1.d)
            uint128_t* rdx_2 = r8[1] + rcx_1 * 0x18
            
            if (rdx_2 != 0)
                *rdx_2 = i_1.o
                rdx_2[1].q = rax.q
            
            r8[2].d += 1
        else
            sub_1427e5380(r8, &i_1)
        
        int32_t rbx = r13[1].d
        result = sub_1427e4f10(arg1)
        
        if (result.b != 0)
            void var_70
            int64_t* rax_4 = rdi[3](&var_70, arg1[6], zx.q(rbx))
            zmm7 = *(arg1 + 0x10)
            int64_t rbx_1 = *arg1
            int64_t rdi_1 = arg1[1]
            int64_t rsi_1 = arg1[5]
            int64_t r14_1 = arg1[7]
            int64_t r15_1 = arg1[8]
            zmm6 = zx.o(arg1[4])
            uint64_t var_118 = *rax_4
            int32_t var_110_1 = rax_4[1].d.d
            int32_t rax_5 = *(rax_4 + 0xc)
            uint64_t* var_c0_1 = &var_118
            char arg_8
            char* var_a0_1 = &arg_8
            arg_8 = 0
            int64_t var_f0 = rbx_1
            int64_t var_e8_1 = rdi_1
            int128_t var_e0_1 = zmm7
            int64_t var_c8_1 = rsi_1
            uint64_t var_d0_1 = zmm6.q
            int64_t var_b8_1 = r14_1
            int64_t var_b0_1 = r15_1
            char var_a8_1 = 1
            int128_t var_98_1 = zx.o(0)
            sub_1427deea0(arg5, &var_f0, 0)
            var_f0 = rbx_1
            uint64_t* var_c0_2 = &var_118
            int64_t var_e8_2 = rdi_1
            uint64_t var_d0_2 = zmm6.q
            int64_t var_c8_2 = rsi_1
            int128_t var_e0_2 = zmm7
            int64_t var_b8_2 = r14_1
            int64_t var_b0_2 = r15_1
            char var_a8_2 = 1
            char* var_a0_2 = &arg_8
            int128_t var_98_2 = zx.o(0)
            sub_1427d3ed0(&var_f0, &arg5[8])
            sub_1427d5ab0(&var_f0, &arg5[0xc])
            
            if (arg_8 != 0)
                *arg1[0xa] = 1
            
            rdi = arg3
            int64_t rcx_9 = arg1[6]
            int32_t var_80_1 = var_110_1.d
            uint64_t var_88 = var_118
            int32_t var_7c_1 = rax_5
            result = rdi[2](rcx_9, zx.q(rbx), &var_88)
        
        void* rdx_8 = *arg1
        
        if (*(rdx_8 + 0x10) != 0)
            if (*(*(rdx_8 + 8) + zx.q(*(rdx_8 + 0x10) - 1) * 0x18 + 8) != 0
                    && *(*(rdx_8 + 8) + zx.q(*(rdx_8 + 0x10) - 1) * 0x18 + 0x10) != 0)
                int64_t* rcx_12 = arg1[5]
                (*(*rcx_12 + 0x48))(rcx_12)
            
            result = *arg1
            *(result + 0x10) -= 1
        
        void* rdx_9 = *arg1
        arg1[9].b = 1
        
        if (*(rdx_9 + 0x10) != 0)
            result = *(rdx_9 + 8)
            char rdx_10 = arg1[9].b
            
            if (*(result + zx.q(*(rdx_9 + 0x10) - 1) * 0x18 + 0x10) == 0)
                rdx_10 = 0
            
            arg1[9].b = rdx_10
        
        i = r13[2]
        r13 = &r13[2]
    while (i != 0)

void* rdx_11 = *arg1

if (*(rdx_11 + 0x10) != 0)
    if (*(*(rdx_11 + 8) + zx.q(*(rdx_11 + 0x10) - 1) * 0x18 + 8) != 0
            && *(*(rdx_11 + 8) + zx.q(*(rdx_11 + 0x10) - 1) * 0x18 + 0x10) != 0)
        int64_t* rcx_16 = arg1[5]
        (*(*rcx_16 + 0x48))(rcx_16)
    
    result = *arg1
    *(result + 0x10) -= 1

void* rdx_12 = *arg1
arg1[9].b = 1

if (*(rdx_12 + 0x10) != 0)
    result = *(rdx_12 + 8)
    char rdx_13 = arg1[9].b
    
    if (*(result + zx.q(*(rdx_12 + 0x10) - 1) * 0x18 + 0x10) == 0)
        rdx_13 = 0
    
    arg1[9].b = rdx_13

return result
