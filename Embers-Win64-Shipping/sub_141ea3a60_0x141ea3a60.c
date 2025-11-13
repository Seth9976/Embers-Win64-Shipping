// 函数: sub_141ea3a60
// 地址: 0x141ea3a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg3
uint32_t rax_4
uint32_t zmm0[0x4]

if (arg2 == 0 || *(arg2 + 0x14f) != 2)
    zmm0 = zx.o(data_143dbb1f8.q)
    rax_4 = data_143dbb200
else
    arg3.b = 1
    void* rax_2 = (*(*arg2 + 0x6a8))(arg2, rbx, arg3)
    
    if (rax_2 == 0)
        zmm0 = zx.o(data_143dbb1f8.q)
        rax_4 = data_143dbb200
    else
        int32_t var_58
        sub_142218a40(rax_2, &var_58)
        int32_t var_54
        int32_t var_50
        
        if (_mm_and_ps(var_58, 0x7fffffff)[0] f> 9.99999975e-05f)
        label_141ea3b0c:
            int32_t var_48
            float var_38[0x4]
            
            if (sub_141ea3bd0(arg2, rbx, &var_48, &var_38) == 0)
                zmm0 = zx.o(data_143dbb1f8.q)
                rax_4 = data_143dbb200
            else
                uint32_t zmm3[0x4] = *(arg4 + 8)
                int32_t var_40
                zmm3[0] = zmm3[0] f- var_40
                uint32_t zmm6[0x4] = *(arg4 + 4)
                int32_t var_44
                zmm6[0] = zmm6[0] f- var_44
                int128_t zmm7
                zmm7.d = (*arg4).d f- var_48
                zmm3[0] = zmm3[0] f* var_54
                zmm3[0] = zmm3[0] f* var_58
                zmm6[0] = zmm6[0] f* var_50
                int64_t zmm2_1 = zmm7.q
                zmm6[0] = zmm6[0] f* var_58
                zmm7.d = zmm7.d f* var_54
                zmm3[0] = zmm3[0] f- zmm6[0]
                zmm2_1.d = zmm2_1.d f* var_50
                zmm6[0] = zmm6[0] f- zmm7.d
                zmm2_1.d = zmm2_1.d f- zmm3[0]
                rax_4 = zmm6[0]
                zmm0 = _mm_unpacklo_ps(zmm3, zmm2_1)
        else
            if (_mm_and_ps(var_54, 0x7fffffff)[0] f> 9.99999975e-05f)
                goto label_141ea3b0c
            
            if (not(_mm_and_ps(var_50, 0x7fffffff)[0] f<= 9.99999975e-05f))
                goto label_141ea3b0c
            
            zmm0 = zx.o(data_143dbb1f8.q)
            rax_4 = data_143dbb200

*arg1 = zmm0.q
arg1[1].d = rax_4
return arg1
