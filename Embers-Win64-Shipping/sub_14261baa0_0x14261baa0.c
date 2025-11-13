// 函数: sub_14261baa0
// 地址: 0x14261baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rbp = arg1
int32_t* r15 = arg7
uint64_t rbx = zx.q(arg3)
int32_t rdi = arg4.d
int32_t rax_4 = *arg2
int32_t rax_5 = arg2[1]
int32_t var_b8 = arg4.d
int32_t var_a8 = rbx.d
int32_t* var_78 = r15
void* rax_6 = data_143b502a8(zx.q((arg4 * 3).d * 2), 1)
void* var_d0 = rax_6
int32_t rsi = rdi
uint64_t result

if (rax_6 != 0)
    uint64_t rdi_1 = 0x100
    int32_t var_bc_1 = 0x100
    int32_t r10_1 = rax_4
    int64_t var_a0_1 = data_143b502a8(0x400, 1)
    int32_t r9_2 = r10_1 - rbx.d
    int16_t var_104_1 = 0
    int32_t var_fc_1 = rbx.d
    int32_t r13_1 = 0x100
    int32_t var_f0_1 = r9_2
    int16_t r12_1 = 0
    int32_t r14_1 = rbx.d
    int32_t var_108
    int32_t var_c0
    int32_t var_b0
    int32_t var_98
    int32_t var_90
    int32_t var_88
    int32_t var_80
    uint64_t var_70
    
    if (rbx.d s>= r9_2)
    label_14261c07e:
        uint64_t rax_38 = zx.q(r12_1)
        *r15 = rax_38.d
        
        if (rax_38.d != 0)
            int64_t rax_40 = data_143b502a8(zx.q((rax_38 * 3).d << 4), 1)
            rbx = arg6
            *rbx = rax_40
            int64_t rax_41 = sx.q(*r15)
            
            if (rax_40 != 0)
                memset(rax_40, 0, rax_41 * 0x30)
                int32_t i = 0
                
                if (*r15 s> 0)
                    int64_t rdx_19 = 0
                    
                    do
                        rdx_19 += 0x30
                        i += 1
                        *(*rbx + rdx_19 - 4) = 0xffff
                        *(*rbx + rdx_19 - 8) = 0xffff
                        *(*rbx + rdx_19 - 6) = 0
                    while (i s< *r15)
                
                uint64_t i_12 = 0x40
                int32_t i_7 = 0x40
                int64_t rax_45 = data_143b502a8(0x100, 1, i, 0, var_108, i_7, rax_4, var_f0_1, 
                    arg2, arg5, arg6, var_d0, arg1, var_c0, var_b8, var_b0, var_a8, var_a0_1, 
                    var_98, var_90, var_88, var_80, var_78)
                var_f0_1.q = rax_45
                uint64_t i_16 = 0x40
                var_104_1.d = 0
                int64_t r14_3 = rax_45
                int32_t r11_3 = 0
                int32_t rax_46 = rax_5
                
                if (rax_46 s> 0)
                    int32_t rcx_27 = rax_4
                    
                    do
                        int32_t var_108_1 = 0
                        int32_t r10_4 = 0
                        
                        if (rcx_27 s> 0)
                            int32_t rax_48 = r11_3 * rcx_27
                            int32_t var_a8_1 = rax_48
                            
                            do
                                int32_t* r8_15 = arg2
                                int32_t* rdi_5 = *(r8_15 + 0x40) + (sx.q(rax_48 + r10_4) << 2)
                                int32_t temp2_1 = i_12.d
                                
                                if (temp2_1 s< 0)
                                    if (temp2_1 == 0)
                                        i_12 = 0
                                        i_7 = 0
                                    else if (temp2_1 s< 0)
                                        int32_t temp3_1
                                        int32_t temp4_1
                                        
                                        do
                                            temp3_1 = i_12.d
                                            temp4_1 = i_12.d
                                            i_12 = zx.q(i_12.d * 2)
                                        while (temp3_1 + temp4_1 s< 0)
                                        i_7 = i_12.d
                                    
                                    int64_t rax_51 = data_143b502a8(zx.q((i_12 << 2).d), 1)
                                    
                                    if (i_16.d != 0 && rax_51 != 0)
                                        memcpy(rax_51, r14_3, i_16.d << 2)
                                    
                                    if (r14_3 != 0)
                                        data_143b502b0(r14_3)
                                    
                                    r10_4 = var_108_1
                                    r14_3 = rax_51
                                    r11_3 = var_104_1.d
                                    r8_15 = arg2
                                    var_f0_1.q = rax_51
                                    rbx = arg6
                                
                                int32_t rcx_32 = *rdi_5
                                i_16 = 0
                                int32_t i_8 = 0
                                int32_t rax_53 = rcx_32 & 0xffffff
                                uint64_t rdx_21 = zx.q(rax_53)
                                uint64_t rax_54 = zx.q(rax_53 + (rcx_32 u>> 0x18))
                                var_b0.q = rdx_21
                                
                                if (rdx_21 u< rax_54)
                                    int64_t rdi_6 = arg5
                                    uint64_t rcx_35 = rdx_21 * 0xc
                                    var_90.q = rcx_35
                                    
                                    while (true)
                                        int16_t r12_4 = *(rdi_6 + (rdx_21 << 1))
                                        int16_t* r13_4 = *(r8_15 + 0x48) + rcx_35
                                        
                                        if (r12_4 != 0xffff)
                                            int64_t rcx_36 = *rbx
                                            int16_t rdx_22 = *r13_4
                                            uint64_t r9_11 = zx.q(r12_4) * 0x30
                                            uint64_t var_c8_1 = r9_11
                                            
                                            if (*(rcx_36 + r9_11 + 0x28) u< rdx_22)
                                                rdx_22 = *(rcx_36 + r9_11 + 0x28)
                                            
                                            *(rcx_36 + r9_11 + 0x28) = rdx_22
                                            int64_t rcx_37 = *rbx
                                            int16_t rdx_23 = *r13_4
                                            
                                            if (*(rcx_37 + r9_11 + 0x2a) u> rdx_23)
                                                rdx_23 = *(rcx_37 + r9_11 + 0x2a)
                                            
                                            *(rcx_37 + r9_11 + 0x2a) = rdx_23
                                            int32_t i_1 = (i_16 + 1).d
                                            *(r9_11 + *rbx) = divs.dp.d(sx.q(r10_4), var_b8)
                                                - mods.dp.d(sx.q(r11_3), var_b8) + r11_3
                                            
                                            if (i_1 s> i_12.d)
                                                if (i_12.d == 0)
                                                    i_12 = zx.q(i_1)
                                                    i_7 = i_1
                                                else if (i_12.d s< i_1)
                                                    do
                                                        i_12 = zx.q(i_12.d * 2)
                                                    while (i_12.d s< i_1)
                                                    
                                                    i_7 = i_12.d
                                                
                                                int64_t rax_63 =
                                                    data_143b502a8(zx.q((i_12 << 2).d), 1)
                                                
                                                if (i_16.d != 0 && rax_63 != 0)
                                                    memcpy(rax_63, r14_3, i_16.d << 2)
                                                
                                                if (r14_3 != 0)
                                                    data_143b502b0(r14_3)
                                                
                                                r9_11 = var_c8_1
                                                r14_3 = rax_63
                                                r10_4 = var_108_1
                                                r11_3 = var_104_1.d
                                                var_f0_1.q = rax_63
                                                rdi_6 = arg5
                                            
                                            i_8 = i_1
                                            uint64_t r15_4 = 0
                                            *(r14_3 + (sx.q(i_1) << 2) - 4) = zx.d(r12_4)
                                            
                                            do
                                                uint32_t r8_18 =
                                                    zx.d((*(r13_4 + 4) u>> (r15_4 << 3).b).b)
                                                
                                                if (r8_18 != 0xff)
                                                    uint64_t rax_68 = zx.q(r15_4.d) & 3
                                                    __builtin_memcpy(&var_70, 
                                                        "\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x"
                                                    "00\xff\xff\xff\xff\xff\xff\xff\xff\x00\x00\x00"
                                                    "00\x01\x00\x00\x00\x00\x00\x00\x00", 
                                                        0x20)
                                                    int128_t var_60
                                                    uint64_t rdx_31 = zx.q((*(*(arg2 + 0x40) + (sx
                                                        .q(
                                                        (*(&var_70 + (rax_68 << 2)) + r11_3) * rax_4
                                                        + *(&var_60 + (rax_68 << 2)) + r10_4) << 2))
                                                        & 0xffffff) + r8_18)
                                                    int16_t rcx_51 = *(rdi_6 + (rdx_31 << 1))
                                                    
                                                    if (rcx_51 != 0xffff && rcx_51 != r12_4)
                                                        uint32_t r14_4 = zx.d(rcx_51)
                                                        int32_t i_2 = 0
                                                        void* rdi_9 = *arg6 + r9_11
                                                        int64_t rbp_3 = sx.q(*(rdi_9 + 0x10))
                                                        
                                                        if (rbp_3.d s> 0)
                                                            int32_t* rax_72 = *(rdi_9 + 8)
                                                            
                                                            do
                                                                if (*rax_72 == r14_4)
                                                                    goto label_14261c500
                                                                
                                                                i_2 += 1
                                                                rax_72 = &rax_72[1]
                                                            while (i_2 s< rbp_3.d)
                                                        
                                                        uint64_t i_10 = zx.q(*(rdi_9 + 0x14))
                                                        int32_t i_3 = (rbp_3 + 1).d
                                                        int64_t rsi_2
                                                        
                                                        if (i_3 s<= i_10.d)
                                                            rsi_2 = *(rdi_9 + 8)
                                                        else
                                                            int32_t i_9 = i_10.d
                                                            
                                                            if (i_10.d == 0)
                                                                *(rdi_9 + 0x14) = i_3
                                                                i_10 = zx.q(i_3)
                                                                i_9 = i_3
                                                            
                                                            if (i_10.d s< i_3)
                                                                i_10 = zx.q(i_9)
                                                                
                                                                do
                                                                    i_10 = zx.q(i_10.d * 2)
                                                                while (i_10.d s< i_3)
                                                                
                                                                *(rdi_9 + 0x14) = i_10.d
                                                            
                                                            rsi_2 =
                                                                data_143b502a8(zx.q((i_10 << 2).d), 1)
                                                            int64_t rax_74 = sx.q(*(rdi_9 + 0x10))
                                                            
                                                            if (rax_74.d != 0 && rsi_2 != 0)
                                                                memcpy(rsi_2, *(rdi_9 + 8), 
                                                                    (rax_74 << 2).d)
                                                            
                                                            int64_t rcx_54 = *(rdi_9 + 8)
                                                            
                                                            if (rcx_54 != 0)
                                                                data_143b502b0(rcx_54)
                                                            
                                                            r9_11 = var_c8_1
                                                            r10_4 = var_108_1
                                                            r11_3 = var_104_1.d
                                                            *(rdi_9 + 8) = rsi_2
                                                        
                                                        *(rdi_9 + 0x10) = i_3
                                                        *(rsi_2 + (rbp_3 << 2)) = r14_4
                                                
                                            label_14261c500:
                                                rdi_6 = arg5
                                                r15_4 = zx.q(r15_4.d + 1)
                                            while (r15_4.d s< 4)
                                            
                                            rdx_21 = var_b0.q
                                            rcx_35 = var_90.q
                                            i_12 = zx.q(i_7)
                                            i_16 = zx.q(i_8)
                                            r8_15 = arg2
                                        
                                        r14_3 = var_f0_1.q
                                        rdx_21 += 1
                                        rcx_35 += 0xc
                                        var_b0.q = rdx_21
                                        var_90.q = rcx_35
                                        
                                        if (rdx_21 s>= rax_54)
                                            break
                                        
                                        rbx = arg6
                                
                                int32_t i_15 = (i_16 - 1).d
                                uint64_t i_18 = sx.q(i_16.d)
                                int64_t i_11 = sx.q(i_15)
                                var_b0.q = i_11
                                
                                if (i_15 s> 0)
                                    int32_t* r8_21 = var_f0_1.q
                                    int64_t rax_75 = 1
                                    int64_t var_c8_2 = 1
                                    int32_t* r13_5 = r8_21
                                    int64_t i_4
                                    
                                    do
                                        int64_t r12_5 = rax_75
                                        
                                        if (rax_75 s< i_18)
                                            do
                                                int64_t rcx_55 = sx.q(*r13_5)
                                                int64_t rbp_4 = sx.q(r8_21[r12_5])
                                                
                                                if (rcx_55.d != rbp_4.d)
                                                    int32_t rcx_56 = 0
                                                    void* rdi_12 = rcx_55 * 0x30 + *arg6
                                                    void* rsi_6 = rbp_4 * 0x30 + *arg6
                                                    int64_t r15_5 = sx.q(*(rdi_12 + 0x20))
                                                    
                                                    if (r15_5.d s<= 0)
                                                    label_14261c5e5:
                                                        uint64_t j_5 = zx.q(*(rdi_12 + 0x24))
                                                        int32_t j = (r15_5 + 1).d
                                                        int64_t r14_5
                                                        
                                                        if (j s<= j_5.d)
                                                            r14_5 = *(rdi_12 + 0x18)
                                                        else
                                                            int32_t j_3 = j_5.d
                                                            
                                                            if (j_5.d == 0)
                                                                *(rdi_12 + 0x24) = j
                                                                j_5 = zx.q(j)
                                                                j_3 = j
                                                            
                                                            if (j_5.d s< j)
                                                                j_5 = zx.q(j_3)
                                                                
                                                                do
                                                                    j_5 = zx.q(j_5.d * 2)
                                                                while (j_5.d s< j)
                                                                
                                                                *(rdi_12 + 0x24) = j_5.d
                                                            
                                                            r14_5 =
                                                                data_143b502a8(zx.q((j_5 << 2).d), 1)
                                                            int64_t rax_79 = sx.q(*(rdi_12 + 0x20))
                                                            
                                                            if (rax_79.d != 0 && r14_5 != 0)
                                                                memcpy(r14_5, *(rdi_12 + 0x18), 
                                                                    (rax_79 << 2).d)
                                                            
                                                            int64_t rcx_59 = *(rdi_12 + 0x18)
                                                            
                                                            if (rcx_59 != 0)
                                                                data_143b502b0(rcx_59)
                                                            
                                                            *(rdi_12 + 0x18) = r14_5
                                                        
                                                        *(rdi_12 + 0x20) = j
                                                        *(r14_5 + (r15_5 << 2)) = rbp_4.d
                                                    else
                                                        int32_t* rax_77 = *(rdi_12 + 0x18)
                                                        
                                                        while (*rax_77 != rbp_4.d)
                                                            rcx_56 += 1
                                                            rax_77 = &rax_77[1]
                                                            
                                                            if (rcx_56 s>= r15_5.d)
                                                                goto label_14261c5e5
                                                    
                                                    int64_t rbp_5 = sx.q(*(rsi_6 + 0x20))
                                                    int32_t j_1 = 0
                                                    int32_t r14_6 = *r13_5
                                                    
                                                    if (rbp_5.d s> 0)
                                                        int32_t* rax_80 = *(rsi_6 + 0x18)
                                                        
                                                        do
                                                            if (*rax_80 == r14_6)
                                                                goto label_14261c708
                                                            
                                                            j_1 += 1
                                                            rax_80 = &rax_80[1]
                                                        while (j_1 s< rbp_5.d)
                                                    
                                                    uint64_t j_6 = zx.q(*(rsi_6 + 0x24))
                                                    int32_t j_2 = (rbp_5 + 1).d
                                                    int64_t rdi_13
                                                    
                                                    if (j_2 s<= j_6.d)
                                                        rdi_13 = *(rsi_6 + 0x18)
                                                    else
                                                        int32_t j_4 = j_6.d
                                                        
                                                        if (j_6.d == 0)
                                                            *(rsi_6 + 0x24) = j_2
                                                            j_6 = zx.q(j_2)
                                                            j_4 = j_2
                                                        
                                                        if (j_6.d s< j_2)
                                                            j_6 = zx.q(j_4)
                                                            
                                                            do
                                                                j_6 = zx.q(j_6.d * 2)
                                                            while (j_6.d s< j_2)
                                                            
                                                            *(rsi_6 + 0x24) = j_6.d
                                                        
                                                        rdi_13 =
                                                            data_143b502a8(zx.q((j_6 << 2).d), 1)
                                                        int64_t rax_82 = sx.q(*(rsi_6 + 0x20))
                                                        
                                                        if (rax_82.d != 0 && rdi_13 != 0)
                                                            memcpy(rdi_13, *(rsi_6 + 0x18), 
                                                                (rax_82 << 2).d)
                                                        
                                                        int64_t rcx_62 = *(rsi_6 + 0x18)
                                                        
                                                        if (rcx_62 != 0)
                                                            data_143b502b0(rcx_62)
                                                        
                                                        *(rsi_6 + 0x18) = rdi_13
                                                    
                                                    *(rsi_6 + 0x20) = j_2
                                                    *(rdi_13 + (rbp_5 << 2)) = r14_6
                                                
                                            label_14261c708:
                                                i_16 = sx.q(i_8)
                                                r12_5 += 1
                                                r8_21 = var_f0_1.q
                                                i_18 = i_16
                                            while (r12_5 s< i_16)
                                            
                                            rax_75 = var_c8_2
                                            i_11 = var_b0.q
                                        
                                        rax_75 += 1
                                        r13_5 = &r13_5[1]
                                        i_4 = i_11
                                        i_11 -= 1
                                        var_c8_2 = rax_75
                                        var_b0.q = i_11
                                    while (i_4 != 1)
                                    r10_4 = var_108_1
                                
                                rcx_27 = rax_4
                                r10_4 += 1
                                i_12 = zx.q(i_7)
                                r14_3 = var_f0_1.q
                                r11_3 = var_104_1.d
                                rax_48 = var_a8_1
                                rbx = arg6
                                var_108_1 = r10_4
                            while (r10_4 s< rcx_27)
                            
                            rax_46 = rax_5
                        
                        r11_3 += 1
                        var_104_1.d = r11_3
                    while (r11_3 s< rax_46)
                
                rbx.b = 1
                
                if (r14_3 != 0)
                    data_143b502b0(r14_3)
            else
                sub_14262d160(rbp, (rax_40 + 3).d, 
                    "CollectLayerRegionsChunky: Out of memory 'regs' (%d).", zx.q(rax_41.d))
                rbx.b = 0
        else
            rbx.b = 1
            *arg6 = 0
    else
        int32_t r11_1 = rsi
        int32_t r8_1 = rax_5 - rbx.d
        var_b0 = r8_1
        
        while (true)
            int32_t var_94_1 = rbx.d
            int32_t rcx_3 = rbx.d
            
            if (rbx.d s< r8_1)
                int32_t rax_8 = r11_1 + r14_1
                int32_t rdx_1 = r9_2
                
                if (rax_8 s< r9_2)
                    rdx_1 = rax_8
                
                var_98 = rdx_1
                
                while (true)
                    int32_t rdx_17 = r11_1 + rcx_3
                    var_108 = rcx_3
                    var_90 = rdx_17
                    int32_t rax_9 = r8_1
                    int32_t rbp_1 = rcx_3
                    
                    if (rdx_17 s< r8_1)
                        rax_9 = rdx_17
                    
                    if (rcx_3 s< rax_9)
                        int32_t r15_2 = rcx_3 * r10_1
                        var_c0 = r15_2
                        
                        while (true)
                            int64_t rdi_2
                            
                            if (zx.d(r12_1) + 1 s<= rdi_1.d)
                                rdi_2 = var_a0_1
                            else
                                if (rdi_1.d == 0)
                                    rdi_1 = zx.q(zx.d(r12_1) + 1)
                                    var_bc_1 = zx.d(r12_1) + 1
                                else if (rdi_1.d s< zx.d(r12_1) + 1)
                                    do
                                        rdi_1 = zx.q(rdi_1.d * 2)
                                    while (rdi_1.d s< zx.d(r12_1) + 1)
                                    
                                    var_bc_1 = rdi_1.d
                                
                                int64_t rax_10 = data_143b502a8(zx.q((rdi_1 << 2).d), 1)
                                rdi_2 = rax_10
                                
                                if (r13_1 != 0 && rax_10 != 0)
                                    memcpy(rax_10, var_a0_1, r13_1 << 2)
                                
                                if (var_a0_1 != 0)
                                    data_143b502b0(var_a0_1)
                                
                                var_a0_1 = rdi_2
                            
                            var_80 = zx.d(r12_1) + 1
                            memset(rdi_2, 0, zx.q(r12_1) << 2)
                            int32_t rbx_3 = var_98
                            int16_t i_17 = 0
                            int32_t r13_2 = r14_1
                            
                            if (r14_1 s< rbx_3)
                                while (true)
                                    int32_t rdi_3 = r15_2 + r13_2
                                    var_88 = rdi_3
                                    int32_t rdx_3 = *(*(arg2 + 0x40) + (sx.q(rdi_3) << 2))
                                    uint64_t rax_15 = zx.q(rdx_3) & 0xffffff
                                    uint64_t r15_3 = zx.q(rax_15.d)
                                    rbx = zx.q(rax_15.d + (rdx_3 u>> 0x18))
                                    var_70 = rbx
                                    
                                    if (r15_3 u< rbx)
                                        int32_t* rdx_5 = arg2
                                        uint64_t r12_3 = rax_15 * 0xc
                                        
                                        while (true)
                                            int64_t r9_3 = *(rdx_5 + 0x58)
                                            int64_t r14_2 = *(rdx_5 + 0x48)
                                            
                                            if (*(r9_3 + r15_3) != 0)
                                                int32_t r8_6 = *(r14_2 + r12_3 + 4)
                                                uint32_t i_19 = 0xffff
                                                uint32_t r10_2 = zx.d(r8_6.b)
                                                
                                                if (r10_2 != 0xff && r13_2 s> var_fc_1)
                                                    uint64_t rdx_8 = zx.q((
                                                        *(*(rdx_5 + 0x40) + (sx.q(rdi_3) << 2) - 4)
                                                        & 0xffffff) + r10_2)
                                                    
                                                    if (*(r9_3 + rdx_8) != 0)
                                                        int16_t rax_17 = *(arg5 + (rdx_8 << 1))
                                                        
                                                        if (rax_17 != 0xffff)
                                                            i_19.w = rax_17
                                                
                                                void* r9_4
                                                
                                                if (i_19.w != 0xffff)
                                                    r9_4 = var_d0
                                                else
                                                    i_19 = zx.d(i_17)
                                                    i_17 += 1
                                                    uint64_t rdi_4 = zx.q(i_19 + 1)
                                                    
                                                    if (rdi_4.d s<= rsi)
                                                        r9_4 = var_d0
                                                    else
                                                        uint32_t count = (rdi_4 * 3).d * 2
                                                        void* rax_18 =
                                                            data_143b502a8(zx.q(count), 1)
                                                        void* rbx_5
                                                        
                                                        if (rax_18 == 0)
                                                            rbx_5 = var_d0
                                                        else
                                                            rbx_5 = var_d0
                                                            memcpy(rax_18, rbx_5, count)
                                                        
                                                        data_143b502b0(rbx_5)
                                                        r9_4 = rax_18
                                                        rbx = var_70
                                                        var_d0 = rax_18
                                                        rsi = rdi_4.d
                                                    
                                                    if (r9_4 == 0)
                                                        sub_14262d160(arg1, 3, 
                                                            "CollectLayerRegionsChunky: Out of memory "
                                                        "'sweeps' resize (%d).", 
                                                            zx.q(rdi_4.d))
                                                        rbx.b = 0
                                                        break
                                                    
                                                    rdi_3 = var_88
                                                    uint64_t rcx_14 = zx.q(i_19.w) * 3
                                                    *(r9_4 + (rcx_14 << 1) + 4) = 0xffff
                                                    *(r9_4 + (rcx_14 << 1)) = 0
                                                    r8_6 = *(r14_2 + r12_3 + 4)
                                                
                                                uint32_t r8_8 = r8_6 u>> 0x18
                                                
                                                if (r8_8 != 0xff && var_108 s> var_94_1)
                                                    int16_t rdx_13 = *(arg5 + (zx.q((*(
                                                        *(arg2 + 0x40)
                                                        + (sx.q(var_c0 - rax_4 + r13_2) << 2))
                                                        & 0xffffff) + r8_8) << 1))
                                                    
                                                    if (rdx_13 != 0xffff)
                                                        uint64_t rcx_17 = zx.q(i_19.w) * 3
                                                        int16_t rax_27
                                                        
                                                        if (*(r9_4 + (rcx_17 << 1)) != 0)
                                                            rax_27 = *(r9_4 + (rcx_17 << 1) + 4)
                                                        else
                                                            *(r9_4 + (rcx_17 << 1) + 4) = rdx_13
                                                            rax_27 = rdx_13
                                                        
                                                        if (rax_27 != rdx_13)
                                                            *(r9_4 + (rcx_17 << 1) + 4) = 0xffff
                                                        else
                                                            *(r9_4 + (rcx_17 << 1)) += 1
                                                            uint64_t rax_28 = zx.q(rdx_13)
                                                            *(var_a0_1 + (rax_28 << 2)) += 1
                                                
                                                rdx_5 = arg2
                                                *(arg5 + (r15_3 << 1)) = i_19.w
                                            
                                            r15_3 += 1
                                            r12_3 += 0xc
                                            
                                            if (r15_3 s>= rbx)
                                                goto label_14261bf0a
                                        
                                        break
                                    
                                label_14261bf0a:
                                    rbx_3 = var_98
                                    r13_2 += 1
                                    r15_2 = var_c0
                                    
                                    if (r13_2 s>= rbx_3)
                                        rbp_1 = var_108
                                        r14_1 = var_fc_1
                                        r12_1 = var_104_1
                                        rdi_2 = var_a0_1
                                        goto label_14261bf39
                                
                                break
                            
                        label_14261bf39:
                            uint64_t i_13 = zx.q(i_17)
                            
                            if (i_13 != 0)
                                void* rdx_15 = var_d0 + 2
                                uint64_t i_5
                                
                                do
                                    int16_t r8_9 = *(rdx_15 + 2)
                                    int16_t r9_5 = r12_1
                                    
                                    if (r8_9 == 0xffff
                                            || *(rdi_2 + (zx.q(r8_9) << 2)) != zx.d(*(rdx_15 - 2)))
                                        r12_1 += 1
                                        r8_9 = r9_5
                                    
                                    *rdx_15 = r8_9
                                    rdx_15 += 6
                                    i_5 = i_13
                                    i_13 -= 1
                                while (i_5 != 1)
                                var_104_1 = r12_1
                            
                            if (r14_1 s< rbx_3)
                                int64_t r9_7 = sx.q(r15_2 + r14_1) << 2
                                uint64_t i_14 = zx.q(rbx_3 - r14_1)
                                uint64_t i_6
                                
                                do
                                    int32_t rcx_19 = *(r9_7 + *(arg2 + 0x40))
                                    int32_t rax_34 = rcx_19 & 0xffffff
                                    uint64_t rdx_16 = zx.q(rax_34)
                                    uint64_t r8_10 = zx.q(rax_34 + (rcx_19 u>> 0x18))
                                    
                                    if (rdx_16 u< r8_10)
                                        do
                                            int16_t rax_35 = *(arg5 + (rdx_16 << 1))
                                            
                                            if (rax_35 != 0xffff)
                                                *(arg5 + (rdx_16 << 1)) =
                                                    *(var_d0 + zx.q(rax_35) * 6 + 2)
                                            
                                            rdx_16 += 1
                                        while (rdx_16 s< r8_10)
                                    
                                    r9_7 += 4
                                    i_6 = i_14
                                    i_14 -= 1
                                while (i_6 != 1)
                                rbp_1 = var_108
                            
                            r10_1 = rax_4
                            rbp_1 += 1
                            rdi_1 = zx.q(var_bc_1)
                            r15_2 += r10_1
                            r13_1 = var_80
                            var_108 = rbp_1
                            var_c0 = r15_2
                            
                            if (rbp_1 s>= rax_9)
                                rdx_17 = var_90
                                r8_1 = var_b0
                                r11_1 = var_b8
                                goto label_14261c040
                        
                        break
                    
                label_14261c040:
                    var_94_1 = rdx_17
                    rcx_3 = rdx_17
                    
                    if (rdx_17 s>= r8_1)
                        r9_2 = var_f0_1
                        rbx = zx.q(var_a8)
                        goto label_14261c05e
                
                break
            
        label_14261c05e:
            r14_1 += r11_1
            var_fc_1 = r14_1
            
            if (r14_1 s>= r9_2)
                r15 = var_78
                rbp = arg1
                goto label_14261c07e
    
    if (var_a0_1 != 0)
        data_143b502b0(var_a0_1)
    
    if (var_d0 != 0)
        data_143b502b0(var_d0)
    
    result = zx.q(rbx.b)
else
    sub_14262d160(rbp, (rax_6 + 3).d, "CollectLayerRegionsChunky: Out of memory 'sweeps' (%d).", 
        zx.q(rdi))
    result.b = 0

__security_check_cookie(rax_1 ^ &var_128)
return result
