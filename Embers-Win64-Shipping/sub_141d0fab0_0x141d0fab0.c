// 函数: sub_141d0fab0
// 地址: 0x141d0fab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t rax_4
int64_t* result
int64_t rcx_1

if ((arg2[5].b & 1) != 0)
    int64_t rax_2 = 0x3d
    
    if (arg3 s< 7)
        rax_2 = 0x2d
    
    int64_t rbx_1 = rax_2 + 0xa0
    
    if (arg3 s< 8)
        rbx_1 = rax_2
    
    rax_4 = (*(*arg2 + 0x20))(arg2)
    rcx_1 = rbx_1 + 1
    
    if (arg3 s< 9)
        rcx_1 = rbx_1
    
    result = (*(*arg2 + 0x28))(arg2)

if ((arg2[5].b & 1) != 0 && result s< rax_4 + rcx_1)
    *arg1 = 0
else
    if ((arg2[5].b & 2) != 0 || arg3 s>= 7)
        sub_1409ac860(arg2, &arg1[0xc], arg4)
    
    int64_t* rcx_4 = arg2[1]
    int32_t i = 1
    char* rdx_1 = *rcx_4
    
    if (&rdx_1[1] u> rcx_4[1])
        (*(*arg2 + 0x150))(arg2, &arg1[0xb], 1)
    else
        arg1[0xb].b = *rdx_1
        int64_t* rax_8 = arg2[1]
        *rax_8 += 1
    
    int64_t* rcx_6 = arg2[1]
    int32_t* rdx_3 = *rcx_6
    
    if (&rdx_3[1] u<= rcx_6[1])
        *arg1 = *rdx_3
        result = arg2[1]
        *result += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, arg1, arg4)
    else
        result = (*(*arg2 + 0x150))(arg2, arg1, 4)
    
    if (*arg1 == 0x5a6f12e1)
        int64_t* rcx_8 = arg2[1]
        int32_t* rdx_5 = *rcx_8
        
        if (&rdx_5[1] u<= rcx_8[1])
            arg1[1] = *rdx_5
            int64_t* rax_15 = arg2[1]
            *rax_15 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, &arg1[1], arg4)
        else
            (*(*arg2 + 0x150))(arg2, &arg1[1], 4)
        
        sub_14090dc80(arg2, &arg1[2], arg4)
        sub_14090dc80(arg2, &arg1[4], arg4)
        sub_140b31010(arg2, &arg1[6])
        int32_t r14_1 = 0
        
        if ((arg2[5].b & 1) != 0)
            int32_t rax_17 = arg1[1]
            
            if (rax_17 s< 4)
                arg1[0xb].b = 0
            
            if (rax_17 s< 7)
                *(arg1 + 0x38) = 0
                *(arg1 + 0x30) = 0
        
        if (arg1[1] s>= 9)
            int64_t* rcx_13 = arg2[1]
            char* r8 = *rcx_13
            
            if (&r8[1] u> rcx_13[1])
                (*(*arg2 + 0x150))(arg2, arg1 + 0x2d, 1)
            else
                *(arg1 + 0x2d) = *r8
                int64_t* rax_20 = arg2[1]
                *rax_20 += 1
        
        int32_t var_188
        
        if (arg1[1] s< 8)
            int32_t* rax_22 = sub_140b5e500(&var_188, 0x101)
            int64_t rbx_3 = sx.q(arg1[0x12])
            int32_t rax_23 = (rbx_3 + 1).d
            var_188 = *rax_22
            int32_t var_184_1 = 0
            arg1[0x12] = rax_23
            
            if (rax_23 s> arg1[0x13])
                sub_1405a4d70(&arg1[0x10])
            
            *(*(arg1 + 0x40) + (rbx_3 << 3)) = var_188.q
            int32_t* rax_25 = sub_140b5e500(&var_188, 0x102)
            int64_t rbx_4 = sx.q(arg1[0x12])
            int32_t rax_26 = (rbx_4 + 1).d
            var_188 = *rax_25
            int32_t var_184_2 = 0
            arg1[0x12] = rax_26
            
            if (rax_26 s> arg1[0x13])
                sub_1405a4d70(&arg1[0x10])
            
            *(*(arg1 + 0x40) + (rbx_4 << 3)) = var_188.q
            sub_140b58260(&var_188, u"Oodle", 1)
            int64_t rbx_5 = sx.q(arg1[0x12])
            int32_t rax_28 = (rbx_5 + 1).d
            arg1[0x12] = rax_28
            
            if (rax_28 s> arg1[0x13])
                sub_1405a4d70(&arg1[0x10])
            
            result = var_188.q
            *(*(arg1 + 0x40) + (rbx_5 << 3)) = result
        else
            void var_d8
            
            if ((arg2[5].b & 1) == 0)
                memset(&var_d8, 0, 0xa0)
                
                if (arg1[0x12] s> 1)
                    do
                        int64_t* rax_33 = sub_140b63b70(*(arg1 + 0x40) + (sx.q(i) << 3), &var_188)
                        int16_t* rdx_18
                        
                        if (rax_33[1].d == 0)
                            rdx_18 = &data_142d40450
                        else
                            rdx_18 = *rax_33
                        
                        void var_178
                        sub_1408f2b40(&var_178, rdx_18)
                        char* var_f0
                        char* rcx_35 = var_f0
                        void* rbx_7 = &var_d8 + sx.q(r14_1) - rcx_35
                        char j
                        
                        do
                            j = *rcx_35
                            *(rcx_35 + rbx_7) = j
                            rcx_35 = &rcx_35[1]
                        while (j != 0)
                        int64_t var_f8
                        
                        if (var_f8 != 0)
                            sub_140a74f90(var_f8)
                        
                        int64_t rcx_37 = var_188.q
                        
                        if (rcx_37 != 0)
                            sub_140a74f90(rcx_37)
                        
                        i += 1
                        r14_1 += 0x20
                    while (i s< arg1[0x12])
                
                result = (*(*arg2 + 0x150))(arg2, &var_d8, 0xa0)
            else
                result = (*(*arg2 + 0x150))(arg2, &var_d8, 0xa0)
                char* rdi_1 = &var_d8
                int64_t i_2 = 5
                int64_t i_1
                
                do
                    if (*rdi_1 != 0)
                        int64_t** rax_30 = sub_140b58170(&var_188, rdi_1, 1)
                        int64_t r14_2 = sx.q(arg1[0x12])
                        int32_t rcx_28 = (r14_2 + 1).d
                        arg1[0x12] = rcx_28
                        
                        if (rcx_28 s> arg1[0x13])
                            sub_1405a4d70(&arg1[0x10])
                        
                        result = *rax_30
                        *(*(arg1 + 0x40) + (r14_2 << 3)) = result
                    
                    rdi_1 = &rdi_1[0x20]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
    else
        *arg1 = 0

__security_check_cookie(rax_1 ^ &var_1a8)
return result
