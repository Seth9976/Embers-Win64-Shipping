// 函数: sub_141f72d60
// 地址: 0x141f72d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
uint64_t var_28 = __security_cookie ^ &var_158
uint64_t result

if (arg2 == arg1[0x88])
    result.b = 0
else
    void* rax_1 = arg1[0x15]
    int64_t rsi_1 = arg1[0x14]
    
    if (rax_1 != 0)
    label_141f72db9:
        
        if (sub_1424385d0(rax_1) == 0)
            goto label_141f73142
        
        char rax_3 = sub_141ee76e0(arg1)
        
        if (rax_3 != 0 || (arg1[0x11].b & 1) == 0 || *(arg1 + 0x14f) != rax_3 || rsi_1 == 0)
            goto label_141f73142
        
        void var_128
        sub_140b58170(&var_128, "PIE", 1)
        int64_t var_e8
        void var_70
        int64_t* rax_5 = sub_140aae2f0(&var_70, sub_140d21e10(arg1, &var_e8, 0))
        void var_c0
        char* var_a8
        char** rax_7 = sub_140a96390(&var_a8, 
            _vfprintf_p_l(&var_c0, Calling SetStaticMesh on '{0}' but Mobility is Static.", 
            StaticMeshComponent"))
        int64_t rcx_7 = *rax_5
        int64_t* rcx_8 = rax_5[1]
        int32_t var_58_1 = 4
        
        if (rcx_8 != 0)
            rcx_8[1].d += 1
        
        int32_t rcx_9 = rax_5[2].d
        char var_30_1 = 1
        int32_t* var_138 = nullptr
        int32_t var_130_1 = 1
        sub_1405a4b40(&var_138, 1, 0)
        int32_t* rcx_11 = var_138
        *rcx_11 = var_58_1
        int64_t var_50
        *(rcx_11 + 8) = var_50
        *(rcx_11 + 8) = var_50
        rcx_11[2] = var_50.d
        *(rcx_11 + 8) = var_50
        rcx_11[0xa].b = 0
        
        if (var_30_1 != 0)
            *(rcx_11 + 0x10) = rcx_7
            *(rcx_11 + 0x18) = rcx_8
            
            if (rcx_8 != 0)
                rcx_8[1].d += 1
            
            rcx_11[8] = rcx_9
            rcx_11[0xa].b = 1
        
        char* var_108 = *rax_7
        void* rax_15 = rax_7[1]
        void* var_100_1 = rax_15
        
        if (rax_15 != 0)
            *(rax_15 + 8) += 1
        
        void var_d8
        int64_t* rax_16 = sub_140aac870(&var_d8, &var_108, &var_138)
        int64_t var_120 = *rax_16
        int64_t* rcx_14 = rax_16[1]
        
        if (rcx_14 != 0)
            rcx_14[1].d += 1
        
        int32_t var_110_1 = rax_16[2].d
        int64_t* var_d0
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t rax_20 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (rax_20 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        sub_140596f50(&var_138)
        
        if (var_30_1 != 0)
            char var_30_2 = 0
            
            if (rcx_8 != 0)
                rcx_8[1].d -= 1
                
                if (rcx_8[1].d == 1)
                    (**rcx_8)(rcx_8)
                    int32_t rax_24 = *(rcx_8 + 0xc)
                    *(rcx_8 + 0xc) -= 1
                    
                    if (rax_24 == 1)
                        (*(*rcx_8 + 8))(rcx_8, 1)
        
        int64_t* rdi_3 = rax_7[1]
        
        if (rdi_3 != 0)
            rdi_3[1].d -= 1
            
            if (rdi_3[1].d == 1)
                (**rdi_3)(rdi_3)
                int32_t rax_28 = *(rdi_3 + 0xc)
                *(rdi_3 + 0xc) -= 1
                
                if (rax_28 == 1)
                    (*(*rdi_3 + 8))(rdi_3, 1)
        
        int64_t* rdi_4 = rax_5[1]
        
        if (rdi_4 != 0)
            rdi_4[1].d -= 1
            
            if (rdi_4[1].d == 1)
                (**rdi_4)(rdi_4)
                int32_t rax_32 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (rax_32 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
        
        void var_f8
        void var_98
        sub_140ae44d0(sub_140accdf0(&var_98, &var_128), &var_f8, &var_120)
        int64_t* var_f0
        
        if (var_f0 != 0)
            var_f0[1].d -= 1
            
            if (var_f0[1].d == 1)
                (**var_f0)(var_f0)
                int32_t temp3_1 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_f0 + 8))(var_f0, 1)
        
        sub_140acd9c0(&var_98)
        
        if (rcx_14 != 0)
            rcx_14[1].d -= 1
            
            if (rcx_14[1].d == 1)
                (**rcx_14)(rcx_14)
                int32_t rax_39 = *(rcx_14 + 0xc)
                *(rcx_14 + 0xc) -= 1
                
                if (rax_39 == 1)
                    (*(*rcx_14 + 8))(rcx_14, 1)
        
        int64_t* var_b8
        
        if (var_b8 != 0)
            var_b8[1].d -= 1
            
            if (var_b8[1].d == 1)
                (**var_b8)(var_b8)
                int32_t rbx_1 = *(var_b8 + 0xc)
                *(var_b8 + 0xc) -= 1
                
                if (rbx_1 == 1)
                    (*(*var_b8 + 8))(var_b8, zx.q(rbx_1))
        
        int64_t rcx_33 = var_e8
        
        if (rcx_33 != 0)
            sub_140a74f90(rcx_33)
        
        result.b = 0
    else
        rax_1 = sub_141ee69e0(arg1)
        
        if (rax_1 != 0)
            goto label_141f72db9
        
    label_141f73142:
        arg1[0x88] = arg2
        TEB* gsbase
        
        if (arg2 != 0 && *(arg2 + 0x50) != 0 && data_143cd80cc
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143cd80cc)
            
            if (data_143cd80cc == 0xffffffff)
                sub_140af2b60()
                data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
                _Init_thread_footer(&data_143cd80cc)
        
        sub_141ee8490(arg1)
        sub_141ef1240(arg1)
        char rax_47 = (*(*arg1 + 0x3e0))(arg1)
        *(arg1 + 0x8a) &= 0xfb
        *(arg1 + 0x8a) |= (rax_47 & 1) << 2
        void*** rax_48 = sub_141f88540()
        void** r8_3 = *rax_48
        r8_3[0xe](rax_48, arg1, r8_3)
        (*(*arg1 + 0x498))(arg1)
        sub_141f1e970(arg1)
        result.b = 1

__security_check_cookie(var_28 ^ &var_158)
return result
