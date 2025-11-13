// 函数: sub_142b01860
// 地址: 0x142b01860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* rsi = *(arg1 + 8)
int32_t r11 = 0
uint64_t result = *(arg1 + 0x30)
uint64_t r14 = arg2
void* r9 = *(arg1 + 0x20)
void* rdi = arg1
void* r13 = *(arg1 + 0x28)
uint64_t r12 = 0
uint64_t r8 = *(arg1 + 0x18)
int16_t* rbx = *(arg1 + 0x10)
uint64_t result_1 = result
void* r10 = *(rsi + 0x10)
uint32_t r15 = *(rsi + 0x54)
void* var_a8 = r10
void* var_88 = rsi
void* var_b0 = r9
void* var_a0 = r13
uint64_t var_78 = r8
uint32_t var_bc = 0
int32_t var_c4 = 0

if (r15 != 0 && r9 u< r13)
    goto label_142b01930

while (true)
    char result_3
    
    if (rbx u< r8)
        if (r9 u>= r13)
            *r14 = 0xf
            goto label_142b0236c
        
        r15 = zx.d(*rbx)
        rbx = &rbx[1]
        int16_t* var_98_1 = rbx
        result = zx.q(r15) & 0xfffff800
        
        if (result.d != 0xd800)
            goto label_142b0196c
        
        if (test_bit(r15, 0xa))
            *r14 = 0xc
            *(rsi + 0x54) = r15
        else
        label_142b01930:
            
            if (rbx u>= r8)
                *(rsi + 0x54) = r15
            else
                uint32_t rcx = zx.d(*rbx)
                result = zx.q(rcx) & 0xfffffc00
                
                if (result.d != 0xdc00)
                    *r14 = 0xc
                    *(rsi + 0x54) = r15
                else
                    *(rsi + 0x54) = 0
                    rbx = &rbx[1]
                    r15 = ((r15 - 0xd7f7) << 0xa) + rcx
                    var_98_1 = rbx
                label_142b0196c:
                    
                    if (r15 s< 0x20)
                        result = zx.q(1 << r15.b)
                    
                    if (r15 s< 0x20 && (result.d & 0x800c000) != 0)
                        *r14 = 0xc
                        *(rsi + 0x54) = r15
                    else
                        char var_58[0x10]
                        
                        if (r12.d == 0)
                            uint64_t rax_4 = zx.q(*(r10 + 0x6c))
                            int16_t r8_1 = *((rax_4 << 1) + &data_143665c28)
                            int32_t rdx = 0
                            
                            if (rax_4.d - 3 u<= 1)
                                var_58[0] = 8
                                rdx = 1
                            
                            int32_t rcx_2 = sx.d(*(r10 + 0x62))
                            r12 = zx.q(rdx + 1)
                            r8 = zx.q(*(r10 + 0x64))
                            int16_t rdx_3 = r8_1 & 0xfeff & (not.d(1 << (rcx_2 u% 0x20))).w
                            var_c4 = r12.d
                            var_58[zx.q(rdx)] = rcx_2.b
                            
                            if (r8.b != 0)
                                var_58[r12] = r8.b
                                r12 = zx.q(r12.d + 1)
                                var_c4 = r12.d
                                rdx_3 &= (not.d(1 << (sx.d(r8.b) u% 0x20))).w
                            
                            result = zx.q(r12.d)
                            
                            if ((rdx_3.b & 1) != 0)
                                var_58[r12] = 0
                                r12 = zx.q(r12.d + 1)
                                result += 1
                                var_c4 = r12.d
                                rdx_3 &= 0xfffe
                            
                            if ((rdx_3.b & 8) != 0)
                                r12 = zx.q(r12.d + 1)
                                var_58[result] = 3
                                result += 1
                                var_c4 = r12.d
                                rdx_3 &= 0xfff7
                            
                            if ((rdx_3.b & 2) != 0)
                                r12 = zx.q(r12.d + 1)
                                var_58[result] = 1
                                result += 1
                                var_c4 = r12.d
                                rdx_3 &= 0xfffd
                            
                            if ((rdx_3.b & 0x10) != 0)
                                r12 = zx.q(r12.d + 1)
                                var_58[result] = 4
                                result += 1
                                var_c4 = r12.d
                                rdx_3 &= 0xffef
                            
                            if ((rdx_3.b & 4) != 0)
                                r12 = zx.q(r12.d + 1)
                                var_58[result] = 2
                                result += 1
                                var_c4 = r12.d
                                rdx_3 &= 0xfffb
                            
                            if ((rdx_3.b & 0x20) != 0)
                                r12 = zx.q(r12.d + 1)
                                var_58[result] = 5
                                result += 1
                                var_c4 = r12.d
                                rdx_3 &= 0xffdf
                            
                            if ((rdx_3.b & 0x40) != 0)
                                r12 = zx.q(r12.d + 1)
                                var_58[result] = 6
                                result += 1
                                var_c4 = r12.d
                                rdx_3 &= 0xffbf
                            
                            if (rdx_3.b s< 0)
                                r12 = zx.q(r12.d + 1)
                                var_58[result] = 7
                                result += 1
                                var_c4 = r12.d
                                rdx_3 &= 0xff7f
                            
                            if ((0x100 & rdx_3) != 0)
                                r12 = zx.q(r12.d + 1)
                                var_58[result] = 8
                                var_c4 = r12.d
                        
                        char rsi_1 = *(rsi + 0x3f)
                        r8.b = 0
                        r13.b = 0
                        int32_t var_c8_1 = r8.d
                        int32_t i = 0
                        
                        if (r12.d s> 0)
                            int64_t r10_1 = sx.q(r15)
                            int32_t rax_9 = r15 & 0xf
                            int64_t r14_1 = 0
                            result = sx.q(r12.d)
                            uint64_t result_2 = result
                            
                            while (i s<= 0)
                                int64_t result_5 = sx.q(var_58[r14_1])
                                result = result_5
                                uint32_t var_c0
                                
                                if (result_5.d u> 8)
                                label_142b01ecc:
                                    result = sx.q(result_5.b)
                                    void* r9_3 = *(var_a8 + (result << 3))
                                    
                                    if (r15 s>= 0x10000 && (*(r9_3 + 0xfd) & 1) == 0)
                                        goto label_142b01f6c
                                    
                                    int64_t rdx_13 = *(r9_3 + 0x58)
                                    int32_t r8_5 = *(rdx_13 + (zx.q(
                                        zx.d(*(rdx_13 + (r10_1 s>> 0xa << 1))) + (r15 s>> 4 & 0x3f))
                                        << 2))
                                    uint32_t rdx_14 = zx.d(*
                                        (*(r9_3 + 0xe8) + (zx.q((zx.d(r8_5.w) << 4) + rax_9) << 1)))
                                    result = zx.q(rax_9 + 0x10)
                                    int32_t rcx_48
                                    rcx_48.b = rdx_14 u> 0xff
                                    int32_t i_2 = rcx_48 + 1
                                    
                                    if (not(test_bit(r8_5, result.d)))
                                        if (rsi_1 == 0)
                                            result = zx.q(r15 - 0xe000)
                                        
                                        if (rsi_1 == 0 && result.d u>= 0x1900)
                                            result = zx.q(r15 - 0xf0000)
                                            
                                            if (result.d u>= 0x20000 || rdx_14 == 0)
                                                goto label_142b01f68
                                            
                                            goto label_142b01f61
                                        
                                        if (rdx_14 != 0)
                                        label_142b01f61:
                                            var_c0 = rdx_14
                                            i_2 = neg.d(i_2)
                                            goto label_142b01f97
                                        
                                    label_142b01f68:
                                        r8 = zx.q(var_c8_1)
                                    label_142b01f6c:
                                        void* rcx_49 = *(r9_3 + 0x120)
                                        
                                        if (rcx_49 != 0)
                                            result = sub_142b6cc10(rcx_49, r15, &var_c0, rsi_1)
                                            rdx_14 = var_c0
                                            i_2 = result.d
                                            r11 = 0
                                            r10_1 = sx.q(r15)
                                            goto label_142b01f97
                                    else
                                        var_c0 = rdx_14
                                    label_142b01f97:
                                        
                                        if (i_2 == 2 || (i_2 == 0xfffffffe && i == 0))
                                            if (result_5.b == 7)
                                                result = zx.q(0x5e5f + rdx_14)
                                                
                                                if (result.w u> 0x5d5d)
                                                    rdx_14 = 0
                                                else
                                                    result = zx.q(rdx_14 + 0x5f)
                                                    
                                                    if (result.b u> 0x5d)
                                                        rdx_14 = 0
                                                    else
                                                        rdx_14 -= 0x8080
                                                
                                                var_c0 = rdx_14
                                            
                                            if (result_5.b != 7 || rdx_14 != 0)
                                                var_bc = rdx_14
                                                i = i_2
                                            label_142b01da6:
                                                r13.b = 0
                                                goto label_142b01da9
                                            
                                            r8 = zx.q(var_c8_1)
                                        else
                                            r8 = zx.q(var_c8_1)
                                else
                                    switch (result_5)
                                        case 0
                                            if (r15 s<= 0x7f)
                                                r8 = zx.q(result_5.b)
                                                var_bc = r15
                                                var_c8_1 = r8.d
                                                i = 1
                                                r13.b = 0
                                        case 1
                                            result = zx.q(r15 - 0xa0)
                                            
                                            if (result.d u<= 0x5f)
                                                r8 = zx.q(result_5.b)
                                                var_bc = r15 - 0x80
                                                i = 1
                                                var_c8_1 = r8.d
                                                r13.b = 2
                                        case 2
                                            result = sx.q(result_5.b)
                                            void* r8_4 = *(var_a8 + (result << 3))
                                            
                                            if (r15 s< 0x10000 || (*(r8_4 + 0xfd) & 1) != 0)
                                                int64_t rdx_11 = *(r8_4 + 0x58)
                                                uint32_t rcx_41 = zx.d(*(*(r8_4 + 0xe8) + (zx.q(zx
                                                    .d(*(rdx_11 + (zx.q(
                                                    zx.d(*(rdx_11 + (r10_1 s>> 0xa << 1)))
                                                    + (r15 s>> 4 & 0x3f)) << 1))) + rax_9) << 1)))
                                                uint32_t rdx_12 = zx.d(rcx_41.b)
                                                var_c0 = rdx_12
                                                int32_t i_1
                                                
                                                if (rcx_41 u< 0xf00)
                                                    bool cond:1_1
                                                    
                                                    if (rsi_1 == 0)
                                                        cond:1_1 = rcx_41 u>= 0xc00
                                                    else
                                                        cond:1_1 = rcx_41 u>= 0x800
                                                    
                                                    result.b = cond:1_1
                                                    
                                                    if (result.d == 0)
                                                        r8 = zx.q(var_c8_1)
                                                    else
                                                        i_1 = -1
                                                        
                                                        if (i == 0)
                                                            goto label_142b01ea9
                                                        
                                                        r8 = zx.q(var_c8_1)
                                                else
                                                    i_1 = 1
                                                label_142b01ea9:
                                                    result = zx.q(rdx_12 - 0xa0)
                                                    
                                                    if (result.d u> 0x5f)
                                                        r8 = zx.q(var_c8_1)
                                                    else
                                                        result = zx.q(rdx_12 - 0x80)
                                                        i = i_1
                                                        var_bc = result.d
                                                        r13.b = 2
                                                    label_142b01da9:
                                                        rsi_1 = 0
                                                        r8 = zx.q(result_5.b)
                                                        var_c8_1 = r8.d
                                            else
                                                r8 = zx.q(var_c8_1)
                                        case 3
                                            result = sub_142b04d90(r15)
                                            var_c0 = result.d
                                            
                                            if (result.d u<= 0x7f)
                                                r8 = zx.q(result_5.b)
                                                var_bc = result.d
                                                r13.b = 0
                                                var_c8_1 = r8.d
                                                rsi_1 = 0
                                                i = 1
                                        case 4
                                            result = sx.q(result_5.b)
                                            void* r10_2 = *(var_a8 + (result << 3))
                                            uint32_t rdx_9
                                            int32_t i_3
                                            
                                            if (r15 s< 0x10000 || (*(r10_2 + 0xfd) & 1) != 0)
                                                int64_t rdx_8 = *(r10_2 + 0x58)
                                                int32_t r8_2 = *(rdx_8 + (zx.q(
                                                    zx.d(*(rdx_8 + (sx.q(r15) s>> 0xa << 1)))
                                                    + (r15 s>> 4 & 0x3f)) << 2))
                                                rdx_9 = zx.d(*(*(r10_2 + 0xe8)
                                                    + (zx.q((zx.d(r8_2.w) << 4) + rax_9) << 1)))
                                                result = zx.q(rax_9 + 0x10)
                                                int32_t r9_1
                                                r9_1.b = rdx_9 u> 0xff
                                                i_3 = r9_1 + 1
                                                
                                                if (not(test_bit(r8_2, result.d)))
                                                    if (rsi_1 == 0)
                                                        result = zx.q(r15 - 0xe000)
                                                    
                                                    if (rsi_1 == 0 && result.d u>= 0x1900)
                                                        result = zx.q(r15 - 0xf0000)
                                                        
                                                        if (result.d u>= 0x20000 || rdx_9 == 0)
                                                            goto label_142b01cfe
                                                    else if (rdx_9 == 0)
                                                        goto label_142b01cfe
                                                    
                                                    var_c0 = rdx_9
                                                    i_3 = neg.d(i_3)
                                                else
                                                    var_c0 = rdx_9
                                                
                                            label_142b01d27:
                                                
                                                if (i_3 == 2)
                                                label_142b01d3b:
                                                    
                                                    if (rdx_9 u<= 0xeffc)
                                                        int32_t rcx_32 = rdx_9 & 0xff00
                                                        int32_t rcx_33
                                                        
                                                        if (rcx_32 u> 0x9f00)
                                                            rcx_33 = rcx_32 - 0xb000
                                                        else
                                                            rcx_33 = rcx_32 - 0x7000
                                                        
                                                        int32_t rcx_34 = rcx_33 * 2
                                                        uint32_t rax_17 = zx.d(rdx_9.b)
                                                        
                                                        if (rdx_9.b u> 0x9e)
                                                            result = zx.q(rax_17 - 0x7e)
                                                        else
                                                            rcx_34 -= 0x100
                                                            
                                                            if (rdx_9.b u> 0x7e)
                                                                result = zx.q(rax_17 - 0x20)
                                                            else
                                                                result = zx.q(rax_17 - 0x1f)
                                                        
                                                        uint32_t rcx_35 = rcx_34 | result.d
                                                        r10_1 = sx.q(r15)
                                                        var_c0 = rcx_35
                                                        
                                                        if (rcx_35 != 0)
                                                            var_bc = rcx_35
                                                            i = i_3
                                                            goto label_142b01da6
                                                        
                                                        r8 = zx.q(var_c8_1)
                                                    else
                                                        var_c0 = 0
                                                        r8 = zx.q(var_c8_1)
                                                        r10_1 = sx.q(r15)
                                                else
                                                    if (i_3 != 0xfffffffe)
                                                        goto label_142b01dcd
                                                    
                                                    if (i == 0)
                                                        goto label_142b01d3b
                                                    
                                                    r8 = zx.q(var_c8_1)
                                                    r10_1 = sx.q(r15)
                                            else
                                            label_142b01cfe:
                                                void* rcx_30 = *(r10_2 + 0x120)
                                                
                                                if (rcx_30 != 0)
                                                    result =
                                                        sub_142b6cc10(rcx_30, r15, &var_c0, rsi_1)
                                                    rdx_9 = var_c0
                                                    i_3 = result.d
                                                    r11 = 0
                                                    goto label_142b01d27
                                                
                                            label_142b01dcd:
                                                
                                                if (i != 0)
                                                    r8 = zx.q(var_c8_1)
                                                    r10_1 = sx.q(r15)
                                                else
                                                    r10_1 = sx.q(r15)
                                                    
                                                    if (rsi_1 != 0)
                                                        result = zx.q(r15 - 0xff61)
                                                    
                                                    if (rsi_1 == 0 || result.d u> 0x3e)
                                                        r8 = zx.q(var_c8_1)
                                                    else
                                                        result = zx.q(*((r10_1 << 1) + 0x143645b1e))
                                                        r8 = zx.q(result_5.b)
                                                        r13.b = 0
                                                        var_bc = result.d
                                                        var_c8_1 = r8.d
                                                        rsi_1 = 0
                                                        i = -2
                                        case 5, 6, 7
                                            goto label_142b01ecc
                                        case 8
                                            result = zx.q(r15 - 0xff61)
                                            
                                            if (result.d u<= 0x3e)
                                                result = zx.q(*(var_a8 + 0x6c))
                                                
                                                if (result.d == 3)
                                                    *(var_a8 + 0x63) = result_5.b
                                                    i = 1
                                                    var_bc = r15 - 0xff40
                                                    r13 = 1
                                                    r8 = zx.q(result_5.b)
                                                    var_c8_1 = r8.d
                                                else if (result.d == 4)
                                                    i = (result - 3).d
                                                    uint32_t rax_10 = zx.d(*(var_a8 + 0x62))
                                                    r8 = zx.q(rax_10)
                                                    var_bc = r15 - 0xfec0
                                                    result = 3
                                                    
                                                    if (rax_10.b - 4 u<= 3)
                                                        r8 = 3
                                                    
                                                    r13.b = 0
                                                    var_c8_1 = r8.d
                                r14_1 += 1
                                
                                if (r14_1 s>= result_2)
                                    break
                            
                            r12 = zx.q(var_c4)
                            r10 = var_a8
                            
                            if (i == 0)
                                r9 = var_b0
                                rbx = var_98_1
                                r14 = arg2
                            else
                                int32_t rdi_1 = 0
                                int32_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(i)
                                
                                if (*(r10 + 0x66) == 1 && r13.b == 0)
                                    result_3 = 0xf
                                    rdi_1 = 1
                                    *(r10 + 0x66) = r13.b
                                
                                void* r14_3 = sx.q(r13.b) + r10
                                
                                if (r8.b != *(r14_3 + 0x62))
                                    int64_t rax_32 = sx.q(r8.b)
                                    uint32_t count = sx.d(*(rax_32 + 0x143666738))
                                    memcpy(&(&result_3)[zx.q(rdi_1)], 
                                        &(&data_143665e88)[rax_32 * 3], count)
                                    rdi_1 += count
                                    r10 = var_a8
                                    r11 = 0
                                    r12 = 0
                                    var_c4 = 0
                                    *(r14_3 + 0x62) = var_c8_1.b
                                
                                if (r13.b != *(r10 + 0x66))
                                    int64_t rax_36 = sx.q(rdi_1)
                                    rdi_1 += 1
                                    
                                    if (r13.b == 1)
                                        (&result_3)[rax_36] = 0xe
                                        *(r10 + 0x66) = 1
                                    else
                                        (&result_3)[rax_36] = 0x1b
                                        int64_t rax_37 = sx.q(rdi_1)
                                        rdi_1 += 1
                                        (&result_3)[rax_37] = 0x4e
                                
                                int64_t rax_38 = sx.q(rdi_1)
                                
                                if ((temp1_1 ^ temp0_1) - temp0_1 != 1)
                                    rdi_1 += 1
                                    (&result_3)[rax_38] = (var_bc u>> 8).b
                                    rax_38 = sx.q(rdi_1)
                                
                                (&result_3)[rax_38] = var_bc.b
                                
                                if (r15 == 0xd || r15 == 0xa)
                                    *(r10 + 0x64) = 0
                                    r12 = 0
                                    var_c4 = 0
                                
                                void* r9_5 = var_b0
                                r13 = var_a0
                                
                                if (rdi_1 != 0)
                                    if (rdi_1 == 1 && r9_5 + 2 u<= r13)
                                        rbx = var_98_1
                                        rsi = var_88
                                        rdi = arg1
                                        r14 = arg2
                                        r8 = var_78
                                        *r9_5 = result_3
                                        char result_4
                                        result = zx.q(result_4)
                                        *(r9_5 + 1) = result.b
                                        r9 = r9_5 + 2
                                        uint64_t result_7 = result_1
                                        var_b0 = r9
                                        
                                        if (result_7 == 0)
                                            continue
                                        else
                                            int32_t rax_44
                                            rax_44.b = r15 u> 0xffff
                                            int32_t rcx_56 =
                                                ((rbx - *(rdi + 0x10)) s>> 1).d - (rax_44 + 1)
                                            *result_7 = rcx_56
                                            result = result_1 + 4
                                            result_1 = result
                                            *result = rcx_56
                                            result_1 += 4
                                            continue
                                    
                                    rdi = arg1
                                    rbx = var_98_1
                                    r14 = arg2
                                    rsi = var_88
                                    int32_t rcx_59 = ((rbx - *(rdi + 0x10)) s>> 1).d
                                    var_b0 = r9_5
                                    int32_t rax_47
                                    rax_47.b = r15 u> 0xffff
                                    result = sub_142b6b510(rsi, &result_3, rdi_1 + 1, &var_b0, r13, 
                                        &result_1, rcx_59 - (rax_47 + 1), r14)
                                    bool cond:3_1 = *r14 s> 0
                                    r9 = var_b0
                                    var_b0 = r9
                                    
                                    if (cond:3_1)
                                        break
                                    
                                    r10 = var_a8
                                    r11 = 0
                                    r8 = var_78
                                    continue
                                else
                                    result = zx.q(result_3)
                                    rbx = var_98_1
                                    rsi = var_88
                                    rdi = arg1
                                    r14 = arg2
                                    r8 = var_78
                                    *r9_5 = result.b
                                    r9 = r9_5 + 1
                                    uint64_t result_6 = result_1
                                    var_b0 = r9
                                    
                                    if (result_6 == 0)
                                        continue
                                    else
                                        result = zx.q(((rbx - *(rdi + 0x10)) s>> 1).d - 1)
                                        *result_6 = result.d
                                        result_1 += 4
                                        continue
                        
                        rsi = var_88
                        rdi = arg1
                        r13 = var_a0
                        r8 = var_78
                        *r14 = 0xa
                        *(rsi + 0x54) = r15
    
    if (*r14 s<= 0)
        result = zx.q(*(r10 + 0x66))
        
        if ((result.b != 0 || *(r10 + 0x62) != result.b) && *(rdi + 2) != 0 && rbx u>= r8
                && *(rsi + 0x54) == 0)
            if (result.b != 0)
                result_3 = 0xf
                r11 = 1
                *(r10 + 0x66) = 0
            
            if (*(r10 + 0x62) != 0)
                void* rcx_62 = &(&result_3)[zx.q(r11)]
                r11 += 3
                *rcx_62 = 0x281b
                *(rcx_62 + 2) = 0x42
                *(r10 + 0x62) = 0
            
            int64_t r8_9 = *(rdi + 0x10)
            int32_t rdx_23 = ((rbx - r8_9) s>> 1).d
            int32_t rdx_24
            
            if (rdx_23 s<= 0)
                rdx_24 = -1
            else
                rdx_24 = rdx_23 - 1
                
                if ((zx.d(*(r8_9 + (sx.q(rdx_24) << 1))) & 0xfffffc00) == 0xdc00 && (rdx_24 == 0
                        || (zx.d(*(r8_9 + (sx.q(rdx_24 - 1) << 1))) & 0xfffffc00) == 0xd800))
                    rdx_24 -= 1
            
            var_a0 = r9
            result = sub_142b6b510(rsi, &result_3, r11, &var_a0, r13, &result_1, rdx_24, r14)
            r9 = var_a0
    
label_142b0236c:
    *(rdi + 0x10) = rbx
    *(rdi + 0x20) = r9
    __security_check_cookie(rax_1 ^ &var_108)
    return result

goto label_142b0236c
