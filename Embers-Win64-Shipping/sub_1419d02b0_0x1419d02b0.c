// 函数: sub_1419d02b0
// 地址: 0x1419d02b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t result = __security_cookie ^ &var_188
int64_t result_1 = result
int32_t rdi = 0
int32_t var_120 = 0

if (data_143f1d988 == 0)
    void* rcx = data_143ddb400
    int16_t** var_168_1 = &data_143de5830
    char var_158 = 0
    sub_140af2fd0(rcx, /Script/UnrealEd.ProjectPackagingSettings", bShareMaterialShaderCode", 
        &var_158, var_168_1)
    TEB* gsbase
    result = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (data_143cd80cc s> *(0x14 + result))
        result = _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            result = _Init_thread_footer(&data_143cd80cc)
    
    if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0 && var_158 != 0)
        int64_t* rax_2 = j_sub_140a82f30(0x30)
        int64_t* rbx_1 = rax_2
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            *rax_2 = 0
            rax_2[1] = 0
            rax_2[2].d = 0x31
            rax_2[3] = 0
            InitializeSRWLock(&rax_2[4])
            rbx_1[5].w = 0
        
        data_143f1d988 = rbx_1
        int64_t var_150
        int64_t var_f0
        char rax_5
        
        if (rbx_1 != 0)
            var_150 = 0
            int32_t var_148_1 = 0
            sub_1405947f0(&var_150, 7)
            int32_t rax_3 = var_148_1 + 7
            var_148_1 = rax_3
            
            if (rax_3 s> 0)
                sub_140594770(&var_150)
            
            UnDecorator::getReferenceType(var_150, u"Global", 0xe)
            rdi = 3
            int64_t* rax_4 = sub_140b25050(&var_f0)
            rax_5 = sub_1419d41c0(data_143f1d988, rax_4, arg1, &var_150)
        
        if (rbx_1 == 0 || rax_5 == 0)
            rbx_1.b = 0
        else
            rbx_1.b = 1
        
        if ((rdi.b & 2) != 0)
            int64_t rcx_9 = var_f0
            rdi &= 0xfffffffd
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        
        if ((rdi.b & 1) != 0)
            int64_t rcx_10 = var_150
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
        
        if (rbx_1.b == 0)
            int64_t* rsi_2 = data_143f1d988
            
            if (rsi_2 != 0)
                int32_t i_3 = rsi_2[1].d
                int64_t* rbx_5 = *rsi_2
                
                if (i_3 != 0)
                    int32_t i
                    
                    do
                        sub_1419c4b50(rbx_5, *rbx_5)
                        rbx_5 = &rbx_5[1]
                        i = i_3
                        i_3 -= 1
                    while (i != 1)
                
                int64_t rcx_21 = *rsi_2
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
                
                j_sub_140a74f90(rsi_2)
                data_143f1d988 = 0
            
            sub_140d7dfe0()
            int64_t var_e0
            int64_t var_d0
            void var_68
            int64_t* rax_20 = sub_140aae2f0(&var_68, sub_140b11a30(&var_e0, sub_140b25050(&var_d0)))
            void var_a8
            char* var_78
            char** rax_22 = sub_140a96390(&var_78, 
                _vfprintf_p_l(&var_a8, 
                    Game files required to initialize the global shader library are missing from:\n\n{0}\n\n"
            "Please make", 
                MessageDialog"))
            int64_t rcx_28 = *rax_20
            int64_t* rcx_29 = rax_20[1]
            int32_t var_50_1 = 4
            
            if (rcx_29 != 0)
                rcx_29[1].d += 1
            
            int32_t rcx_30 = rax_20[2].d
            char var_28_1 = 1
            int32_t* var_130 = nullptr
            int32_t var_128_1 = 1
            sub_1405a4b40(&var_130, 1, 0)
            int32_t* rcx_32 = var_130
            *rcx_32 = var_50_1
            int64_t var_48
            *(rcx_32 + 8) = var_48
            *(rcx_32 + 8) = var_48
            rcx_32[2] = var_48.d
            *(rcx_32 + 8) = var_48
            rcx_32[0xa].b = 0
            
            if (var_28_1 != 0)
                *(rcx_32 + 0x10) = rcx_28
                *(rcx_32 + 0x18) = rcx_29
                
                if (rcx_29 != 0)
                    rcx_29[1].d += 1
                
                rcx_32[8] = rcx_30
                rcx_32[0xa].b = 1
            
            char* var_100 = *rax_22
            void* rax_30 = rax_22[1]
            void* var_f8_1 = rax_30
            
            if (rax_30 != 0)
                *(rax_30 + 8) += 1
            
            void var_c0
            int64_t* rax_31 = sub_140aac870(&var_c0, &var_100, &var_130)
            int64_t var_118 = *rax_31
            int64_t* rcx_35 = rax_31[1]
            
            if (rcx_35 != 0)
                rcx_35[1].d += 1
            
            int32_t var_108_1 = rax_31[2].d
            int64_t* var_b8
            
            if (var_b8 != 0)
                var_b8[1].d -= 1
                
                if (var_b8[1].d == 1)
                    (**var_b8)(var_b8)
                    int32_t rax_35 = *(var_b8 + 0xc)
                    *(var_b8 + 0xc) -= 1
                    
                    if (rax_35 == 1)
                        (*(*var_b8 + 8))(var_b8, 1)
            
            sub_140596f50(&var_130)
            
            if (var_28_1 != 0)
                char var_28_2 = 0
                
                if (rcx_29 != 0)
                    rcx_29[1].d -= 1
                    
                    if (rcx_29[1].d == 1)
                        (**rcx_29)(rcx_29)
                        int32_t rax_39 = *(rcx_29 + 0xc)
                        *(rcx_29 + 0xc) -= 1
                        
                        if (rax_39 == 1)
                            (*(*rcx_29 + 8))(rcx_29, 1)
            
            int64_t* rdi_6 = rax_22[1]
            
            if (rdi_6 != 0)
                rdi_6[1].d -= 1
                
                if (rdi_6[1].d == 1)
                    (**rdi_6)(rdi_6)
                    int32_t rax_43 = *(rdi_6 + 0xc)
                    *(rdi_6 + 0xc) -= 1
                    
                    if (rax_43 == 1)
                        (*(*rdi_6 + 8))(rdi_6, 1)
            
            int64_t* rdi_7 = rax_20[1]
            
            if (rdi_7 != 0)
                rdi_7[1].d -= 1
                
                if (rdi_7[1].d == 1)
                    (**rdi_7)(rdi_7)
                    int32_t rax_47 = *(rdi_7 + 0xc)
                    *(rdi_7 + 0xc) -= 1
                    
                    if (rax_47 == 1)
                        (*(*rdi_7 + 8))(rdi_7, 1)
            
            int64_t* var_a0
            
            if (var_a0 != 0)
                var_a0[1].d -= 1
                
                if (var_a0[1].d == 1)
                    (**var_a0)(var_a0)
                    int32_t rax_51 = *(var_a0 + 0xc)
                    *(var_a0 + 0xc) -= 1
                    
                    if (rax_51 == 1)
                        (*(*var_a0 + 8))(var_a0, 1)
            
            int64_t rcx_47 = var_e0
            
            if (rcx_47 != 0)
                sub_140a74f90(rcx_47)
            
            int64_t rcx_48 = var_d0
            
            if (rcx_48 != 0)
                sub_140a74f90(rcx_48)
            
            void var_90
            int64_t* rax_54 =
                sub_140ac6680(_vfprintf_p_l(&var_90, Missing game files", MessageDialog"))
            int16_t* const rdi_9 = &data_142d40450
            PWSTR rsi_4
            
            if (rax_54[1].d == 0)
                rsi_4 = &data_142d40450
            else
                rsi_4 = *rax_54
            
            int16_t** rax_55 = sub_140ac6680(&var_118)
            
            if (rax_55[1].d != 0)
                rdi_9 = *rax_55
            
            sub_140b709d0(0, rdi_9, rsi_4)
            int64_t* var_88
            
            if (var_88 != 0)
                var_88[1].d -= 1
                
                if (var_88[1].d == 1)
                    (**var_88)(var_88)
                    int32_t rax_58 = *(var_88 + 0xc)
                    *(var_88 + 0xc) -= 1
                    
                    if (rax_58 == 1)
                        (*(*var_88 + 8))(var_88, 1)
            
            if (rcx_35 != 0)
                rcx_35[1].d -= 1
                
                if (rcx_35[1].d == 1)
                    (**rcx_35)(rcx_35)
                    int32_t rbx_6 = *(rcx_35 + 0xc)
                    *(rcx_35 + 0xc) -= 1
                    
                    if (rbx_6 == 1)
                        (*(*rcx_35 + 8))(rcx_35, zx.q(rbx_6))
            
            result = sub_140b721f0(1)
        else
            sub_140b7c510()
            int64_t rdx_3 = data_143e19eb0
            uint64_t* rax_6 = (*(rdx_3 + 0x78))(&data_143e19eb0, rdx_3)
            void*** rax_7 = sub_140a84c80(0, 0x20, 0)
            
            if (rax_7 != 0)
                *rax_7 = &data_142d43dd8
                rax_7[1] = sub_1419cdd40
                rax_7[3] = sub_140a387b0()
                *rax_7 = &data_142d43e30
            
            if (rax_7 != 0)
                sub_140599630(rax_6, 1)
                (*rax_7)[6](rax_7, &var_120)
                int64_t rsi_1 = sx.q(rax_6[1].d)
                int32_t rax_10 = (rsi_1 + 1).d
                rax_6[1].d = rax_10
                
                if (rax_10 s> *(rax_6 + 0xc))
                    sub_1405a4f90(rax_6)
                
                void**** rax_13 = (rsi_1 << 4) + *rax_6
                *rax_13 = rax_7
                rax_13[1].d = 2
            
            sub_140b7c510()
            int64_t r8_2 = data_143e19eb0
            int64_t* var_140
            result = (*(r8_2 + 0x48))(&data_143e19eb0, &var_140, r8_2)
            int64_t* rdi_2 = var_140
            int32_t i_4
            int32_t i_2 = i_4
            void* r14_3 = &rdi_2[sx.q(i_2) * 2]
            
            if (rdi_2 != r14_3)
                do
                    int64_t* rbx_3 = rdi_2[1]
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d += 1
                    
                    result = sub_1419cdd40(*rdi_2)
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            result = (**rbx_3)(rbx_3)
                            int32_t temp6_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp6_1 == 1)
                                result = (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    rdi_2 = &rdi_2[2]
                while (rdi_2 != r14_3)
                
                i_2 = i_4
                rdi_2 = var_140
            
            if (i_2 != 0)
                void* rdi_3 = &rdi_2[1]
                int32_t i_1
                
                do
                    int64_t* rbx_4 = *rdi_3
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d -= 1
                        
                        if (rbx_4[1].d == 1)
                            result = (**rbx_4)(rbx_4)
                            int32_t temp5_1 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                result = (*(*rbx_4 + 8))(rbx_4, 1)
                    
                    rdi_3 += 0x10
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                rdi_2 = var_140
            
            if (rdi_2 != 0)
                result = sub_140a74f90(rdi_2)

__security_check_cookie(result_1 ^ &var_188)
return result
