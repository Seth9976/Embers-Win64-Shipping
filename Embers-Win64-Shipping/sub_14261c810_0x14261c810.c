// 函数: sub_14261c810
// 地址: 0x14261c810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint64_t r12 = zx.q(*arg2)
int64_t* rbp = arg1
int32_t rax_2 = arg2[1]
int32_t r15 = arg3
int64_t* r14 = arg5
uint64_t rbx = zx.q((r12 << 3).d)
int64_t* var_d0 = r14
int32_t var_f0 = r12.d
uint64_t rax_3 = data_143b502a8(zx.q((rbx * 3).d * 2), 1)
uint64_t result

if (rax_3 != 0)
    uint64_t i_6 = 0x100
    int32_t i_10 = 0x100
    int32_t var_e8_1 = r15
    int64_t var_a0_1 = data_143b502a8(0x400, 1)
    int32_t i_2 = 0x100
    int16_t rsi_1 = 0
    int32_t rax_6 = rax_2 - r15
    int16_t var_f8_1 = 0
    
    if (r15 s>= rax_6)
    label_14261cd4a:
        uint64_t rax_40 = zx.q(rsi_1)
        *arg6 = rax_40.d
        
        if (rax_40.d != 0)
            int64_t rax_41 = data_143b502a8(zx.q((rax_40 * 3).d << 4), 1)
            int64_t* r15_2 = var_d0
            *r15_2 = rax_41
            int64_t rax_42 = sx.q(*arg6)
            
            if (rax_41 != 0)
                memset(rax_41, 0, rax_42 * 0x30)
                int32_t i = 0
                
                if (*arg6 s> 0)
                    int64_t rdx_17 = 0
                    
                    do
                        rdx_17 += 0x30
                        i += 1
                        *(rdx_17 + *r15_2 - 4) = 0xffff
                        *(rdx_17 + *r15_2 - 8) = 0xffff
                        *(rdx_17 + *r15_2 - 6) = 0
                    while (i s< *arg6)
                
                uint64_t rsi_5 = 0x40
                int32_t var_f4_2 = 0x40
                int64_t rax_46 = data_143b502a8(0x100, 1, i)
                int32_t rbp_1 = 0x40
                int64_t r14_2 = rax_46
                int32_t rcx_29 = 0
                int32_t var_e0
                var_e0.q = rax_46
                int32_t var_ec_1 = 0
                
                if (rax_2 s> 0)
                    do
                        int32_t i_5 = 0
                        int32_t i_1 = 0
                        
                        if (r12.d s> 0)
                            int32_t rcx_30 = rcx_29 * r12.d
                            int32_t var_b0_2 = rcx_30
                            
                            do
                                int32_t* r10_5 = arg2
                                int32_t* rdi_3 = *(r10_5 + 0x40) + (sx.q(i_1 + rcx_30) << 2)
                                int32_t temp0_1 = rsi_5.d
                                
                                if (temp0_1 s< 0)
                                    if (temp0_1 == 0)
                                        rsi_5 = 0
                                        var_f4_2 = 0
                                    else if (temp0_1 s< 0)
                                        int32_t temp3_1
                                        int32_t temp4_1
                                        
                                        do
                                            temp3_1 = rsi_5.d
                                            temp4_1 = rsi_5.d
                                            rsi_5 = zx.q(rsi_5.d * 2)
                                        while (temp3_1 + temp4_1 s< 0)
                                        var_f4_2 = rsi_5.d
                                    
                                    int64_t rax_49 = data_143b502a8(zx.q((rsi_5 << 2).d), 1)
                                    
                                    if (rbp_1 != 0 && rax_49 != 0)
                                        memcpy(rax_49, r14_2, rbp_1 << 2)
                                    
                                    if (r14_2 != 0)
                                        data_143b502b0(r14_2)
                                    
                                    r10_5 = arg2
                                    r14_2 = rax_49
                                    var_e0.q = rax_49
                                
                                int32_t rcx_35 = *rdi_3
                                int32_t r8_10 = 0
                                var_f8_1.d = 0
                                int32_t rax_51 = rcx_35 & 0xffffff
                                uint64_t rdx_19 = zx.q(rax_51)
                                uint64_t rax_52 = zx.q(rax_51 + (rcx_35 u>> 0x18))
                                int32_t var_b8
                                var_b8.q = rdx_19
                                
                                if (rdx_19 u< rax_52)
                                    int64_t r11_5 = arg4
                                    uint64_t rcx_38 = rdx_19 * 0xc
                                    uint32_t var_90
                                    var_90.q = rcx_38
                                    
                                    do
                                        int16_t r12_4 = *(r11_5 + (rdx_19 << 1))
                                        int16_t* r13_4 = *(r10_5 + 0x48) + rcx_38
                                        
                                        if (r12_4 != 0xffff)
                                            int64_t rcx_39 = *r15_2
                                            int16_t rdx_20 = *r13_4
                                            uint64_t r9_9 = zx.q(r12_4) * 0x30
                                            uint64_t var_c8_1 = r9_9
                                            
                                            if (*(rcx_39 + r9_9 + 0x28) u< rdx_20)
                                                rdx_20 = *(rcx_39 + r9_9 + 0x28)
                                            
                                            *(rcx_39 + r9_9 + 0x28) = rdx_20
                                            int64_t rcx_40 = *r15_2
                                            int16_t rdx_21 = *r13_4
                                            
                                            if (*(rcx_40 + r9_9 + 0x2a) u> rdx_21)
                                                rdx_21 = *(rcx_40 + r9_9 + 0x2a)
                                            
                                            *(rcx_40 + r9_9 + 0x2a) = rdx_21
                                            
                                            if (r8_10 + 1 s> rsi_5.d)
                                                if (rsi_5.d == 0)
                                                    rsi_5 = zx.q(r8_10 + 1)
                                                    var_f4_2 = r8_10 + 1
                                                else if (rsi_5.d s< r8_10 + 1)
                                                    do
                                                        rsi_5 = zx.q(rsi_5.d * 2)
                                                    while (rsi_5.d s< r8_10 + 1)
                                                    
                                                    var_f4_2 = rsi_5.d
                                                
                                                int64_t rax_54 =
                                                    data_143b502a8(zx.q((rsi_5 << 2).d), 1)
                                                int64_t rax_55 = sx.q(var_f8_1.d)
                                                
                                                if (rax_55.d != 0 && rax_54 != 0)
                                                    memcpy(rax_54, r14_2, (rax_55 << 2).d)
                                                
                                                if (r14_2 != 0)
                                                    data_143b502b0(r14_2)
                                                
                                                r9_9 = var_c8_1
                                                r14_2 = rax_54
                                                r10_5 = arg2
                                                r11_5 = arg4
                                                var_e0.q = rax_54
                                            
                                            var_f8_1.d = r8_10 + 1
                                            uint64_t r15_3 = 0
                                            *(r14_2 + (sx.q(r8_10 + 1) << 2) - 4) = zx.d(r12_4)
                                            
                                            do
                                                uint32_t r8_12 =
                                                    zx.d((*(r13_4 + 4) u>> (r15_3 << 3).b).b)
                                                
                                                if (r8_12 != 0xff)
                                                    uint64_t rax_60 = zx.q(r15_3.d) & 3
                                                    int128_t var_78
                                                    __builtin_memcpy(&var_78, 
                                                        "\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x"
                                                    "00\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00"
                                                    "00\x01\x00\x00\x00\x00\x00\x00\x00", 
                                                        0x20)
                                                    int128_t var_68
                                                    uint64_t rdx_25 = zx.q((*(*(r10_5 + 0x40) + (sx
                                                        .q((*(&var_78 + (rax_60 << 2)) + var_ec_1)
                                                        * var_f0 + *(&var_68 + (rax_60 << 2))
                                                        + i_5) << 2)) & 0xffffff) + r8_12)
                                                    int16_t rcx_52 = *(r11_5 + (rdx_25 << 1))
                                                    
                                                    if (rcx_52 != 0xffff && rcx_52 != r12_4)
                                                        uint32_t r14_3 = zx.d(rcx_52)
                                                        int32_t j = 0
                                                        void* rdi_6 = *var_d0 + r9_9
                                                        int64_t rbp_2 = sx.q(*(rdi_6 + 0x10))
                                                        
                                                        if (rbp_2.d s> 0)
                                                            int32_t* rax_63 = *(rdi_6 + 8)
                                                            
                                                            do
                                                                if (*rax_63 == r14_3)
                                                                    goto label_14261d162
                                                                
                                                                j += 1
                                                                rax_63 = &rax_63[1]
                                                            while (j s< rbp_2.d)
                                                        
                                                        uint64_t j_4 = zx.q(*(rdi_6 + 0x14))
                                                        int32_t j_1 = (rbp_2 + 1).d
                                                        int64_t rsi_6
                                                        
                                                        if (j_1 s<= j_4.d)
                                                            rsi_6 = *(rdi_6 + 8)
                                                        else
                                                            int32_t j_3 = j_4.d
                                                            
                                                            if (j_4.d == 0)
                                                                *(rdi_6 + 0x14) = j_1
                                                                j_4 = zx.q(j_1)
                                                                j_3 = j_1
                                                            
                                                            if (j_4.d s< j_1)
                                                                j_4 = zx.q(j_3)
                                                                
                                                                do
                                                                    j_4 = zx.q(j_4.d * 2)
                                                                while (j_4.d s< j_1)
                                                                
                                                                *(rdi_6 + 0x14) = j_4.d
                                                            
                                                            rsi_6 =
                                                                data_143b502a8(zx.q((j_4 << 2).d), 1)
                                                            int64_t rax_65 = sx.q(*(rdi_6 + 0x10))
                                                            
                                                            if (rax_65.d != 0 && rsi_6 != 0)
                                                                memcpy(rsi_6, *(rdi_6 + 8), 
                                                                    (rax_65 << 2).d)
                                                            
                                                            int64_t rcx_55 = *(rdi_6 + 8)
                                                            
                                                            if (rcx_55 != 0)
                                                                data_143b502b0(rcx_55)
                                                            
                                                            r9_9 = var_c8_1
                                                            r10_5 = arg2
                                                            r11_5 = arg4
                                                            *(rdi_6 + 8) = rsi_6
                                                        
                                                        *(rdi_6 + 0x10) = j_1
                                                        *(rsi_6 + (rbp_2 << 2)) = r14_3
                                                
                                            label_14261d162:
                                                r15_3 = zx.q(r15_3.d + 1)
                                            while (r15_3.d s< 4)
                                            
                                            rdx_19 = var_b8.q
                                            rcx_38 = var_90.q
                                            rsi_5 = zx.q(var_f4_2)
                                            r8_10 = var_f8_1.d
                                            r15_2 = var_d0
                                        
                                        r14_2 = var_e0.q
                                        rdx_19 += 1
                                        rcx_38 += 0xc
                                        var_b8.q = rdx_19
                                        var_90.q = rcx_38
                                    while (rdx_19 s< rax_52)
                                    
                                    r12 = zx.q(var_f0)
                                
                                int64_t rcx_56 = sx.q(r8_10)
                                int64_t j_5 = sx.q(r8_10 - 1)
                                var_b8.q = j_5
                                
                                if (r8_10 - 1 s> 0)
                                    int32_t* r8_15 = var_e0.q
                                    int64_t rax_67 = 1
                                    int64_t var_c8_2 = 1
                                    int32_t* r13_5 = r8_15
                                    int64_t j_2
                                    
                                    do
                                        int64_t r12_5 = rax_67
                                        
                                        if (rax_67 s< rcx_56)
                                            int32_t rax_68 = var_f8_1.d
                                            
                                            do
                                                int64_t rcx_57 = sx.q(*r13_5)
                                                int64_t r14_4 = sx.q(r8_15[r12_5])
                                                
                                                if (rcx_57.d != r14_4.d)
                                                    int32_t rcx_58 = 0
                                                    void* rdi_9 = rcx_57 * 0x30 + *r15_2
                                                    void* rbp_5 = r14_4 * 0x30 + *r15_2
                                                    int64_t r15_4 = sx.q(*(rdi_9 + 0x20))
                                                    
                                                    if (r15_4.d s<= 0)
                                                    label_14261d24a:
                                                        uint64_t k_5 = zx.q(*(rdi_9 + 0x24))
                                                        int32_t k = (r15_4 + 1).d
                                                        int64_t rsi_7
                                                        
                                                        if (k s<= k_5.d)
                                                            rsi_7 = *(rdi_9 + 0x18)
                                                        else
                                                            int32_t k_3 = k_5.d
                                                            
                                                            if (k_5.d == 0)
                                                                *(rdi_9 + 0x24) = k
                                                                k_5 = zx.q(k)
                                                                k_3 = k
                                                            
                                                            if (k_5.d s< k)
                                                                k_5 = zx.q(k_3)
                                                                
                                                                do
                                                                    k_5 = zx.q(k_5.d * 2)
                                                                while (k_5.d s< k)
                                                                
                                                                *(rdi_9 + 0x24) = k_5.d
                                                            
                                                            rsi_7 =
                                                                data_143b502a8(zx.q((k_5 << 2).d), 1)
                                                            int64_t rax_71 = sx.q(*(rdi_9 + 0x20))
                                                            
                                                            if (rax_71.d != 0 && rsi_7 != 0)
                                                                memcpy(rsi_7, *(rdi_9 + 0x18), 
                                                                    (rax_71 << 2).d)
                                                            
                                                            int64_t rcx_61 = *(rdi_9 + 0x18)
                                                            
                                                            if (rcx_61 != 0)
                                                                data_143b502b0(rcx_61)
                                                            
                                                            *(rdi_9 + 0x18) = rsi_7
                                                        
                                                        *(rdi_9 + 0x20) = k
                                                        *(rsi_7 + (r15_4 << 2)) = r14_4.d
                                                    else
                                                        int32_t* rax_69 = *(rdi_9 + 0x18)
                                                        
                                                        while (*rax_69 != r14_4.d)
                                                            rcx_58 += 1
                                                            rax_69 = &rax_69[1]
                                                            
                                                            if (rcx_58 s>= r15_4.d)
                                                                goto label_14261d24a
                                                    
                                                    int64_t rsi_8 = sx.q(*(rbp_5 + 0x20))
                                                    int32_t rcx_62 = 0
                                                    int32_t k_2 = *r13_5
                                                    
                                                    if (rsi_8.d s<= 0)
                                                    label_14261d2f3:
                                                        uint64_t k_6 = zx.q(*(rbp_5 + 0x24))
                                                        int32_t k_1 = (rsi_8 + 1).d
                                                        int64_t rdi_10
                                                        
                                                        if (k_1 s<= k_6.d)
                                                            rdi_10 = *(rbp_5 + 0x18)
                                                        else
                                                            int32_t k_4 = k_6.d
                                                            
                                                            if (k_6.d == 0)
                                                                *(rbp_5 + 0x24) = k_1
                                                                k_6 = zx.q(k_1)
                                                                k_4 = k_1
                                                            
                                                            if (k_6.d s< k_1)
                                                                k_6 = zx.q(k_4)
                                                                
                                                                do
                                                                    k_6 = zx.q(k_6.d * 2)
                                                                while (k_6.d s< k_1)
                                                                
                                                                *(rbp_5 + 0x24) = k_6.d
                                                            
                                                            rdi_10 =
                                                                data_143b502a8(zx.q((k_6 << 2).d), 1)
                                                            int64_t rax_74 = sx.q(*(rbp_5 + 0x20))
                                                            
                                                            if (rax_74.d != 0 && rdi_10 != 0)
                                                                memcpy(rdi_10, *(rbp_5 + 0x18), 
                                                                    (rax_74 << 2).d)
                                                            
                                                            int64_t rcx_65 = *(rbp_5 + 0x18)
                                                            
                                                            if (rcx_65 != 0)
                                                                data_143b502b0(rcx_65)
                                                            
                                                            *(rbp_5 + 0x18) = rdi_10
                                                        
                                                        *(rbp_5 + 0x20) = k_1
                                                        *(rdi_10 + (rsi_8 << 2)) = k_2
                                                    else
                                                        int32_t* rax_72 = *(rbp_5 + 0x18)
                                                        
                                                        while (*rax_72 != k_2)
                                                            rcx_62 += 1
                                                            rax_72 = &rax_72[1]
                                                            
                                                            if (rcx_62 s>= rsi_8.d)
                                                                goto label_14261d2f3
                                                    
                                                    rax_68 = var_f8_1.d
                                                
                                                r8_15 = var_e0.q
                                                r12_5 += 1
                                                r15_2 = var_d0
                                                rcx_56 = sx.q(rax_68)
                                            while (r12_5 s< rcx_56)
                                            
                                            rax_67 = var_c8_2
                                            j_5 = var_b8.q
                                        
                                        r15_2 = var_d0
                                        rax_67 += 1
                                        r13_5 = &r13_5[1]
                                        var_c8_2 = rax_67
                                        j_2 = j_5
                                        j_5 -= 1
                                        var_b8.q = j_5
                                    while (j_2 != 1)
                                    r12 = zx.q(var_f0)
                                
                                rsi_5 = zx.q(var_f4_2)
                                i_1 = i_5 + 1
                                r14_2 = var_e0.q
                                rbp_1 = var_f8_1.d
                                r15_2 = var_d0
                                rcx_30 = var_b0_2
                                i_5 = i_1
                            while (i_1 s< r12.d)
                            
                            rcx_29 = var_ec_1
                        
                        rcx_29 += 1
                        var_ec_1 = rcx_29
                    while (rcx_29 s< rax_2)
                
                i_6.b = 1
                
                if (r14_2 != 0)
                    data_143b502b0(r14_2)
            else
                sub_14262d160(rbp, (rax_41 + 3).d, 
                    "CollectLayerRegionsMonotone: Out of memory 'regs' (%d).", zx.q(rax_42.d))
                i_6.b = 0
        else
            *r14 = 0
            i_6.b = 1
    else
        int32_t rax_8 = r12.d - r15
        int32_t r12_2 = r15 * var_f0
        int32_t var_f4_1 = r12_2
        int32_t rcx_5 = (r15 - 1) * var_f0 - (var_f0 + 1) * r15
        
        while (true)
            uint64_t i_7 = zx.q(i_2)
            i_2 = zx.d(rsi_1) + 1
            int64_t rdi_1
            
            if (i_2 s<= i_6.d)
                rdi_1 = var_a0_1
            else
                if (i_6.d == 0)
                    i_6 = zx.q(i_2)
                    i_10 = i_6.d
                else if (i_6.d s< i_2)
                    do
                        i_6 = zx.q(i_6.d * 2)
                    while (i_6.d s< i_2)
                    
                    i_10 = i_6.d
                
                int64_t rax_12 = data_143b502a8(zx.q((i_6 << 2).d), 1)
                
                if (rax_12 != 0)
                    memcpy(rax_12, var_a0_1, (i_7 << 2).d)
                
                if (var_a0_1 != 0)
                    data_143b502b0(var_a0_1)
                
                rdi_1 = rax_12
                var_a0_1 = rax_12
            
            memset(rdi_1, 0, zx.q(rsi_1) << 2)
            int32_t r11_1 = rax_8
            int16_t i_11 = 0
            uint32_t rdx_2 = 0
            int32_t r14_1 = r15
            
            if (r15 s< r11_1)
                while (true)
                    int32_t r12_3 = r12_2 + r14_1
                    int64_t rcx_10 = sx.q(r12_3)
                    int64_t rax_15 = *(arg2 + 0x40)
                    int32_t* r13_2 = rax_15 + (rcx_10 << 2)
                    uint32_t rax_16 = zx.d(*(rax_15 + (rcx_10 << 2) + 3))
                    int32_t rcx_11 = *r13_2
                    
                    if (rdx_2 u> rax_16)
                        rax_16 = rdx_2
                    
                    rdx_2 = rax_16
                    uint64_t rax_18 = zx.q(rcx_11) & 0xffffff
                    i_6 = zx.q(rax_18.d)
                    uint64_t r15_1 = zx.q(rax_18.d + (rcx_11 u>> 0x18))
                    
                    if (i_6 u< r15_1)
                        int32_t* rdx_3 = arg2
                        uint64_t rsi_3 = rax_18 * 0xc
                        
                        while (true)
                            int64_t r10_1 = *(rdx_3 + 0x58)
                            int64_t rdi_2 = *(rdx_3 + 0x48)
                            
                            if (*(r10_1 + i_6) != 0)
                                int32_t r9_1 = *(rdi_2 + rsi_3 + 4)
                                uint32_t i_12 = 0xffff
                                uint32_t r11_2 = zx.d(r9_1.b)
                                int64_t r10_2
                                
                                if (r11_2 == 0xff)
                                    r10_2 = arg4
                                else
                                    uint64_t rdx_6 = zx.q((
                                        *(*(rdx_3 + 0x40) + (sx.q(r12_3) << 2) - 4) & 0xffffff) + r11_2)
                                    r10_2 = arg4
                                    
                                    if (*(r10_1 + rdx_6) != 0)
                                        int16_t rax_20 = *(r10_2 + (rdx_6 << 1))
                                        
                                        if (rax_20 != 0xffff)
                                            i_12.w = rax_20
                                    
                                    rdx_3 = arg2
                                
                                uint64_t r11_3
                                
                                if (i_12.w != 0xffff)
                                    r11_3 = rax_3
                                else
                                    i_12 = zx.d(i_11)
                                    i_11 += 1
                                    
                                    if (i_12 s>= var_f0 << 3)
                                        uint32_t var_100_1 = rax_16
                                        uint32_t var_108_1 = zx.d(*(r13_2 + 3))
                                        int32_t var_110_1 = rdx_3[2]
                                        int32_t var_118_1 = var_e8_1
                                        sub_14262d160(arg1, 3, 
                                            "CollectLayerRegionsMonotone: Layer split is too complex, "
                                        "skipping tile! x:%d y:%d spansTotal:%d spansCurrent:%d "
                                        "spansMax:%d", 
                                            zx.q(r14_1))
                                        i_6.b = 0
                                        break
                                    
                                    r11_3 = rax_3
                                    uint64_t rcx_15 = zx.q(i_12.w) * 3
                                    *(r11_3 + (rcx_15 << 1) + 4) = 0xffff
                                    *(r11_3 + (rcx_15 << 1)) = 0
                                    r9_1 = *(rdi_2 + rsi_3 + 4)
                                
                                uint32_t r9_3 = r9_1 u>> 0x18
                                
                                if (r9_3 != 0xff)
                                    int16_t rdx_10 = *(r10_2 + (zx.q((*(*(rdx_3 + 0x40)
                                        + (sx.q(var_f4_1 + rcx_5 + arg3 + r14_1) << 2)) & 0xffffff)
                                        + r9_3) << 1))
                                    
                                    if (rdx_10 != 0xffff)
                                        uint64_t rcx_17 = zx.q(i_12.w) * 3
                                        int16_t rax_28
                                        
                                        if (*(r11_3 + (rcx_17 << 1)) != 0)
                                            rax_28 = *(r11_3 + (rcx_17 << 1) + 4)
                                        else
                                            *(r11_3 + (rcx_17 << 1) + 4) = rdx_10
                                            rax_28 = rdx_10
                                        
                                        if (rax_28 != rdx_10)
                                            *(r11_3 + (rcx_17 << 1) + 4) = 0xffff
                                        else
                                            *(r11_3 + (rcx_17 << 1)) += 1
                                            uint64_t rax_29 = zx.q(rdx_10)
                                            *(var_a0_1 + (rax_29 << 2)) += 1
                                
                                rdx_3 = arg2
                                *(r10_2 + (i_6 << 1)) = i_12.w
                            
                            i_6 += 1
                            rsi_3 += 0xc
                            
                            if (i_6 s>= r15_1)
                                rdx_2 = rax_16
                                r11_1 = rax_8
                                goto label_14261cbd6
                        
                        break
                    
                label_14261cbd6:
                    r12_2 = var_f4_1
                    r14_1 += 1
                    
                    if (r14_1 s>= r11_1)
                        rsi_1 = var_f8_1
                        r15 = arg3
                        rdi_1 = var_a0_1
                        goto label_14261cc09
                
                break
            
        label_14261cc09:
            uint64_t i_8 = zx.q(i_11)
            
            if (i_8 != 0)
                void* rdx_12 = rax_3 + 2
                uint64_t i_3
                
                do
                    int16_t r8_4 = *(rdx_12 + 2)
                    int16_t r10_3 = rsi_1
                    
                    if (r8_4 == 0xffff || *(rdi_1 + (zx.q(r8_4) << 2)) != zx.d(*(rdx_12 - 2)))
                        rsi_1 += 1
                        r8_4 = r10_3
                    
                    *rdx_12 = r8_4
                    rdx_12 += 6
                    i_3 = i_8
                    i_8 -= 1
                while (i_3 != 1)
                var_f8_1 = rsi_1
            
            if (r15 s< r11_1)
                int64_t r9_5 = sx.q(r12_2 + r15) << 2
                uint64_t i_9 = zx.q(r11_1 - r15)
                uint64_t i_4
                
                do
                    int32_t rcx_19 = *(r9_5 + *(arg2 + 0x40))
                    int32_t rax_34 = rcx_19 & 0xffffff
                    uint64_t rdx_13 = zx.q(rax_34)
                    uint64_t r8_5 = zx.q(rax_34 + (rcx_19 u>> 0x18))
                    
                    if (rdx_13 u< r8_5)
                        do
                            int16_t rax_35 = *(arg4 + (rdx_13 << 1))
                            
                            if (rax_35 != 0xffff)
                                *(arg4 + (rdx_13 << 1)) = *(rax_3 + zx.q(rax_35) * 6 + 2)
                            
                            rdx_13 += 1
                        while (rdx_13 s< r8_5)
                    
                    r9_5 += 4
                    i_4 = i_9
                    i_9 -= 1
                while (i_4 != 1)
                rsi_1 = var_f8_1
            
            r12_2 += var_f0
            int32_t rdx_15 = var_e8_1 + 1
            var_e8_1 = rdx_15
            var_f4_1 = r12_2
            
            if (rdx_15 s>= rax_6)
                rbp = arg1
                r14 = var_d0
                r12 = zx.q(var_f0)
                goto label_14261cd4a
            
            i_6 = zx.q(i_10)
    
    if (var_a0_1 != 0)
        data_143b502b0(var_a0_1)
    
    data_143b502b0(rax_3)
    result = zx.q(i_6.b)
else
    sub_14262d160(rbp, (rax_3 + 3).d, "CollectLayerRegionsMonotone: Out of memory 'sweeps' (%d).", 
        zx.q(rbx.d))
    result.b = 0

__security_check_cookie(rax_1 ^ &var_138)
return result
