// 函数: sub_142af89c0
// 地址: 0x142af89c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint64_t result = zx.q(*arg3)
uint64_t rsi
rsi.b = 0
uint64_t rdx

if (result.b == 4)
    rdx = 8
label_142af8a21:
    uint32_t rcx = zx.d(arg3[0x18])
    *(arg1 + 0xfc) = rcx.b
    
    if (rsi.b == 0 || rcx.b != 0)
        result = zx.q(*(arg3 + 0x18) u>> 8)
        
        if (result.d != 0)
            result = &arg3[result]
            *(arg1 + 0x120) = result
        
        if (rcx.b == 0xe)
            int64_t rsi_2 = *(arg1 + 0x120)
            int64_t var_98 = 0x28
            int64_t var_90
            __builtin_memset(&var_90, 0, 0x20)
            
            if (rsi_2 == 0)
                *arg4 = 0xd
            else if (*(arg2 + 4) == 1)
                void* result_1 = &arg3[zx.q((rdx << 2).d)]
                result = result_1
                uint32_t i
                uint32_t rdx_2
                
                do
                    rdx_2 = zx.d(*result)
                    i = zx.d(*(result + *(arg1 + 0x10) + 4 - result_1))
                    
                    if (rdx_2 != i)
                        break
                    
                    result += 1
                while (i != 0)
                
                if (rdx_2 - i == 0)
                    *arg4 = 0xd
                else
                    var_90.b = *(arg2 + 8)
                    var_90:2.w = *(arg2 + 0xa)
                    var_90:4.d = *(arg2 + 0xc)
                    var_98:4.d = 2
                    int128_t var_88
                    var_88.q = *(arg2 + 0x10)
                    var_98.d = 0x28
                    var_88:8.q = result_1
                    result = sub_142a92320(&var_98, arg4)
                    
                    if (*arg4 s<= 0)
                        if (*(*(result + 0x10) + 0x45) != 2 || *(result + 0x118) != 0)
                            result = sub_142a924e0(result)
                            *arg4 = 0xd
                        else if (*(arg2 + 8) == 0)
                            *(arg1 + 0x30) = *(result + 0x30)
                            *(arg1 + 0x40) = *(result + 0x40)
                            *(arg1 + 0x50) = *(result + 0x50)
                            *(arg1 + 0x60) = *(result + 0x60)
                            *(arg1 + 0x70) = *(result + 0x70)
                            *(arg1 + 0x80) = *(result + 0x80)
                            *(arg1 + 0x90) = *(result + 0x90)
                            *(arg1 + 0xa0) = *(result + 0xa0)
                            *(arg1 + 0xb0) = *(result + 0xb0)
                            *(arg1 + 0xc0) = *(result + 0xc0)
                            *(arg1 + 0xd0) = *(result + 0xd0)
                            *(arg1 + 0xe0) = *(result + 0xe0)
                            *(arg1 + 0xf0) = *(result + 0xf0)
                            *(arg1 + 0x100) = *(result + 0x100)
                            *(arg1 + 0x110) = *(result + 0x110)
                            *(arg1 + 0x120) = *(result + 0x120)
                            *(arg1 + 0x118) = result
                            *(arg1 + 0x120) = rsi_2
                            *(arg1 + 0x40) = 0
                            *(arg1 + 0xf0) = 0
                            *(arg1 + 0x110) = 0
                            *(arg1 + 0x108) = 0
                            void* rcx_5 = *(arg1 + 0x10)
                            char rax_9 = *(rcx_5 + 0x45)
                            
                            if (rax_9 == 1 || (rax_9 == 2 && *(rcx_5 + 0x46) s>= rax_9))
                                if (*(result + 0xfc) == 0xc)
                                    int32_t rcx_6 = *(*(arg1 + 0x38) + 0x38)
                                    
                                    if (rcx_6 s< 0 && (rcx_6 & 0xf00000) == 0x800000)
                                        uint8_t rcx_7 = (rcx_6 u>> 0x18).b
                                        
                                        if ((rcx_7 & 0x7f) != 0)
                                            *(arg1 + 0xfc) = 0xdb
                                            *(arg1 + 0x31) = rcx_7 & 0x7f
                                    
                                    goto label_142af901d
                                
                                void* rax_13 = *(result + 0x10)
                                
                                if (*(rax_13 + 0x45) != 2 || *(rax_13 + 0x46) != 1
                                        || *(rax_13 + 0x47) != 2)
                                    goto label_142af901d
                                
                                char rax_14 = *(arg1 + 0x30)
                                
                                if (rax_14 u> 0x7f)
                                    goto label_142af901d
                                
                                uint64_t rdi_1 = zx.q(rax_14)
                                int32_t count = rdi_1.d << 0xa
                                int64_t rax_16 = sub_142a7dd00(sx.q(count + 0x400))
                                
                                if (rax_16 != 0)
                                    memcpy(rax_16, *(arg1 + 0x38), count)
                                    
                                    for (int64_t i_1 = 0; i_1 s< 0x100; i_1 += 2)
                                        if (*(rax_16 + (i_1 << 2)) s< 0)
                                            *(rax_16 + (i_1 << 2)) = rdi_1.d << 0x18
                                        
                                        if (*(rax_16 + (i_1 << 2) + 4) s< 0)
                                            *(rax_16 + (i_1 << 2) + 4) = rdi_1.d << 0x18
                                    
                                    int64_t i_4 = 0x10
                                    int64_t rax_23 = (rdi_1 << 0xa) + rax_16
                                    int64_t i_2
                                    
                                    do
                                        __builtin_memcpy(rax_23, 
                                            "\x00\x00\x70\x80\x00\x00\x70\x80\x00\x00\x70\x80\x00\x00\x"
                                        "70\x80\x00\x00\x70\x80\x00\x00\x70\x80\x00\x00\x70\x80\x00"
                                        "00\x70\x80\x00\x00\x70\x80\x00\x00\x70\x80\x00\x00\x70\x80"
                                        "00\x00\x70\x80\x00\x00\x70\x80\x00\x00\x70\x80\x00\x00\x70"
                                        "80\x00\x00\x70\x80", 
                                            0x40)
                                        rax_23 += 0x40
                                        i_2 = i_4
                                        i_4 -= 1
                                    while (i_2 != 1)
                                    rdi_1.b += 1
                                    *(arg1 + 0x38) = rax_16
                                    *(arg1 + 0x30) = rdi_1.b
                                    *(arg1 + 0x32) = 1
                                    *(arg1 + 0xfc) = 0xdb
                                    goto label_142af901d
                                
                                result = sub_142a924e0(result)
                                *arg4 = 7
                            else
                            label_142af901d:
                                
                                if (*(arg1 + 0xfe) != 0)
                                    if (*(arg1 + 0x30) == 1)
                                        *(arg1 + 0x20) = &data_143663d30
                                    else if (*(arg1 + 0xfc) == 1)
                                        *(arg1 + 0x20) = &data_143663dc0
                                
                                result = zx.q(*(arg1 + 0xfc))
                                
                                if (result.b == 0xdb || result.b == 0xc)
                                    *(arg1 + 0x104) = 0
                        else
                            result = sub_142a924e0(result)
            else
                *arg4 = 0xe
        else if (rcx.b u> 0xc)
            *arg4 = 0xd
        else
            result = 0x130f
            
            if (not(test_bit(0x130f, rcx)))
                *arg4 = 0xd
            else if (*(arg2 + 8) == 0)
                *(arg1 + 0x30) = arg3[4]
                void* rdx_7 = &arg3[zx.q((rdx << 2).d)]
                *(arg1 + 0x34) = *(arg3 + 8)
                *(arg1 + 0x38) = rdx_7
                *(arg1 + 0x50) = (zx.q(*(arg3 + 4)) << 0xa) + rdx_7
                *(arg1 + 0x48) = &arg3[zx.q(*(arg3 + 0xc))]
                *(arg1 + 0x58) = &arg3[zx.q(*(arg3 + 0x10))]
                *(arg1 + 0xe8) = &arg3[zx.q(*(arg3 + 0x14))]
                *(arg1 + 0xf8) = *(arg3 + 0x1c)
                void* rcx_12 = *(arg1 + 8)
                int16_t var_70 = 0x14
                sub_142a7f830(rcx_12, &var_70)
                char var_64
                char var_63
                
                if (var_64 u> 6 || (var_64 == 6 && var_63 u>= 1))
                    *(arg1 + 0xfd) = *(*(arg1 + 0x10) + 0x4f) & 3
                else
                    *(arg1 + 0xfd) = 3
                
                if (arg3[1] u>= 3 && (*(arg1 + 0xfd) & 2) == 0)
                    char rcx_14 = *(arg1 + 0x30)
                    bool cond:1_1
                    
                    if (rcx_14 != 1)
                        cond:1_1 = arg3[2] u>= 0xd7
                    else
                        cond:1_1 = arg3[2] u>= 0xf
                    
                    int32_t rax_38
                    rax_38.b = cond:1_1
                    
                    if (rax_38 != 0)
                        *(arg1 + 0xfe) = 1
                        uint16_t rax_45
                        
                        if (rcx_14 != 1)
                            uint64_t rax_46 = 0
                            
                            if (rsi.b == 0)
                                rax_46 = zx.q(*(arg1 + 0xf8))
                            
                            *(arg1 + 0x60) = rax_46 + *(arg1 + 0xe8)
                            rax_45 = zx.w(arg3[2]) << 8 | 0xff
                        else
                            int32_t i_3 = 0
                            void* r10_1 = arg1 + 0x68
                            int64_t r9_1 = 0
                            
                            do
                                int64_t rdx_9 = *(arg1 + 0x58)
                                r10_1 += 2
                                int64_t rax_39 = r9_1
                                r9_1 += 1
                                uint64_t rax_42 = zx.q(i_3) & 0xf
                                i_3 += 1
                                *(r10_1 - 2) = *(rdx_9 + (
                                    zx.q(zx.d(*(rdx_9 + (rax_39 s>> 4 << 1))) + (rax_42 << 2).d)
                                    << 1))
                            while (i_3 s< 0x40)
                            
                            rax_45 = 0xfff
                        
                        *(arg1 + 0x100) = rax_45
                
                int32_t rcx_16 = -1
                void* r8_5 = *(arg1 + 0x38) + 8
                int32_t rdx_10 = 2
                
                do
                    if (*(r8_5 - 8) != ((rdx_10 - 2) | 0x80000000))
                        rcx_16 &= not.d(1 << (((rdx_10 - 2) s>> 2) u% 0x20))
                    
                    if (*(r8_5 - 4) != ((rdx_10 - 1) | 0x80000000))
                        rcx_16 &= not.d(1 << (((rdx_10 - 1) s>> 2) u% 0x20))
                    
                    if (*r8_5 != (rdx_10 | 0x80000000))
                        rcx_16 &= not.d(1 << ((rdx_10 s>> 2) u% 0x20))
                    
                    if (*(r8_5 + 4) != ((rdx_10 + 1) | 0x80000000))
                        rcx_16 &= not.d(1 << (((rdx_10 + 1) s>> 2) u% 0x20))
                    
                    rdx_10 += 4
                    r8_5 += 0x10
                while (rdx_10 - 2 s< 0x80)
                
                *(arg1 + 0x104) = rcx_16
                
                if (rsi.b != 0)
                    int32_t rdx_14 = (zx.d(*(arg1 + 0xfd)) & 1) << 0xa | 0x40
                    sub_142afaee0(arg1 + 0x30, rdx_14, 
                        ((*(arg3 + 0x14) - *(arg3 + 0x10)) u>> 2) - (rdx_14 u>> 1), *(arg3 + 0x24), 
                        arg5, arg4)
                
                goto label_142af901d
    else
        *arg4 = 0xd
else if (result.b != 5 || arg3[1] u< 3)
    *arg4 = 0xd
else
    int32_t rsi_1 = *(arg3 + 0x20)
    
    if ((rsi_1 & 0xff80) == 0)
        rdx = zx.q(rsi_1) & 0x3f
        rsi.b = (rsi_1 u>> 6).b & 1
        goto label_142af8a21
    
    *arg4 = 0xd
__security_check_cookie(rax_1 ^ &var_c8)
return result
