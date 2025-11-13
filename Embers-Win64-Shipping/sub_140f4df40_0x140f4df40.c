// 函数: sub_140f4df40
// 地址: 0x140f4df40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void* rbx = arg1
void* result_1
int128_t zmm6
int128_t zmm7
int128_t zmm8
uint128_t zmm9
int128_t zmm10
zmm6, zmm7, zmm8, zmm9, zmm10 = sub_140f2bf70(arg1, &result_1, arg2, arg4)
void* r13 = rbx + 0x2a8
int32_t r12 = 0

if ((**r13)(r13) s> 0)
    int64_t* r14_1 = nullptr
    int128_t var_88_1 = zmm10
    void* rsi_2 = result_1 + 8
    zmm10 = 0x80000000
    int128_t var_48_1 = zmm6
    int128_t var_58_1 = zmm7
    int128_t var_68_1 = zmm8
    uint128_t var_78_1 = zmm9
    int32_t rax_19
    
    do
        void* rdi_1 = *(r14_1 + *(rbx + 0x2b8))
        int128_t* rcx_2 = *(rdi_1 + 0x10) + 0x1c8
        uint128_t var_148
        uint64_t var_138
        uint128_t var_128
        uint64_t var_118
        char rcx_3
        uint128_t zmm0
        uint128_t zmm1_1
        char var_130_3
        
        if (data_143e20cf4 != 0)
            uint128_t* rax_6 = sub_140e111c0(rcx_2)
            char rdx_1 = 0
            
            if (*(rax_6 + 0x18) == 0)
                zmm1_1 = var_128
            else
                zmm0 = zx.o(rax_6[1].q)
                rdx_1 = 1
                zmm1_1 = *rax_6
                var_118 = zmm0.q
                var_118.d = (zmm0 ^ zmm10).d
            
            rcx_3 = 0
            char var_130_2 = 0
            
            if (rdx_1 != 0)
                var_138 = var_118
                var_148 = zmm1_1
                rcx_3 = 1
                var_130_3 = 1
        else
            int128_t* rax_5 = sub_140e111c0(rcx_2)
            rcx_3 = 0
            char var_130_1 = 0
            
            if (*(rax_5 + 0x18) != 0)
                zmm1_1 = zx.o(rax_5[1].q)
                var_148 = *rax_5
                var_138 = zmm1_1.q
                rcx_3 = 1
                var_130_3 = 1
        
        if (rcx_3 == 0)
            zmm8 = *(rsi_2 - 8)
            zmm6 = *rsi_2
            *(arg2 + 8)
            var_128.d = (*(rsi_2 + 4)).d
            var_128:4.d = (*(rsi_2 + 8)).d
            var_148.d = zmm8.d
            var_148:0xc.d = zmm8.d
            var_138.d = (*(rsi_2 - 4)).d
            var_138:4.d = zmm6.d
            var_148:4.q = 0
            int32_t var_10c
            zmm7, zmm8, zmm9, zmm10 = sub_1408b8950(&var_10c, &var_148, arg2 + 0x1c)
            zmm1_1.d = zmm9.d f* zmm7.d
            uint128_t zmm0_1
            zmm0_1.d = zmm9.d f* zmm6.d
            char var_f4 = var_f4 ^ ((*(arg2 + 0x34) ^ var_f4) & 1)
            zmm1_1.d = zmm1_1.d f+ *(arg2 + 0xc)
            zmm9.d = zmm9.d f* zmm8.d
            zmm0_1.d = zmm0_1.d f+ arg2[1].d
            var_118:4.d = zmm7.d
            var_128:0xc.d = zmm1_1.d
            var_128:8.d = zmm9.d
            int32_t var_110_1 = zmm6.d
            var_118.d = zmm0_1.d
        else
            int64_t* rbx_2 = *(rdi_1 + 0x10) + 0x1f8
            
            if (rbx_2[3].d != 0)
                int64_t* rcx_4 = rbx_2[2]
                
                if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
                    int64_t* rcx_5
                    
                    if (rbx_2[3].d == 0)
                        rcx_5 = nullptr
                    else
                        rcx_5 = rbx_2[2]
                    
                    int64_t var_17c
                    (*(*rcx_5 + 0x48))(rcx_5, &var_17c)
                    *rbx_2 = var_17c
            
            zmm0 = zx.o(*rbx_2)
            int32_t var_188 = (*(arg2 + 8)).d
            zmm1_1 = arg2[1].d
            int128_t* var_1a0_1 = &var_188
            uint64_t var_174 = zmm0.q
            int32_t var_184_1 = (*(arg2 + 0xc)).d
            int32_t var_180_1 = zmm1_1.d
            zmm10 = sub_140dd8200(&var_128, rsi_2 + 4, rsi_2 - 8, &var_148, &var_174, var_1a0_1, 
                arg2 + 0x1c)
        
        int64_t* rbx_3 = *(rdi_1 + 0x18)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        int64_t var_b0_1 = *(rdi_1 + 0x10)
        uint128_t var_e8 = var_128
        uint128_t var_d8_1 = var_118.o
        int64_t var_f8
        uint64_t var_b8_1 = var_f8
        uint128_t var_108
        uint128_t var_c8_1 = var_108
        
        if (rbx_3 != 0)
            int32_t rax_13 = rbx_3[1].d
            rbx_3[1].d = rax_13
            
            if (rax_13 == 0)
                (**rbx_3)(rbx_3)
                int32_t temp1_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        sub_140d99900(arg3, &var_e8)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp2_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        r12 += 1
        rsi_2 += 0x14
        r14_1 = &r14_1[1]
        rax_19 = (**r13)(r13)
        rbx = arg1
    while (r12 s< rax_19)

void* result = result_1

if (result != 0)
    result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
