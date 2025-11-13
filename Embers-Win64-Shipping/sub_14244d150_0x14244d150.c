// 函数: sub_14244d150
// 地址: 0x14244d150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

(*(*rax + 0x148))(rax, rdx, arg1)
int64_t* rax_3 = sub_141e5ea90(sub_141e5df80())
int64_t r9 = *rax_3
(*(r9 + 0x150))(rax_3, arg1 + 8, 0, r9)
int64_t* r15 = *(arg1 + 8)
int32_t* result = &r15[sx.q(*(arg1 + 0x10)) * 2]
int32_t* result_3 = result

if (r15 != result)
    do
        int64_t var_118
        int32_t rcx_4 = sub_140ba59c0(&var_118, r15)
        int64_t rbx_1 = var_118
        int16_t* var_108 = nullptr
        int32_t var_110
        sub_1405a4c70(&var_108, sbb.d(rcx_4, rcx_4, var_110 != 0) + 2 + var_110, 0)
        memcpy(var_108, rbx_1, var_110 * 2)
        sub_140a20ba0(&var_108, &data_142d404c4, 1)
        int16_t* rsi_1 = var_108
        var_108 = nullptr
        int32_t var_100_1
        var_100_1.q = 0
        int64_t var_b0
        int64_t* rax_8 = sub_140baa460(&var_b0, &var_118)
        int32_t rax_9
        int16_t* rdi_2
        
        if (var_110 s> 1)
            int32_t rax_10 = rax_8[1].d
            int32_t rdi_3 = rax_10 - 1
            
            if (rax_10 == 0)
                rdi_3 = 0
            
            int32_t rax_11
            
            if (var_110 == 0)
                rax_11 = 1
            
            if (var_110 != 0 || rdi_3 == 0)
                rax_11 = 0
            
            int16_t* var_f8 = rsi_1
            int32_t rdx_8 = rax_11 + var_110 + rdi_3
            int32_t var_fc
            int32_t var_ec_1 = var_fc
            rsi_1 = nullptr
            
            if (rdx_8 s> var_fc)
                sub_1405947f0(&var_f8, rdx_8)
            
            sub_140a20ba0(&var_f8, *rax_8, rdi_3)
            rdi_2 = var_f8
            rax_9 = var_110
            var_f8 = nullptr
            int32_t var_f0_1
            var_f0_1.q = 0
        else
            rdi_2 = *rax_8
            *rax_8 = 0
            rax_9 = rax_8[1].d
            rax_8[1] = 0
        
        int16_t* const rdx_10 = &data_142d40450
        
        if (rax_9 != 0)
            rdx_10 = rdi_2
        
        int64_t arg_18
        sub_140b58260(&arg_18, rdx_10, 1)
        
        if (rdi_2 != 0)
            sub_140a74f90(rdi_2)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        int64_t rcx_15 = var_b0
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        int32_t var_98
        (*(*rax_3 + 0x50))(rax_3, &var_98, arg_18, 0)
        int32_t rcx_17
        rcx_17.b = sub_140b5b8a0(var_98, 0).b == 0
        int32_t var_94
        result.b = var_94 != 0
        result.b |= rcx_17.b
        
        if (result.b != 0)
            int64_t var_78
            result.b = var_78 == *(sub_140cdddf0() + 0x18)
            
            if (result.b == 0)
                int64_t var_e8
                sub_14244ce30(arg1, &var_e8, &var_118)
                int32_t result_2
                result = zx.q(result_2)
                
                if (result.d != 0xffffffff)
                    if (result.d != 0)
                        int64_t var_c0
                        sub_140baaa80(&var_c0, &var_e8)
                        int64_t* var_d0 = &var_c0
                        int64_t* var_c8_1 = &var_e8
                        int32_t arg_8
                        result = sub_14244aed0(arg1 + 0x28, &arg_8, &var_d0, nullptr)
                        int64_t rcx_26 = var_c0
                        
                        if (rcx_26 != 0)
                            result = sub_140a74f90(rcx_26)
                    else
                        int64_t rdi_4 = sx.q(*(arg1 + 0x20))
                        int32_t rax_13 = (rdi_4 + 1).d
                        *(arg1 + 0x20) = rax_13
                        
                        if (rax_13 s> *(arg1 + 0x24))
                            sub_1405a4f90(arg1 + 0x18)
                        
                        int64_t* rcx_23 = (rdi_4 << 4) + *(arg1 + 0x18)
                        *rcx_23 = 0
                        *rcx_23 = var_118
                        var_118 = 0
                        rcx_23[1].d = var_110
                        int32_t result_1
                        result = zx.q(result_1)
                        *(rcx_23 + 0xc) = result.d
                        var_110.q = 0
                
                int64_t rcx_27 = var_e8
                
                if (rcx_27 != 0)
                    result = sub_140a74f90(rcx_27)
        
        int64_t var_60
        
        if (var_60 != 0)
            result = sub_140a74f90(var_60)
        
        int64_t* var_68
        
        if (var_68 != 0)
            var_68[1].d -= 1
            
            if (var_68[1].d == 1)
                result = (**var_68)(var_68)
                int32_t temp2_1 = *(var_68 + 0xc)
                *(var_68 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*var_68 + 8))(var_68, 1)
        
        int64_t rcx_31 = var_118
        
        if (rcx_31 != 0)
            result = sub_140a74f90(rcx_31)
        
        r15 = &r15[2]
    while (r15 != result_3)

return result
