// 函数: sub_141dce120
// 地址: 0x141dce120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = *(arg1 + 0x58)
uint64_t i

if ((rdx & 8) == 0)
    i = arg1
    
    do
        if (i == arg3)
            goto label_141dce38f
        
        i = *(i + 0xe0)
    while (i != 0)
    
    i = arg1
    
    do
        if (i == arg2)
            goto label_141dce38f
        
        i = *(i + 0xe0)
    while (i != 0)

if ((rdx & 8) != 0 || arg1 == arg3 || arg3 == *(arg1 + 0x118))
label_141dce38f:
    i.b = 1
else
    if ((*(arg1 + 0x59) & 2) != 0)
        int64_t* rcx = *(arg1 + 0xe0)
        
        if (rcx != 0)
            return (*(*rcx + 0x460))(rcx, arg2)
    
    if ((rdx & 4) != 0)
        i.b = 0
    else
        int64_t* rdx_2 = *(arg1 + 0x130)
        
        if (rdx_2 != 0)
            void* rbp_1 = rdx_2[0x18]
            
            if (rbp_1 != 0 && *(rbp_1 + 0xa0) != 0)
                int64_t* rcx_3
                
                if (rbp_1 != 0)
                    void* rax_1 = sub_142591550()
                    void* rdx_3 = *(rbp_1 + 0x10)
                    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
                    
                    if (rax_2.d s<= *(rdx_3 + 0x38)
                            && *(*(rdx_3 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
                        rcx_3 = *((*(arg1 + 0x130))[0x18] + 0xa0)
                        return (*(*rcx_3 + 0x460))(rcx_3, arg2, arg3, arg4)
                    
                    rdx_2 = *(arg1 + 0x130)
                
                if (*(rdx_2[0x18] + 0xa0) == *(arg1 + 0xe0))
                    rcx_3 = *(rdx_2[0x18] + 0xa0)
                    return (*(*rcx_3 + 0x460))(rcx_3, arg2, arg3, arg4)
        
        if ((*(arg1 + 0x58) & 0x20) == 0)
            if (*(arg1 + 0x130) == 0)
                i.b = 0
            else
            label_141dce2b5:
                int64_t* rax_7 = sub_1424b0d70()
                i = rax_7[0x23]
                
                if (i == 0)
                    int64_t rdx_5 = *rax_7
                    (*(rdx_5 + 0x390))(rax_7, rdx_5)
                    i = rax_7[0x23]
                
                float temp0_3[0x4]
                
                if (*(i + 0x2c1) != 0)
                    void* rax_8 = *(arg1 + 0x130)
                    int64_t var_18
                    float var_10_1
                    float zmm1[0x4]
                    
                    if (rax_8 == 0)
                        var_18 = data_143dbb1f8.q
                        var_10_1 = data_143dbb200
                    else
                        zmm1 = *(rax_8 + 0x1d0)
                        var_18.d = zmm1[0]
                        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        var_10_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                        var_18:4.d = temp0_1[0]
                    
                    float zmm0_1[0x4] = zx.o(var_18)
                    temp0_3 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                    zmm1 = zmm0_1
                    temp0_3[0] = temp0_3[0] f- arg4[1]
                    zmm1[0] = zmm1[0] f- *arg4
                    zmm0_1 = var_10_1
                    zmm0_1[0] = zmm0_1[0] f- arg4[2]
                    temp0_3[0] = temp0_3[0] * temp0_3[0]
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                    temp0_3[0] = temp0_3[0] + zmm1[0]
                    temp0_3[0] = temp0_3[0] + zmm0_1[0]
                
                if (*(i + 0x2c1) != 0 && temp0_3[0] f>= *(arg1 + 0x100))
                    i.b = 0
                else
                    i.b = 1
        else if (rdx_2 == 0)
            i.b = 0
        else
            if ((*(*rdx_2 + 0x4c8))(rdx_2).d != 0 && *(arg1 + 0x130) != 0)
                goto label_141dce2b5
            
            i.b = 0

return i
