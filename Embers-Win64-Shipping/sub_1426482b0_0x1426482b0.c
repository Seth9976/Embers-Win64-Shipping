// 函数: sub_1426482b0
// 地址: 0x1426482b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1
void* r9 = *(result + 0x50)

if (r9 != 0 && (*(r9 + 0x4a4) & 1) != 0)
    int32_t* rdx_3
    
    if (*(r9 + 0x458) == *(r9 + 0x484))
    label_14264835e:
        rdx_3 = nullptr
    else
        void* r8_1 = r9 + 0x488
        void* rdx = *(r8_1 + 8)
        int64_t r10_1 = sx.q(*(arg2 + 0xc))
        
        if (rdx != 0)
            r8_1 = rdx
        
        int32_t rax_1 = *(r8_1 + (((sx.q(*(r9 + 0x498)) - 1) & r10_1) << 2))
        
        if (rax_1 == 0xffffffff)
        label_14264835e_1:
            rdx_3 = nullptr
        else
            while (true)
                rdx_3 = (sx.q(rax_1) << 5) + *(r9 + 0x450)
                
                if (*rdx_3 == r10_1.d)
                    break
                
                rax_1 = rdx_3[6]
                
                if (rax_1 == 0xffffffff)
                    goto label_14264835e_2
            
            if (rax_1 == 0xffffffff)
            label_14264835e_2:
                rdx_3 = nullptr
    
    result = &rdx_3[2]
    
    if (rdx_3 == 0)
        result = nullptr
    
    if (result == 0 && arg2 != -0x118 && *(arg2 + 0x120) s> 0)
        void var_48
        sub_1426421c0(&var_48, arg2)
        void* var_28
        result = sub_142681440(arg2 + 0x118, var_28)
        uint32_t zmm1_1[0x4] = *(var_28 + 0x3c)
        zmm1_1[0] = zmm1_1[0] f- *(var_28 + 0x30)
        uint32_t zmm3[0x4] = *(var_28 + 0x40)
        uint32_t zmm2[0x4] = *(var_28 + 0x44)
        zmm3[0] = zmm3[0] f- *(var_28 + 0x34)
        zmm2[0] = zmm2[0] f- *(var_28 + 0x38)
        zmm1_1[0] = zmm1_1[0] f* 0.5f
        zmm3[0] = zmm3[0] f* 0.5f
        zmm2[0] = zmm2[0] f* 0.5f
        
        if (_mm_and_ps(zmm1_1, 0x7fffffff)[0] f> 9.99999975e-05f)
            sub_142648820(*(*arg1 + 0x50), arg2, nullptr, var_28 + 0x30, &var_48)
            result = sub_142647430(arg1[1], var_28 + 0x30, 3)
        else if (_mm_and_ps(zmm3, 0x7fffffff)[0] f> 9.99999975e-05f)
            sub_142648820(*(*arg1 + 0x50), arg2, nullptr, var_28 + 0x30, &var_48)
            result = sub_142647430(arg1[1], var_28 + 0x30, 3)
        else if (not(_mm_and_ps(zmm2, 0x7fffffff)[0] f<= 9.99999975e-05f))
            sub_142648820(*(*arg1 + 0x50), arg2, nullptr, var_28 + 0x30, &var_48)
            result = sub_142647430(arg1[1], var_28 + 0x30, 3)
        
        int64_t* var_20
        
        if (var_20 != 0)
            result = zx.q(var_20[1].d)
            var_20[1].d -= 1
            
            if (result.d == 1)
                result = (**var_20)(var_20)
                int32_t rdi_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    return (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return result
