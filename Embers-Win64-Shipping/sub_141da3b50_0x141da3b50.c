// 函数: sub_141da3b50
// 地址: 0x141da3b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
uint64_t var_58 = __security_cookie ^ &var_158
uint64_t result

if (*arg4 u>= 1)
    (*(*arg2 + 0x178))(arg2, 0)
    int64_t* rcx_1 = arg2[1]
    int32_t var_110 = 0x1ca2e27f
    int32_t* rdx = *rcx_1
    
    if (&rdx[1] u> rcx_1[1])
        int32_t* rdx_1 = &var_110
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_1, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_1, 4)
    else
        var_110 = *rdx
        *rcx_1 += 4
    
    int64_t* rcx_3 = arg2[1]
    int32_t* rdx_2 = *rcx_3
    
    if (&rdx_2[1] u<= rcx_3[1])
        *arg4 = *rdx_2
        int64_t* rax_7 = arg2[1]
        *rax_7 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg4, arg5)
    else
        (*(*arg2 + 0x150))(arg2, arg4, 4)
    
    int64_t* rcx_5 = arg2[1]
    int32_t* rdx_4 = *rcx_5
    
    if (&rdx_4[1] u<= rcx_5[1])
        *arg3 = *rdx_4
        int64_t* rax_11 = arg2[1]
        *rax_11 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg3, arg5)
    else
        (*(*arg2 + 0x150))(arg2, arg3, 4)
    
    int64_t* rcx_7 = arg2[1]
    int32_t* r8 = *rcx_7
    
    if (&r8[1] u<= rcx_7[1])
        arg3[1] = *r8
        int64_t* rax_15 = arg2[1]
        *rax_15 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg3[1], arg5)
    else
        (*(*arg2 + 0x150))(arg2, &arg3[1], 4)
    
    int64_t* rcx_9 = arg2[1]
    int32_t* r8_1 = *rcx_9
    
    if (&r8_1[1] u<= rcx_9[1])
        arg3[2] = *r8_1
        int64_t* rax_19 = arg2[1]
        *rax_19 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg3[2], arg5)
    else
        (*(*arg2 + 0x150))(arg2, &arg3[2], 4)
    
    uint64_t rsi_1 = 0
    int16_t* var_108 = nullptr
    int32_t var_100_1 = 0
    int16_t* rdx_9
    int512_t zmm1
    rdx_9, zmm1 = sub_141d9e000(arg1, &arg3[4], &var_108)
    uint64_t var_120
    int32_t var_118
    int512_t zmm1_1
    
    if (*arg4 u>= 5)
    label_141da3e7c:
        rdx_9.b = 1
        uint8_t rbx_3 = arg2[5].b u>> 6 & 1
        (*(*arg2 + 0xd0))(arg2, rdx_9)
        zmm1_1 = sub_140a1d9d0(arg2, &var_108, zmm1)
        (*(*arg2 + 0xd0))(arg2, zx.q(rbx_3))
    else if (var_100_1 == 0)
    label_141da3d53:
        
        if (arg4[4] != 0)
            int16_t* rcx_13 = *(arg4 + 8)
            int16_t i = *rcx_13
            
            while (i != 0)
                if (i u> 0x7f)
                    goto label_141da3e7c
                
                i = rcx_13[1]
                rcx_13 = &rcx_13[1]
        
        zmm1_1 = sub_140a1d9d0(arg2, &var_108, zmm1)
    else
        rdx_9 = var_108
        void* rcx_12 = rdx_9
        int16_t i_1 = *rdx_9
        
        if (i_1 == 0)
            goto label_141da3d53
        
        while (i_1 u<= 0x7f)
            i_1 = *(rcx_12 + 2)
            rcx_12 += 2
            
            if (i_1 == 0)
                goto label_141da3d53
        
        int16_t i_2
        int16_t* rcx_15
        
        if (arg4[4] != 0)
            rcx_15 = *(arg4 + 8)
            i_2 = *rcx_15
        
        if (arg4[4] != 0 && i_2 != 0)
            while (i_2 u<= 0x7f)
                i_2 = rcx_15[1]
                rcx_15 = &rcx_15[1]
                
                if (i_2 == 0)
                    goto label_141da3dc0
            
            goto label_141da3d53
        
    label_141da3dc0:
        void var_f8
        int512_t zmm1_2 = sub_1408f2b40(&var_f8, rdx_9)
        int32_t rdx_11 = 0
        var_118 = 0
        int32_t rcx_17 = 0
        int32_t var_114_1 = 0
        var_120 = 0
        char* var_70
        
        if (var_70 != 0 && *var_70 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (var_70[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_120, rbx_1.d + 1)
                rcx_17 = var_114_1
                rdx_11 = var_118
            
            int32_t rax_21 = rbx_1.d + 1 + rdx_11
            var_118 = rax_21
            
            if (rax_21 s> rcx_17)
                sub_140594770(&var_120)
            
            zmm1_2 = sub_1405a7220(var_120, rbx_1.d + 1, var_70, rbx_1.d + 1, 0x3f)
        
        int64_t var_78
        
        if (var_78 != 0)
            zmm1_2 = sub_140a74f90(var_78)
        
        zmm1_1 = sub_140a1d9d0(arg2, &var_120, zmm1_2)
        uint64_t rcx_23 = var_120
        
        if (rcx_23 != 0)
            zmm1_1 = sub_140a74f90(rcx_23)
    
    int64_t* rcx_27 = arg2[1]
    int32_t rax_24
    rax_24.b = arg3[0xc].b != 0
    int32_t var_10c = rax_24
    int32_t* rdx_17 = *rcx_27
    
    if (&rdx_17[1] u> rcx_27[1])
        int32_t* rdx_18 = &var_10c
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_18, zmm1_1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_18, 4)
    else
        var_10c = *rdx_17
        *rcx_27 += 4
    
    int32_t rax_28 = *arg4
    
    if (rax_28 u>= 3)
        sub_14090dc80(arg2, &arg3[8], zmm1_1)
        rax_28 = *arg4
    
    int32_t var_128
    
    if (rax_28 u>= 2)
        int32_t rcx_31
        rcx_31.b = (*(*arg1 + 0x198))(arg1) != 0
        var_128 = rcx_31
        int64_t* rcx_32 = arg2[1]
        int32_t* rdx_20 = *rcx_32
        
        if (&rdx_20[1] u> rcx_32[1])
            int32_t* rdx_21 = &var_128
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_21, zmm1_1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_21, 4)
        else
            var_128 = *rdx_20
            *rcx_32 += 4
    
    if (*arg4 u>= 6)
        int32_t rcx_35
        rcx_35.b = (*(*arg1 + 0x1b8))(arg1) != 0
        var_128 = rcx_35
        int64_t* rcx_36 = arg2[1]
        int32_t* rdx_22 = *rcx_36
        
        if (&rdx_22[1] u> rcx_36[1])
            int32_t* rdx_23 = &var_128
            
            if ((*(arg2 + 0x29) & 0x20) != 0)
                sub_140b54070(arg2, rdx_23, zmm1_1)
            else
                (*(*arg2 + 0x150))(arg2, rdx_23, 4)
        else
            var_128 = *rdx_22
            *rcx_36 += 4
        
        var_120 = 0
        var_118.q = 0
        
        if (arg3[0xc].b != 0)
            int64_t count = sx.q(arg3[0x10])
            int32_t var_118_1 = count.d
            
            if (count.d s> 0)
                sub_1405daba0(&var_120)
                rsi_1 = var_120
            
            memset(rsi_1, 0, count)
        else if (&var_120 != &arg3[0xe])
            uint32_t count_1 = arg3[0x10]
            int64_t rsi_2 = *(arg3 + 0x38)
            uint32_t count_2 = count_1
            
            if (count_1 != 0)
                sub_1405da9e0(&var_120, count_1, 0)
                memcpy(var_120, rsi_2, count_1)
        
        sub_1407e5270(arg2, &var_120, zmm1_1)
        uint64_t rcx_43 = var_120
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
    
    int16_t* rcx_44 = var_108
    char result_1 = not.b(*(arg2 + 0x29)) & 1
    
    if (rcx_44 != 0)
        sub_140a74f90(rcx_44)
    
    result = zx.q(result_1)
else
    result.b = 0

__security_check_cookie(var_58 ^ &var_158)
return result
