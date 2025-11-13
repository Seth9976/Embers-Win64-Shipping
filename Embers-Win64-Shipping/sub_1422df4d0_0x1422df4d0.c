// 函数: sub_1422df4d0
// 地址: 0x1422df4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t* result = __security_cookie ^ &var_3c8
int64_t* result_1 = result
int64_t r15 = sx.q(arg1)

if (data_143de5426 != 0)
label_1422df5c0:
    
    if (arg3 != 0 || *((r15 << 3) + 0x143f56d10) != arg2)
        int64_t* rbx_1 = *((r15 << 3) + &data_143f13910)
        
        if (rbx_1 != 0)
            sub_141993ad0(rbx_1)
            j_sub_140a74f90(rbx_1)
        
        *((r15 << 3) + &data_143f13910) = 0
        *((r15 << 3) + 0x143f56d10) = arg2
        result = sub_1419ce3f0()
    
    if (*((r15 << 3) + &data_143f13910) == 0)
        void var_300
        void var_b8
        sub_140b2f260(&var_b8, 0x428c0000, sub_140a96170(&var_300), 1, data_143ddb418)
        sub_140b40000(&var_b8)
        int64_t* var_2f8
        
        if (var_2f8 != 0)
            var_2f8[1].d -= 1
            
            if (var_2f8[1].d == 1)
                (**var_2f8)(var_2f8)
                int32_t rax_5 = *(var_2f8 + 0xc)
                *(var_2f8 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*var_2f8 + 8))(var_2f8, 1)
        
        void var_2e8
        sub_140b389c0(&var_b8, 0x41a00000, sub_140a96170(&var_2e8))
        int64_t* var_2e0
        
        if (var_2e0 != 0)
            var_2e0[1].d -= 1
            
            if (var_2e0[1].d == 1)
                (**var_2e0)(var_2e0)
                int32_t rax_10 = *(var_2e0 + 0xc)
                *(var_2e0 + 0xc) -= 1
                
                if (rax_10 == 1)
                    (*(*var_2e0 + 8))(var_2e0, 1)
        
        int64_t* rax_12 = j_sub_140a82f30(0x58)
        int64_t* rax_13
        
        if (rax_12 == 0)
            rax_13 = nullptr
        else
            rax_13 = sub_1419925e0(rax_12, r15.d)
        
        *((r15 << 3) + &data_143f13910) = rax_13
        uint64_t r13
        r13.b = 0
        void var_2d0
        sub_140b389c0(&var_b8, 0x42480000, sub_140a96170(&var_2d0))
        int64_t* var_2c8
        
        if (var_2c8 != 0)
            var_2c8[1].d -= 1
            
            if (var_2c8[1].d == 1)
                (**var_2c8)(var_2c8)
                int32_t rax_17 = *(var_2c8 + 0xc)
                *(var_2c8 + 0xc) -= 1
                
                if (rax_17 == 1)
                    (*(*var_2c8 + 8))(var_2c8, 1)
        
        int64_t var_360
        int64_t rax_19 = sub_140b480d0(&data_143f562f0, &var_360)
        int64_t* var_98
        
        if (rax_19 == 0)
            int64_t var_388 = 0
            int64_t var_380_1 = 0
            int64_t var_310
            int64_t* rax_20
            int512_t zmm2_2
            rax_20, zmm2_2 = sub_1422e48c0(&var_310, r15.d)
            void* rax_21 = sub_140b1ad00()
            int32_t rcx_24 = rax_20[1].d
            int32_t r14_5 = rcx_24 - 1
            
            if (rcx_24 == 0)
                r14_5 = 0
            
            int32_t rax_22
            
            if (*(rax_21 + 8) == 0)
                rax_22 = 2
            
            if (*(rax_21 + 8) != 0 || r14_5 == 0xffffffff)
                rax_22 = 1
            
            int16_t* var_398 = nullptr
            int32_t rcx_26 = rax_22 + r14_5
            int32_t r13_1 = *(rax_21 + 8)
            int64_t rax_23 = *rax_21
            
            if (r13_1 != 0 || rcx_26 != 0)
                sub_1405a4c70(&var_398, rcx_26 + r13_1, 0)
                memcpy(var_398, rax_23, r13_1 * 2)
            else
                int32_t var_38c_1 = 0
            
            sub_140a2cf70(&var_398, *rax_20, r14_5)
            int64_t rcx_30 = var_310
            
            if (rcx_30 != 0)
                sub_140a74f90(rcx_30)
            
            int512_t zmm1_5 = sub_140b20c40(&var_398)
            int16_t* const r14_6 = &data_142d40450
            int16_t* const rdx_12 = &data_142d40450
            
            if (r13_1 != 0)
                rdx_12 = var_398
            
            if (sub_140b1ef70(&var_388, rdx_12, 2) != 0)
                void** const var_288
                memset(&var_288, 0, 0x90)
                sub_140b4c2a0(&var_288)
                int64_t var_1f8_1 = 0
                var_288 = &data_142d6b230
                int64_t* var_1f0_1 = &var_388
                int64_t var_1e8_1 = 0x7fffffffffffffff
                sub_140b55290(&var_288, 1)
                var_288[0x1b](&var_288, 0)
                sub_1419a4f30(*((r15 << 3) + &data_143f13910), &var_288, zmm2_2, zmm1_5)
                sub_140b4cb40(&var_288)
                int16_t* rcx_71 = var_398
                
                if (rcx_71 != 0)
                    sub_140a74f90(rcx_71)
                
                int64_t rcx_72 = var_388
                
                if (rcx_72 != 0)
                    sub_140a74f90(rcx_72)
                
                goto label_1422dfd19
            
            sub_140a464c0()
            
            if (r13_1 != 0)
                r14_6 = var_398
            
            char const (* r9_3)[0x4] = data_14399ea08
            int64_t var_320
            (*(r9_3 + 0x100))(&data_14399ea08, &var_320, r14_6, r9_3)
            void var_1c8
            int64_t* rax_25 = sub_140aae420(&var_1c8, &var_320)
            void var_2a0
            char* var_1d8
            char** rax_27 = sub_140a96390(&var_1d8, 
                _vfprintf_p_l(&var_2a0, 
                    The global shader cache file '{0}' is missing.\n\nYour application is built to load "
            "COOKED content. No COOKED content was found; This usually means you did not cook "
            "content for this bui", 
                Engine"))
            int64_t rcx_36 = *rax_25
            int64_t* rcx_37 = rax_25[1]
            int32_t var_e8_1 = 4
            
            if (rcx_37 != 0)
                rcx_37[1].d += 1
            
            int32_t rcx_38 = rax_25[2].d
            char var_c0_1 = 1
            int32_t* var_370 = nullptr
            int32_t var_368_1 = 1
            sub_1405a4b40(&var_370, 1, 0)
            int32_t* rcx_40 = var_370
            *rcx_40 = var_e8_1
            int64_t var_e0
            *(rcx_40 + 8) = var_e0
            *(rcx_40 + 8) = var_e0
            rcx_40[2] = var_e0.d
            *(rcx_40 + 8) = var_e0
            rcx_40[0xa].b = 0
            
            if (var_c0_1 != 0)
                *(rcx_40 + 0x10) = rcx_36
                *(rcx_40 + 0x18) = rcx_37
                
                if (rcx_37 != 0)
                    rcx_37[1].d += 1
                
                rcx_40[8] = rcx_38
                rcx_40[0xa].b = 1
            
            char* var_330 = *rax_27
            void* rax_35 = rax_27[1]
            void* var_328_1 = rax_35
            
            if (rax_35 != 0)
                *(rax_35 + 8) += 1
            
            void var_2b8
            int64_t* rax_36 = sub_140aac870(&var_2b8, &var_330, &var_370)
            int64_t var_348 = *rax_36
            int64_t* rcx_43 = rax_36[1]
            
            if (rcx_43 != 0)
                rcx_43[1].d += 1
            
            int32_t var_338_1 = rax_36[2].d
            int64_t* var_2b0
            
            if (var_2b0 != 0)
                var_2b0[1].d -= 1
                
                if (var_2b0[1].d == 1)
                    (**var_2b0)(var_2b0)
                    int32_t rax_40 = *(var_2b0 + 0xc)
                    *(var_2b0 + 0xc) -= 1
                    
                    if (rax_40 == 1)
                        (*(*var_2b0 + 8))(var_2b0, 1)
            
            sub_140596f50(&var_370)
            
            if (var_c0_1 != 0)
                char var_c0_2 = 0
                
                if (rcx_37 != 0)
                    rcx_37[1].d -= 1
                    
                    if (rcx_37[1].d == 1)
                        (**rcx_37)(rcx_37)
                        int32_t rax_44 = *(rcx_37 + 0xc)
                        *(rcx_37 + 0xc) -= 1
                        
                        if (rax_44 == 1)
                            (*(*rcx_37 + 8))(rcx_37, 1)
            
            int64_t* rdi_4 = rax_27[1]
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t rax_48 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (rax_48 == 1)
                        (*(*rdi_4 + 8))(rdi_4, 1)
            
            int64_t* rdi_5 = rax_25[1]
            
            if (rdi_5 != 0)
                rdi_5[1].d -= 1
                
                if (rdi_5[1].d == 1)
                    (**rdi_5)(rdi_5)
                    int32_t rax_52 = *(rdi_5 + 0xc)
                    *(rdi_5 + 0xc) -= 1
                    
                    if (rax_52 == 1)
                        (*(*rdi_5 + 8))(rdi_5, 1)
            
            int64_t* var_298
            
            if (var_298 != 0)
                var_298[1].d -= 1
                
                if (var_298[1].d == 1)
                    (**var_298)(var_298)
                    int32_t rax_56 = *(var_298 + 0xc)
                    *(var_298 + 0xc) -= 1
                    
                    if (rax_56 == 1)
                        (*(*var_298 + 8))(var_298, 1)
            
            sub_140b21610(0, &var_348, nullptr)
            sub_140b721f0(0)
            
            if (rcx_43 != 0)
                rcx_43[1].d -= 1
                
                if (rcx_43[1].d == 1)
                    (**rcx_43)(rcx_43)
                    int32_t rax_60 = *(rcx_43 + 0xc)
                    *(rcx_43 + 0xc) -= 1
                    
                    if (rax_60 == 1)
                        (*(*rcx_43 + 8))(rcx_43, 1)
            
            int64_t rcx_57 = var_320
            
            if (rcx_57 != 0)
                sub_140a74f90(rcx_57)
            
            int16_t* rcx_58 = var_398
            
            if (rcx_58 != 0)
                sub_140a74f90(rcx_58)
            
            int64_t rcx_59 = var_388
            
            if (rcx_59 != 0)
                sub_140a74f90(rcx_59)
            
            result = sub_140b365b0(&var_b8)
            char var_6c_1 = 0
            
            if (var_98 != 0)
                result = zx.q(var_98[1].d)
                var_98[1].d -= 1
                
                if (result.d == 1)
                    (**var_98)(var_98)
                    result = zx.q(*(var_98 + 0xc))
                    *(var_98 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*var_98 + 8))(var_98, 1)
            
            int64_t* var_b0
            
            if (var_b0 != 0)
                result = zx.q(var_b0[1].d)
                var_b0[1].d -= 1
                
                if (result.d == 1)
                    result = (**var_b0)(var_b0)
                    int32_t rbx_3 = *(var_b0 + 0xc)
                    *(var_b0 + 0xc) -= 1
                    
                    if (rbx_3 == 1)
                        result = (*(*var_b0 + 8))(var_b0, zx.q(rbx_3))
        else
            int64_t var_378_1 = 0
            void var_1a8
            int512_t zmm1_4
            int512_t zmm2_1
            zmm1_4, zmm2_1 = sub_140b4c8e0(&var_1a8, rax_19, var_360, 1, 0)
            sub_1419a4f30(*((r15 << 3) + &data_143f13910), &var_1a8, zmm2_1, zmm1_4)
            sub_140b4cbc0(&var_1a8)
        label_1422dfd19:
            sub_1422f93f0(r15.d)
            
            if (data_143f56360 != 0 && r15.d == data_143f0f1a0)
                sub_1419978c0(*((r15 << 3) + &data_143f13910))
            
            sub_140b365b0(&var_b8)
            char var_6c_2 = 0
            
            if (var_98 != 0)
                var_98[1].d -= 1
                
                if (var_98[1].d == 1)
                    (**var_98)(var_98)
                    int32_t rbx_4 = *(var_98 + 0xc)
                    *(var_98 + 0xc) -= 1
                    
                    if (rbx_4 == 1)
                        (*(*var_98 + 8))(var_98, zx.q(rbx_4))
            
            result = sub_1405970a0(&var_b8)
else
    TEB* gsbase
    result = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    if (data_143cd80cc s> *(0x14 + result))
        result = _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            result = _Init_thread_footer(&data_143cd80cc)
        
        if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
            goto label_1422df5c0
        
        goto label_1422df55b
    
    if (data_143cd80c8 == 0)
        goto label_1422df5c0
    
label_1422df55b:
    
    if (*((r15 << 3) + &data_143f13910) == 0)
        result = j_sub_140a82f30(0x58)
        
        if (result == 0)
            *((r15 << 3) + &data_143f13910) = 0
        else
            result = sub_1419925e0(result, r15.d)
            *((r15 << 3) + &data_143f13910) = result

__security_check_cookie(result_1 ^ &var_3c8)
return result
