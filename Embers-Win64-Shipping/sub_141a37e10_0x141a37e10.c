// 函数: sub_141a37e10
// 地址: 0x141a37e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3
char* r12 = arg2
int128_t* rbx = arg1
int128_t* r9_3

if (arg4.d == 0xffffffff)
    r9_3 = rbx
else
    r9_3 = ((sx.q(*(rbx[2].q + sx.q(arg4.d) * 0xc)) + sx.q((arg4 u>> 0x20).d)) << 5) + rbx[3].q

int96_t zmm1 = (r9_3[1]).12
uint128_t var_c0 = *r9_3
uint64_t result = sub_141a5adc0(&var_c0, arg2)

if (result.b != 0)
    char r11_1 = *r12
    result = var_c0.q
    uint64_t rsi_1 = var_c0:8.q
    
    if (r11_1 == 2)
    label_141a37ef0:
        char r8 = r12[8]
        void* rdx_1 = &r12[8]
        
        if (r8 == 2)
        label_141a38586:
            
            if (arg4.d != 0xffffffff)
                rbx = ((sx.q(*(rbx[2].q + sx.q(arg4.d) * 0xc)) + sx.q((arg4 u>> 0x20).d)) << 5)
                    + rbx[3].q
            
            return (*(*rdi + 8))(rdi, rbx)
        
        char rcx_6
        
        if (rsi_1.b != 2)
            uint32_t rcx_8 = (rsi_1 u>> 0x20).d
            int32_t temp1_1 = *(rdx_1 + 4)
            
            if (temp1_1 s<= rcx_8)
                if (temp1_1 s< rcx_8 || r8 != 1)
                    rcx_6 = rsi_1.b
                    goto label_141a37f2f
                
                if (*(rdx_1 + 4) == *(r12 + 0xc))
                    goto label_141a38586
            else
                rcx_6 = r8
            label_141a37f38:
                
                if (rcx_6 == 2 || *(rdx_1 + 4) == *(r12 + 0xc))
                    goto label_141a38586
        else
            rcx_6 = rsi_1.b
        label_141a37f2f:
            rdx_1 = &var_c0:8
            
            if (rcx_6 == r8)
                goto label_141a37f38
    else
        char rcx_2
        int128_t* rdx
        
        if (result.b != 2)
            uint32_t rcx_4 = (result u>> 0x20).d
            int32_t temp0_1 = *(r12 + 4)
            
            if (temp0_1 s>= rcx_4)
                if (temp0_1 s> rcx_4 || r11_1 != 1)
                    rcx_2 = result.b
                    goto label_141a37ed7
                
                if (*(r12 + 4) == *(r12 + 4))
                    goto label_141a37ef0
            else
                rdx = r12
                rcx_2 = r11_1
            label_141a37ee1:
                
                if (rcx_2 == 2 || *(rdx + 4) == *(r12 + 4))
                    goto label_141a37ef0
        else
            rcx_2 = result.b
        label_141a37ed7:
            rdx = &var_c0
            
            if (rcx_2 == r11_1)
                goto label_141a37ee1
    
    int64_t r15_1 = sx.q(zmm1:8.d)
    uint64_t result_1
    uint64_t var_f0
    uint128_t var_d8
    uint32_t i_1
    int32_t arg_24
    
    if (r15_1.d == 0xffffffff)
        int32_t rcx_10 = (var_c0:0xc.q).d
        int32_t r8_1 = (var_c0:4.q).d
        uint64_t rax_7
        
        if (result.b == 2 || rsi_1.b == 2
                || (r8_1 s<= rcx_10 && (r8_1 != rcx_10 || (result.b != 0 && rsi_1.b != 0))))
            if (r11_1 != 2)
                char rdx_2 = r12[8]
                
                if (rdx_2 != 2)
                    int32_t r9_4 = *(r12 + 4)
                    int32_t temp2_1 = *(r12 + 0xc)
                    
                    if (r9_4 s> temp2_1 || (r9_4 == temp2_1 && (r11_1 == 0 || rdx_2 == 0)))
                        goto label_141a37f8f
            
            void* rdx_3 = &r12[8]
            
            if (rsi_1.b != 2)
                if (*rdx_3 != 2)
                    int32_t temp3_1 = *(rdx_3 + 4)
                    
                    if (rcx_10 s< temp3_1)
                        rdx_3 = &var_c0:8
                    else if (rcx_10 s<= temp3_1)
                        void* rcx_11 = &var_c0:8
                        
                        if (rsi_1.b != 0)
                            rcx_11 = rdx_3
                        
                        rdx_3 = rcx_11
                else
                    rdx_3 = &var_c0:8
            
            if (result.b != 2)
                int32_t temp5_1
                
                if (r11_1 != 2)
                    temp5_1 = *(r12 + 4)
                
                if (r11_1 == 2 || r8_1 s> temp5_1)
                    r12 = &var_c0
                else if (r8_1 s>= temp5_1)
                    char* rcx_12 = &var_c0
                    
                    if (result.b != 0)
                        rcx_12 = r12
                    
                    r12 = rcx_12
            
            result_1 = *r12
            rax_7 = *rdx_3
        else
        label_141a37f8f:
            int32_t var_104_1 = 0
            i_1.b = 0
            arg_24 = 0
            result_1 = i_1.q
            rax_7 = 0.q
        
        var_f0 = rax_7
        var_d8 = result_1.o
        return sub_141a55640(rbx, &var_d8, rdi, 0, arg4)
    
    int64_t rcx_14 = rbx[2].q
    uint64_t r9_6 = r15_1 * 0xc
    uint32_t i = 0
    i_1 = 0
    uint64_t var_48_1 = r9_6
    uint128_t var_78
    
    if (*(rcx_14 + r9_6 + 4) s> 0)
        do
            uint128_t var_68_1 = *(((sx.q(*(r9_6 + rcx_14)) + sx.q(i)) << 5) + arg1[3].q)
            uint64_t rdi_1 = var_68_1.q
            uint64_t result_2 = var_68_1:8.q
            int64_t var_118
            uint32_t var_104_2
            uint64_t rcx_15
            int32_t r10_1
            
            if (rdi_1.b == 2)
                r10_1 = var_68_1:0xc.d
            label_141a382c4:
                
                if (r11_1 == 2)
                label_141a38301:
                    
                    if (result_2.b == 2 || r11_1 == 2)
                        result.b = 1
                    else
                        result.b = 0
                    
                    if (rdi_1.b == 2 || r12[8] == 2)
                        r9_6.b = 1
                    else
                        r9_6.b = 0
                    
                    i.b = 1
                    bool rdx_20 = true
                    
                    if (result.b == 0)
                        int32_t rax_10 = *(r12 + 4)
                        i.b = r10_1 s> rax_10
                        rax_10.b = r10_1 s>= rax_10
                        
                        if (result_2.b != 1 || r11_1 != 1)
                            rcx_15.b = 0
                        else
                            rcx_15 = 1
                        
                        i = zx.d(i.b)
                        
                        if (rcx_15.b != 0)
                            i = zx.d(rax_10.b)
                    
                    if (r9_6.b == 0)
                        int32_t rax_12 = *(r12 + 0xc)
                        uint32_t rcx_23 = var_68_1:4.d
                        rdx_20 = rcx_23 s< rax_12
                        rax_12.b = rcx_23 s<= rax_12
                        
                        if (rdi_1.b != 1 || r12[8] != rdi_1.b)
                            rcx_23.b = 0
                        else
                            rcx_23 = zx.d(rdi_1.b)
                        
                        if (rcx_23.b != 0)
                            rdx_20 = rax_12.b
                    
                    if (i.b != 0 && rdx_20 != 0)
                        uint32_t i_2 = i_1
                        char var_e8
                        var_e8.d = r15_1.d
                        var_78 = *r12
                        sub_141a37e10(arg1, &var_78, arg3, var_e8.q, var_118)
                    
                    goto label_141a383bb
                
                char rdx_19 = r12[8]
                
                if (rdx_19 == 2)
                    goto label_141a38301
                
                result = zx.q(*(r12 + 4))
                rcx_15 = zx.q(*(r12 + 0xc))
                
                if (result.d s<= rcx_15.d && (result.d != rcx_15.d || (r11_1 != 0 && rdx_19 != 0)))
                    goto label_141a38301
                
            label_141a383bb:
                
                if (result_2.b == 0)
                    var_104_2 = (result_2 u>> 0x20).d
                    result = 1.q
                else if (result_2.b != 1)
                    char var_108
                    var_108.q = result_2
                    result = result_2
                else
                    uint32_t var_104_3 = (result_2 u>> 0x20).d
                    result = 0.q
            else
                uint64_t rcx_16 = rdi_1
                
                if (rdi_1.b == 0)
                    uint32_t var_c4_1 = (rcx_16 u>> 0x20).d
                    rcx_16 = 1.q
                else
                    char var_c8
                    
                    if (rdi_1.b != 1)
                        var_c8.q = rdi_1
                    else
                        uint32_t var_c4_2 = (rcx_16 u>> 0x20).d
                        rcx_16 = 0.q
                
                result_1 = result
                var_f0 = rcx_16
                uint32_t rdx_11
                uint32_t r8_4
                
                if (result.b != 2 && rcx_16.b != 2)
                    rdx_11 = (result u>> 0x20).d
                    r8_4 = (rcx_16 u>> 0x20).d
                
                if (result.b != 2 && rcx_16.b != 2 &&
                        (rdx_11 s> r8_4 || (rdx_11 == r8_4 && (result.b == 0 || rcx_16.b == 0))))
                    int32_t var_94_1 = 0
                    rcx_15 = 0.q
                    int32_t var_9c_1 = 0
                    result = 0.q
                else if (r11_1 == 2)
                label_141a381bb:
                    uint64_t* rdx_13
                    
                    if (rcx_16.b == 2)
                        rdx_13 = &r12[8]
                    else if (r12[8] != 2)
                        uint32_t rdx_15 = (rcx_16 u>> 0x20).d
                        int32_t temp9_1 = *(r12 + 0xc)
                        
                        if (rdx_15 s< temp9_1)
                            rdx_13 = &var_f0
                        else if (rdx_15 s<= temp9_1)
                            rdx_13 = &var_f0
                            
                            if (rcx_16.b != 0)
                                rdx_13 = &r12[8]
                        else
                            rdx_13 = &r12[8]
                    else
                        rdx_13 = &var_f0
                    
                    char* rcx_19
                    
                    if (result.b == 2)
                        rcx_19 = r12
                    else if (r11_1 != 2)
                        uint32_t rcx_21 = (result u>> 0x20).d
                        int32_t temp10_1 = *(r12 + 4)
                        
                        if (rcx_21 s> temp10_1)
                            rcx_19 = &result_1
                        else if (rcx_21 s>= temp10_1)
                            rcx_19 = &result_1
                            
                            if (result.b != 0)
                                rcx_19 = r12
                        else
                            rcx_19 = r12
                    else
                        rcx_19 = &result_1
                    
                    result = *rcx_19
                    rcx_15 = *rdx_13
                else
                    r9_6 = zx.q(r12[8])
                    
                    if (r9_6.b == 2)
                        goto label_141a381bb
                    
                    int32_t rdx_12 = *(r12 + 4)
                    int32_t temp8_1 = *(r12 + 0xc)
                    
                    if (rdx_12 s<= temp8_1 && (rdx_12 != temp8_1 || (r11_1 != 0 && r9_6.b != 0)))
                        goto label_141a381bb
                    
                    int32_t var_84_1 = 0
                    rcx_15 = 0.q
                    int32_t var_8c_1 = 0
                    result = 0.q
                
                var_d8.q = result
                var_d8:8.q = rcx_15
                
                if (result.b == 2 || rcx_15.b == 2)
                label_141a3827f:
                    var_78 = var_d8
                    var_118 = arg4
                    result, rcx_15, i, r9_6 = sub_141a55640(arg1, &var_78, arg3, i_1, var_118)
                    i_1 += 1
                    r11_1 = *r12
                else
                    uint32_t rdx_17 = (result u>> 0x20).d
                    i = (rcx_15 u>> 0x20).d
                    
                    if (rdx_17 s<= i)
                        if (rdx_17 != i)
                            goto label_141a3827f
                        
                        if (result.b != 0 && rcx_15.b != 0)
                            goto label_141a3827f
                
                r10_1 = var_68_1:0xc.d
                
                if (result_2.b == 2)
                    goto label_141a382c4
                
                rcx_15 = zx.q(var_68_1:4.d)
                
                if (rcx_15.d s> r10_1)
                    goto label_141a383bb
                
                if (rcx_15.d != r10_1)
                    goto label_141a382c4
                
                if (rdi_1.b == 0)
                    goto label_141a383bb
                
                if (result_2.b != 0)
                    goto label_141a382c4
                
                var_104_2 = (result_2 u>> 0x20).d
                result = 1.q
            rcx_14 = arg1[2].q
            i = i_1 + 1
            r9_6 = var_48_1
            r11_1 = *r12
            i_1 = i
        while (i s< *(r9_6 + rcx_14 + 4))
        
        rsi_1 = var_c0:8.q
        rbx = arg1
        rdi = arg3
    
    if (result.b != 2)
        result_1 = result
        var_f0 = rsi_1
        uint32_t rcx_26
        uint32_t rdx_23
        
        if (rsi_1.b != 2)
            rcx_26 = (result u>> 0x20).d
            rdx_23 = (rsi_1 u>> 0x20).d
        
        int64_t rcx_27
        
        if (rsi_1.b != 2
            && (rcx_26 s> rdx_23 || (rcx_26 == rdx_23 && (result.b == 0 || rsi_1.b == 0))))
        label_141a3846b:
            int32_t var_e4_1 = 0
            result = 0.q
            i_1.b = 0
            arg_24 = 0
            rcx_27 = i_1.q
        else
            if (r11_1 != 2)
                char rcx_28 = r12[8]
                
                if (rcx_28 != 2)
                    int32_t rdx_24 = *(r12 + 4)
                    int32_t temp4_1 = *(r12 + 0xc)
                    
                    if (rdx_24 s> temp4_1 || (rdx_24 == temp4_1 && (r11_1 == 0 || rcx_28 == 0)))
                        goto label_141a3846b
            
            uint64_t* rdx_25 = &r12[8]
            
            if (rsi_1.b != 2)
                if (*rdx_25 != 2)
                    uint32_t rcx_30 = (rsi_1 u>> 0x20).d
                    int32_t temp7_1 = *(rdx_25 + 4)
                    
                    if (rcx_30 s< temp7_1)
                        rdx_25 = &var_f0
                    else if (rcx_30 s<= temp7_1)
                        uint64_t* rcx_31 = &var_f0
                        
                        if (rsi_1.b != 0)
                            rcx_31 = rdx_25
                        
                        rdx_25 = rcx_31
                else
                    rdx_25 = &var_f0
            
            if (r11_1 != 2)
                uint32_t rcx_33 = (result u>> 0x20).d
                int32_t temp6_1 = *(r12 + 4)
                
                if (rcx_33 s> temp6_1)
                    r12 = &result_1
                else if (rcx_33 s>= temp6_1)
                    char* rcx_34 = &result_1
                    
                    if (result.b != 0)
                        rcx_34 = r12
                    
                    r12 = rcx_34
            else
                r12 = &result_1
            
            rcx_27 = *r12
            result = *rdx_25
        
        var_d8.q = rcx_27
        var_d8:8.q = result
        
        if (rcx_27.b == 2 || result.b == 2)
        label_141a3855e:
            int64_t rax_15 = rbx[2].q
            var_78 = var_d8
            return sub_141a55640(rbx, &var_78, rdi, *(r9_6 + rax_15 + 4), arg4)
        
        uint32_t rdx_27 = (rcx_27 u>> 0x20).d
        uint32_t r8_10 = (result u>> 0x20).d
        
        if (rdx_27 s<= r8_10)
            if (rdx_27 != r8_10)
                goto label_141a3855e
            
            if (rcx_27.b != 0 && result.b != 0)
                goto label_141a3855e

return result
