// 函数: sub_142a6fe90
// 地址: 0x142a6fe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result

if (*arg2 s<= 0)
    void* rdi_1 = *(arg1 + 8)
    int64_t rbx_1
    
    while (true)
        int16_t rax_1 = *(rdi_1 + 8)
        int32_t rax_3
        
        if (rax_1 s< 0)
            rax_3 = *(rdi_1 + 0xc)
        else
            rax_3 = sx.d(rax_1) s>> 5
        
        rbx_1 = sx.q(*(arg1 + 0x10))
        
        if (rbx_1.d s>= rax_3)
            break
        
        int16_t rcx = *(rdi_1 + 8)
        int32_t rax_5
        
        if (rcx s< 0)
            rax_5 = *(rdi_1 + 0xc)
        else
            rax_5 = sx.d(rcx) s>> 5
        
        int16_t rdx
        
        if (rbx_1.d u>= rax_5)
            rdx = -1
        else
            void* rcx_1 = rdi_1 + 0xa
            
            if ((rcx.b & 2) == 0)
                rcx_1 = *(rdi_1 + 0x18)
            
            rdx = *(rcx_1 + (rbx_1 << 1))
        
        int32_t rax_6 = sub_142a6f0d0(rdx)
        *(arg1 + 0x58) = rax_6
        
        if (rax_6 != 4)
            break
        
        *(arg1 + 0x10) = (rbx_1 + 1).d
    
    int16_t rax_8 = *(rdi_1 + 8)
    
    if (rax_8 s< 0)
        result = zx.q(*(rdi_1 + 0xc))
    else
        result = zx.q(sx.d(rax_8) s>> 5)
    
    if (rbx_1.d s< result.d)
        int32_t rdx_1 = *(arg1 + 0x58)
        
        if (rdx_1 - 1 u> 0x11)
            *arg2 = 0x10100
            rbx_1 = zx.q(rbx_1.d + 1)
        else
            switch (rdx_1)
                case 1
                    if (rdx_1 == 1)
                        int32_t i
                        
                        do
                            int16_t rax_17 = *(rdi_1 + 8)
                            rbx_1 = zx.q(rbx_1.d + 1)
                            int32_t rax_19
                            
                            if (rax_17 s< 0)
                                rax_19 = *(rdi_1 + 0xc)
                            else
                                rax_19 = sx.d(rax_17) s>> 5
                            
                            if (rbx_1.d s>= rax_19)
                                break
                            
                            i = sub_142a6f0d0(sub_142a4a1a0(rdi_1, rbx_1.d))
                            *(arg1 + 0x58) = i
                        while (i == 1)
                    
                    *(arg1 + 0x58) = 1
                case 2, 3, 5, 6, 9, 0xd, 0x10, 0x12
                    rbx_1 = zx.q(rbx_1.d + 1)
                case 4, 8, 0xb, 0xc, 0xe, 0xf
                    *arg2 = 0x10100
                    rbx_1 = zx.q(rbx_1.d + 1)
                case 7
                    int16_t rax_21 = *(rdi_1 + 8)
                    int32_t rax_23
                    
                    if (rax_21 s< 0)
                        rax_23 = *(rdi_1 + 0xc)
                    else
                        rax_23 = sx.d(rax_21) s>> 5
                    
                    int32_t rbp_1 = (rbx_1 + 1).d
                    int16_t rax_24
                    
                    if (rbp_1 s< rax_23)
                        rax_24 = sub_142a4a1a0(rdi_1, rbp_1)
                    
                    if (rbp_1 s>= rax_23 || rax_24 != 0x2e)
                        rbx_1 = zx.q(rbp_1)
                    else
                        int16_t rax_25 = *(rdi_1 + 8)
                        int32_t rax_27
                        
                        if (rax_25 s< 0)
                            rax_27 = *(rdi_1 + 0xc)
                        else
                            rax_27 = sx.d(rax_25) s>> 5
                        
                        int32_t rbp_2 = (rbx_1 + 2).d
                        int16_t rax_28
                        
                        if (rbp_2 s< rax_27)
                            rax_28 = sub_142a4a1a0(rdi_1, rbp_2)
                        
                        if (rbp_2 s>= rax_27 || rax_28 != 0x2e)
                            rbx_1 = zx.q(rbp_2)
                            *(arg1 + 0x58) = 8
                        else
                            *(arg1 + 0x58) = 9
                            rbx_1 = zx.q(rbx_1.d + 3)
                case 0xa
                    if (rdx_1 == 0xa)
                        int32_t i_1
                        
                        do
                            int16_t rax_13 = *(rdi_1 + 8)
                            rbx_1 = zx.q(rbx_1.d + 1)
                            int32_t rax_15
                            
                            if (rax_13 s< 0)
                                rax_15 = *(rdi_1 + 0xc)
                            else
                                rax_15 = sx.d(rax_13) s>> 5
                            
                            if (rbx_1.d s>= rax_15)
                                break
                            
                            i_1 = sub_142a6f0d0(sub_142a4a1a0(rdi_1, rbx_1.d))
                            *(arg1 + 0x58) = i_1
                        while (i_1 == 0xa)
                    
                    *(arg1 + 0x58) = 0xa
                case 0x11
                    if (sub_142a4a1a0(rdi_1, (rbx_1 + 1).d) != 0x3d)
                        *(arg1 + 0x58) = 0
                        rbx_1 = zx.q(rbx_1.d + 1)
                    else
                        rbx_1 = zx.q(rbx_1.d + 2)
        
        int32_t r8_1 = *(arg1 + 0x10)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
        sub_142a48050(arg1 + 0x18, 
            Concurrency::details::_SyncOriginator<uint64_t>::_SyncOriginator<uint64_t>(&var_68, 
                *(arg1 + 8), r8_1, rbx_1.d - r8_1))
        result = sub_142a47ff0(&var_68)
        *(arg1 + 0x10) = rbx_1.d
    else
        *(arg1 + 0x58) = 0x1c

__security_check_cookie(result_1 ^ &var_88)
return result
