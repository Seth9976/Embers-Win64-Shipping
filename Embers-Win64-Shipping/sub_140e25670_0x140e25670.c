// 函数: sub_140e25670
// 地址: 0x140e25670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0xef].b & 0x40) == 0)
    if (arg1[0x122] != 0)
        int64_t rcx = 0
        int64_t* rdi_1 = arg1[2]
        int64_t* rsi_1 = *(data_143e20d08 + 0x20)
        
        if (rdi_1 != 0)
            int32_t rax_2 = rdi_1[1].d
            
            if (rax_2 != 0)
                rdi_1[1].d = rax_2 + 1
                rax_2.b = 1
            
            if (rax_2.b == 0)
                rdi_1 = nullptr
            
            if (rdi_1 != 0)
                rcx = arg1[1]
        
        int64_t var_28 = rcx
        int64_t* var_20_1 = rdi_1
        
        if (rdi_1 != 0)
            int32_t rax_3 = rdi_1[1].d
            rdi_1[1].d = rax_3
            
            if (rax_3 == 0)
                (**rdi_1)(rdi_1)
                int32_t temp0_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp0_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        (*(*rsi_1 + 0x20))(rsi_1, &var_28)
    
    if (arg1[0xee].b == 1 && *(arg1 + 0x771) != 0)
        int64_t* rcx_4 = arg1[0x122]
        int64_t* rdi_2 = data_143e20d08
        float zmm6[0x4]
        
        if (rcx_4 == 0)
            zmm6 = 0x3f800000
        else
            (*(*rcx_4 + 0xf8))(rcx_4)
            zmm6 = arg2
        
        (*(*rdi_2 + 0x48))(rdi_2)
        bool cond:2_1 = data_143e24361 == 0
        arg2[0] = arg2[0] * zmm6[0]
        
        if (cond:2_1 || (*(arg1 + 0x29) & 2) != 0)
            *(arg1 + 0x29) |= 4
            sub_140e206f0(arg1, arg2, arg2)
        
        float zmm1[0x4] = arg1[0xf0].d
        void* rcx_7 = &data_143dbb1f0
        int64_t zmm2 = *(arg1 + 0x784)
        
        if (arg1[0x2c].b != 0)
            rcx_7 = &arg1[0x2b]
        
        float zmm5_1[0x4] = *rcx_7
        float zmm4_1[0x4] = *(rcx_7 + 4)
        zmm5_1[0] = zmm5_1[0] * 0.5f
        zmm1[0] = zmm1[0] - zmm5_1[0]
        zmm4_1[0] = zmm4_1[0] * 0.5f
        zmm2.d = zmm2.d f- zmm4_1[0]
        int64_t r8_1 = _mm_unpacklo_ps(zmm5_1, zmm4_1[0].q)[0].q
        sub_140e21b40(arg1, _mm_unpacklo_ps(zmm1, zmm2)[0].q, r8_1)
    
    int64_t* rdx_3 = arg1[0x122]
    int64_t* rcx_9 = rdx_3
    
    if (rdx_3 != 0 && (arg1[0xef].b & 0x10) != 0)
        (*(*rdx_3 + 0x40))()
        rcx_9 = arg1[0x122]
    
    if (rcx_9 != 0 && (arg1[0xef].b & 0x20) != 0)
        (*(*rcx_9 + 0x38))(rcx_9)

arg1[0xef].b |= 0x40
int64_t* rcx_10 = arg1[0x122]

if (rcx_10 == 0)
    return 

(*(*rcx_10 + 0x50))(rcx_10)

if ((arg1[0xef].b & 4) != 0)
    jump(*(*arg1[0x122] + 0x20))
