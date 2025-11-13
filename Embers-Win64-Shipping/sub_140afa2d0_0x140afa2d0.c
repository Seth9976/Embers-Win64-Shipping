// 函数: sub_140afa2d0
// 地址: 0x140afa2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
char rax_2 = sub_140b27f10()
int64_t* result

if (rax_2 == 0)
    result = sub_140af85a0()

if (rax_2 != 0 || result.b != 0)
    uint32_t r13_1 = zx.d(*(j_sub_140b17d00() + 2))
    result = __crt_deferred_errno_cache::get(&data_143db7b00)
    int32_t i = r13_1 - 1
    int64_t* result_1 = result
    
    if (r13_1 - 1 s>= 0)
        int16_t* r15_1 = nullptr
        
        do
            int64_t var_1a8 = 0
            int64_t var_1a0_1 = 0
            void var_180
            sub_140b0a630(&var_180, *j_sub_140b17d00(), i.w, 0, 0, &var_1a8)
            int64_t rcx_2 = var_1a8
            i -= 1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            void var_158
            sub_1405eb940(&var_158, "WindowsNoEditor")
            int16_t* rax_5 = sub_140b73bf0()
            int32_t rdi_1 = 0
            int16_t* var_1f8 = nullptr
            int32_t r14_1 = 0
            int64_t var_1f0_1 = 0
            int32_t rax_6
            
            if (rax_5 != 0 && *rax_5 != 0)
                int64_t rbx_1 = -1
                
                do
                    rbx_1 += 1
                while (rax_5[rbx_1] != 0)
                
                if (rbx_1.d + 1 s> 0)
                    sub_1405947f0(&var_1f8, rbx_1.d + 1)
                    r14_1 = var_1f0_1:4.d
                    rdi_1 = var_1f0_1.d
                    r15_1 = var_1f8
                
                rdi_1 += rbx_1.d + 1
                var_1f0_1.d = rdi_1
                
                if (rdi_1 s> r14_1)
                    sub_140594770(&var_1f8)
                    r14_1 = var_1f0_1:4.d
                    rdi_1 = var_1f0_1.d
                    r15_1 = var_1f8
                
                UnDecorator::getReferenceType(r15_1, rax_5, (rbx_1.d + 1) * 2)
                rax_6 = 0xd
            
            if (rax_5 == 0 || *rax_5 == 0 || rdi_1 == 0)
                rax_6 = 0xe
            
            int16_t* var_208 = r15_1
            int32_t rdx_5 = rdi_1 + rax_6
            r15_1 = nullptr
            var_1f8 = nullptr
            int64_t var_1f0_2 = 0
            
            if (rdx_5 s> r14_1)
                sub_1405947f0(&var_208, rdx_5)
            
            sub_140a2cf70(&var_208, u"UnrealEngine", 0xc)
            int64_t var_190
            int64_t* rax_7 = sub_140b29040(&var_180, &var_190, 1)
            int32_t rcx_10 = rax_7[1].d
            int32_t rbx_3 = rcx_10 - 1
            
            if (rcx_10 == 0)
                rbx_3 = 0
            
            int32_t rcx_12
            
            if (rdi_1 == 0)
                rcx_12 = rdi_1 + 2
            
            if (rdi_1 != 0 || rbx_3 == 0xffffffff)
                rcx_12 = 1
            
            int32_t rdx_9 = rdi_1 + rbx_3 + rcx_12
            int16_t* var_1c8 = var_208
            var_208 = nullptr
            int32_t var_200_1
            var_200_1.q = 0
            
            if (rdx_9 s> r14_1)
                sub_1405947f0(&var_1c8, rdx_9)
            
            int32_t rcx_15 = sub_140a2cf70(&var_1c8, *rax_7, rbx_3)
            int16_t* var_1d8 = var_1c8
            int32_t rdx_12 = rdi_1 + sbb.d(rcx_15, rcx_15, rdi_1 != 0) + 7
            var_1c8 = nullptr
            int32_t var_1c0_1
            var_1c0_1.q = 0
            
            if (rdx_12 s> r14_1)
                sub_1405947f0(&var_1d8, rdx_12)
            
            int32_t rcx_20 = sub_140a2cf70(&var_1d8, u"Saved", 5)
            int16_t* var_1e8 = var_1d8
            int32_t rdx_14 = rdi_1 + sbb.d(rcx_20, rcx_20, rdi_1 != 0) + 8
            var_1d8 = nullptr
            int32_t var_1d0_1
            var_1d0_1.q = 0
            
            if (rdx_14 s> r14_1)
                sub_1405947f0(&var_1e8, rdx_14)
            
            sub_140a2cf70(&var_1e8, u"Config", 6)
            int64_t rbx_4 = -1
            int16_t* var_50
            
            do
                rbx_4 += 1
            while (var_50[rbx_4] != 0)
            
            int32_t rcx_25
            
            if (rdi_1 == 0)
                rcx_25 = rdi_1 + 2
            
            if (rdi_1 != 0 || (rbx_4 + 1).d == 0)
                rcx_25 = 1
            
            int32_t rdx_17 = rdi_1 + rcx_25 + rbx_4.d
            int16_t* var_1b8 = var_1e8
            var_1e8 = nullptr
            int32_t var_1ac_1 = r14_1
            int32_t var_1e0_1
            var_1e0_1.q = 0
            
            if (rdx_17 s> r14_1)
                sub_1405947f0(&var_1b8, rdx_17)
            
            sub_140a2cf70(&var_1b8, var_50, rbx_4.d)
            int16_t* rcx_28 = var_1e8
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            int16_t* rcx_29 = var_1d8
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            int16_t* rcx_30 = var_1c8
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            int16_t* rcx_31 = var_208
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
            
            int64_t rcx_32 = var_190
            
            if (rcx_32 != 0)
                sub_140a74f90(rcx_32)
            
            int64_t var_58
            
            if (var_58 != 0)
                sub_140a74f90(var_58)
            
            result = sub_140b12f50(&var_1b8)
            int64_t var_170
            
            if (result.b != 0)
                int16_t* const rbx_5 = &data_142d40450
                sub_140afc990(&var_208, &data_142d40450)
                int16_t* const rdx_19 = &data_142d40450
                
                if (var_200_1 != 0)
                    rdx_19 = var_208
                
                result = (*(*result_1 + 0x178))(result_1, rdx_19)
                
                if (result.b != 0)
                    int16_t* const r8_6 = &data_142d40450
                    
                    if (rdi_1 != 0)
                        r8_6 = var_1b8
                    
                    if (var_200_1 != 0)
                        rbx_5 = var_208
                    
                    result = (*(*result_1 + 0x188))(result_1, rbx_5, r8_6, 0)
                
                int16_t* rcx_40 = var_208
                
                if (rcx_40 != 0)
                    result = sub_140a74f90(rcx_40)
                
                int16_t* rcx_41 = var_1b8
                
                if (rcx_41 != 0)
                    result = sub_140a74f90(rcx_41)
                
                if (var_170 != 0)
                    result = sub_140a74f90(var_170)
                
                break
            
            int16_t* rcx_35 = var_1b8
            
            if (rcx_35 != 0)
                result = sub_140a74f90(rcx_35)
            
            if (var_170 != 0)
                result = sub_140a74f90(var_170)
        while (i s>= 0)

__security_check_cookie(rax_1 ^ &var_238)
return result
