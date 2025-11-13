// 函数: sub_140e1ca60
// 地址: 0x140e1ca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void* rbx = arg1
char* rdi = arg3
int32_t r12 = 0
int32_t result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)

if (result s> 0)
    int64_t r13_1 = 0
    int128_t zmm10 = 0x3f000000
    int128_t zmm11 = 0x80000000
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    
    do
        void* rsi_1 = *(*(rbx + 0x2b8) + (r13_1 << 3))
        char* rbx_2 = *(rsi_1 + 0x10) + 0x1a8
        
        if (*(rbx_2 + 0x10) != 0)
            int64_t* rcx_1 = *(rbx_2 + 8)
            
            if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                int64_t* rcx_2
                
                if (*(rbx_2 + 0x10) == 0)
                    rcx_2 = nullptr
                else
                    rcx_2 = *(rbx_2 + 8)
                
                char var_188
                (*(*rcx_2 + 0x48))(rcx_2, &var_188)
                *rbx_2 = var_188
        
        char rbx_3 = *rbx_2
        
        if ((*rdi & rbx_3) != 0)
            if (*(rsi_1 + 0x48) != 0)
                int64_t* rcx_3 = *(rsi_1 + 0x40)
                
                if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
                    int64_t* rcx_4
                    
                    if (*(rsi_1 + 0x48) == 0)
                        rcx_4 = nullptr
                    else
                        rcx_4 = *(rsi_1 + 0x40)
                    
                    uint128_t var_148
                    (*(*rcx_4 + 0x48))(rcx_4, &var_148)
                    *(rsi_1 + 0x28) = var_148
            
            char r9_1 = data_143e20cf4
            uint128_t var_100 = *(rsi_1 + 0x28)
            uint128_t zmm2
            
            if (r9_1 != 1)
                zmm2 = var_100:8.d
                zmm8 = var_100.d
            else
                zmm2 = var_100.d
                zmm8 = var_100:8.d
            
            uint128_t zmm0 = *arg2
            uint32_t rdx_2 = zx.d(*(rsi_1 + 0x24))
            uint128_t zmm1
            zmm1.d = zmm2.d f+ zmm8.d
            void* r8
            uint128_t zmm3
            
            if (r9_1 != 1)
            label_140e1cc3a:
                
                if (rdx_2 != 0)
                    goto label_140e1cbf7
                
                r8 = *(rsi_1 + 0x10)
                zmm0.d = zmm0.d f- zmm1.d
            else
                if (rdx_2 != 1)
                    if (rdx_2 != 3)
                        goto label_140e1cc3a
                    
                    rdx_2 -= 2
                    goto label_140e1cbf7
                
                rdx_2 = 3
            label_140e1cbf7:
                r8 = *(rsi_1 + 0x10)
                int64_t* rcx_7 = &data_143dbb1f0
                zmm3.d = zmm0.d f- zmm1.d
                
                if (*(r8 + 0x160) != 0)
                    rcx_7 = r8 + 0x158
                
                zmm1 = __minss_xmmss_memss(zmm3.d, *rcx_7)
                
                if (rdx_2 == 1)
                    zmm0 = zmm1
                else if (rdx_2 == 2)
                    zmm0.d = zmm0.d f- zmm1.d
                    zmm0.d = zmm0.d f* zmm10.d
                    zmm0.d = zmm0.d f+ zmm8.d
                    zmm8.d = zmm0.d f- zmm2.d
                    zmm0 = zmm1
                else if (rdx_2 == 3)
                    zmm8.d = zmm0.d f- zmm1.d
                    zmm8.d = zmm8.d f- zmm2.d
                    zmm0 = zmm1
                else
                    zmm0 = zmm3
            
            zmm7 = var_100:4.d
            int32_t zmm4_1 = var_100:0xc.d
            zmm1 = *(arg2 + 4)
            zmm3.d = zmm7.d f+ zmm4_1
            uint32_t rdx_5 = zx.d(*(rsi_1 + 0x25))
            zmm2.d = zmm1.d f- zmm3.d
            
            if (rdx_5 != 0)
                void* rcx_8 = &data_143dbb1f0
                
                if (*(r8 + 0x160) != 0)
                    rcx_8 = r8 + 0x158
                
                zmm3 = __minss_xmmss_memss(zmm2.d, *(rcx_8 + 4))
                
                if (rdx_5 == 1)
                    zmm2 = zmm3
                else if (rdx_5 == 2)
                    zmm1.d = zmm1.d f- zmm3.d
                    zmm1.d = zmm1.d f* zmm10.d
                    zmm1.d = zmm1.d f+ zmm7.d
                    zmm7.d = zmm1.d f- zmm4_1
                    zmm2 = zmm3
                else if (rdx_5 == 3)
                    zmm7.d = zmm1.d f- zmm3.d
                    zmm7.d = zmm7.d f- zmm4_1
                    zmm2 = zmm3
            
            int32_t var_178 = zmm0.d
            int32_t var_174_1 = zmm2.d
            int32_t var_160_1 = zmm8.d
            int32_t var_15c_1 = zmm7.d
            int32_t var_164 = 0x3f800000
            uint64_t var_f0
            uint128_t var_e0
            uint64_t var_d0
            char var_c8_1
            char rcx_10
            uint128_t zmm0_1
            
            if (r9_1 != 0)
                uint128_t* rax_14 = sub_140e111c0(r8 + 0x1c8)
                char rdx_9 = 0
                
                if (*(rax_14 + 0x18) == 0)
                    zmm1 = var_100
                else
                    zmm0_1 = zx.o(rax_14[1].q)
                    rdx_9 = 1
                    zmm1 = *rax_14
                    var_f0 = zmm0_1.q
                    var_f0.d = (zmm0_1 ^ zmm11).d
                
                rcx_10 = 0
                var_c8_1 = 0
                
                if (rdx_9 != 0)
                    var_d0 = var_f0
                    var_e0 = zmm1
                    rcx_10 = 1
                    var_c8_1 = 1
            else
                int128_t* rax_13 = sub_140e111c0(r8 + 0x1c8)
                rcx_10 = 0
                var_c8_1 = 0
                
                if (*(rax_13 + 0x18) != 0)
                    zmm1 = zx.o(rax_13[1].q)
                    var_e0 = *rax_13
                    var_d0 = zmm1.q
                    rcx_10 = 1
                    var_c8_1 = 1
            
            int64_t* rdi_3
            int64_t r14_1
            
            if (rcx_10 == 0)
                zmm6 = *(arg2 + 8)
                var_e0.q = var_178.q
                var_100 = data_142d8c9b0
                var_f0.d = zmm8.d
                var_f0:4.d = zmm7.d
                int32_t var_c4
                zmm7, zmm8, zmm10, zmm11 = sub_1408b8950(&var_c4, &var_100, arg2 + 0x1c)
                rdi_3 = *(rsi_1 + 0x18)
                r14_1 = *(rsi_1 + 0x10)
                zmm1.d = zmm6.d f* zmm8.d
                char var_ac = var_ac ^ ((*(arg2 + 0x34) ^ var_ac) & 1)
                zmm0.d = zmm6.d f* zmm7.d
                var_e0:8.d = zmm6.d
                var_d0:4.d = zmm8.d
                var_c8_1.d = zmm7.d
                zmm1.d = zmm1.d f+ *(arg2 + 0xc)
                zmm0.d = zmm0.d f+ arg2[1].d
                var_e0:0xc.d = zmm1.d
                var_d0.d = zmm0.d
                
                if (rdi_3 != 0)
                    rdi_3[1].d += 1
                
                zmm6 = var_e0
                zmm7 = var_d0.o
                uint128_t var_c0
                zmm8 = var_c0
                int64_t var_b0
                zmm9 = zx.o(var_b0)
            else
                int64_t* rdi_2 = *(rsi_1 + 0x10) + 0x1f8
                
                if (rdi_2[3].d != 0)
                    int64_t* rcx_11 = rdi_2[2]
                    
                    if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
                        int64_t* rcx_12
                        
                        if (rdi_2[3].d == 0)
                            rcx_12 = nullptr
                        else
                            rcx_12 = rdi_2[2]
                        
                        int64_t var_158
                        (*(*rcx_12 + 0x48))(rcx_12, &var_158)
                        *rdi_2 = var_158
                
                zmm0_1 = zx.o(*rdi_2)
                int32_t var_170 = (*(arg2 + 8)).d
                var_100.q = zmm0_1.q
                int32_t var_16c_1 = (*(arg2 + 0xc)).d
                int32_t var_168_1 = arg2[1].d.d
                uint128_t var_138
                zmm10, zmm11 = sub_140dd8200(&var_138, &var_178, &var_164, &var_e0, &var_100, 
                    &var_170, arg2 + 0x1c)
                rdi_3 = *(rsi_1 + 0x18)
                r14_1 = *(rsi_1 + 0x10)
                
                if (rdi_3 != 0)
                    rdi_3[1].d += 1
                
                zmm6 = var_138
                uint128_t var_128
                zmm7 = var_128
                uint128_t var_118
                zmm8 = var_118
                int64_t var_108
                zmm9 = zx.o(var_108)
            
            if (rdi_3 != 0)
                int32_t rax_20 = rdi_3[1].d
                rdi_3[1].d = rax_20
                
                if (rax_20 == 0)
                    (**rdi_3)(rdi_3)
                    int32_t temp6_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
            
            if ((*arg3 & rbx_3) == 0)
                goto label_140e1cf83
            
            void* rbx_4 = &arg3[8]
            int64_t rsi_2 = sx.q(*(rbx_4 + 0x128))
            int32_t rax_24 = (rsi_2 + 1).d
            *(rbx_4 + 0x128) = rax_24
            
            if (rax_24 s> *(rbx_4 + 0x12c))
                sub_140dbcd70(rbx_4, rsi_2.d)
            
            void* rax_25 = *(rbx_4 + 0x120)
            int64_t rcx_19 = rsi_2 * 9
            
            if (rax_25 != 0)
                rbx_4 = rax_25
            
            *(rbx_4 + (rcx_19 << 3)) = zmm6
            *(rbx_4 + (rcx_19 << 3) + 0x10) = zmm7
            *(rbx_4 + (rcx_19 << 3) + 0x20) = zmm8
            *(rbx_4 + (rcx_19 << 3) + 0x30) = zmm9.q
            *(rbx_4 + (rcx_19 << 3) + 0x38) = r14_1
            *(rbx_4 + (rcx_19 << 3) + 0x40) = rdi_3
            
            if (rdi_3 != 0)
                rdi_3[1].d += 1
            label_140e1cf83:
                
                if (rdi_3 != 0)
                    rdi_3[1].d -= 1
                    
                    if (rdi_3[1].d == 1)
                        (**rdi_3)(rdi_3)
                        int32_t temp8_1 = *(rdi_3 + 0xc)
                        *(rdi_3 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rdi_3 + 8))(rdi_3, 1)
            
            rdi = arg3
        
        rbx = arg1
        r12 += 1
        r13_1 += 1
        result = (**(rbx + 0x2a8))(rbx + 0x2a8)
    while (r12 s< result)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
