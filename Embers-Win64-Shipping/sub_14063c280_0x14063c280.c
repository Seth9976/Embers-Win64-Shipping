// 函数: sub_14063c280
// 地址: 0x14063c280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result

if (arg3 == 0)
    result.b = 0
else if ((*(*arg3 + 0x428))(arg3, arg6).b == 0)
    result.b = 0
else
    int64_t var_38
    int64_t* rax_2 = (*(*arg3 + 0x410))(arg3, &var_38, arg6)
    *arg1 = *rax_2
    arg1[1].d = rax_2[1].d
    result = sub_140ae4210(arg4, &var_38)
    float zmm2_1 = arg5 f* result[1] f+ *(arg1 + 4)
    float zmm0_1 = arg5 f* result[2] f+ arg1[1].d
    *arg2 = arg5 f* *result f+ *arg1
    arg2[1] = zmm2_1
    arg2[2] = zmm0_1
    
    if (arg7 == 0)
        result.b = 1
    else
        int32_t var_28_1 = 0xffffffff
        var_38 = 0
        int32_t var_30_1 = 0
        sub_140d3cc80(sub_14256a090(), &var_38, 1, 0x10, 0)
        int32_t rcx_5 = var_28_1 + 1
        int64_t rdx_4 = var_38
        int32_t var_28_2 = rcx_5
        
        if (rcx_5 s< var_30_1)
            while (*(rdx_4 + (sx.q(rcx_5) << 3)) == 0)
                result = zx.q(rcx_5 + 1)
                int32_t var_28_3 = result.d
                rcx_5 = result.d
                
                if (result.d s>= var_30_1)
                    break
        
        if (rcx_5 s< 0 || rcx_5 s>= var_30_1)
            goto label_14063c3ec
        
        int64_t* rcx_6 = *(rdx_4 + (sx.q(rcx_5) << 3))
        
        if ((*(*rcx_6 + 0x150))(rcx_6) == 0)
            rdx_4 = var_38
        label_14063c3ec:
            
            if (rdx_4 == 0)
                result.b = 0
            else
                sub_140a74f90(rdx_4)
                result.b = 0
        else
            void arg_18
            sub_140ae16d0(arg8, &arg_18, 1)
            int64_t rcx_8 = var_38
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            result.b = 1

return result
