// 函数: sub_141dc4cd0
// 地址: 0x141dc4cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if ((arg1[0xb].b & 0x10) != 0)
label_141dc4d0f:
    int64_t* rsi_1 = arg1[0x26]
    char rdi_1 = 0
    arg1[0x14] = 0
    arg1[0x1b] = 0
    int32_t var_68
    int512_t zmm1
    
    if (rsi_1 == 0)
    label_141dc4e4e:
        result = arg1[0x26]
        
        if (result != 0)
            void* rcx_6 = *(result + 0xc0)
            
            if (rcx_6 == 0)
                zmm1.o = *(result + 0x1d0)
                var_68 = zmm1.d
                uint128_t zmm0 = _mm_shuffle_ps(zmm1.o, zmm1.o, 0x55)
                zmm1.o = _mm_shuffle_ps(zmm1.o, zmm1.o, 0xaa)
                int32_t var_60_1 = zmm1.d
                int32_t var_64_1 = zmm0.d
                void var_58
                int64_t* rax_17 = sub_14200cdd0(&var_58, &var_68, arg1)
                void* rdi_2 = arg1[0x26]
                arg1[0xf] = *rax_17
                arg1[0x10].d = rax_17[1].d
                float zmm1_1[0x4] = *(rdi_2 + 0x1c0)
                uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rdi_2 + 0x180), zmm1_1, 4))
                var_68.o = zmm1_1
                
                if (temp0_4 != 0)
                    *(rdi_2 + 0x180) = zmm1_1
                    int64_t* rax_20 = sub_140adf5d0(&var_68, &var_58)
                    *(rdi_2 + 0x190) = *rax_20
                    *(rdi_2 + 0x198) = rax_20[1].d
                
                *(arg1 + 0x84) = *(rdi_2 + 0x190)
                *(arg1 + 0x8c) = *(rdi_2 + 0x198)
                int64_t* rax_24 = (*(*arg1 + 0x2f0))(arg1, &var_58)
                arg1[0xc] = *rax_24
                arg1[0xd].d = rax_24[1].d
                *(arg1 + 0x6c) = data_143dbb1f8.q
                result = zx.q(data_143dbb200)
                *(arg1 + 0x74) = result.d
            else
                result = sub_141f3ba40(rcx_6)
                arg1[0x14] = result
                
                if (result != 0)
                    void* rcx_7 = arg1[0x26]
                    int32_t rax_13 = *(rcx_7 + 0x124)
                    arg1[0x15] = *(rcx_7 + 0x11c)
                    arg1[0x16].d = rax_13
                    arg1[0x18] = *(rcx_7 + 0x128)
                    arg1[0x19].d = *(rcx_7 + 0x130)
                    int32_t rax_15 = *(rcx_7 + 0x13c)
                    *(arg1 + 0xb4) = *(rcx_7 + 0x134)
                    *(arg1 + 0xbc) = rax_15
                    arg1[0x1b] = *(rcx_7 + 0xc0)
                    result = *(rcx_7 + 0xc8)
                    *(arg1 + 0xcc) = result
            
            arg1[0x12].b &= 0xfd
    else
        void* rax_1 = sub_142577430()
        void* rdx_1 = rsi_1[2]
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            goto label_141dc4e4e
        
        int64_t arg_8 = 0
        
        if ((*(*rsi_1 + 0x3e8))(rsi_1, 0) == 0)
            goto label_141dc4e4e
        
        zmm1.o = zx.o(0)
        uint128_t var_38 = data_142d3f660
        int128_t var_28
        __builtin_memset(&var_28, 0, 0x19)
        int64_t var_48 = 0
        int32_t var_40_1 = 0
        arg_8 = 0
        sub_1422a1570(rsi_1, &var_48, 0, zmm1)
        int64_t* rax_6 = sub_14200cdd0(&var_68, &var_48, arg1)
        arg1[0xf] = *rax_6
        arg1[0x10].d = rax_6[1].d
        int32_t* rax_8 = sub_140adf5d0(&var_38, &var_68)
        *(arg1 + 0x84) = *rax_8
        int64_t zmm0_2 = var_28.q
        arg1[0x12].b &= 0xfe
        *(arg1 + 0x8c) = rax_8[2]
        int32_t rax_10 = var_28:8.d
        arg1[0xc] = zmm0_2
        arg1[0xd].d = rax_10
        *(arg1 + 0x6c) = var_28:0xc.q
        int64_t var_18
        *(arg1 + 0x74) = var_18:4.d
        char var_10
        arg1[0x12].b |= (var_10 & 1) | 2
        result = sub_141f1e460(rsi_1)
        
        if (result.b == 0)
            rdi_1 = 2
        
        arg1[0x12].b &= 0xfd
        arg1[0x12].b |= rdi_1
else
    result = arg1[0x26]
    
    if (result != 0 && *(result + 0xc0) != 0)
        goto label_141dc4d0f

return result
