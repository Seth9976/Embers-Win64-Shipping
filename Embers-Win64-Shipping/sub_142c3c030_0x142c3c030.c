// 函数: sub_142c3c030
// 地址: 0x142c3c030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_738
int64_t rax_1 = __security_cookie ^ &var_738
uint64_t r14 = 0
int32_t i = 0x621
void* rdi = &data_1436a0b60 + (zx.q(arg3) << 1)
char var_328[0x170]
char var_1b8[0x170]

do
    uint32_t rsi_1 = zx.d(*rdi)
    int32_t var_6b0
    int32_t var_6ac
    
    if (rsi_1 != 0 && sub_142bf49d0(arg2, i, 0, &var_6b0, arg1) != 0
            && sub_142bf49d0(arg2, rsi_1, 0, &var_6ac, arg1) != 0)
        int32_t rdx_2 = var_6b0
        int32_t r8 = var_6ac
        
        if (rdx_2 != r8 && rdx_2 u<= 0xffff && r8 u<= 0xffff)
            uint64_t rcx_3 = r14 * 2
            var_1b8[rcx_3] = (rdx_2.w u>> 8).b
            var_328[rcx_3] = (r8.w u>> 8).b
            r14 = zx.q(r14.d + 1)
            var_1b7
            *(&var_1b7 + rcx_3) = rdx_2.b
            var_327
            *(&var_327 + rcx_3) = r8.b
    
    i += 1
    rdi += 8
while (i u< 0x6d4)

int64_t result

if (r14.d != 0)
    sub_142c3b000(&var_1b8, r14.d, sub_142c3c660, &var_328)
    int32_t var_678
    int32_t var_6c0_1 = &var_678
    void var_32c
    void* r13_1 = &var_32c
    int32_t var_6d8 = 0
    int32_t* r12_1 = &var_678
    void* var_6c8_1 = &var_32c
    int32_t* var_6d0_1 = &var_678
    int32_t var_6f0_1 = zx.d(&var_32c) - &var_678
    rdi.b = 1
    void* var_6f8_1 = &var_32c
    char var_6b8_1 = 1
    int32_t* var_700_1 = &var_678
    char const* const var_708_1 = "start [%p..%p] (%lu bytes)"
    int32_t var_710_1 = 1
    int64_t var_718_1 = 0
    uint64_t rbx_1 = zx.q(&var_678 - var_6c0_1 + 6)
    char r11_1
    
    if (rbx_1 s> 0x34c)
        rdi.b = 0
        r11_1 = 0
    else
        memset(&var_678, 0, zx.q(rbx_1.d))
        var_678 = 0x8000100
        void* rbx_2 = rbx_1 + &var_678
        var_6c0_1 = rbx_2.d
        int16_t var_674
        uint64_t r15_3 = zx.q(zx.d(&var_674) - rbx_2.d + 2)
        
        if (&var_32c - rbx_2 s< r15_3)
            rdi.b = 0
            r11_1 = 0
        else
            memset(rbx_2, 0, zx.q(r15_3.d))
            void* rbx_3 = rbx_2 + r15_3
            var_6c0_1 = rbx_3.d
            
            if (rbx_2 == 0)
                r11_1 = 0
            else
                var_674 = 0x100
                uint64_t rsi_3 = zx.q(&var_674 - rbx_3.d + 4)
                
                if (&var_32c - rbx_3 s< rsi_3)
                    rdi.b = 0
                    r11_1 = 0
                else
                    memset(rbx_3, 0, zx.q(rsi_3.d))
                    void* rbx_4 = rbx_3 + rsi_3
                    var_6c0_1 = rbx_4.d
                    
                    if (rbx_3 == 0)
                        r11_1 = 0
                    else
                        if ((var_678:3.b & 0x10) == 0)
                            goto label_142c3c2f5
                        
                        int16_t var_672[0x1d]
                        uint64_t rsi_6 = zx.q(zx.d(&var_678) - rbx_4.d +
                            &var_672 + (((zx.q(var_674.b) << 8) + zx.q(var_674:1.b)) << 1).d -
                            &var_678 + 2)
                        
                        if (&var_32c - rbx_4 s< rsi_6)
                            rdi.b = 0
                            r11_1 = 0
                        else
                            memset(rbx_4, 0, zx.q(rsi_6.d))
                            void* rax_15 = rbx_4
                            rbx_4 += rsi_6
                            var_6c0_1 = rbx_4.d
                            
                            if (rax_15 == 0)
                                r11_1 = 0
                            else
                                var_672[(zx.q(var_674.b) << 8) + zx.q(var_674:1.b)] = 0
                            label_142c3c2f5:
                                char (* var_6a0_1)[0x170] = &var_328
                                char (* var_688_1)[0x170] = &var_1b8
                                int32_t var_698_1 = r14.d
                                int32_t var_680_1 = r14.d
                                int128_t* rdx_4
                                
                                if (zx.d(var_674.b) << 8 != neg.d(zx.d(var_674:1.b)))
                                    rdx_4 = &var_672
                                else
                                    rdx_4 = &data_144017550
                                    data_144017550.w = 0
                                
                                uint16_t rcx_23 = var_6c0_1.w - &var_678
                                *(rdx_4 + 1) = rcx_23.b
                                *rdx_4 = (rcx_23 u>> 8).b
                                rdi = zx.q(var_6b8_1)
                                void var_6a8
                                void var_690
                                r11_1 = sub_142c3d670(rbx_4, &var_6d8, &var_690, &var_6a8)
                                r13_1 = var_6c8_1
                                r12_1 = var_6d0_1
    
    uint32_t count = var_6c0_1 - var_6d0_1.d
    char const* const rax_20 = "UNSUCCESSFUL"
    
    if (rdi.b != 0)
        rax_20 = "successful"
    
    char const* const var_6e8_1 = rax_20
    uint32_t count_1 = count
    void* var_6f8_2 = r13_1
    int32_t* var_700_2 = r12_1
    char const* const var_708_2 = "end [%p..%p] serialized %d bytes; %s"
    int32_t var_710_2 = 0xffffffff
    int64_t var_718_2 = 0
    int64_t result_1
    
    if (r11_1 == 0)
        result_1 = 0
    else
        int64_t result_2 = j_sub_140a82f30(zx.q(count))
        result_1 = result_2
        
        if (result_2 != 0)
            memcpy(result_2, r12_1, count)
    
    result = result_1
else
    result = 0

__security_check_cookie(rax_1 ^ &var_738)
return result
