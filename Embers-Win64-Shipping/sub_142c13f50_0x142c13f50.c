// 函数: sub_142c13f50
// 地址: 0x142c13f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg5
void* r15 = arg4
int64_t r13 = arg3
uint64_t rbx = 0
void var_138
sub_142c19030(&var_138, 1, r15, rsi)
int32_t r12 = 0
char result = -0x40
uint64_t (* var_a0)(int32_t* arg1, int32_t arg2, uint128_t arg3 @ zmm2) = sub_142c1d2c0
int32_t arg_8 = 0

if (*(arg1 + 0x50) u<= 0)
    return result

int128_t* const r14_1

if (0 u>= *(arg1 + 0x50))
    r14_1 = &data_14369a5d0
    goto label_142c13fd7

while (true)
    r14_1 = (zx.q(r12) << 4) + *(arg1 + 0x58)
label_142c13fd7:
    
    if (rbx.d u< *r14_1)
    label_142c13fe4:
        int128_t* const rax
        
        if (rbx.d u< *(arg1 + 0x30))
            rax = *(arg1 + 0x38) + (rbx << 3)
        else
            rax = &data_14369a5d0
        
        uint64_t r13_1 = zx.q(*rax)
        result = sub_142c22650(rsi, r15, "start lookup %d", zx.q(r13_1.d))
        
        if (result != 0)
            int32_t var_7c_1 = r13_1.d
            int128_t* const rax_2
            
            if (rbx.d u< *(arg1 + 0x30))
                rax_2 = *(arg1 + 0x38) + (rbx << 3)
            else
                rax_2 = &data_14369a5d0
            
            int32_t r12_1 = *(rax_2 + 4)
            int32_t var_80
            int32_t r15_1 = var_80
            bool var_124_1 = r15_1 == 1
            void* var_130_1 = &var_138
            uint8_t var_6a
            bool var_123_1 = var_6a != 0
            int64_t var_118
            __builtin_memset(&var_118, 0, 0x18)
            uint32_t var_78
            uint32_t var_128_1 = var_78
            int32_t var_120_1 = r12_1
            void* var_f0_1 = &var_138
            int64_t var_d8
            __builtin_memset(&var_d8, 0, 0x18)
            uint32_t var_e8_1 = var_78
            char var_6b
            char rax_4
            
            if (r15_1 == 1 || var_6b != 0)
                rax_4 = 1
            else
                rax_4 = 0
            
            char var_e4_1 = rax_4
            char var_e3_1 = 1
            int32_t var_e0_1 = 0xffffffff
            int128_t* const rax_5
            
            if (rbx.d u< *(arg1 + 0x30))
                rax_5 = *(arg1 + 0x38) + (rbx << 3)
            else
                rax_5 = &data_14369a5d0
            
            uint8_t r14_4 = *(rax_5 + 2) u>> 1 & 1
            void* var_130_2 = &var_138
            var_6a = r14_4
            bool var_124_2 = r15_1 == 1
            int64_t var_118_1
            __builtin_memset(&var_118_1, 0, 0x18)
            uint32_t var_128_2 = var_78
            bool var_123_2 = r14_4 != 0
            int32_t var_120_2 = r12_1
            void* var_f0_2 = &var_138
            int64_t var_d8_1
            __builtin_memset(&var_d8_1, 0, 0x18)
            uint32_t var_e8_2 = var_78
            char rax_7
            
            if (r15_1 == 1 || var_6b != 0)
                rax_7 = 1
            else
                rax_7 = 0
            
            char var_e4_2 = rax_7
            char var_e3_2 = 1
            int32_t var_e0_2 = 0xffffffff
            int128_t* const rax_8
            
            if (rbx.d u< *(arg1 + 0x30))
                rax_8 = *(arg1 + 0x38) + (rbx << 3)
            else
                rax_8 = &data_14369a5d0
            
            char r11_1 = *(rax_8 + 2) & 1
            void* var_130_3 = &var_138
            var_6b = r11_1
            bool var_124_3 = r15_1 == 1
            int64_t var_118_2
            __builtin_memset(&var_118_2, 0, 0x18)
            uint32_t var_128_3 = var_78
            bool var_123_3 = r14_4 != 0
            int32_t var_120_3 = r12_1
            void* var_f0_3 = &var_138
            int64_t var_d8_2
            __builtin_memset(&var_d8_2, 0, 0x18)
            uint32_t var_e8_3 = var_78
            char rax_10
            
            if (r15_1 == 1 || r11_1 != 0)
                rax_10 = 1
            else
                rax_10 = 0
            
            char var_e4_3 = rax_10
            char var_e3_3 = 1
            int32_t var_e0_3 = 0xffffffff
            int128_t* const rax_11
            
            if (rbx.d u< *(arg1 + 0x30))
                rax_11 = *(arg1 + 0x38) + (rbx << 3)
            else
                rax_11 = &data_14369a5d0
            
            if ((*(rax_11 + 2) & 4) != 0)
                char var_69_1 = 1
                sub_142bf5c70(rsi, 0, *(rsi + 0x60))
                r11_1 = var_6b
                r14_4 = var_6a
                r15_1 = var_80
            
            void* r8_3 = *arg2
            uint16_t rdx_2 = zx.w(*(r8_3 + 8))
            uint64_t r9_2 = zx.q(*(r8_3 + 9))
            int128_t* const rdx_3
            
            if (0 != rdx_2 * 0x100 + r9_2.w)
                rdx_3 = (zx.q(rdx_2.b) << 8) + r8_3 + r9_2
            else
                rdx_3 = &data_14369a5d0
            
            int128_t* const r9_3
            
            if (r13_1.d u< zx.d(*(rdx_3 + 1)) + (zx.d(*rdx_3) << 8))
                uint16_t r8_4 = zx.w(*(rdx_3 + (r13_1 << 1) + 2))
                uint64_t r9_4 = zx.q(*(rdx_3 + (r13_1 << 1) + 3))
                
                if (0 != r8_4 * 0x100 + r9_4.w)
                    r9_3 = r9_4 + &rdx_3[zx.q(r8_4.b) * 0x10]
                else
                    r9_3 = &data_14369a5d0
            else
                r9_3 = &data_14369a5d0
            
            int32_t* r10_3 = (r13_1 << 5) + arg2[1]
            void* var_a8
            
            if (*(var_a8 + 0x60) != 0 && r12_1 != 0)
                uint32_t r8_7 = (zx.d(*(r9_3 + 2)) << 8) + zx.d(*(r9_3 + 3))
                
                if ((r8_7.b & 0x10) != 0)
                    uint64_t rcx_11 = (zx.q(*(r9_3 + 4)) << 8) + zx.q(*(r9_3 + 5))
                    r8_7 += (zx.d(*(r9_3 + (rcx_11 << 1) + 7))
                        + (zx.d(*(r9_3 + (rcx_11 << 1) + 6)) << 8)) << 0x10
                
                var_78 = r8_7
                int64_t var_118_3
                __builtin_memset(&var_118_3, 0, 0x18)
                bool var_124_4 = r15_1 == 1
                void* var_130_4 = &var_138
                uint32_t var_128_4 = r8_7
                bool var_123_4 = r14_4 != 0
                int32_t var_120_4 = r12_1
                void* var_f0_4 = &var_138
                int64_t var_d8_3
                __builtin_memset(&var_d8_3, 0, 0x18)
                uint32_t var_e8_4 = r8_7
                char rax_22
                
                if (r15_1 == 1 || r11_1 != 0)
                    rax_22 = 1
                else
                    rax_22 = 0
                
                char var_e4_4 = rax_22
                char var_e3_4 = 1
                int32_t var_e0_4 = 0xffffffff
                *(var_a8 + 0x5c) = 0
                sub_142c1ce10(&var_138, r10_3)
            
            r15 = arg4
            rsi = arg5
            result = sub_142c22650(rsi, r15, "end lookup %d", zx.q(r13_1.d))
            r14_1 = r14_1
        
        rbx = zx.q(rbx.d + 1)
        
        if (rbx.d u< *r14_1)
            break
        
        r12 = arg_8
        r13 = arg3
    
    if (*(r14_1 + 8) != 0)
        sub_142bf4e80(rsi)
        result = (*(r14_1 + 8))(r13, r15, rsi)
    
    r12 += 1
    arg_8 = r12
    
    if (r12 u>= *(arg1 + 0x50))
        return result
