// 函数: sub_140f7df50
// 地址: 0x140f7df50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
uint32_t result = (**(arg1 + 0x2a8))(arg1 + 0x2a8)

if (result s> 0)
    void* var_120
    result = sub_140f48c10(arg1 + 0x2a8, &var_120)
    void* rdi_1 = var_120
    int64_t* var_118
    
    if (rdi_1 != data_143e244b0)
        int64_t* rsi_1 = nullptr
        
        if (*(rdi_1 + 0x1b8) != 0)
            int64_t* rcx_2 = *(rdi_1 + 0x1b0)
            
            if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
                int64_t* rcx_3
                
                if (*(rdi_1 + 0x1b8) == 0)
                    rcx_3 = nullptr
                else
                    rcx_3 = *(rdi_1 + 0x1b0)
                
                char var_128
                (*(*rcx_3 + 0x48))(rcx_3, &var_128)
                *(rdi_1 + 0x1a8) = var_128
        
        result = zx.d(*(rdi_1 + 0x1a8))
        
        if ((*arg3 & result.b) != 0)
            bool cond:1_1 = data_143e20cf4 != 0
            var_120.d = 0x3f800000
            var_120 = 0
            uint128_t var_e8
            uint64_t var_d8
            uint128_t var_b0
            uint128_t zmm0_1
            uint128_t zmm1_1
            
            if (cond:1_1)
                uint128_t* rax_8 = sub_140e111c0(rdi_1 + 0x1c8)
                char rcx_5 = 0
                
                if (*(rax_8 + 0x18) == 0)
                    zmm1_1 = var_e8
                else
                    zmm0_1 = zx.o(rax_8[1].q)
                    rcx_5 = 1
                    zmm1_1 = *rax_8
                    var_d8 = zmm0_1.q
                    var_d8.d = (zmm0_1 ^ data_142d3f780).d
                
                if (rcx_5 == 0)
                    goto label_140f7e16b
                
                uint64_t var_a0_2 = var_d8
                var_b0 = zmm1_1
                goto label_140f7e0a4
            
            int128_t* rax_7 = sub_140e111c0(rdi_1 + 0x1c8)
            
            if (*(rax_7 + 0x18) == 0)
            label_140f7e16b:
                var_e8.d = (*arg2).d
                var_120.o = data_142d8c9b0
                int64_t var_110_1 = 0
                var_e8:4.d = (*(arg2 + 4)).d
                int32_t var_cc
                sub_1408b8950(&var_cc, &var_120, arg2 + 0x1c)
                var_e8:0xc.d = (*(arg2 + 0xc)).d
                char var_b4
                char var_b4_1 = var_b4 ^ ((*(arg2 + 0x34) ^ var_b4) & 1)
                var_d8.d = arg2[2].d.d
                var_e8:8.d = arg2[1].d.d
                var_d8 = 0
            else
                zmm1_1 = zx.o(rax_7[1].q)
                var_b0 = *rax_7
                uint64_t var_a0_1 = zmm1_1.q
            label_140f7e0a4:
                char var_98_1 = 1
                
                if (*(rdi_1 + 0x210) != 0)
                    int64_t* rcx_6 = *(rdi_1 + 0x208)
                    
                    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
                        if (*(rdi_1 + 0x210) != 0)
                            rsi_1 = *(rdi_1 + 0x208)
                        
                        int64_t var_fc
                        (*(*rsi_1 + 0x48))(rsi_1, &var_fc)
                        *(rdi_1 + 0x1f8) = var_fc
                
                zmm0_1 = zx.o(*(rdi_1 + 0x1f8))
                int32_t var_108 = arg2[1].d.d
                zmm1_1 = arg2[2].d
                int128_t* var_140_1 = &var_108
                uint64_t var_f4 = zmm0_1.q
                int32_t var_104_1 = (*(arg2 + 0xc)).d
                int32_t var_100_1 = zmm1_1.d
                sub_140dd8200(&var_e8, arg2, &var_120, &var_b0, &var_f4, var_140_1, arg2 + 0x1c)
            
            if (var_118 != 0)
                var_118[1].d += 1
            
            void* var_50_1 = rdi_1
            uint128_t var_88 = var_e8
            uint128_t var_78_1 = var_d8.o
            int64_t var_b8
            uint64_t var_58_1 = var_b8
            uint128_t var_c8
            uint128_t var_68_1 = var_c8
            
            if (var_118 != 0)
                int32_t rax_14 = var_118[1].d
                var_118[1].d = rax_14
                
                if (rax_14 == 0)
                    (**var_118)(var_118)
                    int32_t temp3_1 = *(var_118 + 0xc)
                    *(var_118 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_118 + 8))(var_118, 1)
            
            result = sub_140d99900(arg3, &var_88)
            
            if (var_118 != 0)
                var_118[1].d -= 1
                
                if (var_118[1].d == 1)
                    result = (**var_118)(var_118)
                    int32_t temp4_1 = *(var_118 + 0xc)
                    *(var_118 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        result = (*(*var_118 + 8))(var_118, 1)
    
    if (var_118 != 0)
        var_118[1].d -= 1
        
        if (var_118[1].d == 1)
            result = (**var_118)(var_118)
            int32_t temp1_1 = *(var_118 + 0xc)
            *(var_118 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*var_118 + 8))(var_118, 1)

__security_check_cookie(rax_1 ^ &var_168)
return result
