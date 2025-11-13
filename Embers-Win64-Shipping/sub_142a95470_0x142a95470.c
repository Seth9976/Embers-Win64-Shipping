// 函数: sub_142a95470
// 地址: 0x142a95470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = &__return_addr
int64_t rsi = arg5
int32_t rbp = arg2

if (rsi != 0)
    uint64_t (* r14_1)(int64_t, int32_t arg2) = sub_140bd26d0
    
    if (arg4 != 0)
        r14_1 = arg4
    
    void* rax = arg1[9]
    uint64_t (* var_60_1)(int64_t, int32_t arg2) = r14_1
    uint32_t var_80_1
    uint32_t rax_2
    int64_t rdi_1
    int64_t r15_1
    
    if (rax != 0)
        r15_1 = 0
        rdi_1 = *(rax + 0x23300)
        rax_2 = *(rax + 0x23324)
        var_80_1 = *(rax + 0x23320)
    else
        r15_1 = *arg1
        rdi_1 = arg1[2]
        var_80_1 = zx.d(arg1[4].w)
        rax_2 = zx.d(*(arg1 + 0x22))
    
    int32_t rax_3 = *(arg1 + 0x2c)
    int64_t var_78_1 = rdi_1
    int64_t var_90_1 = r15_1
    int32_t rax_4 = r14_1(arg6, zx.q(*(arg1 + 0x24)))
    int32_t r8 = arg3
    int32_t r10_1 = rax_4
    int32_t r12_1 = 0
    int32_t rbx_1 = rbp
    int32_t var_84_1 = 0xffffffff
    uint32_t r11_1 = -1
    uint64_t var_68
    int16_t* var_58
    uint64_t var_50
    int64_t var_48
    
    if (rbp s< r8)
        int64_t* r14_2 = arg1
        uint32_t r15_2 = rax_2
        
        while (rbx_1 s< rax_3)
            int32_t rdx_2 = rbx_1 + 0x800
            
            if (r8 s< rbx_1 + 0x800)
                rdx_2 = r8
            
            int32_t rcx_2
            int64_t r9
            
            if (rbx_1 s<= 0xffff)
                if ((rbx_1 & 0xfffff800) == 0xd800)
                    rdx_2 = r8
                    
                    if (test_bit(rbx_1, 0xa))
                        rcx_2 = 0x6c0
                        
                        if (r8 s> 0xe000)
                            rdx_2 = 0xe000
                    else
                        rcx_2 = 0x800
                        
                        if (r8 s> 0xdc00)
                            rdx_2 = 0xdc00
                else
                    rcx_2 = rbx_1 s>> 5
                
                r9 = var_90_1
                goto label_142a9559d
            
            r9 = var_90_1
            
            if (r9 == 0)
                rcx_2 = *(r14_2[9] + (sx.q(rbx_1) s>> 0xb << 2))
            else
                rcx_2 = zx.d(*(r9 + (sx.q((rbx_1 s>> 0xb) + 0x820) << 1)))
            
            if (rcx_2 != var_84_1 || rbx_1 - rbp s< 0x800)
            label_142a9559d:
                var_84_1 = rcx_2
                
                if (rcx_2 != var_80_1)
                    uint64_t r8_4 = zx.q(rbx_1 s>> 5) & 0x3f
                    int32_t rdx_5
                    
                    if (((rdx_2 ^ rbx_1) & 0xfffff800) != 0)
                        rdx_5 = 0x40
                    else
                        rdx_5 = rdx_2 s>> 5 & 0x3f
                    
                    uint64_t rax_16 = zx.q(rdx_5)
                    var_68 = r8_4
                    var_50 = rax_16
                    
                    if (r8_4 u< rax_16)
                        int64_t rcx_6 = sx.q(rcx_2)
                        var_48 = rcx_6
                        int16_t* rax_18 = r9 + ((r8_4 + rcx_6) << 1)
                        var_58 = rax_18
                        
                        do
                            uint32_t rcx_8
                            
                            if (r9 == 0)
                                rcx_8 = *(arg1[9] + ((rcx_6 + r8_4) << 2) + 0x880)
                            else
                                rcx_8 = zx.d(*rax_18) << 2
                            
                            if (rcx_8 != r11_1 || rbx_1 - rbp s< 0x20)
                                r11_1 = rcx_8
                                
                                if (rcx_8 != rax_2)
                                    int64_t rax_23 = sx.q(rcx_8)
                                    int64_t i = 0
                                    int64_t rcx_11 = var_78_1
                                    int16_t* rsi_1 = r9 + (rax_23 << 1)
                                    int32_t* r14_3 = rcx_11 + (rax_23 << 2)
                                    
                                    do
                                        uint64_t rdx_7
                                        
                                        if (rcx_11 == 0)
                                            rdx_7 = zx.q(*rsi_1)
                                        else
                                            rdx_7 = zx.q(*r14_3)
                                        
                                        int32_t rax_24 = var_60_1(arg6, rdx_7)
                                        
                                        if (rax_24 != r12_1)
                                            if (rbp s< rbx_1)
                                                result = arg5(arg6, zx.q(rbp), zx.q(rbx_1 - 1), 
                                                    zx.q(r12_1), rax_2, var_90_1, rax_4, var_80_1, 
                                                    var_78_1, rax_3, var_68)
                                                
                                                if (result == 0)
                                                    return result
                                            
                                            rbp = rbx_1
                                            r12_1 = rax_24
                                        
                                        rcx_11 = var_78_1
                                        rbx_1 += 1
                                        i += 1
                                        r14_3 = &r14_3[1]
                                        rsi_1 = &rsi_1[1]
                                    while (i s< 0x20)
                                    
                                    r8_4 = var_68
                                    rsi = arg5
                                    r10_1 = rax_4
                                    r11_1 = rcx_8
                                else
                                    if (r12_1 != r10_1)
                                        if (rbp s< rbx_1)
                                            result = rsi(arg6, zx.q(rbp), zx.q(rbx_1 - 1), 
                                                zx.q(r12_1), rax_2, var_90_1, rax_4, var_80_1, 
                                                var_78_1, rax_3, var_68, var_60_1, var_58, var_50, 
                                                var_48)
                                            
                                            if (result == 0)
                                                return result
                                            
                                            r8_4 = var_68
                                            r10_1 = rax_4
                                            r11_1 = rcx_8
                                        
                                        rbp = rbx_1
                                        r12_1 = r10_1
                                    
                                    rbx_1 += 0x20
                            else
                                rbx_1 += 0x20
                            
                            r8_4 += 1
                            r9 = var_90_1
                            rax_18 = &var_58[1]
                            rcx_6 = var_48
                            var_68 = r8_4
                            var_58 = rax_18
                        while (r8_4 s< var_50)
                        
                        r14_2 = arg1
                        r15_2 = rax_2
                    
                    r8 = arg3
                else
                    if (r12_1 != r10_1)
                        if (rbp s< rbx_1)
                            result = rsi(arg6, zx.q(rbp), zx.q(rbx_1 - 1), zx.q(r12_1), rax_2, 
                                var_90_1, rax_4, var_80_1, var_78_1, rax_3, var_68, var_60_1, 
                                var_58, var_50, var_48)
                            
                            if (result == 0)
                                return result
                            
                            r10_1 = rax_4
                            r8 = arg3
                        
                        r11_1 = r15_2
                        rbp = rbx_1
                        r12_1 = r10_1
                    
                    rbx_1 += 0x800
            else
                rbx_1 += 0x800
            
            if (rbx_1 s>= r8)
                break
        
        r15_1 = var_90_1
        r14_1 = var_60_1
        rdi_1 = var_78_1
    
    if (rbx_1 s> r8)
        return rsi(arg6, zx.q(rbp), zx.q(r8 - 1), zx.q(r12_1), rax_2, var_90_1, rax_4, var_80_1, 
            var_78_1, rax_3, var_68, var_60_1, var_58, var_50, var_48)
    
    if (rbx_1 s>= r8)
        return rsi(arg6, zx.q(rbp), zx.q(rbx_1 - 1), zx.q(r12_1), rax_2, var_90_1, rax_4, var_80_1, 
            var_78_1, rax_3, var_68, var_60_1, var_58, var_50, var_48)
    
    uint64_t rdx_9
    
    if (r15_1 == 0)
        void* rdx_10 = arg1[9]
        rdx_9 = zx.q(*(*(rdx_10 + 0x23300) + (sx.q(*(rdx_10 + 0x23318) - 4) << 2)))
    else
        int64_t rax_27 = sx.q(arg1[6].d)
        
        if (rdi_1 == 0)
            rdx_9 = zx.q(*(r15_1 + (rax_27 << 1)))
        else
            rdx_9 = zx.q(*(rdi_1 + (rax_27 << 2)))
    
    int32_t rax_31 = r14_1(arg6, rdx_9)
    
    if (rax_31 == r12_1)
        return rsi(arg6, zx.q(rbp), zx.q(arg3 - 1), zx.q(r12_1), rax_2, var_90_1, rax_4, var_80_1, 
            var_78_1, rax_3, var_68, var_60_1, var_58, var_50, var_48)
    
    if (rbp s< rbx_1)
        result = rsi(arg6, zx.q(rbp), zx.q(rbx_1 - 1), zx.q(r12_1), rax_2, var_90_1, rax_4, 
            var_80_1, var_78_1, rax_3, var_68, var_60_1, var_58, var_50, var_48)
    
    if (rbp s>= rbx_1 || result != 0)
        return rsi(arg6, zx.q(rbx_1), zx.q(arg3 - 1), zx.q(rax_31), rax_2, var_90_1, rax_4, 
            var_80_1, var_78_1, rax_3, var_68, var_60_1, var_58, var_50, var_48)

return result
