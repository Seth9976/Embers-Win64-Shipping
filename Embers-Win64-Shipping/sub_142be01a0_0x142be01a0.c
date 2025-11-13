// 函数: sub_142be01a0
// 地址: 0x142be01a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rax_2 = *(arg2 + 0x2d0)
uint64_t rsi
rsi.b = 0
char var_84 = 0

if (arg4 s> 0)
    int32_t* rax_3 = arg6
    uint64_t i_8 = zx.q(arg4)
    uint64_t i
    
    do
        int32_t rcx = *rax_3
        
        if (rcx != 0x69677066)
            rsi = zx.q(rsi.b)
            
            if (rcx == 0x69677073)
                rsi = 1
        else
            var_84 = 1
        
        rax_3 = &rax_3[4]
        i = i_8
        i_8 -= 1
    while (i != 1)

int64_t rdi

if (*(*(arg2 + 0xd0) + 0x50) != 0)
label_142be02a3:
    rdi.b = 1
else
    int32_t* i_1 = *(arg2 + 0xf8)
    int32_t* i_6 = i_1
    uint64_t r8_1 = zx.q(*(arg2 + 0xf4)) * 2
    void* rdx = &i_1[r8_1 * 2]
    
    if (i_1 u< rdx)
        do
            if (*i_6 == 0x676c7966 && i_6[3] != 0)
                goto label_142be02a3
            
            i_6 = &i_6[4]
        while (i_6 u< rdx)
    
    void* rdx_1 = &i_1[r8_1 * 2]
    int32_t* i_7 = i_1
    
    if (i_1 u< rdx_1)
        do
            if (*i_7 == 0x43464620 && i_7[3] != 0)
                goto label_142be02a3
            
            i_7 = &i_7[4]
        while (i_7 u< rdx_1)
    
    for (; i_1 u< &i_1[r8_1 * 2]; i_1 = &i_1[4])
        if (*i_1 == 0x43464632 && i_1[3] != 0)
            goto label_142be02a3
    
    rdi = 0

uint64_t r12
r12.b = 0
int64_t r15
r15.b = (*(arg2 + 0x2a0))(arg2, 0x73626978, arg1, 0) == 0
int32_t r13 = 0
uint32_t rcx_3 = 0

if (r15.b == 0)
    rcx_3 = zx.d(rdi.b)

uint32_t var_80 = rcx_3
int32_t var_88

if (rcx_3.b == 0)
    int64_t rax_7 = *(rax_2 + 0x88)
    
    if (rax_7 == 0)
        goto label_142be030b
    
    int32_t rax_8 = rax_7(arg2, arg1)
    var_88 = rax_8
    r12.b = rax_8 == 0
    
    if (r12.b == 0 || r15.b != 0)
        goto label_142be030b
    
    goto label_142be033d

label_142be030b:
int32_t rax_9 = (*(rax_2 + 0x30))(arg2, arg1)
var_88 = rax_9
int32_t r8_3 = rax_9

if (rax_9 == 0)
label_142be033d:
    void* rdi_1
    rdi_1.b = (*(arg2 + 0x2a0))(arg2, 0x43424c43, arg1, 0) == 0
    int32_t rax_11
    rax_11.b = (*(arg2 + 0x2a0))(arg2, 0x43424454, arg1, 0) == 0
    
    if (rdi_1.b != 0 || rax_11.b != 0)
        var_80.b = 0
    
    if (*(arg2 + 0x112) - 0x10 u> 0x3ff0)
        r8_3 = 8
    else
        var_88 = (*(rax_2 + 0x48))(arg2, arg1)
        var_88 = (*(rax_2 + 0x40))(arg2, arg1)
        var_88 = (*(rax_2 + 0x60))(arg2, arg1)
        int32_t rax_16 = (*(rax_2 + 0x58))(arg2, arg1)
        var_88 = rax_16
        
        if (r12.b != 0)
            r12 = zx.q(var_80)
        label_142be04ac:
            int64_t rax_25 = *(rax_2 + 0xc0)
            
            if (rax_25 != 0)
                var_88 = rax_25(arg2, arg1)
            
            int64_t rax_27 = *(rax_2 + 0xe0)
            
            if (rax_27 != 0)
                var_88 = rax_27(arg2, arg1)
                var_88 = (*(rax_2 + 0xe8))(arg2, arg1)
            
            var_88 = (*(rax_2 + 0x80))(arg2, arg1)
            var_88 = (*(rax_2 + 0x78))(arg2, arg1)
            int32_t rax_32 = (*(rax_2 + 0x70))(arg2, arg1)
            *(arg2 + 0x18) = 0
            var_88 = rax_32
            *(arg2 + 0x10) = zx.d(*(arg2 + 0x174))
            *(arg2 + 0x20) = 0
            
            if (*(arg2 + 0x208) == 0xffff || (*(arg2 + 0x248) & 0x100) == 0)
                int32_t rax_36 = sub_142be12a0(arg2, 0x15, arg2 + 0x18, arg5)
                var_88 = rax_36
                r8_3 = rax_36
                
                if (rax_36 == 0)
                    if (*(arg2 + 0x18) != 0)
                    label_142be0606:
                        int32_t rax_39 = sub_142be12a0(arg2, 0x16, arg2 + 0x20, arg5)
                        var_88 = rax_39
                        r8_3 = rax_39
                        
                        if (rax_39 == 0)
                            if (*(arg2 + 0x20) == 0)
                                goto label_142be0622
                            
                        label_142be066e:
                            int32_t rcx_31 = *(arg2 + 8)
                            
                            if (*(arg2 + 0x46c) - 2 u<= 1 || *(arg2 + 0x4d8) != 0)
                                rcx_31 |= 0x4000
                            
                            int32_t rax_45 = rcx_31 | 1
                            
                            if (r12.b != 1)
                                rax_45 = rcx_31
                            
                            int32_t rax_46 = rax_45 | 0x18
                            
                            if (rax_16 == 0 && *(arg2 + 0x270) != 0x30000)
                                rax_46 |= 0x200
                            
                            int32_t rcx_33 = rax_46 | 4
                            
                            if (*(arg2 + 0x27c) == 0)
                                rcx_33 = rax_46
                            
                            int32_t rax_48 = rcx_33 | 0x20
                            
                            if (*(arg2 + 0x190) == 0)
                                rax_48 = rcx_33
                            
                            int32_t r9_1 = rax_48 | 0x40
                            
                            if (*(arg2 + 0x490) == 0)
                                r9_1 = rax_48
                            
                            int32_t rdx_20 = r9_1
                            
                            if ((*(arg2 + 0x418) & 1) != 0)
                                int32_t* i_2 = *(arg2 + 0xf8)
                                int32_t* i_4 = i_2
                                uint64_t r8_15 = zx.q(*(arg2 + 0xf4)) * 2
                                void* rdx_21 = &i_2[r8_15 * 2]
                                
                                if (i_2 u>= rdx_21)
                                label_142be0727:
                                    i_4 = nullptr
                                else
                                    while (*i_4 != 0x676c7966 || i_4[3] == 0)
                                        i_4 = &i_4[4]
                                        
                                        if (i_4 u>= rdx_21)
                                            goto label_142be0727
                                
                                rdx_20 = r9_1
                                
                                if (i_4 != 0)
                                    void* rdx_22 = &i_2[r8_15 * 2]
                                    int32_t* i_5 = i_2
                                    
                                    if (i_2 u>= rdx_22)
                                    label_142be0757:
                                        i_5 = nullptr
                                    else
                                        while (*i_5 != 0x67766172 || i_5[3] == 0)
                                            i_5 = &i_5[4]
                                            
                                            if (i_5 u>= rdx_22)
                                                goto label_142be0757
                                    
                                    rdx_20 = r9_1
                                    
                                    if (i_5 != 0)
                                        rdx_20 |= 0x100
                                
                                for (; i_2 u< &i_2[r8_15 * 2]; i_2 = &i_2[4])
                                    if (*i_2 == 0x43464632 && i_2[3] != 0)
                                        rdx_20 |= 0x100
                                        break
                            
                            *(arg2 + 8) = rdx_20
                            int32_t rcx_34
                            
                            if (r12.b != 1 || *(arg2 + 0x208) == 0xffff)
                                uint32_t rax_51 = zx.d(*(arg2 + 0x12c))
                                rcx_34 = (rax_51 & 1) * 2
                                
                                if ((rax_51.b & 2) != 0)
                                    rcx_34 |= 1
                            else
                                int16_t rdx_23 = *(arg2 + 0x248)
                                
                                if ((0x200 & rdx_23) == 0)
                                    int32_t rax_50 = 0
                                    
                                    if ((rdx_23.b & 1) != 0)
                                        rax_50 = 1
                                    
                                    rcx_34 = rax_50 | 2
                                    rdx_23.b &= 0x20
                                    
                                    if (rdx_23.b == 0)
                                        rcx_34 = rax_50
                                else
                                    rcx_34 = 3
                                    rdx_23.b &= 0x20
                                    
                                    if (rdx_23.b == 0)
                                        rcx_34 = 1
                            
                            *(arg2 + 0xc) |= rcx_34
                            sub_142be9900(arg2)
                            void* rdi_3
                            rdi_3.b = 0
                            int32_t i_3 = 0
                            
                            if (*(arg2 + 0x38) s> 0)
                                int64_t* r11_1 = nullptr
                                
                                do
                                    void* const rcx_39 = &data_143698580
                                    void* r8_16 = *(r11_1 + *(arg2 + 0x40))
                                    int32_t rax_54
                                    
                                    while (true)
                                        if (*rcx_39 == zx.d(*(r8_16 + 0xc)))
                                            int32_t rdx_24 = *(rcx_39 + 4)
                                            
                                            if (rdx_24 == zx.d(*(r8_16 + 0xe))
                                                    || rdx_24 == 0xffffffff)
                                                rax_54 = *(rcx_39 + 8)
                                                break
                                        
                                        rcx_39 += 0xc
                                        
                                        if (rcx_39 u>= &data_143698604)
                                            rax_54 = 0
                                            break
                                    
                                    *(r8_16 + 8) = rax_54
                                    
                                    if (rax_54 == 0x756e6963 || rax_54 == 0x73796d62)
                                        rdi_3.b = 1
                                    
                                    i_3 += 1
                                    r11_1 = &r11_1[1]
                                while (i_3 s< *(arg2 + 0x38))
                            
                            if (*(arg2 + 0x38) s> 0 && rdi_3.b != 0)
                                r8_3 = var_88
                                goto label_142be08d8
                            
                            void* var_70 = arg2
                            int32_t var_64_1 = 0x10003
                            int32_t var_68
                            __builtin_strncpy(&var_68, "cinu", 4)
                            int32_t rax_55 = sub_142b91640(&data_1436984c0, 0, &var_70, nullptr)
                            r8_3 = rax_55
                            uint32_t rax_56
                            
                            if (rax_55 != 0)
                                rax_56 = zx.d(rax_55.b)
                            
                            if (rax_55 == 0 || rax_56 == 0xa3 || rax_56 == 7)
                                r8_3 = 0
                                var_88 = 0
                            label_142be08d8:
                                int32_t r15_2 = *(arg2 + 0x470)
                                
                                if (r15_2 == 0)
                                label_142be0a55:
                                    int32_t rax_72 = *(arg2 + 8)
                                    
                                    if ((rax_72.b & 3) == 0)
                                        *(arg2 + 8) = rax_72 | 1
                                    
                                    if ((*(arg2 + 8) & 1) != 0)
                                        *(arg2 + 0x58) = sx.d(*(arg2 + 0x124))
                                        *(arg2 + 0x5c) = sx.d(*(arg2 + 0x126))
                                        *(arg2 + 0x60) = sx.d(*(arg2 + 0x128))
                                        *(arg2 + 0x64) = sx.d(*(arg2 + 0x12a))
                                        *(arg2 + 0x68) = *(arg2 + 0x112)
                                        int16_t rdx_30
                                        
                                        if (*(arg2 + 0x208) == 0xffff
                                                || (*(arg2 + 0x248) & 0x80) == 0)
                                            int16_t rcx_50 = *(arg2 + 0x13c)
                                            *(arg2 + 0x6a) = rcx_50
                                            int16_t rdx_31 = *(arg2 + 0x13e)
                                            *(arg2 + 0x6c) = rdx_31
                                            *(arg2 + 0x6e) = *(arg2 + 0x140) - rdx_31 + rcx_50
                                            
                                            if (rcx_50 == 0 && rdx_31 == 0
                                                    && *(arg2 + 0x208) != 0xffff)
                                                rdx_30 = *(arg2 + 0x24e)
                                                
                                                if (rdx_30 != 0 || *(arg2 + 0x250) != rdx_30)
                                                    goto label_142be0abf
                                                
                                                int16_t rcx_49 = *(arg2 + 0x254)
                                                *(arg2 + 0x6a) = rcx_49
                                                int16_t rax_83 = neg.w(*(arg2 + 0x256))
                                                *(arg2 + 0x6c) = rax_83
                                                *(arg2 + 0x6e) = rcx_49 - rax_83
                                        else
                                            rdx_30 = *(arg2 + 0x24e)
                                        label_142be0abf:
                                            *(arg2 + 0x6a) = rdx_30
                                            int16_t rax_79 = *(arg2 + 0x250)
                                            *(arg2 + 0x6c) = rax_79
                                            *(arg2 + 0x6e) = *(arg2 + 0x252) - rax_79 + rdx_30
                                        *(arg2 + 0x70) = *(arg2 + 0x142)
                                        int16_t rax_81
                                        
                                        if (*(arg2 + 0x190) == 0)
                                            rax_81 = *(arg2 + 0x6e)
                                        else
                                            rax_81 = *(arg2 + 0x1a2)
                                        
                                        *(arg2 + 0x72) = rax_81
                                        int32_t temp3_1
                                        int32_t temp4_1
                                        temp3_1:temp4_1 = sx.q(*(arg2 + 0x27a))
                                        *(arg2 + 0x74) =
                                            *(arg2 + 0x278) - ((temp4_1 - temp3_1) s>> 1).w
                                        *(arg2 + 0x76) = *(arg2 + 0x27a)
                                else
                                    int16_t rdi_4 = *(arg2 + 0x112)
                                    int16_t var_80_1 = rdi_4
                                    int16_t var_7c_1 = *(arg2 + 0x20a)
                                    void* r14_1 = *(*(arg2 + 0xa0) + 0x30)
                                    var_70 = r14_1
                                    
                                    if (rdi_4 == 0 || *(arg2 + 0x208) == 0xffff)
                                        var_7c_1 = 1
                                        var_80_1 = 1
                                    
                                    int64_t rax_58 =
                                        sub_142b99a90(r14_1, 0x10, 0, r15_2, 0, &var_88)
                                    r8_3 = var_88
                                    *(arg2 + 0x30) = rax_58
                                    
                                    if (r8_3 == 0)
                                        int64_t rax_59 =
                                            sub_142b99a90(r14_1, r8_3 + 4, r8_3, r15_2, 0, &var_88)
                                        r8_3 = var_88
                                        
                                        if (r8_3 == 0)
                                            int32_t rdi_5 = 0
                                            
                                            if (r15_2 != 0)
                                                do
                                                    int16_t* rsi_4 =
                                                        (zx.q(r13) << 4) + *(arg2 + 0x30)
                                                    int16_t var_60
                                                    int32_t rax_61 = (*(rax_2 + 0xd8))(arg2, 
                                                        zx.q(rdi_5), &var_60)
                                                    var_88 = rax_61
                                                    
                                                    if (rax_61 == 0)
                                                        uint32_t r8_19 = zx.d(var_80_1)
                                                        int32_t var_4c
                                                        *rsi_4 = (var_4c s>> 6).w
                                                        rsi_4[1] = (divs.dp.d(
                                                            sx.q(zx.d(var_60) * sx.d(var_7c_1)
                                                                + (r8_19 u>> 1)), 
                                                            r8_19)).w
                                                        uint32_t rcx_47 = zx.d(var_60) << 6
                                                        *(rsi_4 + 8) = rcx_47
                                                        int16_t var_5e
                                                        uint32_t rdx_29 = zx.d(var_5e) << 6
                                                        *(rsi_4 + 0xc) = rdx_29
                                                        *(rsi_4 + 4) = zx.d(var_5e) << 6
                                                        
                                                        if (rcx_47 != 0 && rdx_29 != 0)
                                                            *(rax_59 + (zx.q(r13) << 2)) = rdi_5
                                                            r13 += 1
                                                    
                                                    rdi_5 += 1
                                                while (rdi_5 u< r15_2)
                                                
                                                r14_1 = var_70
                                            
                                            int64_t rax_71 =
                                                sub_142b99a90(r14_1, 4, r15_2, r13, rax_59, &var_88)
                                            r8_3 = var_88
                                            
                                            if (r13 != 0)
                                                *(arg2 + 0x478) = rax_71
                                                *(arg2 + 8) |= 2
                                                *(arg2 + 0x28) = r13
                                            
                                            goto label_142be0a55
                    else if (var_84 != 0)
                    label_142be05d7:
                        
                        if (*(arg2 + 0x18) != 0)
                            goto label_142be0606
                        
                        int32_t rax_38 = sub_142be12a0(arg2, 1, arg2 + 0x18, arg5)
                        var_88 = rax_38
                        r8_3 = rax_38
                        
                        if (rax_38 == 0)
                            goto label_142be0606
                    else
                        int32_t rax_37 = sub_142be12a0(arg2, rax_36.w + 0x10, arg2 + 0x18, arg5)
                        var_88 = rax_37
                        r8_3 = rax_37
                        
                        if (rax_37 == 0)
                            goto label_142be05d7
            else if (var_84 != 0)
            label_142be0566:
                
                if (*(arg2 + 0x18) != 0)
                label_142be0622:
                    int32_t rax_40
                    
                    if (rsi.b == 0)
                        rax_40 = sub_142be12a0(arg2, 0x11, arg2 + 0x20, arg5)
                        var_88 = rax_40
                        r8_3 = rax_40
                    
                    if (rsi.b != 0 || rax_40 == 0)
                        if (*(arg2 + 0x20) != 0)
                            goto label_142be066e
                        
                        int32_t rax_41 = sub_142be12a0(arg2, 2, arg2 + 0x20, arg5)
                        var_88 = rax_41
                        r8_3 = rax_41
                        
                        if (rax_41 == 0)
                            goto label_142be066e
                else
                    int32_t rax_35 = sub_142be12a0(arg2, 1, arg2 + 0x18, arg5)
                    var_88 = rax_35
                    r8_3 = rax_35
                    
                    if (rax_35 == 0)
                        goto label_142be0622
            else
                int32_t rax_34 = sub_142be12a0(arg2, 0x10, arg2 + 0x18, arg5)
                var_88 = rax_34
                r8_3 = rax_34
                
                if (rax_34 == 0)
                    goto label_142be0566
        else
            int32_t rax_17 = (*(rax_2 + 0x38))(arg2, arg1, 0)
            var_88 = rax_17
            r8_3 = rax_17
            
            if (rax_17 == 0)
                int32_t rax_18 = (*(rax_2 + 0xb8))(arg2, arg1, r8_3)
                var_88 = rax_18
                r8_3 = rax_18
                
                if (rax_18.b != 0x8e)
                    goto label_142be043b
                
                r8_3 = 0x93
            label_142be03e7:
                void* rax_19 = *(arg2 + 0xd0)
                var_88 = r8_3
                int64_t* rax_20 = *(rax_19 + 0x50)
                
                if (rax_20 != 0 && *(*rax_20 + 0x10) != 0)
                    *(arg2 + 0x15a) = 0
                    var_88 = 0
                label_142be0444:
                    r12 = zx.q(var_80)
                    goto label_142be0448
            else if (rax_17.b != 0x8e)
            label_142be043b:
                
                if (r8_3 == 0)
                    goto label_142be0444
            else
                if (*(arg2 + 0xf0) != 0x74727565)
                    r8_3 = 0x8f
                    goto label_142be03e7
                
                r12.b = 0
                var_88 = 0
            label_142be0448:
                r8_3.b = 1
                int32_t rax_22 = (*(rax_2 + 0x38))(arg2, arg1, r8_3)
                var_88 = rax_22
                r8_3 = rax_22
                int32_t rax_23
                
                if (rax_22 == 0)
                    r8_3.b = 1
                    rax_23 = (*(rax_2 + 0xb8))(arg2, arg1, r8_3)
                    var_88 = rax_23
                    r8_3 = rax_23
                
                if (rax_22 == 0 && rax_23 == 0)
                    *(arg2 + 0x190) = 1
                label_142be0490:
                    int32_t rax_24 = (*(rax_2 + 0x50))(arg2, arg1, r8_3)
                    var_88 = rax_24
                    
                    if (rax_24 != 0)
                        *(arg2 + 0x208) = 0xffff
                    
                    goto label_142be04ac
                
                if (r8_3.b == 0x8e)
                    goto label_142be0490

__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(r8_3)
