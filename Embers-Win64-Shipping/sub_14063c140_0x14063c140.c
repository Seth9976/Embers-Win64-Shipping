// 函数: sub_14063c140
// 地址: 0x14063c140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg3 == 0)
    result.b = 0
else
    void* rax = sub_1424890f0()
    void* r8 = arg3[2]
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(r8 + 0x38))
        result.b = 0
    else if (*(*(r8 + 0x30) + (result << 3)) != rax + 0x30)
        result.b = 0
    else
        int64_t* rcx = arg3[0x50]
        
        if (rcx == 0)
            result.b = 0
        else if ((*(*rcx + 0x428))(rcx, arg6).b == 0)
            result.b = 0
        else
            int64_t* rcx_1 = arg3[0x50]
            void var_18
            int64_t* rax_3 = (*(*rcx_1 + 0x410))(rcx_1, &var_18, arg6)
            *arg1 = *rax_3
            arg1[1].d = rax_3[1].d
            int32_t* rax_5 = sub_140ae4210(arg4, &var_18)
            float zmm0_2[0x4] = arg5
            int64_t zmm1_1 = zmm0_2[0].q
            zmm0_2[0] = zmm0_2[0] f* rax_5[2]
            zmm0_2[0] = zmm0_2[0] f* *rax_5
            zmm1_1.d = zmm1_1.d f* rax_5[1]
            zmm0_2[0] = zmm0_2[0] f+ arg1[1].d
            zmm0_2[0] = zmm0_2[0] f+ *arg1
            zmm1_1.d = zmm1_1.d f+ *(arg1 + 4)
            result = zx.q(zmm0_2[0])
            *arg2 = (_mm_unpacklo_ps(zmm0_2, zmm1_1)).q
            arg2[1].d = result.d
            
            if (arg7 == 0)
                result.b = 1
            else if ((*(*arg3 + 0x150))(arg3) == 0)
                result.b = 0
            else
                void arg_18
                sub_140ae16d0(arg8, &arg_18, 1)
                result.b = 1

return result
