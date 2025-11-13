// 函数: sub_140969c90
// 地址: 0x140969c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int32_t arg_8 = 0
int64_t* result = *(arg1 + 0x10)
void* r13 = arg1
char r14 = 0

if (result[0x11] == 0)
    int64_t r12
    r12.b = 0
    int16_t* var_388
    uint64_t rcx_103
    
    if (arg3 == 0)
        arg1.b = 1
        int32_t var_424 = 0
        int32_t rax_55
        int512_t zmm1_4
        rax_55, zmm1_4 = sub_140b1a070(arg1.b)
        int64_t* rcx_79 = arg4[1]
        int32_t var_420 = rax_55
        uint64_t var_398 = 0
        int32_t var_390_1 = 0
        char* rdx_42 = *rcx_79
        char var_427
        
        if (&rdx_42[1] u> rcx_79[1])
            (*(*arg4 + 0x150))(arg4, &var_427, 1)
        else
            var_427 = *rdx_42
            *rcx_79 += 1
        int64_t* rcx_81 = arg4[1]
        int32_t* rdx_44 = *rcx_81
        
        if (&rdx_44[1] u> rcx_81[1])
            int32_t* rdx_45 = &var_424
            
            if ((*(arg4 + 0x29) & 0x20) != 0)
                sub_140b54070(arg4, rdx_45, zmm1_4)
            else
                (*(*arg4 + 0x150))(arg4, rdx_45, 4)
        else
            var_424 = *rdx_44
            *rcx_81 += 4
        
        int512_t zmm1_5 = sub_140a1d9d0(arg4, &var_398, zmm1_4)
        result.b = not.b(*(arg4 + 0x29))
        
        if ((result.b & 1) != 0)
            if (sub_140b1d230(zx.q(var_420), zx.q(var_424)) == 0)
                result = arg2[0x262]
                void* rdx_48 = *result
                
                if (rdx_48 != 0 && (*(rdx_48 + 0x30) & 2) == 0)
                    void** var_268
                    sub_141f79620(&var_268, rdx_48, 0)
                    char var_428 = 2
                    int64_t* var_260
                    char* rdx_49 = *var_260
                    
                    if (&rdx_49[1] u> var_260[1])
                        var_268[0x2a](&var_268, &var_428, 1)
                    else
                        var_428 = *rdx_49
                        *var_260 += 1
                    
                    int32_t* rdx_51 = *var_260
                    
                    if (&rdx_51[1] u> var_260[1])
                        int32_t* rdx_52 = &var_420
                        void*** rcx_89 = &var_268
                        char var_23f
                        
                        if ((var_23f & 0x20) != 0)
                            sub_140b54070(rcx_89, rdx_52, zmm1_5)
                        else
                            var_268[0x2a](rcx_89, rdx_52, 4)
                    else
                        var_420 = *rdx_51
                        *var_260 += 4
                    
                    int64_t r9_7
                    r9_7.b = 1
                    int64_t* rcx_90 = *arg2[0x262]
                    void var_308
                    (*(*rcx_90 + 0x2c8))(rcx_90, &var_308, &var_268, r9_7)
                    result = sub_141f7bb50(&var_268)
                
                r12.b = 1
            else if (var_390_1 s<= 1)
                result = sub_1409775a0(r13 - 0x220, arg2)
            else if (data_143f4cf70 == 0)
            label_14096a784:
                uint64_t var_418 = 0
                int32_t var_410_1 = 0
                sub_1405947f0(&var_418, 0x13)
                int32_t rax_76 = var_410_1 + 0x13
                var_410_1 = rax_76
                
                if (rax_76 s> 0)
                    sub_140594770(&var_418)
                
                UnDecorator::getReferenceType(var_418, u"Encryption failure", 0x26)
                result = sub_140947d60(arg2, &var_418, zmm1_5)
                int64_t* rcx_98 = var_418
                r12.b = 1
                
                if (rcx_98 != 0)
                    result = sub_140a74f90(rcx_98)
            else
                int64_t* rcx_93 = data_143f4cf68
                
                if (rcx_93 == 0)
                    goto label_14096a784
                
                if ((*(*rcx_93 + 0x28))(rcx_93) == 0)
                    goto label_14096a784
                
                int64_t var_368
                sub_140d3a3a0(&var_368, arg2)
                int64_t rbx_10 = var_368
                var_388 = sub_140977470
                int32_t var_380_1 = 0
                int64_t* result_1 = nullptr
                int64_t* result_4 = sub_140a84c80(0, 0x30, 0)
                result_1 = result_4
                int32_t var_400_1 = 3
                
                if (result_4 != 0)
                    *result_4 = &data_142e33f58
                    sub_140d3a3a0(&result_4[1], r13 - 0x220)
                    *(result_4 + 0x10) = var_388.o
                    result_4[4] = rbx_10
                    result_4[5] = sub_140a387b0()
                    *result_4 = &data_142e33fb0
                
                int64_t* rcx_96 = nullptr
                
                if (data_143f4cf70 != 0)
                    rcx_96 = data_143f4cf68
                
                result = (*(*rcx_96 + 0x48))(rcx_96, &var_398, &result_1)
                
                if (var_400_1 == 0)
                    result = result_1
                label_14096a775:
                    
                    if (result != 0)
                        result = sub_140a74f90(result)
                else
                    int64_t* result_5 = result_1
                    
                    if (result_5 != 0)
                        (*(*result_5 + 0x38))(result_5, 0)
                        result = result_1
                        
                        if (result != 0)
                            result = sub_140a84c80(result, 0, 0)
                            result_1 = result
                        
                        int32_t var_400_2 = 0
                        goto label_14096a775
        
        rcx_103 = var_398
    label_14096a7f0:
        
        if (rcx_103 != 0)
            result = sub_140a74f90(rcx_103)
        
        if (r12.b != 0)
        label_14096a811:
            void* rax_78
            int64_t rdx_61
            rax_78, rdx_61 = (*(*(r13 - 0x220) + 0x668))(r13 - 0x220, arg2)
            
            if (rax_78 != 0)
                int64_t var_360 = *(*(rax_78 + 0x10) + 0x18)
                int64_t var_320
                sub_140b63b70(&var_360, &var_320)
                void* rax_79 = sub_1409612a0(r13 - 0x220, &var_320)
                int64_t rcx_108 = var_320
                
                if (rcx_108 != 0)
                    sub_140a74f90(rcx_108)
                
                if (rax_79 != 0)
                    int64_t r8_10 = *rax_79
                    (*(r8_10 + 0x640))(rax_79, rax_78, r8_10)
                
                (*(*(r13 - 0x220) + 0x670))(r13 - 0x220, rax_78)
            
            rdx_61.b = 1
            (*(*arg2 + 0x2a8))(arg2, rdx_61)
            return sub_14213f9e0(arg2)
    else
        if (arg3 != 4)
            if (arg3 != 0x1a)
                if (arg3 == 0x1c)
                    uint64_t var_3c8 = 0
                    int32_t var_3c0_1 = 0
                    int16_t* var_3d8 = nullptr
                    int32_t var_3d0_1 = 0
                    sub_140a1d9d0(arg4, &var_3d8, arg5)
                    result.b = not.b(*(arg4 + 0x29))
                    
                    if ((result.b & 1) != 0)
                        int64_t* rax_6 = (*(*(r13 - 0x220) + 0x668))(r13 - 0x220, arg2)
                        int16_t* var_358
                        int32_t rax_7
                        
                        if (rax_6 != 0)
                            int64_t var_378 = *(rax_6[2] + 0x18)
                            sub_140b63b70(&var_378, &var_358)
                            int16_t* const rcx_12 = &data_142d40450
                            int16_t* rdx_8 = &data_142d40450
                            r14 = 4
                            int32_t var_350
                            
                            if (var_350 != 0)
                                rdx_8 = var_358
                            
                            if (var_3d0_1 != 0)
                                rcx_12 = var_3d8
                            
                            rax_7 = sub_140a54510(rcx_12, rdx_8)
                        
                        int64_t* rbx
                        
                        if (rax_6 == 0 || rax_7 != 0)
                            rbx.b = 0
                        else
                            rbx.b = 1
                        
                        if ((r14 & 4) != 0)
                            int16_t* rcx_13 = var_358
                            
                            if (rcx_13 != 0)
                                sub_140a74f90(rcx_13)
                        
                        int512_t zmm1_1
                        int64_t* rdi_2
                        
                        if (rbx.b == 0)
                            void var_2d0
                            int64_t* rax_14
                            rax_14, zmm1_1 =
                                _vfprintf_p_l(&var_2d0, Join failure, no actor at NetGUIDAck.", 
                                NetworkErrors")
                            result = sub_140597df0(&var_3c8, sub_140ac6680(rax_14))
                            int64_t* var_2c8
                            rdi_2 = var_2c8
                        label_140969f85:
                            
                            if (rdi_2 != 0)
                                result = zx.q(rdi_2[1].d)
                                rdi_2[1].d -= 1
                                
                                if (result.d == 1)
                                    result = (**rdi_2)(rdi_2)
                                    int32_t rbx_4 = *(rdi_2 + 0xc)
                                    *(rdi_2 + 0xc) -= 1
                                    
                                    if (rbx_4 == 1)
                                        result = (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_4))
                        else
                            int32_t var_3e8
                            sub_140926e00(r13 + 0x98, &var_3e8, &var_3d8)
                            int64_t rax_8 = sx.q(var_3e8)
                            void* const rcx_15
                            
                            if (rax_8.d == 0xffffffff)
                                rcx_15 = nullptr
                            else
                                rcx_15 = *(r13 + 0x98) + rax_8 * 0x28
                            
                            int64_t* rbx_3 = rcx_15 + 0x10
                            
                            if (rcx_15 == 0)
                                rbx_3 = nullptr
                            
                            if (rbx_3 == 0)
                                void var_2e8
                                int64_t* rax_12
                                rax_12, zmm1_1 = _vfprintf_p_l(&var_2e8, 
                                    Join failure, no host object at NetGUIDAck.", NetworkErrors")
                                result = sub_140597df0(&var_3c8, sub_140ac6680(rax_12))
                                int64_t* var_2e0
                                rdi_2 = var_2e0
                                goto label_140969f85
                            
                            int64_t rdx_10
                            rdx_10.b = 1
                            sub_141dd8f90(rax_6, rdx_10.b)
                            zmm1_1 = sub_141dd7750(rax_6, 1, 1)
                            rax_6[0x4c].b = 3
                            result = sub_140986d40(rax_6)
                            
                            if (rbx_3[1].d != 0)
                                int64_t* rcx_19 = *rbx_3
                                
                                if (rcx_19 != 0)
                                    result = (*(*rcx_19 + 0x28))(rcx_19)
                                    
                                    if (result.b != 0)
                                        if (rbx_3[1].d != 0)
                                            rdi = *rbx_3
                                        
                                        result = (*(*rdi + 0x50))(rdi, rax_6, arg2)
                        
                        if (var_3c0_1 s> 1)
                            result = sub_140947d60(arg2, &var_3c8, zmm1_1)
                            r12.b = 1
                    
                    int16_t* rcx_30 = var_3d8
                    
                    if (rcx_30 != 0)
                        result = sub_140a74f90(rcx_30)
                    
                    rcx_103 = var_3c8
                    goto label_14096a7f0
                
                void var_300
                int64_t* rax
                int512_t zmm1
                rax, zmm1 = _vfprintf_p_l(&var_300, Join failure, unexpected control message.", 
                    NetworkErrors")
                int64_t* rax_1 = sub_140ac6680(rax)
                uint64_t var_3a8 = 0
                int32_t rbx_1 = rax_1[1].d
                int64_t r14_1 = *rax_1
                int32_t var_3a0_1 = rbx_1
                
                if (rbx_1 != 0)
                    sub_1405a4c70(&var_3a8, rbx_1, 0)
                    memcpy(var_3a8, r14_1, rbx_1 * 2)
                else
                    int32_t var_39c_1 = 0
                
                int64_t* var_2f8
                
                if (var_2f8 != 0)
                    var_2f8[1].d -= 1
                    
                    if (var_2f8[1].d == 1)
                        (**var_2f8)(var_2f8)
                        int32_t rbx_2 = *(var_2f8 + 0xc)
                        *(var_2f8 + 0xc) -= 1
                        
                        if (rbx_2 == 1)
                            (*(*var_2f8 + 8))(var_2f8, zx.q(rbx_2))
                
                sub_140947d60(arg2, &var_3a8, zmm1)
                uint64_t rcx_7 = var_3a8
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                goto label_14096a811
            
            uint64_t var_3f8 = 0
            int32_t var_3f0_1 = 0
            void** const var_348 = &data_142e259e0
            uint64_t var_3b8 = 0
            int128_t var_340
            __builtin_memset(&var_340, 0, 0x20)
            int32_t var_3b0_1 = 0
            sub_14215ddd0(arg4, &var_348, sub_140a1d9d0(arg4, &var_3b8, arg5))
            result.b = not.b(*(arg4 + 0x29))
            
            if ((result.b & 1) != 0)
                int64_t rbx_5 = arg2[0x2b5]
                int32_t rcx_33
                rcx_33.b = (rbx_5 u>> 0x20).d == 0
                int512_t zmm1_3
                int64_t* rdi_3
                
                if ((rcx_33.b & sub_140b5b8a0(rbx_5.d, 0)) == 0)
                    void var_288
                    int64_t* rax_45
                    rax_45, zmm1_3 =
                        _vfprintf_p_l(&var_288, Join failure, existing ClientWorldPackageName.", 
                        NetworkErrors")
                    result = sub_140597df0(&var_3f8, sub_140ac6680(rax_45))
                    int64_t* var_280
                    rdi_3 = var_280
                label_14096a391:
                    
                    if (rdi_3 != 0)
                        result = zx.q(rdi_3[1].d)
                        rdi_3[1].d -= 1
                        
                        if (result.d == 1)
                            result = (**rdi_3)(rdi_3)
                            int32_t rbx_8 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (rbx_8 == 1)
                                result = (*(*rdi_3 + 8))(rdi_3, zx.q(rbx_8))
                else
                    if ((*(*(r13 - 0x220) + 0x668))(r13 - 0x220, arg2) != 0)
                        void var_2a0
                        int64_t* rax_43
                        rax_43, zmm1_3 =
                            _vfprintf_p_l(&var_2a0, Join failure, existing beacon actor.", 
                            NetworkErrors")
                        result = sub_140597df0(&var_3f8, sub_140ac6680(rax_43))
                        int64_t* var_298
                        rdi_3 = var_298
                        goto label_14096a391
                    
                    sub_142155520(arg2, 
                        *(sub_140d21d80((*(*(r13 - 0x220) + 0x150))(r13 - 0x220)) + 0x18))
                    int32_t var_3e4
                    sub_140926e00(r13 + 0x48, &var_3e4, &var_3b8)
                    int64_t rax_24 = sx.q(var_3e4)
                    void* const rcx_39
                    
                    if (rax_24.d == 0xffffffff)
                        rcx_39 = nullptr
                    else
                        rcx_39 = *(r13 + 0x48) + rax_24 * 0x28
                    
                    int64_t** rbx_7 = rcx_39 + 0x10
                    
                    if (rcx_39 == 0)
                        rbx_7 = nullptr
                    
                    if (rbx_7 == 0 || rbx_7[1].d == 0)
                        rbx_7.b = 0
                    else
                        int64_t* rcx_40 = *rbx_7
                        
                        if (rcx_40 == 0)
                            rbx_7.b = 0
                        else if ((*(*rcx_40 + 0x28))(rcx_40) == 0)
                            rbx_7.b = 0
                        else
                            if (rbx_7[1].d != 0)
                                rdi = *rbx_7
                            
                            int64_t* rax_29 = (*(*rdi + 0x48))(rdi, arg2)
                            rdi = rax_29
                            
                            if (rax_29 == 0)
                                rbx_7.b = 0
                            else
                                int64_t var_370 = *(rax_29[2] + 0x18)
                                sub_140b63b70(&var_370, &var_388)
                                uint64_t rcx_44 = &data_142d40450
                                int16_t* rdx_24 = &data_142d40450
                                int32_t var_380
                                
                                if (var_380 != 0)
                                    rdx_24 = var_388
                                
                                r14 = 2
                                
                                if (var_3b0_1 != 0)
                                    rcx_44 = var_3b8
                                
                                if (sub_140a54510(rcx_44, rdx_24) != 0)
                                    rbx_7.b = 0
                                else
                                    rbx_7.b = 1
                    
                    if ((r14 & 2) != 0)
                        int16_t* rcx_45 = var_388
                        
                        if (rcx_45 != 0)
                            sub_140a74f90(rcx_45)
                    
                    if (rbx_7.b == 0)
                        void var_2b8
                        int64_t* rax_41
                        rax_41, zmm1_3 =
                            _vfprintf_p_l(&var_2b8, Join failure, Couldn't spawn beacon.", 
                            NetworkErrors")
                        result = sub_140597df0(&var_3f8, sub_140ac6680(rax_41))
                        int64_t* var_2b0
                        rdi_3 = var_2b0
                        goto label_14096a391
                    
                    rdi[0x4c].b = 2
                    void var_3e0
                    sub_142160e10(*(arg2[0xb] + 0x150), &var_3e0, rdi)
                    (*(*rdi + 0x658))(rdi, arg2)
                    sub_14094ded0(&arg2[0x2c], &var_348)
                    arg2[0x13] = rdi
                    sub_142155510(arg2, 3)
                    sub_141dd9000(rdi, 3)
                    sub_141dd8f90(rdi, 0)
                    zmm1_3 = sub_141dd8d70(rdi, *(r13 - 0x138))
                    int64_t r14_2 = sx.q(*(r13 + 0x40))
                    int32_t rax_33 = (r14_2 + 1).d
                    *(r13 + 0x40) = rax_33
                    
                    if (rax_33 s> *(r13 + 0x44))
                        sub_1405a4d70(r13 + 0x38)
                    
                    *(*(r13 + 0x38) + (r14_2 << 3)) = rdi
                    result = arg2[0x262]
                    void* rdx_30 = *result
                    
                    if (rdx_30 != 0 && (*(rdx_30 + 0x30) & 2) == 0)
                        void** var_148
                        sub_141f79620(&var_148, rdx_30, 0)
                        arg_8.b = 0x1b
                        int64_t* var_140
                        char* rdx_31 = *var_140
                        
                        if (&rdx_31[1] u> var_140[1])
                            var_148[0x2a](&var_148, &arg_8, 1)
                        else
                            arg_8.b = *rdx_31
                            *var_140 += 1
                        
                        var_148[0x2d](&var_148, &var_3e0)
                        int64_t r9_3
                        r9_3.b = 1
                        int64_t* rcx_59 = *arg2[0x262]
                        void var_310
                        (*(*rcx_59 + 0x2c8))(rcx_59, &var_310, &var_148, r9_3)
                        result, zmm1_3 = sub_141f7bb50(&var_148)
                
                if (var_3f0_1 s> 1)
                    result = sub_140947d60(arg2, &var_3f8, zmm1_3)
                    r12.b = 1
            
            var_348 = &data_142e259e0
            int64_t var_330
            
            if (var_330 != 0)
                result = sub_140a74f90(var_330)
            
            int64_t* rbx_9 = var_340:8.q
            
            if (rbx_9 != 0)
                rbx_9[1].d -= 1
                
                if (rbx_9[1].d == 1)
                    result = (**rbx_9)(rbx_9)
                    int32_t temp2_1 = *(rbx_9 + 0xc)
                    *(rbx_9 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        result = (*(*rbx_9 + 8))(rbx_9, 1)
            
            uint64_t rcx_76 = var_3b8
            
            if (rcx_76 != 0)
                result = sub_140a74f90(rcx_76)
            
            rcx_103 = var_3f8
            goto label_14096a7f0
        
        int64_t* rcx_77 = arg4[1]
        int32_t* rdx_40 = *rcx_77
        int32_t result_3
        
        if (&rdx_40[1] u> rcx_77[1])
            int32_t* rdx_41 = &result_3
            
            if ((*(arg4 + 0x29) & 0x20) != 0)
                sub_140b54070(arg4, rdx_41, arg5)
            else
                (*(*arg4 + 0x150))(arg4, rdx_41, 4)
        else
            result_3 = *rdx_40
            *rcx_77 += 4
        
        result.b = not.b(*(arg4 + 0x29))
        
        if ((result.b & 1) != 0)
            int32_t result_2 = result_3
            result = 0x708
            
            if (result_2 s>= 0x708)
                result = zx.q(*(*(r13 + 0x10) + 0x64))
                
                if (result_2 s< result.d)
                    result = zx.q(result_2)
            
            arg2[7].d = result.d

return result
