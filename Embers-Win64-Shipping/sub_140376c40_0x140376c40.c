// 函数: sub_140376c40
// 地址: 0x140376c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int128_t var_68
__builtin_memset(&var_68, 0, 0x20)
int128_t var_58
int32_t i_2
uint64_t rdi_6
int32_t i_3
int16_t r13_1

if (arg3 == 0)
    i_3 = *arg5
    
    if (var_58:0xc.w != 0)
    label_140376d4c:
        i_2 = 0xe
    label_140376e3f:
        r13_1 = 0
    label_140376e45:
        
        if (i_3 u> i_2)
            i_3 = i_2
        
        rdi_6 = 1
        
        while (*(&var_68 + (rdi_6 << 1)) == 0)
            rdi_6 += 1
            
            if (rdi_6.d u>= i_2)
                break
        
        goto label_140376e66
else
    uint64_t rax_2 = zx.q(arg3)
    uint64_t rbp_2 = zx.q(rax_2.d) & 3
    int64_t i
    
    if (rax_2 - 1 u>= 3)
        i = 0
        
        do
            uint64_t rdi_1 = zx.q(*(arg2 + (i << 1)))
            *(&var_68 + (rdi_1 << 1)) += 1
            uint64_t rdi_2 = zx.q(*(arg2 + (i << 1) + 2))
            *(&var_68 + (rdi_2 << 1)) += 1
            uint64_t rdi_3 = zx.q(*(arg2 + (i << 1) + 4))
            *(&var_68 + (rdi_3 << 1)) += 1
            uint64_t rdi_4 = zx.q(*(arg2 + (i << 1) + 6))
            *(&var_68 + (rdi_4 << 1)) += 1
            i += 4
        while (rax_2 - rbp_2 != i)
        
        if (rbp_2 != 0)
            goto label_140376d09
    else
        i = 0
        
        if (rbp_2 != 0)
        label_140376d09:
            int64_t rbx_2 = 0
            
            do
                uint64_t rdi_5 = zx.q(*(arg2 + (i << 1) + (rbx_2 << 1)))
                *(&var_68 + (rdi_5 << 1)) += 1
                rbx_2 += 1
            while (rbp_2 != rbx_2)
    r13_1 = var_58:0xe.w
    i_3 = *arg5
    i_2 = 0xf
    
    if (r13_1 != 0)
        goto label_140376e45
    
    if (var_58:0xc.w != 0)
        goto label_140376d4c

if (var_58:0xa.w != 0)
    i_2 = 0xd
    goto label_140376e3f

if (var_58:8.w != 0)
    i_2 = 0xc
    goto label_140376e3f

if (var_58:6.w != 0)
    i_2 = 0xb
    goto label_140376e3f

if (var_58:4.w != 0)
    i_2 = 0xa
    goto label_140376e3f

if (var_58:2.w != 0)
    i_2 = 9
    goto label_140376e3f

if (var_58.w != 0)
    i_2 = 8
    goto label_140376e3f

if (var_68:0xe.w != 0)
    i_2 = 7
    goto label_140376e3f

if (var_68:0xc.w != 0)
    i_2 = 6
    goto label_140376e3f

if (var_68:0xa.w != 0)
    i_2 = 5
    goto label_140376e3f

if (var_68:8.w != 0)
    i_2 = 4
    goto label_140376e3f

if (var_68:6.w != 0)
    i_2 = 3
    goto label_140376e3f

if (var_68:4.w != 0)
    i_2 = 2
    goto label_140376e3f

int32_t rsi_1

if (var_68:2.w == 0)
    int32_t* rax_10 = *arg4
    *arg4 = &rax_10[1]
    *rax_10 = 0x140
    int32_t* rax_11 = *arg4
    *arg4 = &rax_11[1]
    *rax_11 = 0x140
    *arg5 = 1
    rsi_1 = 0
else
    int32_t i_4
    i_4.b = i_3 != 0
    i_2 = 1
    r13_1 = 0
    i_3 = i_4
    rdi_6 = 1
label_140376e66:
    
    if (i_3 u< rdi_6.d)
        i_3 = rdi_6.d
    
    uint32_t rbp_3 = zx.d(var_68:2.w)
    rsi_1 = -1
    
    if (2 - rbp_3 s>= 0)
        int32_t r10_2 = (2 - rbp_3) * 2
        uint32_t r14_1 = zx.d(var_68:4.w)
        
        if (r10_2 - r14_1 s>= 0)
            int32_t r10_4 = (r10_2 - r14_1) * 2
            uint32_t r15_1 = zx.d(var_68:6.w)
            
            if (r10_4 - r15_1 s>= 0)
                int32_t r10_6 = (r10_4 - r15_1) * 2
                uint32_t r12_1 = zx.d(var_68:8.w)
                
                if (r10_6 - r12_1 s>= 0)
                    int32_t r10_8 = (r10_6 - r12_1) * 2
                    uint32_t rcx = zx.d(var_68:0xa.w)
                    
                    if (r10_8 - rcx s>= 0)
                        int32_t r10_10 = (r10_8 - rcx) * 2
                        uint32_t rbx_3 = zx.d(var_68:0xc.w)
                        
                        if (r10_10 - rbx_3 s>= 0)
                            int32_t r10_12 = (r10_10 - rbx_3) * 2
                            uint32_t r9 = zx.d(var_68:0xe.w)
                            
                            if (r10_12 - r9 s>= 0)
                                int32_t r10_14 = (r10_12 - r9) * 2
                                uint32_t rbx_4 = zx.d(var_58.w)
                                
                                if (r10_14 - rbx_4 s>= 0)
                                    int32_t r10_16 = (r10_14 - rbx_4) * 2
                                    uint32_t rcx_1 = zx.d(var_58:2.w)
                                    
                                    if (r10_16 - rcx_1 s>= 0)
                                        int32_t r10_18 = (r10_16 - rcx_1) * 2
                                        uint32_t r9_1 = zx.d(var_58:4.w)
                                        
                                        if (r10_18 - r9_1 s>= 0)
                                            int32_t r10_20 = (r10_18 - r9_1) * 2
                                            uint32_t r9_2 = zx.d(var_58:6.w)
                                            
                                            if (r10_20 - r9_2 s>= 0)
                                                int32_t r10_22 = (r10_20 - r9_2) * 2
                                                uint32_t rcx_2 = zx.d(var_58:8.w)
                                                
                                                if (r10_22 - rcx_2 s>= 0)
                                                    int32_t r10_24 = (r10_22 - rcx_2) * 2
                                                    uint32_t rbx_5 = zx.d(var_58:0xa.w)
                                                    
                                                    if (r10_24 - rbx_5 s>= 0)
                                                        int32_t r10_26 = (r10_24 - rbx_5) * 2
                                                        uint32_t rbx_6 = zx.d(var_58:0xc.w)
                                                        
                                                        if (r10_26 - rbx_6 s>= 0)
                                                            int32_t r10_28 = (r10_26 - rbx_6) * 2
                                                            uint32_t rbx_7 = zx.d(r13_1)
                                                            
                                                            if (r10_28 - rbx_7 s>= 0)
                                                                if (r10_28 - rbx_7 == 0)
                                                                label_140376ff8:
                                                                    int16_t r14_2 = r14_1.w + rbp_3.w
                                                                    int16_t var_86_1 = 0
                                                                    int16_t var_84_1 = rbp_3.w
                                                                    int16_t r15_2 = r15_1.w + r14_2
                                                                    int16_t var_82_1 = r14_2
                                                                    int16_t r12_2 = r12_1.w + r15_2
                                                                    int16_t var_80_1 = r15_2
                                                                    int16_t rcx_4 = rcx.w + r12_2
                                                                    int16_t var_7e_1 = r12_2
                                                                    int16_t rbx_9 = rbx_3.w + rcx_4
                                                                    int16_t var_7c_1 = rcx_4
                                                                    int16_t rbp_5 = r9.w + rbx_9
                                                                    int16_t var_7a_1 = rbx_9
                                                                    int16_t r9_4 = rbx_4.w + rbp_5
                                                                    int16_t var_78_1 = rbp_5
                                                                    int16_t rcx_6 = rcx_1.w + r9_4
                                                                    int16_t var_76_1 = r9_4
                                                                    int16_t rbp_7 = r9_1.w + rcx_6
                                                                    int16_t var_74_1 = rcx_6
                                                                    int16_t r13_3 = r9_2.w + rbp_7
                                                                    int16_t var_72_1 = rbp_7
                                                                    int16_t rcx_8 = rcx_2.w + r13_3
                                                                    int16_t var_70_1 = r13_3
                                                                    int16_t rbp_9 = rbx_5.w + rcx_8
                                                                    int16_t var_6e_1 = rcx_8
                                                                    int16_t var_6c_1 = rbp_9
                                                                    int16_t var_6a_1 = rbx_6.w + rbp_9
                                                                    
                                                                    if (arg3 != 0)
                                                                        uint64_t r10_30 = zx.q(arg3)
                                                                        uint64_t r9_6 = zx.q(r10_30.d) & 1
                                                                        void var_88
                                                                        int64_t i_1
                                                                        
                                                                        if (arg3 != 1)
                                                                            i_1 = 0
                                                                            
                                                                            do
                                                                                uint64_t rsi_2 =
                                                                                    zx.q(*(arg2 + (i_1 << 1)))
                                                                                
                                                                                if (rsi_2 != 0)
                                                                                    uint64_t r8 =
                                                                                        zx.q(*(&var_88 + (rsi_2 << 1)))
                                                                                    *(&var_88 + (rsi_2 << 1)) = (r8 + 1).w
                                                                                    *(arg6 + (r8 << 1)) = i_1.w
                                                                                
                                                                                uint64_t rsi_4 =
                                                                                    zx.q(*(arg2 + (i_1 << 1) + 2))
                                                                                
                                                                                if (rsi_4 != 0)
                                                                                    uint64_t r8_1 =
                                                                                        zx.q(*(&var_88 + (rsi_4 << 1)))
                                                                                    *(&var_88 + (rsi_4 << 1)) = (r8_1 + 1).w
                                                                                    *(arg6 + (r8_1 << 1)) = (i_1 + 1).w
                                                                                
                                                                                i_1 += 2
                                                                            while (r10_30 - r9_6 != i_1)
                                                                            
                                                                            if (r9_6 != 0)
                                                                                goto label_14037710e
                                                                        else
                                                                            i_1 = 0
                                                                            
                                                                            if (r9_6 != 0)
                                                                            label_14037710e:
                                                                                uint64_t rbx_13 =
                                                                                    zx.q(*(arg2 + (i_1 << 1)))
                                                                                
                                                                                if (rbx_13 != 0)
                                                                                    uint64_t r8_2 =
                                                                                        zx.q(*(&var_88 + (rbx_13 << 1)))
                                                                                    *(&var_88 + (rbx_13 << 1)) =
                                                                                        (r8_2 + 1).w
                                                                                    *(arg6 + (r8_2 << 1)) = i_1.w
                                                                    
                                                                    int32_t r9_7 = 0
                                                                    char var_c8_2
                                                                    char var_c4_2
                                                                    uint32_t var_a8_1
                                                                    uint32_t var_a0_1
                                                                    int32_t r12_3
                                                                    
                                                                    if (arg1 == 0)
                                                                        r12_3 = 0x13
                                                                        var_c8_2 = 0
                                                                        var_a8_1.q = arg6
                                                                        var_a0_1.q = arg6
                                                                        var_c4_2 = 0
                                                                    label_1403771ef:
                                                                        uint64_t rbp_10 = zx.q(1 << i_3.b)
                                                                        uint32_t var_b0_1
                                                                        var_b0_1.q = rbp_10
                                                                        int64_t r15_3 = *arg4
                                                                        int32_t var_bc_2 = 0xffffffff
                                                                        char rcx_16 = i_3.b
                                                                        int32_t i_5 = 0
                                                                        int32_t r13_4 = 0
                                                                        int32_t var_b8_2 = r12_3
                                                                    label_140377258:
                                                                        int32_t rbp_17 = 1 << rcx_16
                                                                        
                                                                        while (true)
                                                                            char rsi_9 = rdi_6.b - i_5.b
                                                                            int16_t rbx_15 =
                                                                                *(arg6 + (zx.q(r9_7) << 1))
                                                                            uint64_t rcx_18 = zx.q(rbx_15)
                                                                            int64_t rbp_18
                                                                            
                                                                            if (r12_3 s> rcx_18.d)
                                                                                rbp_18 = 0
                                                                            else if (r12_3 s>= rcx_18.d)
                                                                                rbp_18.b = 0x60
                                                                                rbx_15 = 0
                                                                            else
                                                                                rbp_18.b = *(var_a0_1.q + (rcx_18 << 1))
                                                                                rbx_15 = *(var_a8_1.q + (rcx_18 << 1))
                                                                            
                                                                            int32_t r14_4 = 1 << rsi_9
                                                                            int32_t rcx_21 = rbp_17
                                                                            int32_t temp15_1
                                                                            
                                                                            do
                                                                                uint64_t r12_4 =
                                                                                    zx.q((r13_4 u>> i_5.b) - r14_4 + rcx_21)
                                                                                *(r15_3 + (r12_4 << 2)) = rbp_18.b
                                                                                *(r15_3 + (r12_4 << 2) + 1) = rsi_9
                                                                                *(r15_3 + (r12_4 << 2) + 2) = rbx_15
                                                                                temp15_1 = rcx_21
                                                                                rcx_21 -= r14_4
                                                                            while (temp15_1 != r14_4)
                                                                            int32_t rbp_19 = 1 << (rdi_6 - 1).b
                                                                            int32_t rcx_23
                                                                            
                                                                            do
                                                                                rcx_23 = rbp_19
                                                                                rbp_19 u>>= 1
                                                                            while ((rcx_23 & r13_4) != 0)
                                                                            
                                                                            if (rcx_23 == 0)
                                                                                r13_4 = 0
                                                                            else
                                                                                r13_4 = ((rcx_23 - 1) & r13_4) + rcx_23
                                                                            
                                                                            r12_3 = var_b8_2
                                                                            r9_7 += 1
                                                                            uint64_t rcx_24 = zx.q(rdi_6.d)
                                                                            int16_t temp16_1 =
                                                                                *(&var_68 + (rcx_24 << 1))
                                                                            *(&var_68 + (rcx_24 << 1)) -= 1
                                                                            
                                                                            if (temp16_1 == 1)
                                                                                if (rdi_6.d == i_2)
                                                                                    if (r13_4 != 0)
                                                                                        uint64_t rax_5 = zx.q(r13_4)
                                                                                        *(r15_3 + (rax_5 << 2)) = 0x40
                                                                                        *(r15_3 + (rax_5 << 2) + 1) = rsi_9
                                                                                        *(r15_3 + (rax_5 << 2) + 2) = 0
                                                                                    
                                                                                    *arg4 += zx.q(var_b0_1) << 2
                                                                                    *arg5 = i_3
                                                                                    break
                                                                                
                                                                                rdi_6 = zx.q(*(arg2 + (
                                                                                    zx.q(*(arg6 + (zx.q(r9_7) << 1)))
                                                                                    << 1)))
                                                                            
                                                                            if (rdi_6.d u> i_3)
                                                                                int32_t rbx_18 = r13_4 & (rbp_10 - 1).d
                                                                                
                                                                                if (rbx_18 != var_bc_2)
                                                                                    if (i_5 == 0)
                                                                                        i_5 = i_3
                                                                                    
                                                                                    rcx_16 = rdi_6.b - i_5.b
                                                                                    int32_t rsi_10 = 1 << rcx_16
                                                                                    
                                                                                    if (rdi_6.d u< i_2)
                                                                                        uint64_t rcx_28 = zx.q(rdi_6.d)
                                                                                        
                                                                                        do
                                                                                            uint32_t rbp_24 =
                                                                                                zx.d(*(&var_68 + (rcx_28 << 1)))
                                                                                            
                                                                                            if (rsi_10 s<= rbp_24)
                                                                                                break
                                                                                            
                                                                                            rsi_10 = (rsi_10 - rbp_24) * 2
                                                                                            rcx_28 += 1
                                                                                        while (rcx_28.d u< i_2)
                                                                                        
                                                                                        rcx_16 = rcx_28.b - i_5.b
                                                                                        rsi_10 = 1 << rcx_16
                                                                                    
                                                                                    uint64_t rbp_26 =
                                                                                        zx.q(var_b0_1 + rsi_10)
                                                                                    r14_4.b = rbp_26.d u> 0x354
                                                                                    var_b0_1.q = rbp_26
                                                                                    int32_t r10_35
                                                                                    r10_35.b = rbp_26.d u> 0x250
                                                                                    rsi_1 = 1
                                                                                    
                                                                                    if ((var_c4_2 & r14_4.b) != 0)
                                                                                        goto label_14037740d
                                                                                    
                                                                                    r10_35.b &= var_c8_2
                                                                                    
                                                                                    if (r10_35.b != 0)
                                                                                        goto label_14037740d
                                                                                    
                                                                                    r15_3 += zx.q(rbp_17) << 2
                                                                                    uint64_t r14_3 = zx.q(rbx_18)
                                                                                    *(*arg4 + (r14_3 << 2)) = rcx_16
                                                                                    *(*arg4 + (r14_3 << 2) + 1) = i_3.b
                                                                                    int64_t r10_32 = *arg4
                                                                                    *(r10_32 + (r14_3 << 2) + 2) =
                                                                                        ((r15_3.d - r10_32.d) u>> 2).w
                                                                                    var_bc_2 = rbx_18
                                                                                    goto label_140377258
                                                                        
                                                                        rsi_1 = 0
                                                                    else
                                                                        int32_t rcx_11
                                                                        
                                                                        if (arg1 != 1)
                                                                            var_c4_2 = 0
                                                                            r12_3 = -1
                                                                            var_a0_1.q = &data_1435fc250
                                                                            var_a8_1.q = &data_1435fc210
                                                                            rcx_11.b = arg1 == 2
                                                                            var_c8_2 = rcx_11.b
                                                                            
                                                                            if (arg1 != 2)
                                                                                goto label_1403771ef
                                                                            
                                                                            rsi_1 = 1
                                                                            
                                                                            if (i_3 u<= 9)
                                                                                goto label_1403771ef
                                                                        else
                                                                            rsi_1 = 1
                                                                            
                                                                            if (i_3 u<= 9)
                                                                                rcx_11.b = 1
                                                                                var_c4_2 = rcx_11.b
                                                                                r12_3 = 0x100
                                                                                var_a0_1.q = &data_1435fbfce
                                                                                var_a8_1.q = &data_1435fbf8e
                                                                                var_c8_2 = 0
                                                                                goto label_1403771ef
                                                                else if (arg1 != 0 && i_2 == 1)
                                                                    goto label_140376ff8

label_14037740d:
__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(rsi_1)
