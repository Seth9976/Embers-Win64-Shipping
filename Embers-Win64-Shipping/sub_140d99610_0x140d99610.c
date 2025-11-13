// 函数: sub_140d99610
// 地址: 0x140d99610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x798) s> 0 && *(arg1 + 0x748) != 0)
    void* rax_1 = *(arg1 + 0x740)
    void* r10_1 = arg1 + 0x100
    int64_t r11_1 = sx.q(*(arg1 + 0x748))
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    if (*((r11_1 << 5) + r10_1 - 8) == 0)
        void* rax_4 = *(arg1 + 0x790)
        void* r9 = arg1 + 0x750
        void* r8 = *(r9 + 0x20)
        void* rcx = arg1 + 0x780
        
        if (rax_4 != 0)
            rcx = rax_4
        
        if (r8 != 0)
            r9 = r8
        
        void* rsi = *(r9 + (sx.q(*(rcx + (sx.q(*(arg1 + 0x798)) << 2) - 4)) << 3))
        void* rdi_1 = (r11_1 << 5) - 0x20 + r10_1
        void* rax_6
        
        if (*rdi_1 != 0)
            rax_6 = *(rdi_1 + 8)
        
        if (*rdi_1 == 0 || rax_6 == 0 || *(rax_6 + 8) s<= 0)
            void* var_18
            void** rax_7 = sub_140d983f0(rsi, &var_18, *(rdi_1 + 0x10))
            
            if (rdi_1 != rax_7)
                *rdi_1 = *rax_7
                *rax_7 = nullptr
                int64_t* rcx_3 = *(rdi_1 + 8)
                *(rdi_1 + 8) = rax_7[1]
                rax_7[1] = 0
                
                if (rcx_3 != 0)
                    int32_t temp1_1 = *(rcx_3 + 0xc)
                    *(rcx_3 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rcx_3 + 8))(rcx_3, 1)
            
            int64_t* var_10
            
            if (var_10 != 0)
                int32_t temp0_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp0_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)
        
        *(rdi_1 + 0x10)
        return sub_140d98560(rsi, rdi_1, arg1 + 0xa8)

int64_t rdi_2 = sx.q(*(arg1 + 0xf8))
int32_t rax_11 = (rdi_2 + 1).d
*(arg1 + 0xf8) = rax_11

if (rax_11 s> *(arg1 + 0xfc))
    sub_1407755b0(arg1 + 0xf0)

int64_t rax_12 = *(arg1 + 0xf0)
int64_t* rcx_7 = rdi_2 * 0x58
*(rcx_7 + rax_12) = 0
*(rcx_7 + rax_12 + 8) = 0x3f800000
*(rcx_7 + rax_12 + 0x10) = 0
*(rcx_7 + rax_12 + 0x14) = 0x3f800000
*(rcx_7 + rax_12 + 0x1c) = 0
*(rcx_7 + rax_12 + 0x38) = 0
*(rcx_7 + rax_12 + 0x40) = 0xffffffff
*(rcx_7 + rax_12 + 0x50) &= 0xfe
return *(arg1 + 0xf0) + rcx_7
