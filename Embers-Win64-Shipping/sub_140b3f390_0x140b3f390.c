// 函数: sub_140b3f390
// 地址: 0x140b3f390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (arg1[1].d s>= 1)
    int64_t* rax = *arg1
    uint64_t var_a8 = 0
    int32_t rdi_1 = rax[1].d
    int64_t rbx_1 = *rax
    int16_t* rbx_2
    
    if (rdi_1 != 0)
        sub_1405a4c70(&var_a8, rdi_1, 0)
        rbx_2 = var_a8
        memcpy(rbx_2, rbx_1, rdi_1 * 2)
    else
        rbx_2 = nullptr
    
    int16_t* const rsi_1 = &data_142d40450
    int16_t* const rcx_2 = &data_142d40450
    
    if (rdi_1 != 0)
        rcx_2 = rbx_2
    
    if (sub_140a54510(rcx_2, u"START") != 0)
        int16_t* rcx_12 = &data_142d40450
        
        if (rdi_1 != 0)
            rcx_12 = rbx_2
        
        if (sub_140a54510(rcx_12, u"STOP") != 0)
            int16_t* rcx_17 = &data_142d40450
            
            if (rdi_1 != 0)
                rcx_17 = rbx_2
            
            result = sub_140b2acc0(rcx_17, u"STARTFILE=", &data_143de7100, 1)
            
            if (result.b == 0)
                int16_t* rcx_18 = &data_142d40450
                
                if (rdi_1 != 0)
                    rcx_18 = rbx_2
                
                result = sub_140a54510(rcx_18, u"EXITONCOMPLETION")
                
                if (result != 0)
                    int32_t arg_8 = 0
                    int16_t* rcx_19 = &data_142d40450
                    
                    if (rdi_1 != 0)
                        rcx_19 = rbx_2
                    
                    if (sub_140b2ab20(rcx_19, u"FRAMES=", &arg_8) != 0)
                        int64_t var_98 = 0
                        int64_t var_90_1 = 0
                        sub_140b33560(sub_140b3cdd0(), arg_8, &var_98, &data_143de7100, 0)
                        int64_t rcx_21 = var_98
                        
                        if (rcx_21 != 0)
                            sub_140a74f90(rcx_21)
                    
                    int32_t arg_10 = 0
                    
                    if (rdi_1 != 0)
                        rsi_1 = rbx_2
                    
                    result = sub_140b2ab20(rsi_1, u"REPEAT=", &arg_10)
                    int32_t rcx_23 = data_143de7a48
                    
                    if (result.b != 0)
                        rcx_23 = arg_10
                    
                    data_143de7a48 = rcx_23
                else
                    data_143de7a4c = 1
        else
            int64_t arg_18 = 0
            void* var_88
            result = sub_140b37b10(sub_140b3cdd0(), &var_88, &arg_18)
            int64_t* var_80
            
            if (var_80 != 0)
                result = var_80[1].d
                var_80[1].d -= 1
                
                if (result == 1)
                    result = (**var_80)(var_80)
                    int32_t rdi_4 = *(var_80 + 0xc)
                    *(var_80 + 0xc) -= 1
                    
                    if (rdi_4 == 1)
                        result = (*(*var_80 + 8))(var_80, zx.q(rdi_4))
    else
        void* rax_2 = sub_140b3cdd0()
        int32_t rbx_3 = (data_143de7108).d
        int32_t rcx_3 = data_143de8174
        int64_t rsi_2 = data_143de7100
        char var_78 = 0
        int32_t var_74_1 = rcx_3
        int32_t var_70_1 = 0xffffffff
        int64_t var_68
        __builtin_memset(&var_68, 0, 0x18)
        int32_t var_50_1 = rbx_3
        uint64_t var_58
        
        if (rbx_3 != 0)
            sub_1405a4c70(&var_58, rbx_3, 0)
            memcpy(var_58, rsi_2, rbx_3 * 2)
        else
            int32_t var_4c_1 = 0
        
        int128_t zmm0_1 = zx.o(0)
        int32_t var_48_1 = 0
        result = sub_140b388f0(rax_2 + 0x30, &var_78)
        void* rcx_7 = zmm0_1:8.q
        
        if (rcx_7 != 0)
            result = *(rcx_7 + 8)
            *(rcx_7 + 8) -= 1
            
            if (result == 1)
                int64_t* rbx_4 = zmm0_1:8.q
                result = (**rbx_4)(rbx_4)
                int32_t rdi_3 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rdi_3 == 1)
                    int64_t* rcx_9 = zmm0_1:8.q
                    result = (*(*rcx_9 + 8))(rcx_9, zx.q(rdi_3))
        
        uint64_t rcx_10 = var_58
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = var_68
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
    
    uint64_t rbx_6 = var_a8
    
    if (rbx_6 != 0)
        return sub_140a74f90(rbx_6)

return result
