// 函数: sub_14262c020
// 地址: 0x14262c020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rbp = arg3
int16_t* r13 = arg2
int64_t var_78 = arg3
int64_t* rsi = arg1
uint64_t r14 = zx.q(arg4)
memset(*arg5, 0, sx.q(*(arg5 + 0x14)) * sx.q(arg5[2].d) * 2)
sub_142616290(arg6, 0)

if (r14.d s> 0)
    int64_t r12_1 = 0
    
    do
        int32_t rdx = arg5[1].d
        uint32_t r11_1 = 0xffff
        uint64_t rcx_2 = zx.q(r13[r12_1])
        uint32_t r14_1 = 0
        uint32_t r15_1 = 0
        uint32_t r10_1 = zx.d(*(rbp + rcx_2 * 6))
        uint32_t r9 = zx.d(*(rbp + rcx_2 * 6 + 4))
        
        if (r10_1 s>= rdx && r10_1 s< arg5[2].d + rdx)
            int32_t rcx_5 = *(arg5 + 0xc)
            
            if (r9 s>= rcx_5 && r9 s< rcx_5 + *(arg5 + 0x14))
                uint32_t r8_3 = zx.d(*(rsi[2] + (sx.q(zx.d(*(*rsi + 0x30)) * r9 + r10_1) << 1)))
                
                if (r8_3 u< 0xffff)
                    r14_1 = r10_1
                    r15_1 = r9
                    r11_1 = r8_3
        
        if (r10_1 - 1 s>= rdx && r10_1 - 1 s< arg5[2].d + rdx)
            int32_t rcx_13 = *(arg5 + 0xc)
            
            if (r9 - 1 s>= rcx_13 && r9 - 1 s< rcx_13 + *(arg5 + 0x14))
                uint32_t rax_9 =
                    zx.d(*(rsi[2] + (sx.q(zx.d(*(*rsi + 0x30)) * (r9 - 1) + r10_1 - 1) << 1)))
                
                if (rax_9 u< r11_1)
                    r14_1 = r10_1 - 1
                    r15_1 = r9 - 1
                    r11_1 = rax_9
        
        if (r10_1 s>= rdx && r10_1 s< arg5[2].d + rdx)
            int32_t rcx_21 = *(arg5 + 0xc)
            
            if (r9 - 1 s>= rcx_21 && r9 - 1 s< rcx_21 + *(arg5 + 0x14))
                uint32_t rax_12 =
                    zx.d(*(rsi[2] + (sx.q(zx.d(*(*rsi + 0x30)) * (r9 - 1) + r10_1) << 1)))
                
                if (rax_12 u< r11_1)
                    r14_1 = r10_1
                    r15_1 = r9 - 1
                    r11_1 = rax_12
        
        if (r10_1 + 1 s>= rdx)
            if (r10_1 + 1 s< arg5[2].d + rdx)
                int32_t rcx_29 = *(arg5 + 0xc)
                
                if (r9 - 1 s>= rcx_29 && r9 - 1 s< rcx_29 + *(arg5 + 0x14))
                    uint32_t rax_17 =
                        zx.d(*(arg1[2] + (sx.q(zx.d(*(*arg1 + 0x30)) * (r9 - 1) + r10_1 + 1) << 1)))
                    
                    if (rax_17 u< r11_1)
                        r14_1 = r10_1 + 1
                        r15_1 = r9 - 1
                        r11_1 = rax_17
                
                rsi = arg1
            
            if (r10_1 + 1 s>= rdx)
                if (r10_1 + 1 s< arg5[2].d + rdx)
                    int32_t rcx_37 = *(arg5 + 0xc)
                    
                    if (r9 s>= rcx_37 && r9 s< rcx_37 + *(arg5 + 0x14))
                        uint32_t rax_20 =
                            zx.d(*(rsi[2] + (sx.q(zx.d(*(*rsi + 0x30)) * r9 + r10_1 + 1) << 1)))
                        
                        if (rax_20 u< r11_1)
                            r14_1 = r10_1 + 1
                            r15_1 = r9
                            r11_1 = rax_20
                
                if (r10_1 + 1 s>= rdx && r10_1 + 1 s< arg5[2].d + rdx)
                    int32_t rcx_45 = *(arg5 + 0xc)
                    
                    if (r9 + 1 s>= rcx_45 && r9 + 1 s< rcx_45 + *(arg5 + 0x14))
                        uint32_t rax_25 = zx.d(
                            *(arg1[2] + (sx.q(zx.d(*(*arg1 + 0x30)) * (r9 + 1) + r10_1 + 1) << 1)))
                        
                        if (rax_25 u< r11_1)
                            r14_1 = r10_1 + 1
                            r15_1 = r9 + 1
                            r11_1 = rax_25
        
        if (r10_1 s< rdx || r10_1 s>= arg5[2].d + rdx)
            rsi = arg1
        else
            int32_t rcx_53 = *(arg5 + 0xc)
            rsi = arg1
            
            if (r9 + 1 s>= rcx_53 && r9 + 1 s< rcx_53 + *(arg5 + 0x14))
                uint32_t rax_28 =
                    zx.d(*(rsi[2] + (sx.q(zx.d(*(*rsi + 0x30)) * (r9 + 1) + r10_1) << 1)))
                
                if (rax_28 u< r11_1)
                    r14_1 = r10_1
                    r15_1 = r9 + 1
                    r11_1 = rax_28
        
        if (r10_1 - 1 s>= rdx)
            if (r10_1 - 1 s< arg5[2].d + rdx)
                int32_t rcx_61 = *(arg5 + 0xc)
                
                if (r9 + 1 s>= rcx_61 && r9 + 1 s< rcx_61 + *(arg5 + 0x14))
                    uint32_t r10_2 =
                        zx.d(*(rsi[2] + (sx.q(zx.d(*(*rsi + 0x30)) * (r9 + 1) + r10_1 - 1) << 1)))
                    
                    if (r10_2 u< r11_1)
                        r14_1 = r10_1 - 1
                        r15_1 = r9 + 1
                        r11_1 = r10_2
            
            if (r10_1 - 1 s>= rdx && r10_1 - 1 s< arg5[2].d + rdx)
                int32_t rcx_69 = *(arg5 + 0xc)
                
                if (r9 s>= rcx_69 && r9 s< rcx_69 + *(arg5 + 0x14))
                    uint32_t rdx_1 =
                        zx.d(*(rsi[2] + (sx.q(zx.d(*(*rsi + 0x30)) * r9 + r10_1 - 1) << 1)))
                    
                    if (rdx_1 u< r11_1)
                        r14_1 = r10_1 - 1
                        r15_1 = r9
                        r11_1 = rdx_1
        
        if (r11_1 != 0xffff)
            sub_142616290(arg6, arg6[1].d + 1)
            *(*arg6 + (sx.q(arg6[1].d) << 2) - 4) = r14_1
            sub_142616290(arg6, arg6[1].d + 1)
            *(*arg6 + (sx.q(arg6[1].d) << 2) - 4) = r15_1
        
        r14 = sx.q(arg4)
        r12_1 += 1
        rbp = var_78
    while (r12_1 s< r14)

int32_t rax_35 = 0
int32_t r8_9 = 0

if (r14.d s> 0)
    uint64_t i_3 = zx.q(r14.d)
    uint64_t i
    
    do
        uint64_t rcx_79 = zx.q(*r13)
        r13 = &r13[1]
        uint64_t rdx_6 = rcx_79 * 3
        rax_35 += zx.d(*(rbp + (rdx_6 << 1)))
        r8_9 += zx.d(*(rbp + (rdx_6 << 1) + 4))
        i = i_3
        i_3 -= 1
    while (i != 1)

int32_t temp0 = divs.dp.d(sx.q(rax_35), r14.d)
int32_t r10_3 = temp0
int32_t r8_10 = 0
int32_t temp0_1 = divs.dp.d(sx.q(r8_9), r14.d)
int32_t r9_1 = temp0_1
int64_t var_68

if (arg6[1].d s> 0)
    int64_t rdx_10 = 0
    int32_t rcx_85
    
    do
        int64_t rcx_83 = *arg6
        rdx_10 += 8
        r8_10 += 2
        *(*arg5 + (sx.q((*(rcx_83 + rdx_10 - 4) - *(arg5 + 0xc)) * arg5[2].d - arg5[1].d
            + *(rcx_83 + rdx_10 - 8)) << 1)) = 1
        rcx_85 = arg6[1].d
    while (r8_10 s< rcx_85)
    
    if (rcx_85 s> 0)
        while (true)
            if (rcx_85 s> 0)
                rcx_85 -= 1
                arg6[1].d = rcx_85
            
            int64_t rdx_11 = *arg6
            int32_t r12_2 = *(rdx_11 + (sx.q(rcx_85) << 2))
            
            if (rcx_85 s> 0)
                rcx_85 -= 1
                arg6[1].d = rcx_85
            
            int32_t r13_1 = *(rdx_11 + (sx.q(rcx_85) << 2))
            int32_t temp15_1
            int32_t temp16_1
            temp15_1:temp16_1 = sx.q(r13_1 - r10_3)
            
            if ((temp16_1 ^ temp15_1) - temp15_1 s<= 1)
                int32_t temp18_1
                int32_t temp19_1
                temp18_1:temp19_1 = sx.q(r12_2 - r9_1)
                
                if ((temp19_1 ^ temp18_1) - temp18_1 s<= 1)
                    sub_142616290(arg6, 0)
                    sub_142616290(arg6, arg6[1].d + 1)
                    *(*arg6 + (sx.q(arg6[1].d) << 2) - 4) = r13_1
                    sub_142616290(arg6, arg6[1].d + 1)
                    *(*arg6 + (sx.q(arg6[1].d) << 2) - 4) = r12_2
                    break
            
            int64_t r14_2 = 0
            int64_t i_4 = 4
            __builtin_memcpy(&var_78, 
                "\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\x00\x"
            "00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 
                0x20)
            int64_t i_1
            
            do
                int32_t r8_11 = arg5[1].d
                int32_t rdx_14 = *(arg5 + 0xc)
                int32_t r9_2 = arg5[2].d
                uint64_t rcx_86 = (zx.q(r14_2.d) & 3) << 2
                int32_t rbp_3 = *(&var_68 + rcx_86) + r13_1
                int32_t rsi_4 = *(&var_78 + rcx_86) + r12_2
                
                if (rbp_3 s>= r8_11 && rbp_3 s< r8_11 + r9_2 && rsi_4 s>= rdx_14
                        && rsi_4 s< *(arg5 + 0x14) + rdx_14
                        && *(arg1[2] + (sx.q(zx.d(*(*arg1 + 0x30)) * rsi_4 + rbp_3) << 1))
                        != 0xffff)
                    int64_t rcx_93 = sx.q((rsi_4 - rdx_14) * r9_2 - r8_11 + rbp_3)
                    int64_t rax_69 = *arg5
                    
                    if (*(rax_69 + (rcx_93 << 1)) == 0)
                        *(rax_69 + (rcx_93 << 1)) = 1
                        sub_142616290(arg6, arg6[1].d + 1)
                        *(*arg6 + (sx.q(arg6[1].d) << 2) - 4) = rbp_3
                        sub_142616290(arg6, arg6[1].d + 1)
                        *(*arg6 + (sx.q(arg6[1].d) << 2) - 4) = rsi_4
                
                r14_2 += 1
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            rcx_85 = arg6[1].d
            
            if (rcx_85 s<= 0)
                break
            
            r9_1 = temp0_1
            r10_3 = temp0

uint32_t result = memset(*arg5, 0xff, sx.q(*(arg5 + 0x14)) * sx.q(arg5[2].d) * 2)
int32_t rcx_104 = arg6[1].d
int32_t r11_2 = 0

if (rcx_104 s> 0)
    int64_t r10_5 = 0
    
    do
        int64_t rax_75 = *arg6
        r10_5 += 8
        r11_2 += 2
        int32_t rdx_23 = *(rax_75 + r10_5 - 8)
        int32_t r9_3 = *(rax_75 + r10_5 - 4)
        result = zx.d(*(arg1[2] + (sx.q(zx.d(*(*arg1 + 0x30)) * r9_3 + rdx_23) << 1)))
        *(*arg5 + (sx.q((r9_3 - *(arg5 + 0xc)) * arg5[2].d - arg5[1].d + rdx_23) << 1)) = result.w
        rcx_104 = arg6[1].d
    while (r11_2 s< rcx_104)

int32_t r12_3 = 0

if (rcx_104 s> 0)
    int64_t r13_2 = 0
    int128_t var_58
    __builtin_memcpy(&var_58, 
        "\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x"
    "00\x00\x00\x00\x00\xff\xff\xff\xff", 
        0x20)
    
    do
        int64_t r9_8 = *arg6
        int32_t var_80_2 = r12_3 + 1
        int32_t rax_78 = *(r9_8 + (r13_2 << 3))
        var_78.d = *(r9_8 + (r13_2 << 3) + 4)
        var_68 = r13_2 + 1
        
        if (r12_3 + 1 s>= 0x100)
            var_80_2 = 0
            var_68 = 0
            
            if (rcx_104 s> 0x200)
                memmove(r9_8, r9_8 + 0x800, (rcx_104 - 0x200) << 2)
                rcx_104 = arg6[1].d
            
            sub_142616290(arg6, rcx_104 - 0x200)
        
        int64_t r14_3 = 0
        int32_t r12_5 = var_78.d
        int64_t i_5 = 4
        int64_t i_2
        
        do
            int32_t r8_18 = arg5[1].d
            int32_t rdx_28 = *(arg5 + 0xc)
            int32_t r9_9 = arg5[2].d
            uint64_t rcx_111 = (zx.q(r14_3.d) & 3) << 2
            int32_t rbp_5 = *(&var_58 + rcx_111) + rax_78
            int128_t var_48
            int32_t rsi_7 = *(&var_48 + rcx_111) + r12_5
            
            if (rbp_5 s>= r8_18 && rbp_5 s< r9_9 + r8_18 && rsi_7 s>= rdx_28
                    && rsi_7 s< *(arg5 + 0x14) + rdx_28)
                int64_t rcx_114 = sx.q((rsi_7 - rdx_28) * r9_9 - r8_18 + rbp_5)
                int64_t rax_88 = *arg5
                
                if (*(rax_88 + (rcx_114 << 1)) == 0xffff)
                    int16_t rdx_30 = *(arg1[2] + (sx.q(zx.d(*(*arg1 + 0x30)) * rsi_7 + rbp_5) << 1))
                    
                    if (rdx_30 != 0xffff)
                        *(rax_88 + (rcx_114 << 1)) = rdx_30
                        sub_142616290(arg6, arg6[1].d + 1)
                        *(*arg6 + (sx.q(arg6[1].d) << 2) - 4) = rbp_5
                        sub_142616290(arg6, arg6[1].d + 1)
                        *(*arg6 + (sx.q(arg6[1].d) << 2) - 4) = rsi_7
            
            r14_3 += 1
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        r12_3 = var_80_2
        rcx_104 = arg6[1].d
        r13_2 = var_68
        result = r12_3 * 2
    while (result s< rcx_104)

__security_check_cookie(rax_1 ^ &var_a8)
return result
