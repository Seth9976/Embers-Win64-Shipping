// 函数: sub_140b12540
// 地址: 0x140b12540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140b17d90()

if (*(rax + 0xfa) == 0)
    sub_140af2b60()
    sub_140b2acc0(&data_143dbb3f0, u"ShaderWorkingDir=", rax + 0x58, 1)
    bool cond:0_1 = *(rax + 0x60) s<= 1
    *(rax + 0xfa) = 1
    
    if (not(cond:0_1))
        int16_t* const var_48
        void var_28
        
        if (sub_140b1d530(rax + 0x58) == 0)
            int32_t rcx_16 = sub_140b214e0(rax + 0x58)
            int32_t rdi_3 = *(rax + 0x60)
            int64_t rbx_3 = *(rax + 0x58)
            var_48 = nullptr
            sub_1405a4c70(&var_48, sbb.d(rcx_16, rcx_16, rdi_3 != 0) + 2 + rdi_3, 0)
            memcpy(var_48, rbx_3, rdi_3 * 2)
            sub_140a20ba0(&var_48, &data_142d5a024, 1)
            int16_t* const rbx_4 = var_48
            var_48 = nullptr
            int32_t var_40_2
            var_40_2.q = 0
            
            if (rax + 0x58 != &var_28)
                int64_t rcx_21 = *(rax + 0x58)
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
                
                *(rax + 0x58) = rbx_4
                *(rax + 0x60) = rdi_3
                int32_t var_3c
                *(rax + 0x64) = var_3c
            else if (rbx_4 != 0)
                sub_140a74f90(rbx_4)
        else
            int16_t* const rdi_1 = &data_142d40450
            int16_t* r12_1
            
            if (*(rax + 0x60) == 0)
                r12_1 = &data_142d40450
            else
                r12_1 = *(rax + 0x58)
            
            int16_t* var_38
            int64_t* rax_2 = sub_140b251a0(&var_38)
            
            if (rax_2[1].d != 0)
                rdi_1 = *rax_2
            
            var_48 = rdi_1
            int16_t* var_58 = nullptr
            int32_t r8_2 = 0
            int64_t var_50_1 = 0
            int64_t i = 0
            int32_t var_40
            var_40.q = r12_1
            int64_t rbx_1 = -1
            
            do
                int64_t rax_3 = -1
                
                do
                    rax_3 += 1
                while ((&var_48)[i][rax_3] != 0)
                
                i += 1
                r8_2 = r8_2 + 1 + rax_3.d
            while (i s< 2)
            
            if (r8_2 != 0)
                sub_1405947f0(&var_58, r8_2)
            
            int64_t r8_4 = -1
            
            do
                r8_4 += 1
            while (rdi_1[r8_4] != 0)
            
            sub_140a20ba0(&var_58, rdi_1, r8_4.d)
            
            do
                rbx_1 += 1
            while (r12_1[rbx_1] != 0)
            
            int32_t rcx_7 = sub_140a2cf70(&var_58, r12_1, rbx_1.d)
            int32_t rdx_4 = var_50_1.d
            var_48 = var_58
            int32_t rax_6 = var_50_1:4.d
            int32_t rdx_5 = rdx_4 + sbb.d(rcx_7, rcx_7, rdx_4 != 0) + 2
            var_58 = nullptr
            int64_t var_50_2 = 0
            
            if (rdx_5 s> rax_6)
                sub_1405947f0(&var_48, rdx_5)
            
            sub_140a20ba0(&var_48, &data_142d5a024, 1)
            int16_t* const rbx_2 = var_48
            var_48 = nullptr
            int32_t var_40_1
            var_40_1.q = 0
            
            if (rax + 0x58 != &var_28)
                int64_t rcx_12 = *(rax + 0x58)
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                *(rax + 0x58) = rbx_2
                *(rax + 0x60) = rdx_4
                *(rax + 0x64) = rax_6
            else if (rbx_2 != 0)
                sub_140a74f90(rbx_2)
            
            int16_t* rcx_14 = var_58
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            int16_t* const rcx_22 = var_38
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)

return rax + 0x58
