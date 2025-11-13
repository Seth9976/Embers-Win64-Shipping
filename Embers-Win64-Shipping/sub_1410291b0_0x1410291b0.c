// 函数: sub_1410291b0
// 地址: 0x1410291b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint64_t result = zx.q(*(arg1 + 0x8b0))

if (*(arg1 + 0x8a8) s< result.d)
    result = zx.q(*(arg1 + 0x8b4))
    
    if (*(arg1 + 0x8ac) s< result.d)
        int64_t r9 = *(arg1 + 0xa18)
        int128_t zmm1 = *(arg1 + 0x9e0)
        int32_t r8 = *(arg1 + 0xa10)
        int128_t var_c8 = *(arg1 + 0x9d0)
        int128_t var_b8_1 = zmm1
        int128_t var_a8_1 = *(arg1 + 0x9f0)
        int128_t var_98_1 = *(arg1 + 0xa00)
        void var_118
        sub_14105d010(&var_118, &var_c8, r8, r9)
        int128_t* rcx
        rcx.b = 0
        
        if (*(arg1 + 0x8a8) s<= 0 && *(arg1 + 0x8ac) s<= 0)
            float zmm1_1 = *(arg1 + 0x2bc)
            
            if (*(arg1 + 0x8b0) s>= int.d(zmm1_1 + zmm1_1 + 0.5f) s>> 1)
                rcx = nullptr
                
                if (*(arg1 + 0x8b4) s>= int.d(*(arg1 + 0x2c0) * 2f + 0.5f) s>> 1)
                    rcx = 1
        
        int128_t var_88
        
        if (rcx.b == 0)
            var_88 = *(arg1 + 0x8a8)
        
        int32_t rbp_1 = 0
        int128_t* rax_6 = &var_88
        
        if (rcx.b != 0)
            rax_6 = nullptr
        
        int32_t rax_8 = zx.d(rcx.b) ^ 1
        int32_t var_d0
        uint64_t rsi
        
        if (arg2 == 0 || var_d0 s<= 0)
            rsi.b = 0
        else
            rsi = 1
        
        char var_137_1 = rsi.b
        char result_1
        void* var_d8
        
        if (arg5 != 0)
            if (var_d8 == 0)
                result_1 = 0
            else
                result_1 = 1
        else if (arg7 == 0 || var_d8 == 0)
            result_1 = 0
        else
            result_1 = 1
        
        if (rsi.b != 0)
            int32_t rsi_1 = 0
            
            if (var_d0 s> 0)
                void* rdi_1 = &var_118
                
                do
                    void* rdx_1 = *rdi_1
                    
                    if (rdx_1 != 0)
                        int32_t rcx_1 = *(rdx_1 + 0x4c)
                        void* r11_1 = *(*(rdx_1 + 0x28) + 0x10)
                        
                        if (rcx_1 == 4)
                            sub_141037220(arg1 + 0x1c0, r11_1, 4, *(rdx_1 + 0x50))
                        else if (rcx_1 == 5)
                            sub_141036f20(arg1 + 0x1c0, r11_1, 4, rdx_1 + 0x38)
                        else if (rcx_1 == 6 || rcx_1 == 8)
                            sub_141037220(arg1 + 0x1c0, r11_1, 4, *(rdx_1 + 0x50))
                    
                    rsi_1 += 1
                    rdi_1 += 8
                while (rsi_1 s< var_d0)
            
            rsi = zx.q(var_137_1)
        
        result = zx.q(result_1)
        int32_t r14_1 = 0
        
        if (result.b != 0)
            if (arg5 != 0 && *(var_d8 + 0x88) != 0)
                r14_1 = 1
            
            if (arg7 != 0 && *(var_d8 + 0x89) != 0)
                r14_1 |= 2
            
            if (arg5 == 0 || (*(var_d8 + 0x89) != 0 && arg7 == 0))
                int16_t* r9_3 = var_d8 + 0x8a
                
                if (arg5 == 0)
                    r9_3 = var_d8 + 0x9a
                
                sub_141036f20(arg1 + 0x1c0, *(*(var_d8 + 0x28) + 0x10), 0x10, r9_3)
            else
                int32_t rcx_6 = *(var_d8 + 0x4c)
                void* rdx_3 = *(*(var_d8 + 0x28) + 0x10)
                
                if (rcx_6 == 3)
                label_141029452:
                    
                    if (*(rdx_3 + 0xc0) u> 1)
                        goto label_14102945b
                    
                    sub_141037220(arg1 + 0x1c0, rdx_3, 0x10, *(var_d8 + 0x54))
                else if (rcx_6 == 4)
                label_14102945b:
                    sub_141036f20(arg1 + 0x1c0, rdx_3, 0x10, var_d8 + 0x38)
                else
                    if (rcx_6 == 5)
                        goto label_141029452
                    
                    if (rcx_6 == 6)
                        goto label_14102945b
            
            result = zx.q(result_1)
        
        if (rsi.b != 0 || result.b != 0)
            void* rdi_2 = *(arg1 + 0x1c8)
            int32_t rdx_5 = *(rdi_2 + 0x128)
            int64_t* rcx_13 = *(rdi_2 + 0x30)
            
            if (rdx_5 != 0)
                result = (*(*rcx_13 + 0xd0))(rcx_13, rdx_5, *(rdi_2 + 0x120))
                *(rdi_2 + 0x128) = 0
            
            if (rsi.b != 0 && var_d0 s> 0)
                void** rdi_3 = &var_118
                
                do
                    void* rsi_2 = *rdi_3
                    
                    if (rsi_2 != 0)
                        *(arg1 + 0x3b88) += 1
                        int64_t* rcx_14 = *(*(arg1 + 0x1c8) + 0x30)
                        char var_158
                        var_158.q = rax_6
                        (*(*rcx_14 + 0x180))(rcx_14, *(rsi_2 + 0x10), (sx.q(rbp_1) << 4) + arg4, 
                            zx.q(rax_8), var_158)
                        result = sub_14105c1a0(*(*(rsi_2 + 0x28) + 0x10), arg1 + 0x1c0)
                    
                    rbp_1 += 1
                    rdi_3 = &rdi_3[1]
                while (rbp_1 s< var_d0)
            
            if (result_1 != 0)
                *(arg1 + 0x3b88) += 1
                int512_t zmm3
                zmm3.o = arg6
                int64_t* rcx_17 = *(*(arg1 + 0x1c8) + 0x30)
                int64_t r9_6 = *rcx_17
                (*(r9_6 + 0x178))(rcx_17, *(var_d8 + 0x10), zx.q(r14_1), r9_6, arg8, rax_8, rax_6)
                result = sub_14105c1a0(*(*(var_d8 + 0x28) + 0x10), arg1 + 0x1c0)
        
        if (*(arg1 + 0x135) != 0)
            result = *(*(arg1 + 0x138) + 0x20)
            
            if (*(result + 0x838) != 0)
                result = *(result + 0x850)
                
                if (result != 0)
                    *(result + 0x10) += 1

__security_check_cookie(rax_1 ^ &var_178)
return result
