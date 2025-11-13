// 函数: sub_1420409f0
// 地址: 0x1420409f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
char result = sub_140b21a10(&data_143dbb3f0, u"NOREPLAYS")

if (result == 0)
    void* rdi_1 = *(arg1 + 0x30)
    void* const rdi_2
    
    if (rdi_1 == 0)
        rdi_2 = nullptr
    else
        rdi_2 = *(rdi_1 + 0x278)
    
    if (rdi_2 != 0)
        void* rcx = *(rdi_2 + 0xf0)
        
        if (rcx != 0)
            result = sub_141fba5f0(rcx)
        
        if (rcx == 0 || result == 0)
            int64_t var_88
            sub_1423fd810(&var_88, nullptr)
            int32_t rbx_1 = arg2[1].d
            int64_t rsi_1 = *arg2
            int64_t var_c8 = 0
            
            if (rbx_1 != 0)
                sub_1405a4c70(&var_c8, rbx_1, 0)
                memcpy(var_c8, rsi_1, rbx_1 * 2)
            else
                int32_t var_bc_1 = 0
            
            int16_t* var_d8
            int64_t* rax = sub_142436cb0(rdi_2, &var_d8)
            int16_t* const r8_2
            
            if (rax[1].d == 0)
                r8_2 = &data_142d40450
            else
                r8_2 = *rax
            
            sub_140a306e0(&var_c8, &data_143233454, r8_2, 1)
            int16_t* rcx_6 = var_d8
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rsi_2 = var_c8
            int32_t var_58_1 = rbx_1
            int64_t var_60
            int32_t var_54
            
            if (rbx_1 != 0 || var_54 != 0)
                sub_1405a4c70(&var_60, rbx_1, var_54)
                memcpy(var_60, rsi_2, rbx_1 * 2)
            else
                int32_t var_54_1 = 0
            
            int16_t* const r8_6
            
            if (arg3[1].d == 0)
                r8_6 = &data_142d40450
            else
                r8_6 = *arg3
            
            sub_140a2e390(&var_d8, u"DemoFriendlyName=%s", r8_6)
            int16_t* const rdx_5 = &data_142d40450
            int32_t var_d0
            
            if (var_d0 != 0)
                rdx_5 = var_d8
            
            sub_142401e40(&var_88, rdx_5)
            int16_t* rcx_11 = var_d8
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            int64_t* i = *arg4
            void* rsi_5
            
            for (rsi_5 = &i[sx.q(arg4[1].d) * 2]; i != rsi_5; i = &i[2])
                wchar16* rdx_6
                
                if (i[1].d == 0)
                    rdx_6 = &data_142d40450
                else
                    rdx_6 = *i
                
                sub_142401e40(&var_88, rdx_6)
            
            int64_t* rbx_3 = *(rdi_2 + 0xf0)
            rsi_5.b = 0
            
            if (rbx_3 == 0 || rbx_3[0x161].b == 0 || *(rbx_3 + 0xc71) == 0)
                sub_142430a60(rdi_2)
                rsi_5.b = 1
                int32_t var_ac_1 = 0
                void var_98
                int32_t rcx_15 = *sub_140b5e500(&var_98, 0x11e)
                void var_b8
                int32_t* rax_2 = sub_140b5e500(&var_b8, 0x11e)
                var_d8:4.d = 0
                var_d8.d = *rax_2
                result = sub_1423d6c20(data_143f5b298, rdi_2, var_d8, rcx_15.q)
                
                if (result != 0)
                    int32_t* rax_3 = sub_140b5e500(&var_b8, 0x11e)
                    var_d8:4.d = 0
                    var_d8.d = *rax_3
                    int64_t* rax_4 = sub_1423dcd80(data_143f5b298, rdi_2, var_d8)
                    rbx_3 = rax_4
                    void* rax_5
                    int64_t rax_6
                    void* rdx_9
                    
                    if (rax_4 != 0)
                        rax_5 = sub_14249b2a0()
                        rdx_9 = rbx_3[2]
                        rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_4 == 0 || rax_6.d s> *(rdx_9 + 0x38)
                            || *(*(rdx_9 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                        rbx_3 = nullptr
                    
                    *(rdi_2 + 0xf0) = rbx_3
                    goto label_142040ca6
            else
            label_142040ca6:
                sub_14217ba70(rbx_3, rdi_2)
                char* rax_8 = sub_142434f20(rdi_2, 0)
                
                if (rax_8 != 0)
                    *(rax_8 + 0x18) = *(rdi_2 + 0xf0)
                
                int64_t var_a8 = 0
                int64_t var_a0_1 = 0
                int64_t* rcx_26 = *(rdi_2 + 0xf0)
                
                if (rsi_5.b == 0)
                    result = sub_141fab990(rcx_26, &var_88)
                else
                    result = (*(*rcx_26 + 0x280))(rcx_26, rdi_2 + 0x28, &var_88, 0, &var_a8)
                
                if (result == 0)
                    *(rdi_2 + 0xf0) = 0
                
                int64_t rcx_27 = var_a8
                
                if (rcx_27 != 0)
                    result = sub_140a74f90(rcx_27)
            
            int64_t rcx_28 = var_c8
            
            if (rcx_28 != 0)
                result = sub_140a74f90(rcx_28)
            
            int64_t var_30
            
            if (var_30 != 0)
                result = sub_140a74f90(var_30)
            
            int32_t i_3
            int32_t i_2 = i_3
            int64_t* var_40
            int64_t* rbx_4 = var_40
            
            if (i_2 != 0)
                int32_t i_1
                
                do
                    int64_t rcx_30 = *rbx_4
                    
                    if (rcx_30 != 0)
                        result = sub_140a74f90(rcx_30)
                    
                    rbx_4 = &rbx_4[2]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                rbx_4 = var_40
            
            if (rbx_4 != 0)
                result = sub_140a74f90(rbx_4)
            
            int64_t var_50
            
            if (var_50 != 0)
                result = sub_140a74f90(var_50)
            
            int64_t rcx_33 = var_60
            
            if (rcx_33 != 0)
                result = sub_140a74f90(rcx_33)
            
            int64_t var_78
            
            if (var_78 != 0)
                result = sub_140a74f90(var_78)
            
            int64_t rcx_35 = var_88
            
            if (rcx_35 != 0)
                return sub_140a74f90(rcx_35)

return result
