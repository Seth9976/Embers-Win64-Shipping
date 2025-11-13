// 函数: sub_140f2c460
// 地址: 0x140f2c460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_478
int64_t rax_1 = __security_cookie ^ &var_478
int128_t* r14 = arg2
int32_t result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)

if (result s> 0)
    TEB* gsbase
    
    if (data_143e2ad44
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        arg5 = _Init_thread_header(&data_143e2ad44)
        
        if (data_143e2ad44 == 0xffffffff)
            int64_t* rax_63 = sub_140f91710()
            void* rax_64 = rax_63[0x23]
            
            if (rax_64 == 0)
                int64_t rdx_15 = *rax_63
                (*(rdx_15 + 0x390))(rax_63, rdx_15)
                rax_64 = rax_63[0x23]
            
            data_143e2ad40 = *(rax_64 + 0x28)
            arg5 = _Init_thread_footer(&data_143e2ad44)
    
    void* var_108_1 = nullptr
    int32_t var_100_1 = 0
    int32_t var_fc_1 = 0x40
    int32_t rax_6 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    void var_308
    
    if (rax_6 s> var_fc_1)
        arg5 = sub_140f5c240(&var_308, rax_6)
    
    int32_t rdi_1 = 0
    
    if ((**(arg1 + 0x2a8))(arg1 + 0x2a8) s> 0)
        int64_t* rsi_1 = nullptr
        int32_t rax_17
        
        do
            int32_t* rbx_2 = *(rsi_1 + *(arg1 + 0x2b8)) + 0xa8
            
            if (rbx_2[4] != 0)
                int64_t* rcx_6 = *(rbx_2 + 8)
                
                if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
                    int64_t* rcx_7
                    
                    if (rbx_2[4] == 0)
                        rcx_7 = nullptr
                    else
                        rcx_7 = *(rbx_2 + 8)
                    
                    (*(*rcx_7 + 0x48))(rcx_7)
                    *rbx_2 = arg5
            
            arg5 = *rbx_2
            int64_t rbx_3 = sx.q(var_100_1)
            int32_t var_42c_1 = arg5
            int32_t rax_13 = (rbx_3 + 1).d
            var_100_1 = rax_13
            
            if (rax_13 s> var_fc_1)
                arg5 = sub_140f5c0d0(&var_308, rbx_3.d)
            
            void* rdx_2 = &var_308
            
            if (var_108_1 != 0)
                rdx_2 = var_108_1
            
            int64_t rax_15 = rdi_1.q
            rdi_1 += 1
            rsi_1 = &rsi_1[1]
            *(rdx_2 + (rbx_3 << 3)) = rax_15
            rax_17 = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
        while (rdi_1 s< rax_17)
        r14 = arg2
    
    void* rcx_10 = &var_308
    
    if (var_108_1 != 0)
        rcx_10 = var_108_1
    
    char var_438
    sub_140f1c5d0(rcx_10, var_100_1, var_438)
    uint128_t zmm14 = 0xff7fffff
    int32_t rsi_2 = 0
    int32_t var_428_1 = 0
    result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
    
    if (result s> 0)
        int64_t rbx_4 = 0
        uint128_t zmm6
        uint128_t var_58_1 = zmm6
        uint128_t zmm7
        uint128_t var_68_1 = zmm7
        uint128_t zmm8
        uint128_t var_78_1 = zmm8
        uint128_t zmm9
        uint128_t var_88_1 = zmm9
        int128_t zmm10
        int128_t var_98_1 = zmm10
        int128_t zmm11
        int128_t var_a8_1 = zmm11
        int128_t zmm12
        int128_t var_b8_1 = zmm12
        int128_t zmm13
        int128_t var_c8_1 = zmm13
        int32_t var_430
        var_430.q = 0
        
        do
            void* r13_1 = &var_308
            
            if (var_108_1 != 0)
                r13_1 = var_108_1
            
            void* rdi_2 = *(*(arg1 + 0x2b8) + (sx.q(*(r13_1 + (rbx_4 << 3))) << 3))
            char* rbx_6 = *(rdi_2 + 0x10) + 0x1a8
            
            if (*(rbx_6 + 0x10) != 0)
                int64_t* rcx_13 = *(rbx_6 + 8)
                
                if (rcx_13 != 0 && (*(*rcx_13 + 0x28))(rcx_13) != 0)
                    int64_t* rcx_14
                    
                    if (*(rbx_6 + 0x10) == 0)
                        rcx_14 = nullptr
                    else
                        rcx_14 = *(rbx_6 + 8)
                    
                    (*(*rcx_14 + 0x48))(rcx_14, &var_438)
                    *rbx_6 = var_438
            
            uint64_t rbx_7 = zx.q(*rbx_6)
            
            if ((*arg3 & rbx_7.b) != 0)
                if (*(rdi_2 + 0x40) != 0)
                    int64_t* rcx_15 = *(rdi_2 + 0x38)
                    
                    if (rcx_15 != 0 && (*(*rcx_15 + 0x28))(rcx_15) != 0)
                        int64_t* rcx_16
                        
                        if (*(rdi_2 + 0x40) == 0)
                            rcx_16 = nullptr
                        else
                            rcx_16 = *(rdi_2 + 0x38)
                        
                        uint128_t var_3c0
                        (*(*rcx_16 + 0x48))(rcx_16, &var_3c0)
                        *(rdi_2 + 0x20) = var_3c0
                
                bool cond:1_1 = *(rdi_2 + 0x88) == 0
                uint128_t var_348 = *(rdi_2 + 0x20)
                
                if (not(cond:1_1))
                    int64_t* rcx_17 = *(rdi_2 + 0x80)
                    
                    if (rcx_17 != 0 && (*(*rcx_17 + 0x28))(rcx_17) != 0)
                        int64_t* rcx_18
                        
                        if (*(rdi_2 + 0x88) == 0)
                            rcx_18 = nullptr
                        else
                            rcx_18 = *(rdi_2 + 0x80)
                        
                        int64_t var_3e0
                        (*(*rcx_18 + 0x48))(rcx_18, &var_3e0)
                        *(rdi_2 + 0x70) = var_3e0
                
                zmm12 = *(rdi_2 + 0x70)
                zmm13 = *(rdi_2 + 0x74)
                
                if (*(rdi_2 + 0x68) != 0)
                    int64_t* rcx_19 = *(rdi_2 + 0x60)
                    
                    if (rcx_19 != 0 && (*(*rcx_19 + 0x28))(rcx_19) != 0)
                        int64_t* rcx_20
                        
                        if (*(rdi_2 + 0x68) == 0)
                            rcx_20 = nullptr
                        else
                            rcx_20 = *(rdi_2 + 0x60)
                        
                        uint128_t var_3b0
                        (*(*rcx_20 + 0x48))(rcx_20, &var_3b0)
                        *(rdi_2 + 0x48) = var_3b0
                
                bool cond:3_1 = *(rdi_2 + 0xa0) == 0
                uint128_t var_368 = *(rdi_2 + 0x48)
                
                if (not(cond:3_1))
                    int64_t* rcx_21 = *(rdi_2 + 0x98)
                    
                    if (rcx_21 != 0 && (*(*rcx_21 + 0x28))(rcx_21) != 0)
                        int64_t* rcx_22
                        
                        if (*(rdi_2 + 0xa0) == 0)
                            rcx_22 = nullptr
                        else
                            rcx_22 = *(rdi_2 + 0x98)
                        
                        *(rdi_2 + 0x90) = (*(*rcx_22 + 0x48))(rcx_22)
                
                zmm9 = *r14
                zmm6 = *(r14 + 4)
                zmm8 = zmm9
                uint128_t zmm1_1 = var_368.d
                int32_t zmm2_1 = var_368:4.d
                int32_t zmm3 = var_368:0xc.d
                zmm9.d = zmm9.d f* var_368:8.d
                zmm8.d = zmm8.d f* zmm1_1.d
                zmm7.d = zmm6.d f* zmm2_1
                zmm6.d = zmm6.d f* zmm3
                
                if (zmm1_1.d f== var_368:8.d)
                    r14.b = 0
                else
                    r14.b = 1
                
                if (zmm2_1 f== zmm3)
                    rsi_2.b = 0
                else
                    rsi_2.b = 1
                
                zmm10 = var_348:8.d
                zmm11 = var_348:0xc.d
                int32_t var_404_1 = zmm11.d
                int64_t* rax_41
                void var_3c8
                
                if (*(rdi_2 + 0x90) == 0)
                    uint64_t var_3d8
                    rax_41 = &var_3d8
                    var_3d8 = zmm10.d.q
                else
                    rax_41 = sub_140e13cf0(*(rdi_2 + 0x10), &var_3c8)
                uint128_t zmm0 = *rax_41
                zmm1_1 = *(rax_41 + 4)
                zmm12.d = zmm12.d f* zmm0.d
                zmm13.d = zmm13.d f* zmm1_1.d
                zmm8.d = zmm8.d f+ var_348.d
                int32_t var_420
                
                if (r14.b == 0)
                    var_420 = zmm0.d
                    zmm8.d = zmm8.d f- zmm12.d
                else
                    zmm9.d = zmm9.d f- zmm8.d
                    zmm9.d = zmm9.d f- zmm10.d
                    var_420 = zmm9.d
                
                zmm7.d = zmm7.d f+ var_348:4.d
                
                if (rsi_2.b == 0)
                    int32_t var_41c_2 = zmm1_1.d
                    zmm7.d = zmm7.d f- zmm13.d
                else
                    zmm6.d = zmm6.d f- zmm7.d
                    zmm6.d = zmm6.d f- zmm11.d
                    int32_t var_41c_1 = zmm6.d
                
                int128_t* rcx_25 = *(rdi_2 + 0x10) + 0x1c8
                int32_t var_3e8_1 = zmm8.d
                bool cond:6_1 = data_143e20cf4 != 0
                int32_t var_3e4_1 = zmm7.d
                int32_t var_3ec = 0x3f800000
                uint64_t var_358
                uint64_t var_338
                char rcx_26
                uint128_t zmm0_1
                char var_350_3
                
                if (cond:6_1)
                    uint128_t* rax_43 = sub_140e111c0(rcx_25)
                    char rdx_9 = 0
                    
                    if (*(rax_43 + 0x18) == 0)
                        zmm1_1 = var_348
                    else
                        zmm0_1 = zx.o(rax_43[1].q)
                        rdx_9 = 1
                        zmm1_1 = *rax_43
                        var_338 = zmm0_1.q
                        var_338.d = (zmm0_1 ^ data_142d3f780).d
                    
                    rcx_26 = 0
                    char var_350_2 = 0
                    
                    if (rdx_9 != 0)
                        var_358 = var_338
                        var_368 = zmm1_1
                        rcx_26 = 1
                        var_350_3 = 1
                else
                    int128_t* rax_42 = sub_140e111c0(rcx_25)
                    rcx_26 = 0
                    char var_350_1 = 0
                    
                    if (*(rax_42 + 0x18) != 0)
                        zmm1_1 = zx.o(rax_42[1].q)
                        var_368 = *rax_42
                        var_358 = zmm1_1.q
                        rcx_26 = 1
                        var_350_3 = 1
                int64_t* rdi_3
                int64_t r14_2
                
                if (rcx_26 == 0)
                    var_358.d = zmm8.d
                    zmm6 = *(arg2 + 8)
                    var_358:4.d = zmm7.d
                    var_348.q = var_420.q
                    var_368 = data_142d8c9b0
                    int32_t var_32c
                    zmm7, zmm8 = sub_1408b8950(&var_32c, &var_368, arg2 + 0x1c)
                    r14_2 = *(rdi_2 + 0x10)
                    rdi_3 = *(rdi_2 + 0x18)
                    zmm1_1.d = zmm8.d f* zmm6.d
                    char var_314 = var_314 ^ ((*(arg2 + 0x34) ^ var_314) & 1)
                    zmm0.d = zmm7.d f* zmm6.d
                    var_348:8.d = zmm6.d
                    var_338:4.d = zmm8.d
                    int32_t var_330_1 = zmm7.d
                    zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
                    zmm0.d = zmm0.d f+ arg2[1].d
                    var_348:0xc.d = zmm1_1.d
                    var_338.d = zmm0.d
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d += 1
                    
                    zmm6 = var_348
                    zmm7 = var_338.o
                    uint128_t var_328
                    zmm8 = var_328
                    int64_t var_318
                    zmm9 = zx.o(var_318)
                else
                    uint64_t* rsi_4 = *(rdi_2 + 0x10) + 0x1f8
                    
                    if (rsi_4[3].d != 0)
                        int64_t* rcx_27 = rsi_4[2]
                        
                        if (rcx_27 != 0 && (*(*rcx_27 + 0x28))(rcx_27) != 0)
                            int64_t* rcx_28
                            
                            if (rsi_4[3].d == 0)
                                rcx_28 = nullptr
                            else
                                rcx_28 = rsi_4[2]
                            
                            int64_t var_3d0
                            (*(*rcx_28 + 0x48))(rcx_28, &var_3d0)
                            *rsi_4 = var_3d0
                    
                    var_348.q = *rsi_4
                    zmm0_1 = *(arg2 + 0xc)
                    int32_t var_3f8 = (*(arg2 + 8)).d
                    int32_t var_3f4_1 = zmm0_1.d
                    int32_t var_3f0_1 = arg2[1].d.d
                    uint128_t var_3a0
                    sub_140dd8200(&var_3a0, &var_420, &var_3ec, &var_368, &var_348, &var_3f8, 
                        arg2 + 0x1c)
                    r14_2 = *(rdi_2 + 0x10)
                    rdi_3 = *(rdi_2 + 0x18)
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d += 1
                    
                    zmm6 = var_3a0
                    uint128_t var_390
                    zmm7 = var_390
                    uint128_t var_380
                    zmm8 = var_380
                    int64_t var_370
                    zmm9 = zx.o(var_370)
                
                if (rdi_3 != 0)
                    int32_t rax_50 = rdi_3[1].d
                    rdi_3[1].d = rax_50
                    
                    if (rax_50 == 0)
                        (**rdi_3)(rdi_3)
                        int32_t temp0_1 = *(rdi_3 + 0xc)
                        *(rdi_3 + 0xc) -= 1
                        
                        if (temp0_1 == 1)
                            (*(*rdi_3 + 8))(rdi_3, 1)
                
                if ((*arg3 & rbx_7.b) == 0)
                    goto label_140f2cbdc
                
                rbx_7 = &arg3[8]
                int64_t rsi_6 = sx.q(*(rbx_7 + 0x128))
                int32_t rax_54 = (rsi_6 + 1).d
                *(rbx_7 + 0x128) = rax_54
                
                if (rax_54 s> *(rbx_7 + 0x12c))
                    sub_140dbcd70(rbx_7, rsi_6.d)
                
                uint64_t rax_55 = *(rbx_7 + 0x120)
                int64_t rcx_35 = rsi_6 * 9
                
                if (rax_55 != 0)
                    rbx_7 = rax_55
                
                *(rbx_7 + (rcx_35 << 3)) = zmm6
                *(rbx_7 + (rcx_35 << 3) + 0x10) = zmm7
                *(rbx_7 + (rcx_35 << 3) + 0x20) = zmm8
                *(rbx_7 + (rcx_35 << 3) + 0x30) = zmm9.q
                *(rbx_7 + (rcx_35 << 3) + 0x38) = r14_2
                *(rbx_7 + (rcx_35 << 3) + 0x40) = rdi_3
                
                if (rdi_3 != 0)
                    rdi_3[1].d += 1
                label_140f2cbdc:
                    
                    if (rdi_3 != 0)
                        rdi_3[1].d -= 1
                        
                        if (rdi_3[1].d == 1)
                            (**rdi_3)(rdi_3)
                            int32_t temp2_1 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*rdi_3 + 8))(rdi_3, 1)
                
                rbx_7.b = 1
                
                if (data_143e2ad40 != 0)
                    zmm0.d = zmm14.d f+ 9.99999975e-06f
                    rbx_7.b = 0
                    zmm1_1 = *(r13_1 + (var_430.q << 3) + 4)
                    
                    if (not(zmm1_1.d f<= zmm0.d))
                        zmm14 = zmm1_1
                        rbx_7.b = *(arg4 + 0x18) s> 0
                
                int64_t rdi_4 = sx.q(*(arg4 + 0x18))
                int32_t rax_59 = (rdi_4 + 1).d
                *(arg4 + 0x18) = rax_59
                
                if (rax_59 s> *(arg4 + 0x1c))
                    sub_140f5c160(arg4, rdi_4.d)
                
                char* rax_60 = *(arg4 + 0x10)
                char* rcx_39 = arg4
                rsi_2 = var_428_1
                r14 = arg2
                
                if (rax_60 != 0)
                    rcx_39 = rax_60
                
                rcx_39[rdi_4] = rbx_7.b
            
            rsi_2 += 1
            rbx_4 = var_430.q + 1
            var_430.q = rbx_4
            var_428_1 = rsi_2
            result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)
        while (rsi_2 s< result)
    
    if (var_108_1 != 0)
        result = sub_140a74f90(var_108_1)

__security_check_cookie(rax_1 ^ &var_478)
return result
