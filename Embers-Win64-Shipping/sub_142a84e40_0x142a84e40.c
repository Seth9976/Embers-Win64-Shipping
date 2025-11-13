// 函数: sub_142a84e40
// 地址: 0x142a84e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_ae = 1
char var_76 = 1
int16_t var_b0 = 0x38
int16_t var_78 = 0x38
int32_t* r12 = arg3
int128_t* result_3 = arg2
int128_t var_a8
__builtin_memset(&var_a8, 0, 0x30)
int128_t var_70
__builtin_memset(&var_70, 0, 0x30)

if (arg4 != 0 && *arg4 s<= 0)
    if (arg1 != 0)
        void* rcx = arg1[3].q
        int32_t arg_20
        int32_t rdx
        
        if (*(*(rcx + 0x20) + 0x70) != 0)
            arg_20 = 0
            (*(*(rcx + 0x20) + 0x70))(arg1, 0, &arg_20)
            
            if (*arg4 s> 0)
                return nullptr
            
            rdx = arg_20
            goto label_142a84f05
        
        rdx = 0x120
        arg_20 = 0x120
    label_142a84f05:
        int32_t arg_10
        int32_t rcx_2
        
        if (r12 != 0)
            rcx_2 = *r12
            arg_10 = rcx_2
            
            if (rcx_2 s<= 0)
                *r12 = rdx
                return nullptr
        else
            rcx_2 = 1
            r12 = &arg_10
            arg_10 = 1
        
        if ((result_3.b & 7) != 0)
            if (rcx_2 s<= 8 - (result_3.d & 7))
                rcx_2 = 1
            else
                rcx_2 -= 8 - (result_3.d & 7)
                result_3 += sx.q(8 - (result_3.d & 7))
            
            arg_10 = rcx_2
        
        int128_t* result
        int128_t* result_4
        
        if (rcx_2 s< rdx || result_3 == 0)
            int128_t* result_1 = sub_142a7dd00(sx.q(rdx))
            result_4 = result_1
            result = result_1
            
            if (result_1 != 0)
                rdx = arg_20
                *arg4 = 0xffffff82
                *r12 = rdx
                goto label_142a84fac
            
            *arg4 = 7
        else
            result = result_3
            result_4 = nullptr
        label_142a84fac:
            memset(result, 0, sx.q(rdx))
            int128_t* result_2 = result
            int128_t* rcx_5 = arg1
            int64_t i_1 = 2
            int64_t i
            
            do
                result_2 = &result_2[8]
                int128_t zmm0_1 = *rcx_5
                rcx_5 = &rcx_5[8]
                result_2[-8] = zmm0_1
                result_2[-7] = rcx_5[-7]
                result_2[-6] = rcx_5[-6]
                result_2[-5] = rcx_5[-5]
                result_2[-4] = rcx_5[-4]
                result_2[-3] = rcx_5[-3]
                result_2[-2] = rcx_5[-2]
                result_2[-1] = rcx_5[-1]
                i = i_1
                i_1 -= 1
            while (i != 1)
            *result_2 = *rcx_5
            result_2[1] = rcx_5[1]
            *(result + 0x3d) = 0
            
            if (*(arg1 + 0x28) != arg1 + 0x88)
                int128_t* rax_8 = sub_142a7dd00(0x40)
                *(result + 0x28) = rax_8
                
                if (rax_8 != 0)
                    int128_t* rax_9 = *(arg1 + 0x28)
                    *rax_8 = *rax_9
                    rax_8[1] = rax_9[1]
                    rax_8[2] = rax_9[2]
                    rax_8[3] = rax_9[3]
                    goto label_142a85084
            else
                *(result + 0x28) = result + 0x88
            label_142a85084:
                int64_t rax_11 = *(*(arg1[3].q + 0x20) + 0x70)
                
                if (rax_11 != 0)
                    result = rax_11(arg1, result, r12, arg4)
                
                if (result != 0 && *arg4 s<= 0)
                    void* rcx_9 = arg1[3].q
                    
                    if (*(rcx_9 + 0x19) != 0)
                        sub_142a920c0(rcx_9)
                    
                    if (result == result_3)
                        *(result + 0x3d) = 1
                    
                    int64_t rcx_10 = arg1[2].q
                    var_70.q = result
                    var_a8.q = result
                    int32_t var_b8 = 0
                    (*(arg1 + 8))(rcx_10, &var_b0, 0, 0, 5, &var_b8)
                    int64_t rcx_11 = *(arg1 + 0x18)
                    int32_t* var_d0_1
                    var_d0_1.d = 5
                    var_b8 = 0
                    (*arg1)(rcx_11, &var_78, 0, 0, 0, var_d0_1, &var_b8)
                    return result
                
                if (result_4 != 0)
                    int64_t rcx_12 = *(result_4 + 0x28)
                    
                    if (rcx_12 != result_4 + 0x88)
                        sub_142a7dcd0(rcx_12)
            
            sub_142a7dcd0(result_4)
        return nullptr
    
    *arg4 = 1

return 0
