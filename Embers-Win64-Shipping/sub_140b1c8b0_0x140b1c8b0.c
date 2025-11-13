// 函数: sub_140b1c8b0
// 地址: 0x140b1c8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1].d
uint64_t rdi = *arg1
int16_t* var_48 = nullptr
int32_t var_40 = rbx

if (rbx != 0)
    sub_1405a4c70(&var_48, rbx, 0)
    memcpy(var_48, rdi, rbx * 2)
else
    int32_t var_3c_1 = 0

uint64_t var_38
int64_t* rax = sub_140a300d0(&var_48, &var_38, &data_142d5a024, &(*U"{}[\nt")[3], 0)

if (&var_48 != rax)
    int16_t* rcx_3 = var_48
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    var_48 = *rax
    *rax = 0
    var_40 = rax[1].d
    int32_t var_3c_2 = *(rax + 0xc)
    rax[1] = 0

uint64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int16_t* rbx_2

if (var_40 == 0)
    rbx_2 = var_48
    rdi.b = 1
else
    rbx_2 = var_48
    int16_t r8_3 = *rbx_2
    
    if (r8_3 == 0)
        rdi.b = 1
    else
        uint32_t rcx_6 = zx.d(r8_3)
        int32_t rax_3
        rax_3.w = sbb.w((rcx_6 - 0x61).w, (rcx_6 - 0x61).w, rcx_6 - 0x61 u< 0x1a)
        rax_3.w &= 0x20
        int32_t rax_4
        rax_4.w = sbb.w((rcx_6 - 0x41).w, (rcx_6 - 0x41).w, rcx_6 - 0x41 u< 0x1a)
        rax_4.w &= 0x20
        rax_4.w += r8_3
        
        if (r8_3 - rax_3.w != rax_4.w && rbx_2[1] == 0x3a)
            if (rbx_2[2] != 0 && (*rbx_2 != 0x5c || rbx_2[1] != 0)
                    && (*rbx_2 != 0x5c || rbx_2[1] != 0x5c || rbx_2[2] != 0))
                goto label_140b1ca2c
            
            rdi.b = 1
        else if ((*rbx_2 != 0x5c || rbx_2[1] != 0)
            && (*rbx_2 != 0x5c || rbx_2[1] != 0x5c || rbx_2[2] != 0))
        label_140b1ca2c:
            wchar16* rax_10
            
            if (r8_3 == 0x5c && rbx_2[1] == r8_3)
                rax_10 = wcschr(&rbx_2[2], 0x5c)
            
            if (r8_3 == 0x5c && rbx_2[1] == r8_3 && rax_10 == 0)
                rbx_2 = var_48
                rdi.b = 1
            else
                int32_t rdx_6 = 0
                int32_t rcx_8 = 0
                int32_t var_50_1 = 0
                int32_t var_4c_1 = 0
                int16_t* var_58 = nullptr
                
                if (*rbx_2 != 0)
                    int64_t rdi_1 = -1
                    
                    do
                        rdi_1 += 1
                    while (rbx_2[rdi_1] != 0)
                    
                    rdi = zx.q(rdi_1.d + 1)
                    
                    if (rdi.d s> 0)
                        sub_1405947f0(&var_58, rdi.d)
                        rcx_8 = var_4c_1
                        rdx_6 = var_50_1
                    
                    int32_t rax_11 = rdx_6 + rdi.d
                    var_50_1 = rax_11
                    
                    if (rax_11 s> rcx_8)
                        sub_140594770(&var_58)
                    
                    UnDecorator::getReferenceType(var_58, rbx_2, rdi.d * 2)
                
                int32_t rbx_4
                
                if (*rbx_2 == 0 || var_50_1 == 0)
                    rbx_4 = 0
                else
                    rbx_4 = var_50_1 - 1
                
                if (sub_140a23cf0(&var_58, &(*U"{}[\nt")[3], 0, 1, 0xffffffff) != rbx_4 - 1)
                    sub_140a20ba0(&var_58, &(*U"{}[\nt")[3], 1)
                
                uint64_t var_68 = 0
                int64_t var_60_1 = 0
                int32_t rax_13 = sub_140a23cf0(&var_58, &data_142e76600, 0, 0, 0xffffffff)
                int32_t rbx_5
                
                if (rax_13 == 0xffffffff)
                    if (sub_140a32ae0(&var_58, &data_142d84ee8, 0) != 1)
                        rbx_5 = var_60_1.d
                    else
                        int32_t rdx_13 = var_50_1 - 1
                        
                        if (var_50_1 == 0)
                            rdx_13 = 0
                        
                        int32_t rcx_26
                        int16_t* r8_9
                        
                        if (var_50_1 == 0)
                            rcx_26 = 0
                            r8_9 = &data_142d40450
                        else
                            r8_9 = var_58
                            rcx_26 = var_50_1 - 1
                        
                        int32_t rax_18
                        
                        if (rdx_13 - 2 s>= 0)
                            rax_18 = rcx_26
                            
                            if (rdx_13 - 2 s< rcx_26)
                                rax_18 = rdx_13 - 2
                        else
                            rax_18 = 0
                        
                        uint64_t r14_2 = 0
                        int32_t rsi_2 = 0
                        var_38 = 0
                        int32_t var_30
                        var_30.q = 0
                        int32_t r15_2 = 0
                        rdi = &r8_9[sx.q(rcx_26) - sx.q(rax_18)]
                        
                        if (rdi != 0 && *rdi != 0)
                            int64_t rbx_6 = -1
                            
                            do
                                rbx_6 += 1
                            while (*(rdi + (rbx_6 << 1)) != 0)
                            
                            int32_t var_2c
                            
                            if (rbx_6.d + 1 s> 0)
                                sub_1405947f0(&var_38, rbx_6.d + 1)
                                r15_2 = var_2c
                                rsi_2 = var_30
                                r14_2 = var_38
                            
                            rsi_2 += rbx_6.d + 1
                            
                            if (rsi_2 s> r15_2)
                                sub_140594770(&var_38)
                                r15_2 = var_2c
                                r14_2 = var_38
                            
                            UnDecorator::getReferenceType(r14_2, rdi, (rbx_6.d + 1) * 2)
                        
                        uint64_t rcx_32 = var_68
                        
                        if (rcx_32 != 0)
                            sub_140a74f90(rcx_32)
                        
                        var_68 = r14_2
                        var_60_1.d = rsi_2
                        var_60_1:4.d = r15_2
                        int32_t rax_20 = sub_140a23cf0(&var_68, &(*U"{}[\nt")[3], 0, 0, 0xffffffff)
                        
                        if (rax_20 == 0xffffffff)
                            int32_t rax_26 = var_60_1:4.d
                            rbx_5 = 0
                            var_60_1.d = 0
                            
                            if (rax_26 s< 0 && rax_26 != 0)
                                sub_1405947f0(&var_68, 0)
                                rbx_5 = var_60_1.d
                            
                            uint64_t rcx_38 = var_68
                            
                            if (rcx_38 != 0)
                                *rcx_38 = 0
                                rbx_5 = var_60_1.d
                        else
                            rbx_5 = var_60_1.d
                            int32_t rcx_34 = rbx_5 - 1
                            
                            if (rbx_5 == 0)
                                rcx_34 = 0
                            
                            int32_t rcx_35 = rcx_34 - rax_20
                            int32_t rax_21 = rbx_5 - 1
                            
                            if (rbx_5 == 0)
                                rax_21 = 0
                            
                            int32_t rdx_18
                            
                            if (rcx_35 - 1 s>= 0)
                                rdx_18 = rax_21
                                
                                if (rcx_35 s<= rax_21)
                                    rdx_18 = rcx_35 - 1
                            else
                                rdx_18 = 0
                            
                            int32_t rax_22 = rax_21 - rdx_18
                            rdi = zx.q(rbx_5 - 1)
                            
                            if (rbx_5 == 0)
                                rdi = 0
                            
                            if (rax_22 s>= 0)
                                if (rax_22 s< rdi.d)
                                    rdi = zx.q(rax_22)
                                
                                if (rdi.d != 0)
                                    if (rbx_5 != rdi.d)
                                        uint64_t rcx_36 = var_68
                                        memmove(rcx_36, rcx_36 + (sx.q(rdi.d) << 1), 
                                            (rbx_5 - rdi.d) * 2)
                                        rbx_5 = var_60_1.d
                                    
                                    rbx_5 -= rdi.d
                                    var_60_1.d = rbx_5
                else
                    int32_t rcx_16 = var_50_1 - 1
                    
                    if (var_50_1 == 0)
                        rcx_16 = 0
                    
                    int32_t rdx_9
                    int16_t* const r8_6
                    
                    if (var_50_1 == 0)
                        rdx_9 = 0
                        r8_6 = &data_142d40450
                    else
                        r8_6 = var_58
                        rdx_9 = var_50_1 - 1
                    
                    int32_t rax_14
                    
                    if (rcx_16 - rax_13 - 2 s>= 0)
                        rax_14 = rdx_9
                        
                        if (rcx_16 - rax_13 - 2 s< rdx_9)
                            rax_14 = rcx_16 - rax_13 - 2
                    else
                        rax_14 = 0
                    
                    rbx_5 = 0
                    uint64_t r14_1 = 0
                    var_38 = 0
                    int32_t var_30_1 = 0
                    int32_t r15_1 = 0
                    int32_t var_2c_1 = 0
                    int16_t* rsi_1 = &r8_6[sx.q(rdx_9) - sx.q(rax_14)]
                    
                    if (rsi_1 != 0 && *rsi_1 != 0)
                        int64_t rdi_2 = -1
                        
                        do
                            rdi_2 += 1
                        while (rsi_1[rdi_2] != 0)
                        
                        rdi = zx.q(rdi_2.d + 1)
                        
                        if (rdi.d s> 0)
                            sub_1405947f0(&var_38, rdi.d)
                            r15_1 = var_2c_1
                            rbx_5 = var_30_1
                            r14_1 = var_38
                        
                        rbx_5 += rdi.d
                        
                        if (rbx_5 s> r15_1)
                            sub_140594770(&var_38)
                            r15_1 = var_2c_1
                            r14_1 = var_38
                        
                        UnDecorator::getReferenceType(r14_1, rsi_1, rdi.d * 2)
                    
                    uint64_t rcx_24 = var_68
                    
                    if (rcx_24 != 0)
                        sub_140a74f90(rcx_24)
                    
                    var_68 = r14_1
                    var_60_1.d = rbx_5
                    var_60_1:4.d = r15_1
                
                int32_t i_1
                int32_t r12_1
                
                if (rbx_5 != 0 && rbx_5 - 1 s> 0)
                    sub_140a300d0(&var_68, &var_38, &data_142d84ee8, &(*U"{}[\nt")[3], 0)
                    uint64_t rcx_40 = var_38
                    
                    if (rcx_40 != 0)
                        sub_140a74f90(rcx_40)
                    
                    r12_1 = 0
                    i_1 = sub_140a23cf0(&var_68, &(*U"{}[\nt")[3], 0, 0, 0xffffffff)
                    int32_t i = i_1
                    
                    if (i_1 != 0xffffffff)
                        do
                            int32_t rbx_8 = var_60_1.d
                            int32_t i_2
                            uint64_t r15_3
                            
                            if (rbx_8 == 0)
                                r15_3 = &data_142d40450
                                i_2 = 0
                            else
                                r15_3 = var_68
                                i_2 = rbx_8 - 1
                            
                            if (i s< 0)
                                i_2 = 0
                            else if (i s< i_2)
                                i_2 = i
                            
                            var_38 = 0
                            int32_t rdx_21 = 0
                            int32_t var_30_4 = 0
                            int32_t rax_28 = 0
                            int32_t var_2c_2 = 0
                            rdi = 0
                            uint64_t rcx_46
                            int32_t r14_4
                            
                            if (r15_3 != 0 && *r15_3 != 0 && i_2 s> 0)
                                if (i_2 + 1 s> 0)
                                    sub_1405947f0(&var_38, i_2 + 1)
                                    rax_28 = var_2c_2
                                    rdx_21 = var_30_4
                                    rdi = var_38
                                
                                r14_4 = i_2 + 1 + rdx_21
                                
                                if (r14_4 s> rax_28)
                                    sub_140594770(&var_38)
                                    rdi = var_38
                                
                                UnDecorator::getReferenceType(rdi, r15_3, i_2 * 2)
                                rcx_46 = rdi
                                *(rdi + (sx.q(r14_4) << 1) - 2) = 0
                            
                            if (r15_3 == 0 || *r15_3 == 0 || i_2 s<= 0 || r14_4 == 0)
                                rcx_46 = &data_142d40450
                            
                            int32_t rcx_47 = 1
                            int32_t rax_31 = var_60_1.d
                            
                            if (sub_140a54510(rcx_46, &data_142d409b8) == 0)
                                rcx_47 = -1
                            
                            r12_1 += rcx_47
                            int32_t rdx_24 = rax_31 - 1
                            
                            if (rax_31 == 0)
                                rdx_24 = 0
                            
                            int32_t rdx_25 = rdx_24 - i
                            int32_t rcx_48 = rax_31 - 1
                            
                            if (rax_31 == 0)
                                rcx_48 = 0
                            
                            int32_t r8_17
                            
                            if (rdx_25 - 1 s>= 0)
                                r8_17 = rcx_48
                                
                                if (rdx_25 s<= rcx_48)
                                    r8_17 = rdx_25 - 1
                            else
                                r8_17 = 0
                            
                            int32_t rcx_49 = rcx_48 - r8_17
                            int32_t rbx_9 = rax_31 - 1
                            
                            if (rax_31 == 0)
                                rbx_9 = 0
                            
                            if (rcx_49 s>= 0)
                                if (rcx_49 s< rbx_9)
                                    rbx_9 = rcx_49
                                
                                if (rbx_9 != 0)
                                    if (rax_31 != rbx_9)
                                        uint64_t rcx_52 = var_68
                                        memmove(rcx_52, rcx_52 + (sx.q(rbx_9) << 1), 
                                            (rax_31 - rbx_9) * 2)
                                        rax_31 = var_60_1.d
                                    
                                    var_60_1.d = rax_31 - rbx_9
                            
                            i = sub_140a23cf0(&var_68, &(*U"{}[\nt")[3], 0, 0, 0xffffffff)
                            
                            if (rdi != 0)
                                sub_140a74f90(rdi)
                        while (i != 0xffffffff)
                
                if (rbx_5 == 0 || rbx_5 - 1 s<= 0 || (i_1 != 0xffffffff && r12_1 s> 0))
                    uint64_t rcx_58 = var_68
                    
                    if (rcx_58 != 0)
                        sub_140a74f90(rcx_58)
                    
                    int16_t* rcx_59 = var_58
                    
                    if (rcx_59 != 0)
                        sub_140a74f90(rcx_59)
                    
                    rbx_2 = var_48
                    rdi.b = 0
                else
                    uint64_t rcx_55 = var_68
                    
                    if (rcx_55 != 0)
                        sub_140a74f90(rcx_55)
                    
                    int16_t* rcx_56 = var_58
                    
                    if (rcx_56 != 0)
                        sub_140a74f90(rcx_56)
                    
                    rbx_2 = var_48
                    rdi.b = 1
        else
            rdi.b = 1

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

return zx.q(rdi.b)
