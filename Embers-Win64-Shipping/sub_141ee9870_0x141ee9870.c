// 函数: sub_141ee9870
// 地址: 0x141ee9870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result
int64_t rdx
result, rdx = (*(*arg1 + 0x5c0))()

if (result != 0)
    char rax_1 = arg1[0x2d].b
    
    if (rax_1 == 2)
        *(arg1 + 0x386) = rax_1
        rdx.b = 1
        int64_t rax_2 = *arg1
        *(arg1 + 0xcc) = 0
        (*(rax_2 + 0x768))(arg1, rdx)
    label_141ee990f:
        float var_28
        int64_t arg_8
        float zmm1[0x4]
        
        if (arg1[0x2d].b != 1)
            arg1[0x5e].d &= 0xfffffff8
            *(arg1 + 0x2f4) = 0
            memset(arg1 + 0x2fc, 0, 0x88)
            *(arg1 + 0x304) = 0x3f800000
            arg1[0x71].b &= 0xdf
            
            if (arg1[0x2d].b == 3)
                int32_t* rax_15 = (*(*arg1 + 0x648))(arg1, &var_28)
                *(arg1 + 0xc4) = *rax_15 f+ *(arg1 + 0xc4)
                zmm1 = rax_15[1]
                zmm1[0] = zmm1[0] f+ arg1[0x19].d
                arg1[0x19].d = zmm1[0]
                *(arg1 + 0xcc) = rax_15[2] f+ *(arg1 + 0xcc)
                int64_t* rcx_11 = arg1[0x29]
                (*(*rcx_11 + 0x7d8))(rcx_11)
            
            int64_t r9_2
            r9_2.b = 1
            arg_8 = 0
            (*(*arg1 + 0x6f0))(arg1, 0, 0, r9_2)
            
            if (arg1[0x2d].b == 0)
                int64_t rax_18 = *arg1
                *(arg1 + 0x124) &= 0xf7
                (*(rax_18 + 0x420))(arg1)
                int64_t* rcx_14 = arg1[0x29]
                *(arg1 + 0x124) |= 8
                (*(*rcx_14 + 0x7a8))(rcx_14)
                (*(*arg1 + 0x710))(arg1)
        else
            void* rax_7 = arg1[0x16]
            arg1[0x71].b |= 0x20
            *(arg1 + 0xcc) = 0
            *(arg1 + 0x386) = 1
            zmm1 = *(rax_7 + 0x1d0)
            int64_t rax_8 = *arg1
            float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            var_28 = zmm1[0]
            float var_20_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            float var_24_1 = temp0_1[0]
            (*(rax_8 + 0x8a0))(arg1, &var_28, &arg1[0x5e], 0, 0)
            (*(*arg1 + 0x5f0))(arg1)
            int64_t r9_1
            
            if (((arg1[0x5e].d).b & 3) != 3)
                r9_1.b = 1
                arg_8 = 0
                (*(*arg1 + 0x6f0))(arg1, 0, 0, r9_1)
            else
                r9_1.b = 1
                (*(*arg1 + 0x6f0))(arg1, sub_140d3c6e0(arg1 + 0x36c), *(arg1 + 0x374), r9_1)
        
        if (arg1[0x2d].b == 3 && arg2 != 3)
            void* rbx_1 = arg1[0x25]
            
            if (rbx_1 != 0)
                void* rax_22 = sub_140d21950(rbx_1, sub_14255c120())
                
                if (rax_22 != 0)
                    int64_t rdx_5 = *rax_22
                    (*(rdx_5 + 0x18))(rax_22, rdx_5)
        
        int64_t* rcx_18 = arg1[0x29]
        return (*(*rcx_18 + 0x828))(rcx_18, zx.q(arg2), zx.q(arg3))
    
    if (arg2 != 2)
        goto label_141ee990f
    
    char rax_4
    
    if (rax_1 != *(arg1 + 0x384))
        rax_4 = (*(*arg1 + 0x550))(arg1)
    
    if (rax_1 != *(arg1 + 0x384) && rax_4 == 0)
        (*(*arg1 + 0x768))(arg1, 0)
        goto label_141ee990f
    
    result = (*(*arg1 + 0x770))(arg1)
    
    if (result != 0)
        goto label_141ee990f

return result
