// 函数: sub_142c14420
// 地址: 0x142c14420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg3
uint64_t rbx = 0
void var_118
sub_142c19030(&var_118, 0, arg4, arg5)
int32_t r13 = 0
char result = -0x40
uint64_t (* var_80)(int32_t* arg1, int32_t arg2) = sub_142c1d3c0
int32_t arg_8 = 0

if (*(arg1 + 0x40) u<= 0)
    return result

int128_t* const r15_1

if (0 u>= *(arg1 + 0x40))
    r15_1 = &data_14369a5d0
    goto label_142c1449e

while (true)
    r15_1 = (zx.q(r13) << 4) + *(arg1 + 0x48)
label_142c1449e:
    
    if (rbx.d u< *r15_1)
    label_142c144b0:
        int128_t* const rax
        
        if (rbx.d u< *(arg1 + 0x20))
            rax = *(arg1 + 0x28) + (rbx << 3)
        else
            rax = &data_14369a5d0
        
        uint64_t rsi_1 = zx.q(*rax)
        result = sub_142c22650(arg5, arg4, "start lookup %d", zx.q(rsi_1.d))
        
        if (result != 0)
            int32_t var_5c_1 = rsi_1.d
            int128_t* const rax_2
            
            if (rbx.d u< *(arg1 + 0x20))
                rax_2 = *(arg1 + 0x28) + (rbx << 3)
            else
                rax_2 = &data_14369a5d0
            
            int32_t r11_1 = *(rax_2 + 4)
            int32_t var_60
            bool var_104_1 = var_60 == 1
            void* var_110_1 = &var_118
            int32_t var_64_1 = r11_1
            uint8_t var_4a
            bool var_103_1 = var_4a != 0
            int64_t var_f8
            __builtin_memset(&var_f8, 0, 0x18)
            int32_t var_58
            int32_t var_108_1 = var_58
            int32_t var_100_1 = r11_1
            void* var_d0_1 = &var_118
            int64_t var_b8
            __builtin_memset(&var_b8, 0, 0x18)
            int32_t var_c8_1 = var_58
            char var_4b
            char rax_4
            
            if (var_60 == 1 || var_4b != 0)
                rax_4 = 1
            else
                rax_4 = 0
            
            char var_c4_1 = rax_4
            char var_c3_1 = 1
            int32_t var_c0_1 = 0xffffffff
            int128_t* const rax_5
            
            if (rbx.d u< *(arg1 + 0x20))
                rax_5 = *(arg1 + 0x28) + (rbx << 3)
            else
                rax_5 = &data_14369a5d0
            
            uint8_t rdx_1 = *(rax_5 + 2) u>> 1 & 1
            void* var_110_2 = &var_118
            var_4a = rdx_1
            bool var_104_2 = var_60 == 1
            int64_t var_f8_1
            __builtin_memset(&var_f8_1, 0, 0x18)
            int32_t var_108_2 = var_58
            bool var_103_2 = rdx_1 != 0
            int32_t var_100_2 = r11_1
            void* var_d0_2 = &var_118
            int64_t var_b8_1
            __builtin_memset(&var_b8_1, 0, 0x18)
            int32_t var_c8_2 = var_58
            char rax_7
            
            if (var_60 == 1 || var_4b != 0)
                rax_7 = 1
            else
                rax_7 = 0
            
            char var_c4_2 = rax_7
            char var_c3_2 = 1
            int32_t var_c0_2 = 0xffffffff
            int128_t* const rax_8
            
            if (rbx.d u< *(arg1 + 0x20))
                rax_8 = *(arg1 + 0x28) + (rbx << 3)
            else
                rax_8 = &data_14369a5d0
            
            void* var_110_3 = &var_118
            char rax_10 = *(rax_8 + 2) & 1
            var_4b = rax_10
            int64_t var_f8_2
            __builtin_memset(&var_f8_2, 0, 0x18)
            bool var_104_3 = var_60 == 1
            int32_t var_108_3 = var_58
            int32_t var_100_3 = r11_1
            bool var_103_3 = rdx_1 != 0
            void* var_d0_3 = &var_118
            int64_t var_b8_2
            __builtin_memset(&var_b8_2, 0, 0x18)
            int32_t var_c8_3 = var_58
            
            if (var_60 == 1 || rax_10 != 0)
                rax_10 = 1
            
            char var_c4_3 = rax_10
            char var_c3_3 = 1
            int32_t var_c0_3 = 0xffffffff
            int128_t* const rax_11
            
            if (rbx.d u< *(arg1 + 0x20))
                rax_11 = *(arg1 + 0x28) + (rbx << 3)
            else
                rax_11 = &data_14369a5d0
            
            if ((*(rax_11 + 2) & 4) != 0)
                char var_49_1 = 1
                sub_142bf5c70(arg5, 0, *(arg5 + 0x60))
            
            void* r8_3 = *arg2
            uint16_t rdx_2 = zx.w(*(r8_3 + 8))
            uint64_t r9_3 = zx.q(*(r8_3 + 9))
            int128_t* const rdx_3
            
            if (0 != rdx_2 * 0x100 + r9_3.w)
                rdx_3 = (zx.q(rdx_2.b) << 8) + r8_3 + r9_3
            else
                rdx_3 = &data_14369a5d0
            
            void* rcx_7
            
            if (rsi_1.d u< zx.d(*(rdx_3 + 1)) + (zx.d(*rdx_3) << 8))
                uint16_t r8_4 = zx.w(*(rdx_3 + (rsi_1 << 1) + 2))
                uint64_t r9_4 = zx.q(*(rdx_3 + (rsi_1 << 1) + 3))
                
                if (0 != r8_4 * 0x100 + r9_4.w)
                    rcx_7 = &rdx_3[zx.q(r8_4.b) * 0x10] + r9_4
                else
                    rcx_7 = &data_14369a5d0
            else
                rcx_7 = &data_14369a5d0
            
            sub_142c147e0(&var_118, rcx_7, (rsi_1 << 5) + arg2[1])
            result = sub_142c22650(arg5, arg4, "end lookup %d", zx.q(rsi_1.d))
        
        rbx = zx.q(rbx.d + 1)
        
        if (rbx.d u< *r15_1)
            break
        
        r13 = arg_8
        rsi = arg3
    
    if (*(r15_1 + 8) != 0)
        sub_142bf4e80(arg5)
        result = (*(r15_1 + 8))(rsi, arg4, arg5)
    
    r13 += 1
    arg_8 = r13
    
    if (r13 u>= *(arg1 + 0x40))
        return result
