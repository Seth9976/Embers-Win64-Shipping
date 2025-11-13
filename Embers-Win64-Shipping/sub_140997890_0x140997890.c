// 函数: sub_140997890
// 地址: 0x140997890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int128_t zmm6 = arg2[2].d
int32_t i = 0

if (*(arg3 + 0x20) s> 0)
    int64_t* rdi_1 = *arg2
    int64_t* r12_1 = nullptr
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int64_t rdx = sx.q(*(arg2 + 0xc)) * 3
    int64_t arg_8 = rdx
    int64_t r13_1 = sx.q(arg2[1].d) * 3
    
    do
        bool cond:1_1 = (*(arg3 + 0x10) & 1) == 0
        int64_t rcx_1 = *(r12_1 + *(arg3 + 0x18))
        int32_t rax_2 = *(rcx_1 + (r13_1 << 2) + 8)
        uint64_t var_e8 = *(rcx_1 + (r13_1 << 2))
        int32_t rax_3 = *(rcx_1 + (rdx << 2) + 8)
        uint64_t var_d8 = *(rcx_1 + (rdx << 2))
        int32_t* rax_4
        
        if (cond:1_1)
            uint64_t* rax_5 = &var_e8
            
            if (zmm6.d f> 0.5f)
                rax_5 = &var_d8
            
            int32_t var_b4_1 = rax_5[1].d
            uint64_t var_bc
            rax_4 = &var_bc
            var_bc = *rax_5
        else
            int32_t var_c8
            rax_4 = &var_c8
            int128_t zmm1
            zmm1.d = var_d8.d.d f- var_e8.d
            zmm1.d = zmm1.d f* zmm6.d
            zmm1.d = zmm1.d f+ var_e8.d
            float zmm2 = (var_d8:4.d f- var_e8:4.d) f* zmm6.d f+ var_e8:4.d
            var_c8 = zmm1.d
            zmm1.d = rax_3.d f- rax_2
            float var_c4_1 = zmm2
            zmm1.d = zmm1.d f* zmm6.d
            zmm1.d = zmm1.d f+ rax_2
            int32_t var_c0_1 = zmm1.d
        
        int64_t rsi_1 = sx.q(rdi_1[1].d)
        zmm7 = data_142d3f660
        int32_t var_80_1 = rax_4[2]
        result = (rsi_1 + 1).d
        char var_a8_1 = 2
        uint64_t var_88_1 = *rax_4
        int64_t var_68_1 = 0
        rdi_1[1].d = result
        
        if (result s> *(rdi_1 + 0xc))
            result = sub_14090a6a0(rdi_1)
            rdx = arg_8
        
        r12_1 = &r12_1[2]
        int64_t* rcx_5 = rsi_1 * 0x60 + *rdi_1
        *(rcx_5 + 0x10) = var_a8_1.o
        rcx_5[1].d = i
        i += 1
        *(rcx_5 + 0x20) = zmm7
        *rcx_5 = arg1
        *(rcx_5 + 0x30) = var_88_1.o
        int128_t var_78
        *(rcx_5 + 0x40) = var_78
        *(rcx_5 + 0x50) = var_68_1.o
    while (i s< *(arg3 + 0x20))

return result
