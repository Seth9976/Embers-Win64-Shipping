// 函数: sub_1421f8b30
// 地址: 0x1421f8b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*(arg3 + 4) == *(arg1 + 0x34))
    result = zx.q(*(arg1 + 0x30))

if (*(arg3 + 4) == *(arg1 + 0x34) && (result.b == 0 || zx.d(result.b) == *arg3))
    int32_t rcx = *arg3
    int512_t zmm1
    
    if (rcx == 1)
    label_1421f8ba6:
        zmm1.o = arg3[3]
    label_1421f8bb5:
        int64_t zmm0_1
        int128_t zmm1_1
        int128_t zmm6_1
        zmm0_1, result, zmm1_1, zmm6_1 = sub_141fe5610(arg1 + 0x40, zmm1, 0, nullptr)
        zmm0_1.d = zmm0_1.d f* 2f
        zmm0_1.d = zmm0_1.d f+ 0.5f
        int32_t rsi_2 = int.d(zmm0_1.d) s>> 1
        
        if (rsi_2 s> 0)
            char rdx = (*(arg1 + 0x70)).b
            void* rcx_6 = &arg2[0xa]
            
            if ((rdx & 2) == 0)
                rcx_6 = &arg3[4]
            
            int32_t rax_1 = *(rcx_6 + 8)
            int64_t var_38 = *rcx_6
            int32_t var_30_1 = rax_1
            int32_t var_68
            int64_t var_58
            int32_t var_50_1
            
            if ((rdx & 4) == 0)
                var_58 = data_143dbb1f8.q
                var_50_1 = data_143dbb200
            else
                int64_t var_60_1 = 0
                var_68 = 0
                void var_28
                int64_t* rax_2
                rax_2, zmm6_1 = sub_141fe56b0(arg1 + 0x78, &var_28, arg3[3], zmm1_1, 0, nullptr)
                zmm0_1.d = (*rax_2).d f* arg3[7]
                zmm1_1.d = (*(rax_2 + 4)).d f* arg3[8]
                var_58.d = zmm0_1.d
                zmm0_1.d = rax_2[1].d.d f* arg3[9]
                var_58:4.d = zmm1_1.d
                var_50_1 = zmm0_1.d
            
            int64_t rax_8 = *arg2
            var_68.q = &var_38
            int64_t var_48 = var_58
            (*(rax_8 + 0xc0))(arg2, zmm6_1, 0, zx.q(rsi_2), var_68, &var_48, var_58, var_50_1, 
                var_48, var_50_1)
    else
        if (rcx == 2)
            if ((*(arg1 + 0x70) & 1) == 0)
                zmm1.o = arg3[3]
            else
                zmm1.o = arg3[0xe]
            
            goto label_1421f8bb5
        
        if (rcx == 3)
            int64_t i = *(arg3 + 0x68)
            
            if (i == 0 || *(arg1 + 0xc8) == 0)
            label_1421f8cab:
                
                if ((*(arg1 + 0x70) & 1) == 0)
                    goto label_1421f8ba6
                
                zmm1.o = arg3[0xe]
                goto label_1421f8bb5
            
            int64_t* rcx_8 = *(arg1 + 0xc0)
            void* r8 = &rcx_8[sx.q(*(arg1 + 0xc8))]
            int32_t rcx_9
            
            if (rcx_8 == r8)
            label_1421f8c96:
                rcx_9 = 0
            else
                while (*rcx_8 != i)
                    rcx_8 = &rcx_8[1]
                    
                    if (rcx_8 == r8)
                        goto label_1421f8c96
                
                rcx_9 = 1
            
            if (rcx_9 == (not.d(*(arg1 + 0xd0)) & 1))
                goto label_1421f8cab
        else if (rcx == 4 || rcx == 5)
            goto label_1421f8ba6
    result.b = 1
else
    result.b = 0

return result
