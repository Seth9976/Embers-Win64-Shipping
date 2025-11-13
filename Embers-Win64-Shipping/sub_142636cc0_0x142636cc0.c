// 函数: sub_142636cc0
// 地址: 0x142636cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* r15 = arg9
int32_t rax_3 = *arg6
int64_t rbp = sx.q(arg3)
int64_t* var_68 = r15
char rax_5 = *(rbp + *(arg6 + 0x58))
sub_142633840(r15, 0)
sub_142633840(r15, r15[1].d + 1)
*(*r15 + (sx.q(r15[1].d) << 2) - 4) = arg1
sub_142633840(r15, r15[1].d + 1)
*(*r15 + (sx.q(r15[1].d) << 2) - 4) = arg2
sub_142633840(r15, r15[1].d + 1)
uint64_t r9 = 0
int16_t r10 = arg5
*(*r15 + (sx.q(r15[1].d) << 2) - 4) = rbp.d
*(arg7 + (rbp << 1)) = r10
*(arg8 + (rbp << 1)) = 0
int16_t rax_10 = arg4 - 2
int32_t i = r15[1].d

if (arg4 u< 2)
    rax_10 = 0

int32_t result = 0
int32_t result_1 = 0

if (i s> 0)
    do
        int64_t rdx_6 = *r15
        int32_t rcx_7 = i - 1
        r15[1].d = rcx_7
        int64_t r8 = sx.q(*(rdx_6 + (sx.q(rcx_7) << 2)))
        
        if (rcx_7 s> 0)
            rcx_7 -= 1
            r15[1].d = rcx_7
        
        int32_t r11_1 = *(rdx_6 + (sx.q(rcx_7) << 2))
        int32_t var_90_1 = r11_1
        
        if (rcx_7 s> 0)
            rcx_7 -= 1
            r15[1].d = rcx_7
        
        int32_t rdi_1 = *(rdx_6 + (sx.q(rcx_7) << 2))
        int32_t var_94_1 = rdi_1
        void* rcx_9 = *(arg6 + 0x48) + r8 * 0xc
        int16_t rax_15 = 0
        void* var_88_1 = rcx_9
        int128_t var_48
        void* rsi_4
        
        while (true)
            char rbx_1 = (r9 << 3).b
            uint32_t r8_1 = zx.d((*(rcx_9 + 4) u>> rbx_1).b)
            int128_t var_58
            char r14_2
            
            if (r8_1 == 0xff)
                r14_2 = rax_5
            else
                int64_t r14_1 = *(arg6 + 0x40)
                int64_t rbp_1 = *(arg6 + 0x58)
                var_58 = data_142fc59d0
                uint64_t rdx_9 = (zx.q(r9.d) & 3) << 2
                int32_t rdi_2 = rdi_1 + *(&var_58 + rdx_9)
                var_58 = data_14344e350
                int32_t rsi_2 = *(&var_58 + rdx_9) + r11_1
                uint64_t rdx_12 =
                    zx.q((*(r14_1 + (sx.q(rsi_2 * rax_3 + rdi_2) << 2)) & 0xffffff) + r8_1)
                
                if (*(rdx_12 + rbp_1) != rax_5)
                    rdi_1 = var_94_1
                    r14_2 = rax_5
                else
                    int16_t rcx_18 = *(arg7 + (rdx_12 << 1))
                    
                    if (rcx_18 s< 0)
                        rdi_1 = var_94_1
                        r14_2 = rax_5
                    else
                        if (rcx_18 != 0 && rcx_18 != r10)
                            rax_15 = rcx_18
                        
                        uint64_t r10_2 = zx.q((r9 + 1).d) & 3
                        uint32_t r11_2 =
                            zx.d((*(*(arg6 + 0x48) + rdx_12 * 0xc + 4) u>> (r10_2 << 3).b).b)
                        
                        if (r11_2 == 0xff)
                            r10 = arg5
                            r11_1 = var_90_1
                            rdi_1 = var_94_1
                            r14_2 = rax_5
                        else
                            __builtin_memcpy(&var_58, 
                                "\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\x"
                            "ff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 
                                0x20)
                            r10 = arg5
                            rdi_1 = var_94_1
                            r14_2 = rax_5
                            uint64_t rdx_21 = zx.q((*(r14_1 + (sx.q(
                                (*(&var_58 + (r10_2 << 2)) + rsi_2) * rax_3
                                + *(&var_48 + (r10_2 << 2)) + rdi_2) << 2)) & 0xffffff) + r11_2)
                            r11_1 = var_90_1
                            
                            if (*(rdx_21 + rbp_1) == r14_2)
                                int16_t rcx_22 = *(arg7 + (rdx_21 << 1))
                                
                                if (rcx_22 != 0 && rcx_22 != r10)
                                    rax_15 = rcx_22
            
            rsi_4 = var_88_1
            uint32_t r8_5 = zx.d((*(rsi_4 + 4) u>> (rbx_1 + 8)).b)
            
            if (r8_5 != 0xff)
                int64_t rsi_3 = *(arg6 + 0x40)
                int64_t rbp_2 = *(arg6 + 0x58)
                var_58 = data_142fc59d0
                uint64_t rdx_24 = (zx.q(r9.d + 1) & 3) << 2
                int32_t rbx_3 = *(&var_58 + rdx_24) + rdi_1
                var_58 = data_14344e350
                int32_t rdi_4 = *(&var_58 + rdx_24) + r11_1
                uint64_t rdx_27 =
                    zx.q((*(rsi_3 + (sx.q(rdi_4 * rax_3 + rbx_3) << 2)) & 0xffffff) + r8_5)
                
                if (*(rdx_27 + rbp_2) != r14_2)
                    rsi_4 = var_88_1
                else
                    int16_t rcx_30 = *(arg7 + (rdx_27 << 1))
                    
                    if (rcx_30 s< 0)
                        rsi_4 = var_88_1
                    else
                        if (rcx_30 != 0 && rcx_30 != r10)
                            rax_15 = rcx_30
                        
                        uint64_t r10_4 = zx.q((r9 - 2).d) & 3
                        uint32_t r11_3 =
                            zx.d((*(*(arg6 + 0x48) + rdx_27 * 0xc + 4) u>> (r10_4 << 3).b).b)
                        
                        if (r11_3 == 0xff)
                            r10 = arg5
                            rsi_4 = var_88_1
                        else
                            __builtin_memcpy(&var_58, 
                                "\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\x"
                            "ff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 
                                0x20)
                            r10 = arg5
                            rsi_4 = var_88_1
                            uint64_t rdx_36 = zx.q((*(rsi_3 + (sx.q(
                                (*(&var_58 + (r10_4 << 2)) + rdi_4) * rax_3
                                + *(&var_48 + (r10_4 << 2)) + rbx_3) << 2)) & 0xffffff) + r11_3)
                            
                            if (*(rdx_36 + rbp_2) == r14_2)
                                int16_t rcx_34 = *(arg7 + (rdx_36 << 1))
                                
                                if (rcx_34 != 0 && rcx_34 != r10)
                                    rax_15 = rcx_34
            
            r11_1 = var_90_1
            r9 = zx.q(r9.d + 2)
            rdi_1 = var_94_1
            
            if (r9.d s>= 4)
                break
            
            rcx_9 = var_88_1
        
        r15 = var_68
        
        if (rax_15 == 0)
            result_1 += 1
            r9 = 0
            uint64_t rbx_4 = 0
            
            do
                uint32_t r8_9 = zx.d((*(rsi_4 + 4) u>> (rbx_4 << 3).b).b)
                
                if (r8_9 != 0xff)
                    var_48 = data_142fc59d0
                    uint64_t rcx_36 = (zx.q(rbx_4.d) & 3) << 2
                    int32_t rdi_6 = var_94_1 + *(&var_48 + rcx_36)
                    var_48 = data_14344e350
                    int32_t rsi_6 = var_90_1 + *(&var_48 + rcx_36)
                    uint64_t rbp_5 = zx.q((*(*(arg6 + 0x40) + (sx.q(rsi_6 * rax_3 + rdi_6) << 2))
                        & 0xffffff) + r8_9)
                    
                    if (*(rbp_5 + *(arg6 + 0x58)) == rax_5
                            && *(*(arg6 + 0x50) + (rbp_5 << 1)) u>= rax_10
                            && *(arg7 + (rbp_5 << 1)) == 0)
                        *(arg7 + (rbp_5 << 1)) = r10
                        *(arg8 + (rbp_5 << 1)) = 0
                        sub_142633840(r15, r15[1].d + 1)
                        *(*r15 + (sx.q(r15[1].d) << 2) - 4) = rdi_6
                        sub_142633840(r15, r15[1].d + 1)
                        *(*r15 + (sx.q(r15[1].d) << 2) - 4) = rsi_6
                        sub_142633840(r15, r15[1].d + 1)
                        r9 = 0
                        *(*r15 + (sx.q(r15[1].d) << 2) - 4) = rbp_5.d
                    
                    rsi_4 = var_88_1
                
                r10 = arg5
                rbx_4 = zx.q(rbx_4.d + 1)
            while (rbx_4.d s< 4)
        else
            r9 = 0
            *(arg7 + (r8 << 1)) = 0
        
        i = r15[1].d
        r10 = arg5
    while (i s> 0)
    
    result = result_1

result.b = result s> 0
__security_check_cookie(rax_1 ^ &var_b8)
return result
