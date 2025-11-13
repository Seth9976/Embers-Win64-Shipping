// 函数: sub_1422cd260
// 地址: 0x1422cd260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
int64_t* r12 = arg4
void* r13 = arg3
uint64_t result

if (arg3 != 0)
    while (true)
        int64_t rax_2 = *r12
        int32_t result_1 = 0
        (*(rax_2 + 0x168))(r12, &result_1)
        
        if ((*(r12 + 0x29) & 1) != 0)
            goto label_1422cd611_1
        
        result = zx.q(result_1)
        
        if (result.d == 0)
            break
        
        result = zx.q(result.d - 1)
        result_1 = result.d
        
        if (result.d u>= *(r13 + 0x20))
            goto label_1422cd611_1
        
        int32_t rdi_2 = *(*(r13 + 0x18) + sx.q(result.d) * 0x14 + 4)
        
        if (rdi_2 == 0)
            goto label_1422cd611_1
        
        int64_t rax_4 = *r12
        int32_t var_128 = 0
        (*(rax_4 + 0x168))(r12, &var_128)
        
        if ((*(r12 + 0x29) & 1) != 0)
            goto label_1422cd611_1
        
        void var_108
        int512_t zmm0_1 = sub_140bd5b20(&var_108, 0, 0, 0)
        int64_t var_58_1 = r12[0x16]
        sub_140b550b0(&var_108, r12, zx.q(var_128), zmm0_1)
        int64_t var_78
        
        if ((*(r12 + 0x29) & 1) == 0)
            int64_t rcx_6 = sx.q(result_1) * 5
            int64_t rax_7 = *(r13 + 0x18)
            int64_t rcx_9
            int64_t r12_1
            int32_t r13_1
            
            if (*(rax_7 + (rcx_6 << 2) + 0x12) == 0)
                r13_1 = arg6
                
                if (r13_1 s>= arg7)
                    goto label_1422cd42f
                
                rcx_9 = *(arg1 + 0x38)
                
                while (true)
                    r12_1 = sx.q(r13_1)
                    void* rax_10 = (r12_1 << 5) + rcx_9
                    
                    if (*(rax_10 + 0x18) == rdi_2)
                        break
                    
                    if (*(rax_10 + 0x1c) == 0)
                        r13_1 = zx.d(*(rax_10 + 8)) - 1
                    
                    r13_1 += 1
                    
                    if (r13_1 s>= arg7)
                        goto label_1422cd428
                
                if (r13_1 == 0xffffffff)
                label_1422cd428:
                    r12 = arg4
                label_1422cd42f:
                    *(rax_7 + (rcx_6 << 2) + 0x12) = 1
                    
                    if (var_78 != 0)
                        sub_140a74f90(var_78)
                    
                    r13 = arg_18
                    arg5 = sub_140b4cb40(&var_108)
                    continue
            else
                if (var_78 == 0)
                    arg5 = sub_140b4cb40(&var_108)
                    continue
                
                sub_140a74f90(var_78)
                arg5 = sub_140b4cb40(&var_108)
                continue
            
            int64_t* r12_3 = (r12_1 << 5) + rcx_9
            char var_150
            int64_t var_68
            int64_t var_60
            
            if (*(r12_3 + 0x1c) != 0)
                void* rcx_28 = arg2 + 0x70
                
                if (arg8 == 0)
                    rcx_28 = nullptr
                
                var_150 = 0
                
                if (sub_1422cda70(&var_108, arg11, arg10.d - arg9, arg8, arg5, arg10, rcx_28, 
                        arg1 + 0x28, arg1 + 0x38, r13_1, 0, arg13, not.b(*(arg1 + 0x20)) & 1) != 0)
                    *arg12 = 1
                
                if (var_68 == var_60)
                label_1422cd6f0:
                    
                    if (var_78 != 0)
                        sub_140a74f90(var_78)
                    
                    arg5 = sub_140b4cb40(&var_108)
                    r12 = arg4
                    r13 = arg_18
                    continue
            else
                int32_t var_134 = 0
                sub_140b54b50(&var_108, &var_134)
                char var_df
                
                if ((var_df & 1) == 0)
                    int64_t rax_11 = sx.q(*(r12_3 + 0xc))
                    int64_t* r10_2
                    
                    if (arg8 == 0)
                        r10_2 = nullptr
                    else
                        r10_2 = sx.q(r12_3[2].d) + arg8
                    
                    uint64_t rax_12 = zx.q(*(r12_3 + 0x16))
                    int64_t* var_130 = arg10
                    int64_t var_120 = arg8
                    int64_t* rax_15 = arg2 + 0x70
                    
                    if (arg8 == 0)
                        rax_15 = nullptr
                    
                    var_150.q = &var_130
                    int32_t var_158
                    var_158.q = &var_120
                    int64_t* var_160
                    var_160.d = r13_1
                    int64_t* var_178
                    var_178.d = rax_11.d - arg9 + arg10.d
                    int64_t rax_16 = sub_1422cc290(var_134, r10_2, arg10 + rax_11, arg11, 
                        var_178.d, rax_12 * 0x30 + *(arg1 + 0x28), r12_3, var_160.d, var_158, 
                        var_150, rax_15)
                    int64_t* rdi_3 = var_130
                    int64_t rbx_1 = var_120
                    
                    do
                        var_130.d = 0
                        sub_140b54b50(&var_108, &var_130)
                        
                        if ((var_df & 1) != 0)
                            break
                        
                        int32_t rcx_18 = var_130.d
                        
                        if (rcx_18 == 0)
                            int64_t rcx_25 = var_68
                            int64_t rdx_14 = var_60
                            
                            if (rcx_25 - rdx_14 == 8)
                                int32_t var_124
                                sub_140b54b50(&var_108, &var_124)
                                
                                if (var_124 != 0)
                                    goto label_1422cd5fe
                                
                                rdx_14 = var_60
                                rcx_25 = var_68
                            
                            if (rcx_25 != rdx_14)
                                goto label_1422cd5fe
                            
                            goto label_1422cd6f0
                        
                        var_130.d = rcx_18 - 1
                        
                        if (rcx_18 - 1 u>= var_134)
                            break
                        
                        int64_t rcx_20 = sx.q(zx.d(*(r12_3 + 0xa)) * (rcx_18 - 1))
                        void* r8_3
                        
                        if (rbx_1 == 0)
                            r8_3 = nullptr
                        else
                            r8_3 = rcx_20 + rbx_1
                        
                        char var_140
                        var_140.q = arg13
                        var_150.q = rax_16
                        var_158.q = rcx_20 + rdi_3
                        int64_t* var_170_1
                        var_170_1.d = zx.d(r12_3[1].w) - 1
                        var_178.d = r13_1 + 1
                        
                        if (sub_1422cd260(arg1, arg2, arg_18, &var_108, var_178, var_170_1, r8_3, 
                                rdi_3, var_158, var_150, arg12, var_140) == 0)
                            break
                    while ((var_df & 1) == 0)
        
    label_1422cd5fe:
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        sub_140b4cb40(&var_108)
        goto label_1422cd611_1
    
    result.b = 1
else
    arg_18.d = arg3.d
    (*(*arg4 + 0x168))(arg4, &arg_18)
    result = zx.q(*(r12 + 0x29))
    
    if ((result.b & 1) != 0)
    label_1422cd611:
        result.b = 0
    else if (arg_18.d == r13.d)
        result.b = 1
    else
        result.b |= 1
        *(r12 + 0x29) = result.b
    label_1422cd611_1:
        result.b = 0

return result
