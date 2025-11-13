// 函数: sub_1403c63e0
// 地址: 0x1403c63e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
uint64_t var_38 = rbp
void var_78
uint64_t var_48 = __security_cookie ^ &var_78
uint64_t result
result.b = *(arg1 + 0x25e)
int32_t rcx = *(arg1 + 0x15c)

if ((result.b & 2) == 0 && (rcx & 0x100) != 0)
    *(arg1 + 0x155) |= 8
else if ((rcx & 0x4180) == 0x4080)
    int16_t rdx_5 = *(arg1 + 0x272)
    
    if (rdx_5 == *(arg1 + 0x274) && rdx_5 == *(arg1 + 0x276))
        *(arg1 + 0x155) |= 8
        *(arg1 + 0x278) = rdx_5

int64_t r15

if ((rcx & 0x1100) != 0x1100)
label_1403c672c:
    *(arg1 + 0x282) = *(arg1 + 0x278)
    *(arg1 + 0x27a) = *(arg1 + 0x270)
    
    if (result.b == 3)
        goto label_1403c6746
    
    r15 = 0
else
    if ((result.b & 2) == 0)
        int32_t rdx_7
        rdx_7.b = *(arg1 + 0x25f)
        int16_t rdx_13
        
        if (rdx_7.b == 4)
            rbp = zx.q(*(arg1 + 0x278))
            int16_t rdx_20 = (rbp.d << 4).w + rbp.w
            *(arg1 + 0x278) = rdx_20
            *(arg1 + 0x276) = rdx_20
            *(arg1 + 0x274) = rdx_20
            *(arg1 + 0x272) = rdx_20
            
            if ((rcx & 0x2000000) == 0)
                int32_t rcx_6 = *(arg1 + 0x2f8)
                rdx_13 = (rcx_6 << 4).w + rcx_6.w
            label_1403c663d:
                *(arg1 + 0x2f8) = rdx_13
                *(arg1 + 0x2f6) = rdx_13
                *(arg1 + 0x2f4) = rdx_13
                *(arg1 + 0x2f2) = rdx_13
        else if (rdx_7.b == 2)
            int16_t rdx_17 = (*(arg1 + 0x278)).w * 0x55
            *(arg1 + 0x278) = rdx_17
            *(arg1 + 0x276) = rdx_17
            *(arg1 + 0x274) = rdx_17
            *(arg1 + 0x272) = rdx_17
            
            if ((rcx & 0x2000000) == 0)
                int16_t rcx_5 = (*(arg1 + 0x2f8)).w * 0x55
                *(arg1 + 0x2f8) = rcx_5
                *(arg1 + 0x2f6) = rcx_5
                *(arg1 + 0x2f4) = rcx_5
                *(arg1 + 0x2f2) = rcx_5
        else if (rdx_7.b != 1)
            int16_t rcx_8 = *(arg1 + 0x278)
            *(arg1 + 0x276) = rcx_8
            *(arg1 + 0x274) = rcx_8
            *(arg1 + 0x272) = rcx_8
        else
            rbp = zx.q(*(arg1 + 0x278))
            int16_t rdx_10 = (rbp.d << 8).w - rbp.w
            *(arg1 + 0x278) = rdx_10
            *(arg1 + 0x276) = rdx_10
            *(arg1 + 0x274) = rdx_10
            *(arg1 + 0x272) = rdx_10
            
            if ((rcx & 0x2000000) == 0)
                int32_t rcx_1 = *(arg1 + 0x2f8)
                rdx_13 = (rcx_1 << 8).w - rcx_1.w
                goto label_1403c663d
        goto label_1403c672c
    
    if (result.b != 3)
        *(arg1 + 0x282) = *(arg1 + 0x278)
        *(arg1 + 0x27a) = *(arg1 + 0x270)
        r15 = 0
    else
        int64_t rdx_14 = *(arg1 + 0x248)
        rbp = zx.q(*(arg1 + 0x270)) * 3
        *(arg1 + 0x272) = zx.w(*(rdx_14 + rbp))
        *(arg1 + 0x274) = zx.w(*(rdx_14 + rbp + 1))
        *(arg1 + 0x276) = zx.w(*(rdx_14 + rbp + 2))
        
        if ((rcx & 0x2080000) != 0x80000)
            *(arg1 + 0x282) = *(arg1 + 0x278)
            result = *(arg1 + 0x270)
        else
            rbp = zx.q(*(arg1 + 0x252))
            
            if (rbp != 0)
                uint64_t rcx_4 = zx.q(rbp.d) & 3
                int64_t i
                
                if (rbp - 1 u>= 3)
                    i = 0
                    
                    do
                        char* rbx_3 = *(arg1 + 0x2e8)
                        rbx_3[i] = not.b(rbx_3[i])
                        int64_t rbx_4 = *(arg1 + 0x2e8)
                        *(rbx_4 + i + 1) = not.b(*(rbx_4 + i + 1))
                        int64_t rbx_5 = *(arg1 + 0x2e8)
                        *(rbx_5 + i + 2) = not.b(*(rbx_5 + i + 2))
                        int64_t rbx_6 = *(arg1 + 0x2e8)
                        *(rbx_6 + i + 3) = not.b(*(rbx_6 + i + 3))
                        i += 4
                    while (rbp - rcx_4 != i)
                    
                    if (rcx_4 != 0)
                        goto label_1403c6709
                else
                    i = 0
                    
                    if (rcx_4 != 0)
                    label_1403c6709:
                        int64_t i_5 = neg.q(rcx_4)
                        int64_t i_1
                        
                        do
                            rbp = *(arg1 + 0x2e8)
                            *(rbp + i) = not.b(*(rbp + i))
                            i += 1
                            i_1 = i_5
                            i_5 += 1
                        while (i_1 != -1)
                goto label_1403c672c
            
            *(arg1 + 0x282) = *(arg1 + 0x278)
            result = *(arg1 + 0x270)
        
        *(arg1 + 0x27a) = result
    label_1403c6746:
        r15.b = 1
        int32_t var_4c
        
        if (*(arg1 + 0x252) != 0)
            if (sub_1403c01b0(&var_4c, *(arg1 + 0x2a0), *(arg1 + 0x29c), 0x186a0).d == 0)
            label_1403c678b:
                rbp = zx.q(*(arg1 + 0x252))
                
                if (rbp == 0)
                    *(arg1 + 0x15d) &= 0xdf
                else
                    result = *(arg1 + 0x2e8)
                    uint64_t rdi_2 = zx.q(rbp.d) & 3
                    int32_t rdx_25
                    int64_t i_2
                    
                    if (rbp - 1 u>= 3)
                        i_2 = 0
                        rdx_25 = 0
                        
                        do
                            if (*(result + i_2) + 1 u>= 2)
                                rdx_25 = 1
                            
                            if (*(result + i_2 + 1) + 1 u>= 2)
                                rdx_25 = 1
                            
                            if (*(result + i_2 + 2) + 1 u>= 2)
                                rdx_25 = 1
                            
                            if (*(result + i_2 + 3) + 1 u>= 2)
                                rdx_25 = 1
                            
                            i_2 += 4
                        while (rbp - rdi_2 != i_2)
                        
                        if (rdi_2 != 0)
                            goto label_1403c6828
                    else
                        i_2 = 0
                        rdx_25 = 0
                        
                        if (rdi_2 != 0)
                        label_1403c6828:
                            int64_t rcx_17 = 0
                            
                            do
                                if (*(result + i_2 + rcx_17) + 1 u>= 2)
                                    rdx_25 = 1
                                
                                rcx_17 += 1
                            while (rdi_2 != rcx_17)
                    
                    if (rdx_25 == 0)
                        *(arg1 + 0x15d) &= 0xdf
            else if (sub_1403c0440(var_4c).d != 0)
                goto label_1403c678b

int32_t rcx_23 = *(arg1 + 0x15c)
int32_t rcx_24

if ((rcx_23 & 0x602000) == 0 || *(arg1 + 0x29c) == 0)
    result.b = rcx_23.b s>= 0
    
    if (((r15.b ^ 1) | result.b) == 0)
        result = zx.q(*(arg1 + 0x252))
        
        if (result != 0)
            char r8_2 = (*(arg1 + 0x272)).b
            char r9_1 = (*(arg1 + 0x274)).b
            char r12_1 = (*(arg1 + 0x276)).b
            char* rcx_22 = *(arg1 + 0x248) + 2
            int64_t rbp_5 = 0
            
            do
                uint16_t rbx_15 = zx.w(*(*(arg1 + 0x2e8) + rbp_5))
                uint32_t rdx_31 = zx.d(rbx_15)
                
                if (rdx_31 != 0xff)
                    if (rbx_15.b != 0)
                        rbx_15.b = not.b(rbx_15.b)
                        uint32_t rdx_36 =
                            zx.d(zx.w(rbx_15.b) * zx.w(r8_2) + zx.w(rcx_22[-2]) * rdx_31.w + 0x80)
                        rcx_22[-2] = ((rdx_36 u>> 8).w + rdx_36.w):1.b
                        uint16_t rdi_6 = zx.w(*(*(arg1 + 0x2e8) + rbp_5))
                        uint32_t rdx_41 =
                            zx.d((rdi_6 ^ 0xff) * zx.w(r9_1) + zx.w(rcx_22[-1]) * rdi_6 + 0x80)
                        rcx_22[-1] = ((rdx_41 u>> 8).w + rdx_41.w):1.b
                        uint16_t rdi_10 = zx.w(*(*(arg1 + 0x2e8) + rbp_5))
                        uint32_t rdx_46 =
                            zx.d((rdi_10 ^ 0xff) * zx.w(r12_1) + zx.w(*rcx_22) * rdi_10 + 0x80)
                        *rcx_22 = ((rdx_46 u>> 8).w + rdx_46.w):1.b
                    else
                        rcx_22[-2] = r8_2
                        rcx_22[-1] = r9_1
                        *rcx_22 = r12_1
                
                rbp_5 += 1
                rcx_22 = &rcx_22[3]
            while (result != rbp_5)
            
            rcx_23 = *(arg1 + 0x15c)
        
        rcx_24 = rcx_23 & 0xfffbff7f
    label_1403c6a56:
        rcx_23 = rcx_24 | 0x40000
    label_1403c6a5c:
        *(arg1 + 0x15c) = rcx_23
    
    result.b = (rcx_23.b & 8) == 0
    r15.b ^= 1
    r15.b |= result.b
    
    if (r15.b == 0)
        int32_t rdx_47 = 8 - zx.d(*(arg1 + 0x2d8))
        int32_t rbp_6 = 8 - zx.d(*(arg1 + 0x2d9))
        int32_t r8_3 = 8 - zx.d(*(arg1 + 0x2da))
        
        if (rdx_47 s< 0)
            rdx_47 = 0
        
        uint64_t rcx_28 = zx.q(*(arg1 + 0x250))
        
        if (rbp_6 s< 0)
            rbp_6 = 0
        
        if (r8_3 s< 0)
            r8_3 = 0
        
        if (rcx_28 != 0)
            int64_t i_3 = 0
            
            do
                char* rsi_1 = *(arg1 + 0x248)
                rsi_1[i_3] = (zx.d(rsi_1[i_3]) u>> rdx_47.b).b
                int64_t rax_6 = *(arg1 + 0x248)
                *(rax_6 + i_3 + 1) = (zx.d(*(rax_6 + i_3 + 1)) u>> rbp_6.b).b
                result = *(arg1 + 0x248)
                *(result + i_3 + 2) = (zx.d(*(result + i_3 + 2)) u>> r8_3.b).b
                i_3 += 3
            while (rcx_28 * 3 != i_3)
else
    uint128_t zmm6
    uint128_t zmm7
    uint128_t zmm8
    float zmm9[0x4]
    uint128_t zmm10
    result = sub_1403c0460(arg1, zx.d(*(arg1 + 0x25f)), zmm6, zmm7, zmm8, zmm9, zmm10)
    int32_t rcx_19 = *(arg1 + 0x15c)
    
    if (rcx_19.b s< 0)
        if (r15.b != 0)
            void* r14_2 = *(arg1 + 0x248)
            uint64_t rsi_6 = zx.q(*(arg1 + 0x250))
            result.b = *(arg1 + 0x268)
            int32_t rbx_26 = 0x186a0
            char var_4e_1
            uint64_t rbx_27
            int32_t rdi_13
            char r10_1
            char r11_1
            uint64_t r12
            
            if (result.b == 1)
                rdi_13 = *(arg1 + 0x2a0)
            label_1403c6d83:
                int32_t rax_18 = sub_1403c0440(rbx_26)
                uint32_t rcx_50 = zx.d(*(arg1 + 0x272))
                char var_4d_1
                
                if (rax_18 == 0)
                    var_4d_1 = sub_1403c0330(zx.d(rcx_50.w), rbx_26)
                    rbp = zx.q(sub_1403c0330(zx.d(*(arg1 + 0x274)), rbx_26))
                    var_4e_1 = sub_1403c0330(zx.d(*(arg1 + 0x276)), rbx_26)
                    rcx_50 = zx.d(*(arg1 + 0x272))
                else
                    rbp.b = *(arg1 + 0x274)
                    rax_18.b = *(arg1 + 0x276)
                    var_4e_1 = rax_18.b
                    var_4d_1 = rcx_50.b
                
                r12 = zx.q(sub_1403c0330(zx.d(rcx_50.w), rdi_13))
                rbx_27 = zx.q(sub_1403c0330(zx.d(*(arg1 + 0x274)), rdi_13))
                result = sub_1403c0330(zx.d(*(arg1 + 0x276)), rdi_13)
                r10_1 = var_4d_1
                r11_1 = rbp.b
                
                if (rsi_6.w != 0)
                    goto label_1403c6e26
            else
                if (result.b == 3)
                    rdi_13 = sub_1403c0290(*(arg1 + 0x26c))
                    rbx_26 = sub_1403c02e0(*(arg1 + 0x26c), *(arg1 + 0x2a0))
                    goto label_1403c6d83
                
                rdi_13 = 0x186a0
                
                if (result.b != 2)
                    goto label_1403c6d83
                
                result = zx.q(*(arg1 + 0x272))
                int64_t rcx_34 = *(arg1 + 0x2a8)
                char* rdx_48 = *(arg1 + 0x2b8)
                r10_1 = *(rcx_34 + result)
                rbx_27 = zx.q(*(arg1 + 0x274))
                r11_1 = *(rcx_34 + rbx_27)
                uint64_t rdi_14 = zx.q(*(arg1 + 0x276))
                rcx_34.b = *(rcx_34 + rdi_14)
                var_4e_1 = rcx_34.b
                r12.b = rdx_48[result]
                rbx_27.b = rdx_48[rbx_27]
                result.b = rdx_48[rdi_14]
                
                if (rsi_6.w != 0)
                label_1403c6e26:
                    char* r14_3 = r14_2 + 2
                    int64_t rcx_57 = 0
                    
                    do
                        uint32_t rdi_16
                        
                        if (rcx_57 u< zx.q(*(arg1 + 0x252)))
                            rdi_16 = zx.d(*(*(arg1 + 0x2e8) + rcx_57))
                        
                        char rdx_77
                        
                        if (rcx_57 u>= zx.q(*(arg1 + 0x252)) || rdi_16 == 0xff)
                            r14_3[-2] = *(*(arg1 + 0x2a8) + zx.q(r14_3[-2]))
                            r14_3[-1] = *(*(arg1 + 0x2a8) + zx.q(r14_3[-1]))
                            rdx_77 = *(*(arg1 + 0x2a8) + zx.q(*r14_3))
                        else if (rdi_16.b != 0)
                            int16_t rdx_67 = zx.w(*(*(arg1 + 0x2b8) + zx.q(r14_3[-2]))) * rdi_16.w
                            rdi_16.b = not.b(rdi_16.b)
                            int16_t rbx_31 = zx.w(rdi_16.b) * zx.w(r12.b)
                            r14_3[-2] = *(*(arg1 + 0x2b0) + zx.q((zx.w((rbx_31 + rdx_67 + 0x80):1.b)
                                + rbx_31 + rdx_67 + 0x80):1.b))
                            uint16_t rbx_34 = zx.w(*(*(arg1 + 0x2e8) + rcx_57))
                            int16_t rbp_11 = zx.w(*(*(arg1 + 0x2b8) + zx.q(r14_3[-1]))) * rbx_34
                            int16_t rbx_36 = (rbx_34 ^ 0xff) * zx.w(rbx_27.b)
                            r14_3[-1] = *(*(arg1 + 0x2b0) + zx.q((zx.w((rbx_36 + rbp_11 + 0x80):1.b)
                                + rbx_36 + rbp_11 + 0x80):1.b))
                            uint16_t rbx_43 = zx.w(*(*(arg1 + 0x2e8) + rcx_57))
                            int16_t rbp_14 = zx.w(*(*(arg1 + 0x2b8) + zx.q(*r14_3))) * rbx_43
                            int16_t rbx_45 = (rbx_43 ^ 0xff) * zx.w(result.b)
                            rdx_77 = *(*(arg1 + 0x2b0) + zx.q((zx.w((rbx_45 + rbp_14 + 0x80):1.b)
                                + rbx_45 + rbp_14 + 0x80):1.b))
                        else
                            r14_3[-2] = r10_1
                            r14_3[-1] = r11_1
                            rdx_77 = var_4e_1
                        
                        *r14_3 = rdx_77
                        rcx_57 += 1
                        r14_3 = &r14_3[3]
                    while (rsi_6 != rcx_57)
            rcx_24 = 0xfffbdf7f & *(arg1 + 0x15c)
            goto label_1403c6a56
        
        result.b = *(arg1 + 0x268)
        int32_t rbx_28
        int32_t rdi_15
        
        if (result.b == 3)
            rbx_28 = sub_1403c0290(*(arg1 + 0x26c))
            rdi_15 = sub_1403c02e0(*(arg1 + 0x26c), *(arg1 + 0x2a0))
        else if (result.b == 2)
            rbx_28 = sub_1403c0290(*(arg1 + 0x29c))
            rdi_15 = sub_1403c02e0(*(arg1 + 0x29c), *(arg1 + 0x2a0))
        else
            if (result.b != 1)
                png_error(arg1, "invalid background gamma type")
                noreturn
            
            rbx_28 = *(arg1 + 0x2a0)
            rdi_15 = 0x186a0
        
        *(arg1 + 0x282) = sub_1403c0390(arg1, zx.d(*(arg1 + 0x278)), rbx_28)
        result = sub_1403c0390(arg1, zx.d(*(arg1 + 0x278)), rdi_15)
        *(arg1 + 0x278) = result.w
        int32_t rdx_52 = zx.d(*(arg1 + 0x272))
        
        if (rdx_52.w != *(arg1 + 0x274) || rdx_52.w != result.w || rdx_52.w != *(arg1 + 0x276))
            *(arg1 + 0x27c) = sub_1403c0390(arg1, rdx_52, rbx_28)
            *(arg1 + 0x27e) = sub_1403c0390(arg1, zx.d(*(arg1 + 0x274)), rbx_28)
            *(arg1 + 0x280) = sub_1403c0390(arg1, zx.d(*(arg1 + 0x276)), rbx_28)
            *(arg1 + 0x272) = sub_1403c0390(arg1, zx.d(*(arg1 + 0x272)), rdi_15)
            *(arg1 + 0x274) = sub_1403c0390(arg1, zx.d(*(arg1 + 0x274)), rdi_15)
            result = sub_1403c0390(arg1, zx.d(*(arg1 + 0x276)), rdi_15)
            *(arg1 + 0x276) = result.w
        else
            int16_t rcx_40 = *(arg1 + 0x282)
            *(arg1 + 0x280) = rcx_40
            *(arg1 + 0x27e) = rcx_40
            *(arg1 + 0x27c) = rcx_40
            *(arg1 + 0x276) = result.w
            *(arg1 + 0x274) = result.w
            *(arg1 + 0x272) = result.w
    else if (r15.b != 0)
        uint64_t rdx_27 = zx.q(*(arg1 + 0x250))
        
        if (rdx_27 != 0)
            result = *(arg1 + 0x248)
            int64_t i_4 = 0
            
            do
                *(result + i_4) = *(*(arg1 + 0x2a8) + zx.q(*(result + i_4)))
                *(result + i_4 + 1) = *(*(arg1 + 0x2a8) + zx.q(*(result + i_4 + 1)))
                *(result + i_4 + 2) = *(*(arg1 + 0x2a8) + zx.q(*(result + i_4 + 2)))
                i_4 += 3
            while (rdx_27 * 3 != i_4)
            
            rcx_19 = *(arg1 + 0x15c)
        
        rcx_23 = rcx_19 & 0xffffdfff
        goto label_1403c6a5c
__security_check_cookie(var_48 ^ &var_78)
return result
