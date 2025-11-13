// 函数: sub_142c51140
// 地址: 0x142c51140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xf5b0)
void var_f5d8
int64_t rax_1 = __security_cookie ^ &var_f5d8
int64_t r13
r13.b = 0
HMODULE rax_2 = LoadLibraryA("gdi32.dll")

if (rax_2 != 0)
    int32_t var_f558
    memset(&var_f558, 0, 0x144)
    int64_t rax_3 = GetProcAddress(rax_2, "D3DKMTEnumAdapters")
    int64_t rax_4 = GetProcAddress(rax_2, "D3DKMTQueryAdapterInfo")
    
    if (rax_3 != 0 && rax_4 != 0 && rax_3(&var_f558) s>= 0)
        int32_t rsi_1 = 0
        
        if (var_f558 s> 0)
            void* rbx_3 = sx.q(*(arg2 + 0x70)) * 0x624 + *(arg1 + 0x400)
            void var_f554
            void* r14_1 = &var_f554
            
            do
                void var_f408
                memset(&var_f408, 0, 0x260)
                int32_t var_f5b8 = *r14_1
                int32_t var_f5b4_1 = 0
                void* var_f5b0_1 = &var_f408
                int64_t var_f5a8_1 = 0x260
                
                if (rax_4(&var_f5b8) == 0xc0000023)
                    var_f5a8_1.d = 0x4360
                    void var_f1a8
                    void* var_f5b0_2 = &var_f1a8
                    memset(&var_f1a8, 0, 0x4360)
                    int32_t rax_9 = rax_4(&var_f5b8)
                    int32_t var_f1a0
                    int32_t r10_1 = var_f1a0
                    
                    if (r10_1 u> 1)
                        var_f5a8_1.d = r10_1 * 0x3a00 + 0x960
                        memset(&var_f1a8, 0, zx.q(r10_1 * 0x3a00 + 0x960))
                        rax_9 = rax_4(&var_f5b8)
                        r10_1 = var_f1a0
                    
                    if (rax_9 == 0)
                        int32_t r8_2 = 0
                        
                        if (r10_1 != 0)
                            do
                                int64_t rdx = zx.q(r8_2) * 0x3a00
                                void var_dfb4
                                int32_t rax_13 = *(&var_dfb4 + rdx)
                                
                                if (zx.d(rax_13.b) == *(rbx_3 + 0x108)
                                        && (rax_13 u>> 0xd & 7) == *(rbx_3 + 0x110)
                                        && (rax_13 u>> 8 & 0x1f) == *(rbx_3 + 0x10c))
                                    void var_de44
                                    int32_t rcx_14 = *(&var_de44 + rdx)
                                    void var_de40
                                    int32_t r9_1 = *(&var_de40 + rdx)
                                    
                                    if (rcx_14 - 0x6e u> 0x21)
                                        goto label_142c514c4
                                    
                                    void var_dc04
                                    int32_t rax_17
                                    int32_t r8_3
                                    
                                    if (rcx_14 u> 0x8c && (*(&var_dc04 + rdx) & 1) != 0)
                                        void var_dbe8
                                        r8_3 = *(&var_dbe8 + rdx)
                                        void var_dbe4
                                        rax_17 = *(&var_dbe4 + rdx)
                                    label_142c513b1:
                                        r13.b = 1
                                        *(arg2 + 0xc) = 0
                                        *(arg2 + 0x24) = (rax_17 * r8_3) << 2
                                        
                                        if (rcx_14 == 0x6e)
                                            *(arg2 + 8) = 2
                                        else if (rcx_14 - 0x78 u<= 0xf
                                                && test_bit(0x8021, rcx_14 - 0x78))
                                            *(arg2 + 8) = 3
                                        label_142c5143b:
                                            
                                            if (rcx_14 - 0x7d u<= 0x11
                                                    && test_bit(0x20401, rcx_14 - 0x7d))
                                                *(arg2 + 0xc) = 1
                                        else if (rcx_14 == 0x8c)
                                            *(arg2 + 8) = 4
                                        else if (rcx_14 != 0x82)
                                            if (rcx_14 - 0x8d u<= 1)
                                                *(arg2 + 8) = 6
                                                goto label_142c5143b
                                            
                                            if (rcx_14 != 0x8f)
                                                *(arg2 + 8) = 0
                                                goto label_142c5143b
                                            
                                            *(arg2 + 8) = 7
                                        else
                                            *(arg2 + 8) =
                                                sbb.d(rcx_14 - 0x78, rcx_14 - 0x78, r9_1 u< 0x50)
                                                + 5
                                        
                                        int64_t rax_24 = *(arg1 + 0x38)
                                        
                                        if (rax_24 != 0)
                                            int64_t rcx_17 = *(arg1 + 8)
                                            int64_t var_f598
                                            __builtin_memset(&var_f598, 0, 0x40)
                                            
                                            if (rax_24(rcx_17, zx.q(*(rbx_3 + 4)), &var_f598) == 0)
                                                if (*(arg2 + 8) s< 7)
                                                    *(arg2 + 0x1c) = var_f598:4.d
                                                    *(arg2 + 0x20) = 0
                                                else
                                                    int32_t rax_26 = var_f598:4.d
                                                    *(arg2 + 0x20) = rax_26
                                                    *(arg2 + 0x1c) = rax_26 * 2
                                        
                                        goto label_142c514c4
                                    
                                    void var_db1c
                                    
                                    if ((*(&var_db1c + rdx) & 2) != 0)
                                        void var_db00
                                        r8_3 = *(&var_db00 + rdx)
                                        void var_dafc
                                        rax_17 = *(&var_dafc + rdx)
                                        goto label_142c513b1
                                
                                r8_2 += 1
                            while (r8_2 u< r10_1)
                
                rsi_1 += 1
                r14_1 += 0x14
            while (rsi_1 s< var_f558)
    
label_142c514c4:
    FreeLibrary(rax_2)

__security_check_cookie(rax_1 ^ &var_f5d8)
return zx.q(r13.b)
