// 函数: sub_141c99350
// 地址: 0x141c99350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* arg_18

if (arg2 != 0 && *sub_140a73990(arg1, &arg_18, arg2) == 0xffffffff)
    int16_t* var_a0
    sub_140b63b70(&arg_10, &var_a0)
    int32_t var_98
    int32_t rcx_1 = var_98
    int32_t rax = rcx_1 - 1
    
    if (rcx_1 == 0)
        rax = 0
    
    int16_t* r9 = var_a0
    uint32_t rbx_2
    
    if (r9[sx.q(rax) - 1] != 0x2f)
    label_141c994a3:
        TEB* gsbase
        
        if (data_143f35568
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f35568)
            
            if (data_143f35568 == 0xffffffff)
                sub_140b58170(&data_143f35560, &data_142d63b88, 1)
                _Init_thread_footer(&data_143f35568)
        
        int32_t var_90
        
        if (*sub_140a73990(arg1, &arg_18, data_143f35560) == 0xffffffff)
            arg_18 = &data_143f35560
            sub_1413ce8c0(arg1, &var_90)
            int64_t* var_88
            sub_141c8ec70(&arg_18, var_88)
            var_88[0xb].d = 0xffffffff
            int64_t rbx_3 = *var_88
            sub_141c9baf0(arg1, &arg_18, (rbx_3 u>> 0x20).d + sub_140b5ead0(rbx_3.d), var_88, 
                var_90, nullptr)
        
        int64_t rdi_2 = data_143f35560
        int16_t* r13_1 = var_a0
        
        while (true)
            int16_t r12_1 = r13_1[1]
            r13_1 = &r13_1[1]
            
            if (r12_1 != 0x2f && r12_1 != 0)
                continue
            
            *r13_1 = 0
            int16_t* rdx_10 = &data_142d40450
            
            if (var_98 != 0)
                rdx_10 = var_a0
            
            int64_t var_a8
            sub_140b58260(&var_a8, rdx_10, 1)
            int64_t r8_7 = var_a8
            *r13_1 = r12_1
            void arg_20
            
            if (*sub_140a73990(arg1, &arg_20, r8_7) == 0xffffffff)
                var_90.q = &var_a8
                int32_t var_70
                sub_1413ce8c0(arg1, &var_70)
                int64_t* var_68
                sub_141c8ec70(&var_90, var_68)
                var_68[0xb].d = 0xffffffff
                int64_t rbx_4 = *var_68
                void var_80
                sub_141c9baf0(arg1, &var_80, (rbx_4 u>> 0x20).d + sub_140b5ead0(rbx_4.d), var_68, 
                    var_70, nullptr)
            
            if (rdi_2 != 0)
                sub_140a73990(arg1, &arg_18, rdi_2)
                int64_t rax_16 = sx.q(arg_18.d)
                void* const rax_19
                
                if (rax_16.d == 0xffffffff)
                    rax_19 = nullptr
                else
                    rax_19 = rax_16 * 0x60 + *arg1
                
                int32_t var_60
                sub_14090a150(rax_19 + 8, &var_60)
                int64_t rax_20 = var_a8
                int64_t* var_58
                *var_58 = rax_20
                var_58[1].d = 0xffffffff
                void var_7c
                sub_1407ec830(rax_19 + 8, &var_7c, (rax_20 u>> 0x20).d + sub_140b5ead0(rax_20.d), 
                    var_58, var_60, nullptr)
                int32_t var_50
                sub_1405b3620(&arg1[0xa], &var_50)
                int64_t rax_23 = var_a8
                int64_t* var_48
                *var_48 = rax_23
                var_48[1] = rdi_2
                var_48[2].d = 0xffffffff
                void var_78
                sub_1405b8300(&arg1[0xa], &var_78, (rax_23 u>> 0x20).d + sub_140b5ead0(rax_23.d), 
                    var_48, var_50, nullptr)
            
            rdi_2 = var_a8
            
            if (r12_1 == 0)
                break
        
        rbx_2.b = 1
    else
        int32_t r10_1 = rcx_1 - 1
        
        if (rcx_1 == 0)
            r10_1 = 0
        
        int32_t rbx_1 = rcx_1 - 1
        
        if (rcx_1 == 0)
            rbx_1 = 0
        
        rbx_2 = rbx_1 - (r10_1 - 1)
        
        if (rbx_2 s> 1)
            rbx_2 = 1
        
        if (rbx_2 != 0)
            int32_t rax_3 = rcx_1 - rbx_2
            
            if (rax_3 != r10_1 - 1)
                memmove(&r9[sx.q(r10_1 - 1)], &r9[sx.q(rbx_2 + r10_1 - 1)], 
                    (rax_3 - (r10_1 - 1)) * 2)
                rcx_1 = var_98
                r9 = var_a0
            
            rcx_1 -= rbx_2
            var_98 = rcx_1
        
        int16_t* const rdx_3 = &data_142d40450
        
        if (rcx_1 != 0)
            rdx_3 = r9
        
        sub_140b58260(&arg_18, rdx_3, 1)
        int64_t* r8_4 = arg_18
        arg_10 = r8_4
        
        if (*sub_140a73990(arg1, &arg_18, r8_4) == 0xffffffff)
            goto label_141c994a3
        
        rbx_2.b = 0
    
    int16_t* rcx_25 = var_a0
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    return zx.q(rbx_2.b)

int32_t* result
result.b = 0
return result
