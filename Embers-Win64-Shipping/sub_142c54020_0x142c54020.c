// 函数: sub_142c54020
// 地址: 0x142c54020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
int64_t* rbx = arg3
char var_98 = 0
int128_t* r14 = arg2
char var_97 = 0
void* rsi = arg1
char var_96 = 0

if (arg3 == 0 || arg3[0x9f8].d != 0xc0dedbad)
    return 2

uint64_t r15
uint64_t var_38 = r15

while (true)
    r15.b = 0
    int32_t r13_1 = 0
    uint32_t var_78_1 = r15.d
    
    if (*(rbx + 0x4e29) != 0)
        rbx[0x9c7]
        arg3, arg4, arg6 = sub_142c64850(rbx, "Pipe broke: handle %p, url = %s\n", rbx, arg6)
        int32_t rax_1 = rbx[9].d
        
        if (rax_1 s< 0x11)
            if (rax_1 != 2)
                rbx[9].d = 2
                sub_142c68560(rbx)
            
            r13_1 = -1
            r12 = 0
        
        *(rbx + 0x4e29) = 0
        rbx[2] = 0
        goto label_142c5512c
    
    if (rbx[2] == 0 && rbx[9].d - 3 u<= 0xc)
        sub_142c64760(rbx, "In state %d with no easy_conn, bail out!\n", zx.q(rbx[9].d), arg6)
        return 4
    
    char rax_4 = *(rsi + 0xec)
    *(rsi + 0xec) = 0
    
    if (rax_4 != 0)
        arg3, arg4, arg6 = sub_142c53000(rsi)
    
    void** rcx_3 = rbx[2]
    
    if (rcx_3 != 0 && rbx[9].d - 3 u<= 0xd)
        *rcx_3 = rbx
    
    struct DOS_Header* const rdx_3
    int32_t r14_1
    int64_t var_88[0x2]
    int128_t var_68
    
    if (rbx[2] == 0)
    label_142c54245:
        int64_t rax_13 = sx.q(rbx[9].d)
        
        if (rax_13.d u> 0x12)
            return 4
        
        rdx_3 = &__dos_header
        
        switch (rax_13)
            case 0
                int32_t rax_14
                rax_14, rdx_3, arg3, arg4, arg5, arg6 = sub_142c685f0(rbx)
                r12 = rax_14
                
                if (rax_14 != 0)
                    r14_1 = 1
                else
                    if (rbx[9].d != 2)
                        rbx[9].d = 2
                        sub_142c68560(rbx)
                    
                    r14_1 = 1
                    rdx_3, arg3, arg4 = sub_142c6f300(rbx, 1)
                    r13_1 = -1
            case 1
                r14_1 = 1
            case 2
                sub_142c6f300(rbx, 2)
                char var_94
                int32_t rax_15
                rax_15, rdx_3, arg3, arg4, arg5, arg6 =
                    sub_142c5c7a0(rbx, &rbx[2], &var_94, &var_98, arg6)
                r12 = rax_15
                
                if (rax_15 == 0x59)
                    r14_1 = rax_15 - 0x58
                    
                    if (rbx[9].d != r14_1)
                        rbx[9].d = r14_1
                    
                    rdx_3 = sub_142c69f60(rsi + 0x40, *(rsi + 0x48), rbx, &rbx[3])
                    r12 = 0
                else if (rax_15 != 0)
                    r14_1 = 1
                else
                    rdx_3, arg3, arg4, arg6 = sub_142c6fe10(rbx, rbx[2], arg6)
                    r12 = 0
                    
                    if (var_94 == 0)
                        r13_1 = -1
                        
                        if (var_98 == 0)
                        label_142c54378:
                            
                            if (sub_142c67e00(rbx[2]) != 0)
                                goto label_142c54381
                            
                            if (rbx[9].d != 4)
                                rbx[9].d = 4
                            
                            r14_1 = 1
                        else
                            r14_1 = 1
                            rdx_3, arg3, arg4 = sub_142c53ae0(rbx, 
                                zx.q(sbb.d(1, 1, sub_142c53090(rsi, 1) != 0) + 9))
                    else
                        if (rbx[9].d != 3)
                            rbx[9].d = 3
                        
                        r14_1 = 1
            case 3
                int64_t* rsi_2 = rbx[2]
                var_88[0] = 0
                int64_t r14_2
                
                if (*(rsi_2 + 0x3f6) != 0)
                    r14_2 = rsi_2[0x2a]
                else if (*(rsi_2 + 0x3f3) == 0)
                    r14_2 = rsi_2[0x1a]
                else
                    r14_2 = rsi_2[0x1f]
                
                char* rax_18
                rax_18, arg6 = sub_142c59fa0(rsi_2, r14_2, rsi_2[0x2f].d, arg6)
                var_88[0] = rax_18
                
                if (rax_18 != 0)
                    rsi_2[0xce] = rax_18
                    rsi_2[0xcf].b = 1
                    r12 = 0
                    arg6 = sub_142c64850(rbx, "Hostname '%s' was found in DNS cache\n", r14_2, arg6)
                
                if (rax_18 == 0 || var_88[0] == 0)
                    int32_t rax_19
                    rax_19, arg6 = sub_142c59820(rbx[2], &var_88, arg6)
                    r12 = rax_19
                
                rdx_3, arg3, arg4 = sub_142c553a0(arg1, rbx)
                
                if (var_88[0] == 0)
                    goto label_142c54461
                
                int32_t rax_20
                rax_20, rdx_3, arg3, arg4, arg5, arg6 = sub_142c6a1e0(rbx[2], &var_98, arg6)
                r12 = rax_20
                
                if (rax_20 == 0)
                    r13_1 = -1
                    
                    if (var_98 == 0)
                        goto label_142c54378
                    
                    r14_1 = 1
                    rdx_3, arg3, arg4 =
                        sub_142c53ae0(rbx, zx.q(sbb.d(1, 1, sub_142c53090(arg1, 1) != 0) + 9))
                else
                    rbx[2] = 0
                label_142c54461:
                    
                    if (r12 == 0)
                        r14_1 = 1
                    else
                        r15.b = 1
                        r14_1 = 1
            case 4
                char var_93
                int32_t rax_23
                rax_23, rdx_3, arg3, arg4, arg5, arg6 = sub_142c655d0(rbx[2], 0, &var_93, arg6)
                r12 = rax_23
                
                if (var_93 == 0)
                    if (rax_23 == 0)
                        r14_1 = 1
                    else
                        r15.b = 1
                        r14_1 = 1
                else if (rax_23 != 0)
                    r15.b = 1
                    r14_1 = 1
                else
                    void* rcx_35 = rbx[2]
                    
                    if (*(rcx_35 + 0x164) != 2 || *(rcx_35 + 0x411) != 0)
                        if (sub_142c67e00(rcx_35) != 0)
                            goto label_142c54381
                        
                        r13_1 = -1
                        rdx_3, arg3, arg4 = sub_142c53ae0(rbx, 
                            zx.q(sbb.d(rdx_3.d, rdx_3.d, *(rbx[2] + 0x401) != 0) + 6))
                        r14_1 = 1
                    else
                    label_142c54381:
                        
                        if (rbx[9].d == 5)
                            r14_1 = 1
                        else
                            rbx[9].d = 5
                            r14_1 = 1
            case 5
                int32_t rax_21
                rax_21, rdx_3, arg3, arg4, arg5, arg6 = sub_142c6bf90(rbx[2], &var_98, arg6, arg5)
                void* rcx_31 = rbx[2]
                r12 = rax_21
                
                if (*(rcx_31 + 0x40a) != 0)
                    r13_1 = -1
                    r12 = 0
                    rdx_3, arg3, arg4, arg5, arg6 = sub_142c53be0(&rbx[2], 0, 0, arg6)
                    
                    if (rbx[9].d != 2)
                        rbx[9].d = 2
                        sub_142c68560(rbx)
                else if (rax_21 == 0 && (*(rcx_31 + 0x164) != 2 || *(rcx_31 + 0x411) != 0)
                        && sub_142c67db0(rcx_31) != 0)
                    r13_1 = -1
                    
                    if (rbx[9].d != 6)
                        rbx[9].d = 6
                
                r14_1 = 1
            case 6
                int32_t rax_26
                rax_26, rdx_3, arg3, arg4, arg5, arg6 = sub_142c5d220(rbx[2], &var_98, arg6, arg5)
                r12 = rax_26
                
                if (var_98 != 0)
                    if (r12 != 0)
                        goto label_142c54602
                    
                label_142c545d1:
                    r14_1 = 1
                    rdx_3, arg3, arg4 =
                        sub_142c53ae0(rbx, zx.q(sbb.d(1, 1, sub_142c53090(rsi, 1) != 0) + 9))
                    r13_1 = -1
                else
                    if (rbx[9].d != 7)
                        rbx[9].d = 7
                    
                    r14_1 = 1
            case 7
                int32_t rax_28
                rax_28, rdx_3, arg3, arg4 = sub_142c5d300(rbx[2], &var_98)
                r12 = rax_28
                
                if (rax_28 != 0)
                label_142c54602:
                    arg3.b = 1
                    rdx_3, arg3, arg4, arg5, arg6 = sub_142c53be0(&rbx[2], r12, arg3.b, arg6)
                    r15.b = 1
                    r14_1 = 1
                else
                    if (var_98 != 0)
                        goto label_142c545d1
                    
                    r14_1 = 1
            case 8
                rdx_3 = rbx[2]
                char rax_29
                rax_29, arg3 = sub_142c6ff40(rbx, rdx_3)
                
                if (rax_29 == 0)
                    r14_1 = 1
                else
                    if (rbx[9].d != 9)
                        rbx[9].d = 9
                        rdx_3, arg3 = sub_142c67dd0(rbx)
                    
                    r13_1 = -1
                    r14_1 = 1
            case 9
                if (*(rbx + 0x609) == 0)
                    int64_t* rsi_3 = rbx[2]
                    r12 = 0
                    void* r14_3 = *rsi_3
                    arg3 = *(rsi_3[0x87] + 0x10)
                    
                    if (arg3 == 0)
                    label_142c54736:
                        
                        if (r12 != 0)
                        label_142c5482b:
                            
                            if (r12 == 0x37)
                                goto label_142c54835
                            
                        label_142c5490b:
                            
                            if (rbx[2] != 0)
                                goto label_142c5491f
                            
                            r15.b = 1
                            r14_1 = 1
                        else if (var_97 != 0)
                            if (*(rbx[2] + 0x3fc) == 0)
                                if (rbx[9].d != 0xc)
                                    rbx[9].d = 0xc
                                
                                r13_1 = -1
                                r14_1 = 1
                            else
                                if (rbx[9].d != 0xb)
                                    rbx[9].d = 0xb
                                
                                r14_1 = 1
                        else if (*(rbx + 0x80c) != 0 && ((rbx[0x9d4].d - 5) & 0xfffffffd) == 0)
                            rdx_3, arg3, arg4, arg5, arg6 = sub_142c53be0(&rbx[2], 0, 0, arg6)
                        label_142c54770:
                            
                            if (rbx[9].d == 0x10)
                                r13_1 = -1
                                r14_1 = 1
                            else
                                rbx[9].d = 0x10
                                r13_1 = -1
                                r14_1 = 1
                        else if (rbx[9].d == 0xa)
                            r14_1 = 1
                        else
                            rbx[9].d = 0xa
                            r14_1 = 1
                    else
                        int32_t rax_31
                        rax_31, rdx_3, arg3 = arg3(rsi_3, &var_97)
                        r12 = rax_31
                        
                        if (rax_31 != 0x37)
                            goto label_142c5471f
                        
                        if (*(rsi_3 + 0x3f2) == 0)
                            goto label_142c54736
                        
                        if (*(r14_3 + 0xc0) == 0)
                            int32_t rax_32
                            rax_32, rdx_3, arg3, arg4, arg5, arg6 = sub_142c53f70(&rbx[2])
                            r12 = rax_32
                            
                            if (rax_32 != 0)
                                goto label_142c54736
                            
                            rsi_3 = rbx[2]
                            int32_t rax_34
                            rax_34, rdx_3, arg3 = (*(rsi_3[0x87] + 0x10))(rsi_3, &var_97)
                            r12 = rax_34
                        label_142c5471f:
                            
                            if (r12 != 0)
                                goto label_142c5482b
                            
                            if (var_97 != 0)
                                rdx_3, arg3, arg4 = sub_142c53a80(rsi_3)
                            
                            goto label_142c54736
                        
                        r12 = 0x37
                    label_142c54835:
                        int64_t* rcx_56 = rbx[2]
                        
                        if (*(rcx_56 + 0x3f2) == 0)
                            goto label_142c5490b
                        
                        var_88[0] = 0
                        rsi_3.b = 0
                        int32_t rax_38
                        int512_t zmm2_1
                        rax_38, zmm2_1 = sub_142c68c20(rcx_56, &var_88, arg3, arg6)
                        
                        if (rax_38 == 0)
                            rsi_3.b = var_88[0] != 0
                        else
                            r12 = rax_38
                            r15.b = 1
                        
                        int32_t rax_39
                        rax_39, arg4, arg5, arg6 = sub_142c53be0(&rbx[2], r12, 0, zmm2_1)
                        
                        if (rsi_3.b == 0)
                            r15.b = 1
                            rdx_3, arg3 = data_143ccb8a0(var_88[0])
                        else if (rax_39 == 0 || rax_39 == 0x37)
                            int32_t rax_40
                            rax_40, arg4, arg6 = sub_142c68260(rbx, var_88[0], 2, arg6)
                            r12 = rax_40
                            
                            if (rax_40 != 0)
                                rdx_3, arg3 = data_143ccb8a0(var_88[0])
                            else
                                if (rbx[9].d != 2)
                                    rbx[9].d = 2
                                    sub_142c68560(rbx)
                                
                                r13_1 = -1
                                r12 = 0
                                rdx_3, arg3 = data_143ccb8a0(var_88[0])
                        else
                            r12 = rax_39
                            rdx_3, arg3 = data_143ccb8a0(var_88[0])
                        
                        r14_1 = 1
                else
                    rdx_3, arg3 = sub_142c65340(rbx[2], 0)
                    
                    if (rbx[9].d != 0x10)
                        rbx[9].d = 0x10
                    
                    r12 = 0
                    r13_1 = -1
                    r14_1 = 1
            case 0xa
                int32_t rax_41
                rax_41, rdx_3, arg3, arg4 = sub_142c5d330(rbx[2], &var_97)
                r12 = rax_41
                
                if (rax_41 != 0)
                label_142c5491f:
                    rdx_3, arg3, arg4, arg5, arg6 = sub_142c53be0(&rbx[2], r12, 0, arg6)
                    r15.b = 1
                    r14_1 = 1
                else
                    if (var_97 != 0)
                        rdx_3, arg3, arg4 = sub_142c53ae0(rbx, 
                            zx.q(sbb.d(rdx_3.d, rdx_3.d, *(rbx[2] + 0x3fc) != 0) + 0xc))
                        r13_1 = -1
                    
                    r14_1 = 1
            case 0xb
                void** rsi_4 = rbx[2]
                int32_t rcx_70 = 0
                int32_t var_74 = 0
                r12 = 0
                arg3 = *(rsi_4[0x87] + 0x20)
                
                if (arg3 != 0)
                    int32_t rax_44
                    rax_44, rdx_3, arg3 = arg3(rsi_4, &var_74)
                    rcx_70 = var_74
                    r12 = rax_44
                    
                    if (rax_44 == 0 && rcx_70 == 1)
                        *(*rsi_4 + 0x248) = 0
                        int64_t rax_46 = rsi_4[0x8a]
                        int64_t rdx_31 = rsi_4[0x8b]
                        
                        if (rax_46 u> rdx_31)
                            rdx_31 = rax_46
                        
                        *(*rsi_4 + 0x218) = rdx_31 + 1
                        rdx_3, arg3, arg4 = sub_142c6f300(*rsi_4, rcx_70 + 5)
                        rcx_70 = var_74
                
                if (r12 != 0)
                    goto label_142c5491f
                
                if (rcx_70 != 0)
                    int64_t rdx_34 = 0xa
                    
                    if (rcx_70 == 1)
                        rdx_34 = 0xc
                    
                    rdx_3, arg3, arg4 = sub_142c53ae0(rbx, rdx_34)
                    r13_1 = -1
                
                r14_1 = 1
            case 0xc
                sub_142c6fe80(rbx, rbx[2], arg6)
                rdx_3, arg3, arg4, arg6 = sub_142c53000(rsi)
                void* rax_48 = rbx[2]
                
                if (*(rax_48 + 0x450) == -1 && *(rax_48 + 0x458) == -1)
                    goto label_142c54770
                
                if (rbx[9].d == 0xd)
                    r13_1 = -1
                    r14_1 = 1
                else
                    rbx[9].d = 0xd
                    r13_1 = -1
                    r14_1 = 1
            case 0xd
                rdx_3 = rbx[2]
                char rax_49
                rax_49, arg3 = sub_142c6ff00(rbx, rdx_3)
                
                if (rax_49 == 0)
                    r14_1 = 1
                else
                    if (rbx[9].d != 0xe)
                        rbx[9].d = 0xe
                    
                    r13_1 = -1
                    r14_1 = 1
            case 0xe
                int64_t r8_10 = rbx[0x75]
                r15.b = 0
                int64_t r14_4 = 0
                var_88[0] = 0
                char var_95 = 0
                int128_t var_48
                
                if (r8_10 s> 0)
                    int64_t rdx_39 = rbx[0x132]
                    int64_t rcx_83 = rbx[0x11b]
                    arg4.o = *arg2
                    var_68 = arg4.o
                    arg4.o = *(rbx + 0x980)
                    var_48 = arg4.o
                    int32_t rax_55
                    rax_55, arg4 = sub_142c6eff0(rcx_83, rdx_39, r8_10, &var_48, &var_68)
                    r14_4 = sx.q(rax_55)
                
                int64_t r8_11 = rbx[0x76]
                int64_t rsi_6 = 0
                
                if (r8_11 s> 0)
                    int64_t rdx_40 = rbx[0x135]
                    int64_t rcx_84 = rbx[0x11a]
                    arg4.o = *arg2
                    var_48 = arg4.o
                    arg4.o = *(rbx + 0x998)
                    var_68 = arg4.o
                    int32_t rax_57
                    rax_57, arg4 = sub_142c6eff0(rcx_84, rdx_40, r8_11, &var_68, &var_48)
                    rsi_6 = sx.q(rax_57)
                
                if (r14_4 s> 0 || rsi_6 s> 0)
                    if (rbx[9].d != 0xf)
                        rbx[9].d = 0xf
                    
                    if (r14_4 s< rsi_6)
                        rdx_3, arg3, arg4, arg6 = sub_142c52ab0(rbx, rsi_6, 9, arg6)
                        r15 = zx.q(var_78_1)
                    else
                        rdx_3, arg3, arg4, arg6 = sub_142c52ab0(rbx, r14_4, 9, arg6)
                        r15 = zx.q(var_78_1)
                else
                    int32_t rax_58
                    int64_t r8_13
                    rax_58, r8_13, arg4, arg5, arg6 =
                        sub_142c68910(rbx[2], rbx, &var_96, &var_95, arg4, arg6)
                    r12 = rax_58
                    
                    if ((rbx[0x44].b & 1) == 0)
                        sub_142c6ff80(rbx[2])
                    
                    if ((rbx[0x44].b & 2) == 0)
                        sub_142c6ff90(rbx[2])
                    
                    if (var_96 != 0 || r12 == 0x38)
                        int32_t rax_59
                        rax_59, r8_13, arg4, arg6 = sub_142c68c20(rbx[2], &var_88, r8_13, arg6)
                        
                        if (rax_59 != 0)
                            goto label_142c54cbb
                        
                        r15.b = var_88[0] != 0
                        
                        if (r15.b == 0)
                            goto label_142c54cbb
                        
                        r12 = 0
                        var_96 = 1
                    label_142c54d2e:
                        sub_142c5d380(rbx, rbx[2] + 0x4d8)
                        int64_t* rcx_95 = *(rbx[2] + 0x4d8)
                        
                        if (rcx_95 != 0)
                            sub_142c52ab0(*rcx_95, 0, 6, arg6)
                        
                        arg4, arg6 = sub_142c53000(arg1)
                        
                        if (rbx[0x46] == 0)
                            if (r15.b != 0)
                                goto label_142c54e1c
                            
                            if (rbx[0x45] != 0)
                                data_143ccb8a0(var_88[0])
                                char* rdx_46 = rbx[0x45]
                                var_88[0] = rdx_46
                                rbx[0x45] = 0
                                int32_t rax_62
                                rax_62, arg4, arg6 = sub_142c68260(rbx, rdx_46, 1, arg6)
                                r12 = rax_62
                                uint32_t rax_64 = zx.d(var_78_1.b)
                                
                                if (r12 != 0)
                                    rax_64 = 1
                                
                                var_78_1 = rax_64
                            
                            if (rbx[9].d != 0x10)
                                rbx[9].d = 0x10
                            
                            goto label_142c54e71
                        
                        int32_t rsi_7
                        
                        if (r15.b != 0)
                        label_142c54e1c:
                            rsi_7 = 2
                        else
                            data_143ccb8a0(var_88[0])
                            rsi_7 = 3
                            var_88[0] = rbx[0x46]
                            rbx[0x46] = 0
                        
                        int32_t rax_66
                        rax_66, arg4, arg5, arg6 = sub_142c53be0(&rbx[2], 0, 0, arg6)
                        r12 = rax_66
                        
                        if (rax_66 != 0)
                            rdx_3, arg3 = data_143ccb8a0(var_88[0])
                            r15 = zx.q(var_78_1)
                        else
                            int32_t rax_67
                            rax_67, arg4, arg6 = sub_142c68260(rbx, var_88[0], rsi_7, arg6)
                            r12 = rax_67
                            
                            if (rax_67 != 0)
                                rdx_3, arg3 = data_143ccb8a0(var_88[0])
                                r15 = zx.q(var_78_1)
                            else
                                if (rbx[9].d != 2)
                                    rbx[9].d = 2
                                    sub_142c68560(rbx)
                                
                            label_142c54e71:
                                r13_1 = -1
                                rdx_3, arg3 = data_143ccb8a0(var_88[0])
                                r15 = zx.q(var_78_1)
                    else
                    label_142c54cbb:
                        
                        if (r12 == 0)
                            if (var_96 != 0)
                                goto label_142c54d2e
                            
                            if (var_95 != 0)
                                r13_1 = -1
                            
                            rdx_3, arg3 = data_143ccb8a0(var_88[0])
                            r15 = zx.q(var_78_1)
                        else
                            void* rcx_89 = rbx[2]
                            
                            if ((*(*(rcx_89 + 0x438) + 0x80) & 2) == 0 && r12 != 0x5c)
                                sub_142c65340(rcx_89, 2)
                            
                            r8_13.b = 1
                            arg4, arg5, arg6 = sub_142c53be0(&rbx[2], r12, r8_13.b, arg6)
                            rdx_3, arg3 = data_143ccb8a0(var_88[0])
                            r15 = zx.q(var_78_1)
                
                r14_1 = 1
            case 0xf
                int32_t rax_50
                rax_50, rdx_3, arg3, arg4, arg5, arg6 = sub_142c6f450(rbx[2], &__dos_header, arg6)
                
                if (rax_50 == 0)
                    arg4.o = *r14
                    var_68 = arg4.o
                    int32_t rax_51
                    rax_51, rdx_3, arg3, arg4, arg6 = sub_142c6fd10(rbx, &var_68, arg6)
                    r12 = rax_51
                    
                    if (rax_51 == 0)
                        int64_t r8_9 = rbx[0x75]
                        struct DOS_Header* rsi_5 = nullptr
                        
                        if (r8_9 s> 0)
                            arg4.o = *r14
                            int64_t rdx_37 = rbx[0x132]
                            int64_t rcx_79 = rbx[0x11b]
                            var_68 = arg4.o
                            arg4.o = *(rbx + 0x980)
                            var_88 = arg4.o
                            int32_t rax_52
                            rax_52, arg4 = sub_142c6eff0(rcx_79, rdx_37, r8_9, &var_88, &var_68)
                            rsi_5 = sx.q(rax_52)
                        
                        arg3 = rbx[0x76]
                        rdx_3 = nullptr
                        
                        if (arg3 s> 0)
                            arg4.o = *r14
                            int64_t rdx_38 = rbx[0x135]
                            int64_t rcx_80 = rbx[0x11a]
                            var_68 = arg4.o
                            arg4.o = *(rbx + 0x998)
                            var_88 = arg4.o
                            int32_t rax_53
                            rax_53, arg3, arg4 =
                                sub_142c6eff0(rcx_80, rdx_38, arg3, &var_88, &var_68)
                            rdx_3 = sx.q(rax_53)
                        
                        if (rsi_5 s> 0 || rdx_3 s> 0)
                            if (rsi_5 s>= rdx_3)
                                rdx_3 = rsi_5
                            
                            rdx_3, arg3, arg4, arg6 = sub_142c52ab0(rbx, rdx_3, 9, arg6)
                        else if (rbx[9].d != 0xe)
                            rbx[9].d = 0xe
                else
                    r12 = 0x2a
                
                r14_1 = 1
            case 0x10
                rdx_3 = rbx[2]
                r13_1 = -1
                
                if (rdx_3 != 0)
                    sub_142c5d380(rbx, &rdx_3->e_magic[0x4d8])
                    int32_t rax_68
                    rax_68, rdx_3, arg3, arg4, arg5, arg6 =
                        sub_142c53be0(&rbx[2], r12, 0, sub_142c53000(rsi))
                    
                    if (r12 == 0)
                        r12 = rax_68
                    
                    if (rbx[2] != 0)
                        rbx[2] = 0
                
                if (*(rbx + 0x80c) != 0 && rbx[0x9d4].d != 7)
                    r14_1 = 1
                    
                    if (rbx[9].d != 0)
                        rbx[9].d = 0
                else if (rbx[9].d == 0x11)
                    r14_1 = 1
                else
                    void* rax_69 = rbx[0x18]
                    rbx[9].d = 0x11
                    *(rax_69 + 0x1c) -= 1
                    r14_1 = 1
            case 0x11
                rbx[2] = 0
                rdx_3, arg3, arg4, arg6 = sub_142c52c50(rbx)
                r14_1 = 1
            case 0x12
                break
        
        if (rax_13 == 0x12)
            break
        
        if (rax_13 == 0x12)
            break
    else
        int32_t rcx_4 = rbx[9].d
        
        if (rcx_4 - 2 u> 0xe)
            goto label_142c54245
        
        arg3.b = rcx_4 s<= 8
        int64_t rax_8
        rax_8, arg3, arg4 = sub_142c65dc0(rbx, r14, arg3.b, rbx)
        
        if (rax_8 s>= 0)
            goto label_142c54245
        
        int32_t rax_9 = rbx[9].d
        arg4.o = *(rbx + 0x950)
        int512_t zmm2
        
        if (rax_9 != 3)
            var_68 = arg4.o
            int128_t* rdx_2 = &var_68
            int64_t* rcx_8 = &var_88
            arg4.o = *r14
            var_88 = arg4.o
            
            if (rax_9 != 4)
                int64_t rsi_1 = rbx[0x1b]
                int64_t rax_12 = sub_142c595d0(rcx_8, rdx_2)
                rbx[0x1f]
                
                if (rsi_1 == -1)
                    zmm2 = sub_142c64760(rbx, 
                        "Operation timed out after %ld milliseconds with %I64d bytes received", 
                        rax_12, arg6)
                else
                    int64_t var_a8_1 = rsi_1
                    zmm2 = sub_142c64760(rbx, 
                        "Operation timed out after %ld milliseconds with %I64d out of %I64d bytes 
                            received", 
                        rax_12, arg6)
            else
                zmm2 = sub_142c64760(rbx, "Connection timed out after %ld milliseconds", 
                    sub_142c595d0(rcx_8, rdx_2), arg6)
        else
            var_88 = arg4.o
            arg4.o = *r14
            var_68 = arg4.o
            zmm2 = sub_142c64760(rbx, "Resolving timed out after %ld milliseconds", 
                sub_142c595d0(&var_68, &var_88), arg6)
        
        if (rbx[9].d s> 9)
            sub_142c65340(rbx[2], 2)
            r15.b = 1
        
        r12 = 0x1c
        rdx_3, arg3, arg4, arg5, arg6 = sub_142c53be0(&rbx[2], 0x1c, 1, zmm2)
        r14_1 = 1
    
    if (rbx[9].d s>= 0x11)
        rsi = arg1
    else if (r12 == 0)
        int64_t* rcx_123 = rbx[2]
        
        if (rcx_123 == 0)
            rsi = arg1
        else
            int32_t rax_71
            rax_71, arg3, arg4, arg5, arg6 = sub_142c6f450(rcx_123, rdx_3, arg6)
            
            if (rax_71 == 0)
                rsi = arg1
            else
                r12 = 0x2a
                sub_142c65340(rbx[2], 2)
                int32_t rax_72 = rbx[9].d
                int32_t rcx_125
                rcx_125.b = rax_72 s>= 0x10
                
                if (rax_72 != rcx_125 + 0x10)
                    rbx[9].d = rcx_125 + 0x10
                    
                    if (rax_72 s>= 0x10)
                        void* rax_73 = rbx[0x18]
                        *(rax_73 + 0x1c) -= 1
                    
                    int64_t rdx_57 = *((zx.q(rcx_125 + 0x10) << 3) + &data_1436b0fd0)
                    
                    if (rdx_57 != 0)
                        rdx_57(rbx)
                
                rsi = arg1
                r13_1 = -1
    else
        rsi = arg1
        *(rbx + 0x4e29) = 0
        arg3, arg4, arg6 = sub_142c53000(rsi)
        void* rcx_116 = rbx[2]
        
        if (rcx_116 != 0)
            sub_142c6ff90(rcx_116)
            sub_142c6ff80(rbx[2])
            sub_142c5d380(rbx, rbx[2] + 0x4b8)
            arg3, arg4 = sub_142c5d380(rbx, rbx[2] + 0x4d8)
            
            if (r15.b != 0)
                arg3, arg4, arg6 = sub_142c5c970(rbx[2], r12 == 0x1c, arg6)
                rbx[2] = 0
        else
            rbx[9]
        
        if (rbx[9].d != 0x11)
            void* rax_70 = rbx[0x18]
            rbx[9].d = 0x11
            *(rax_70 + 0x1c) -= 1
    
    if (rbx[9].d != 0x11)
        r14 = arg2
    label_142c5512c:
        
        if (r13_1 == 0xffffffff)
            continue
    else
        rbx[0xd].d = r14_1
        rbx[0xe] = rbx
        rbx[0xf].d = r12
        sub_142c69f60(rsi + 0x20, *(rsi + 0x28), &rbx[0xa], &rbx[0xa])
        r13_1 = 0
        
        if (rbx[9].d != 0x12)
            rbx[9].d = 0x12
    
    if (*(rsi + 0xec) == 0)
        *(rbx + 0x4c) = r12
        return zx.q(r13_1)
    
    r14 = arg2

*(rbx + 0x4c) = r12
return 0
