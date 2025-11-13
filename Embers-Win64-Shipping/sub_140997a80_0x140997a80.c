// 函数: sub_140997a80
// 地址: 0x140997a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int128_t zmm6 = arg2[2].d
int32_t i = 0

if (*(arg3 + 0x20) s> 0)
    int64_t* rdi_1 = *arg2
    int64_t r12_1 = sx.q(arg2[1].d)
    int64_t r13_1 = sx.q(*(arg2 + 0xc))
    int64_t* r14_1 = nullptr
    int128_t zmm7
    int128_t var_58_1 = zmm7
    
    do
        bool cond:1_1 = (*(arg3 + 0x10) & 1) == 0
        int64_t rcx = *(r14_1 + *(arg3 + 0x18))
        uint128_t zmm1 = zx.o(*(rcx + (r13_1 << 3)))
        uint64_t arg_8 = *(rcx + (r12_1 << 3))
        uint64_t arg_10 = zmm1.q
        float zmm2
        
        if (cond:1_1)
            uint64_t* rax_1 = &arg_8
            
            if (zmm6.d f> 0.5f)
                rax_1 = &arg_10
            
            zmm1 = *rax_1
            zmm2 = *(rax_1 + 4)
        else
            zmm1.d = arg_10.d.d f- arg_8.d
            zmm1.d = zmm1.d f* zmm6.d
            zmm1.d = zmm1.d f+ arg_8.d
            zmm2 = (arg_10:4.d f- arg_8:4.d) f* zmm6.d f+ arg_8:4.d
        
        int64_t rsi_1 = sx.q(rdi_1[1].d)
        zmm7 = data_142d3f660
        int32_t var_8c_1 = zmm1.d
        result = (rsi_1 + 1).d
        rdi_1[1].d = result
        
        if (result s> *(rdi_1 + 0xc))
            result = sub_14090a6a0(rdi_1)
        
        r14_1 = &r14_1[2]
        int64_t* rcx_4 = rsi_1 * 0x60 + *rdi_1
        *(rcx_4 + 0x10) = 3.o
        rcx_4[1].d = i
        i += 1
        *(rcx_4 + 0x20) = zmm7
        *rcx_4 = arg1
        uint128_t var_98
        *(rcx_4 + 0x30) = var_98
        *(rcx_4 + 0x40) = zmm2.o
        *(rcx_4 + 0x50) = 0.o
    while (i s< *(arg3 + 0x20))

return result
