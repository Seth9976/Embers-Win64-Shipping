// 函数: sub_1429cd680
// 地址: 0x1429cd680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_4f8 = -2
void var_558
int64_t rax_1 = __security_cookie ^ &var_558
uint64_t rsi = arg3
int64_t rbx = arg2
int32_t* r15 = arg1
int32_t* var_510 = arg1
int64_t result
char var_448[0x400]
int64_t rcx_37

if (((*(arg1 + 0x38) - *(arg1 + 0x30)) s>> 2).d == 0
        || ((*(arg1 + 0x128) - *(arg1 + 0x120)) s>> 2).d == 0)
    int32_t rax_68 = ((*(arg1 + 0x38) - *(arg1 + 0x30)) s>> 2).d
    
    if (rax_68 == 0 && rbx != 0)
        _snscanf(&var_448, 0x400, "%s - missing face-verts", sub_1429cc9e0(rax_68 + 3))
        rbx(3, &var_448, rsi)
    
    result = (*(r15 + 0x128) - *(r15 + 0x120)) s>> 2
    
    if (result.d != 0 || rbx == 0)
    labelid_2:
        result.b = 0
    else
        _snscanf(&var_448, 0x400, "%s - missing vert-faces", sub_1429cc9e0((result + 4).d))
        rcx_37 = 4
    label_1429cdf1f:
        rbx(rcx_37, &var_448, rsi)
    labelid_2:
        result.b = 0
else
    int32_t r8 = 0
    int32_t i = 0
    int32_t rcx = *arg1
    int64_t rax_12
    int64_t rcx_6
    int32_t j
    char const* const r8_1
    uint64_t r8_2
    int64_t r14_2
    
    if (rcx s> 0)
        int64_t rcx_1 = *(r15 + 0x30)
        void* rsi_1 = *(r15 + 0x18)
        
        do
            j = 0
            int64_t r10_1 = 0
            int64_t r11_1 = sx.q(*rsi_1)
            
            if (r11_1 s> 0)
                do
                    int32_t rcx_2 = *(rcx_1 + (sx.q(*(rsi_1 + 4)) << 2) + (r10_1 << 2)) * 2
                    int64_t rdx = *(r15 + 0x108)
                    int32_t r9_1 = *(rdx + (sx.q(rcx_2) << 2))
                    result = sx.q(*(rdx + (sx.q(rcx_2 + 1) << 2)))
                    int32_t* rcx_4 = *(r15 + 0x120) + (result << 2)
                    int16_t* rdx_1 = *(r15 + 0x138) + (result << 1)
                    
                    if (r9_1 s<= 0)
                    label_1429cd7c1:
                        r14_2 = arg2
                        
                        if (r14_2 == 0)
                            goto label_1429cdf21_2
                        
                        rax_12 = sub_1429cc9e0(7)
                        r8_1 = "%s - face %d correlation of vert %d failed"
                    label_1429cd7e0:
                        int32_t j_1 = j
                        int32_t i_2 = i
                        _snscanf(&var_448, 0x400, r8_1, rax_12)
                        r8_2 = arg3
                        rcx_6 = 7
                        goto label_1429cd807
                    
                    while (*rcx_4 != i || zx.d(*rdx_1) != j)
                        r8 += 1
                        rcx_4 = &rcx_4[1]
                        rdx_1 = &rdx_1[1]
                        
                        if (r8 s>= r9_1)
                            goto label_1429cd7c1
                    
                    j += 1
                    r10_1 += 1
                    r8 = 0
                while (r10_1 s< r11_1)
                
                rcx_1 = *(r15 + 0x30)
            
            i += 1
            rsi_1 += 8
        while (i s< *r15)
        
        rcx = *r15
        rbx = arg2
        rsi = arg3
    
    if (((*(r15 + 0xb0) - *(r15 + 0xa8)) s>> 2).d == 0
            || ((*(r15 + 0x50) - *(r15 + 0x48)) s>> 2).d == 0)
        if (((*(r15 + 0xb0) - *(r15 + 0xa8)) s>> 2).d == 0 && rbx != 0)
            _snscanf(&var_448, 0x400, "%s - missing edge-faces", sub_1429cc9e0(0))
            rbx(0, &var_448, rsi)
        
        result = (*(r15 + 0x50) - *(r15 + 0x48)) s>> 2
        
        if (result.d == 0 && rbx != 0)
            _snscanf(&var_448, 0x400, "%s - missing face-edges", sub_1429cc9e0((result + 2).d))
            rcx_37 = 2
            goto label_1429cdf1f
        
    label_1429cdf21:
        result.b = 0
    else
        int32_t i_1 = 0
        
        if (rcx s> 0)
            int64_t rcx_7 = *(r15 + 0x48)
            void* rsi_2 = *(r15 + 0x18)
            
            do
                int32_t rbx_1 = 0
                int64_t r10_2 = 0
                int64_t r11_2 = sx.q(*rsi_2)
                
                if (r11_2 s> 0)
                label_1429cd890:
                    int32_t rcx_8 = *(rcx_7 + (sx.q(*(rsi_2 + 4)) << 2) + (r10_2 << 2)) * 2
                    int64_t rdx_3 = *(r15 + 0x90)
                    int32_t r9_3 = *(rdx_3 + (sx.q(rcx_8) << 2))
                    result = sx.q(*(rdx_3 + (sx.q(rcx_8 + 1) << 2)))
                    int32_t* rcx_10 = *(r15 + 0xa8) + (result << 2)
                    int16_t* rdx_4 = *(r15 + 0xc0) + (result << 1)
                    
                    if (r9_3 s> 0)
                        do
                            if (*rcx_10 == i_1 && zx.d(*rdx_4) == rbx_1)
                                rbx_1 += 1
                                r10_2 += 1
                                r8 = 0
                                
                                if (r10_2 s< r11_2)
                                    goto label_1429cd890
                                
                                rcx_7 = *(r15 + 0x48)
                                goto label_1429cd8f1
                            
                            r8 += 1
                            rcx_10 = &rcx_10[1]
                            rdx_4 = &rdx_4[1]
                        while (r8 s< r9_3)
                    
                    if (arg2 != 0)
                        int32_t var_530_1 = rbx_1
                        int32_t i_3 = i_1
                        _snscanf(&var_448, 0x400, "%s - face %d correlation of edge %d failed", 
                            sub_1429cc9e0(8))
                        arg2(8, &var_448, arg3)
                    
                    goto label_1429cdf21_2
                
            label_1429cd8f1:
                i_1 += 1
                rsi_2 += 8
            while (i_1 s< *r15)
        
        if (((*(r15 + 0x80) - *(r15 + 0x78)) s>> 2).d == 0
                || ((*(r15 + 0x170) - *(r15 + 0x168)) s>> 2).d == 0)
            int32_t rax_54 = ((*(r15 + 0x80) - *(r15 + 0x78)) s>> 2).d
            r14_2 = arg2
            uint64_t rbx_4
            
            if (rax_54 != 0 || r14_2 == 0)
                rbx_4 = arg3
            else
                _snscanf(&var_448, 0x400, "%s - missing edge-verts", sub_1429cc9e0(rax_54 + 1))
                rbx_4 = arg3
                r14_2(1, &var_448, rbx_4)
            
            result = (*(r15 + 0x170) - *(r15 + 0x168)) s>> 2
            
            if (result.d != 0 || r14_2 == 0)
            label_1429cdf21_1:
                result.b = 0
            else
                _snscanf(&var_448, 0x400, "%s - missing vert-edges", sub_1429cc9e0((result + 5).d))
                r8_2 = rbx_4
                rcx_6 = 5
            label_1429cd807:
                r14_2(rcx_6, &var_448, r8_2)
            label_1429cdf21_2:
                result.b = 0
        else
            i = 0
            
            if (r15[1] s> 0)
                int64_t r11_3 = *(r15 + 0x150)
                int32_t rsi_3 = 0
                
                do
                    int32_t* r10_3 = *(r15 + 0x78) + (sx.q(rsi_3) << 2)
                    
                    for (j = 0; j s< 2; )
                        int32_t rcx_13 = *r10_3 * 2
                        int32_t r9_5 = *(r11_3 + (sx.q(rcx_13) << 2))
                        int64_t rdx_6 = sx.q(*(r11_3 + (sx.q(rcx_13 + 1) << 2)))
                        result = *(r15 + 0x168) + (rdx_6 << 2)
                        int16_t* r8_4 = *(r15 + 0x180) + (rdx_6 << 1)
                        int32_t rdx_7 = 0
                        
                        if (r9_5 s<= 0)
                        label_1429cda1f:
                            r14_2 = arg2
                            
                            if (r14_2 == 0)
                                goto label_1429cdf21_2
                            
                            rax_12 = sub_1429cc9e0(7)
                            r8_1 = "%s - edge %d correlation of vert %d failed"
                            goto label_1429cd7e0
                        
                        while (*result != i || zx.d(*r8_4) != j)
                            rdx_7 += 1
                            result += 4
                            r8_4 = &r8_4[1]
                            
                            if (rdx_7 s>= r9_5)
                                goto label_1429cda1f
                        
                        j += 1
                        r10_3 = &r10_3[1]
                    
                    i += 1
                    rsi_3 += 2
                while (i s< r15[1])
            
            uint64_t rbx_3 = zx.q(r15[5] * 2)
            void var_4d8
            int32_t* r14_6 = &var_4d8
            int32_t* var_4e8_1 = &var_4d8
            int32_t var_4e0_1 = rbx_3.d
            int32_t var_4dc_1 = 0x20
            int32_t* var_458_1 = nullptr
            
            if (rbx_3.d u> 0x20)
                int32_t* rax_34 = j_sub_140a82f30(zx.q(rbx_3.d) << 2)
                r14_6 = rax_34
                var_458_1 = rax_34
                var_4e8_1 = rax_34
                int32_t var_4dc_2 = rbx_3.d
            
            int32_t rsi_4 = 0
            int32_t var_518_1 = 0
            int64_t rcx_23
            int64_t r14_8
            
            if (r15[2] s> 0)
                void* rdx_8 = nullptr
                void* var_500_1 = nullptr
                int16_t* rcx_18 = nullptr
                int16_t* var_508_1 = nullptr
                
                while (true)
                    if ((*(rcx_18 + *(r15 + 0x1b0)) & 0x801) == 0)
                        int64_t rax_36 = *(r15 + 0x108)
                        int64_t r12_4 = sx.q(*(rdx_8 + rax_36))
                        int32_t* rdi_1 = *(r15 + 0x120) + (sx.q(*(rdx_8 + rax_36 + 4)) << 2)
                        int32_t* rax_38 = *(r15 + 0x150)
                        int32_t r13_3 = *(rax_38 + rdx_8)
                        rbx_3 = *(r15 + 0x168) + (sx.q(*(rax_38 + rdx_8 + 4)) << 2)
                        int64_t r15_1 = &r14_6[r12_4]
                        
                        if (sub_1429ccc20(var_510, rsi_4, r14_6, r15_1) == 0)
                            r14_8 = arg2
                            
                            if (r14_8 == 0)
                                goto label_1429cdd4a
                            
                            int32_t var_538_3 = rsi_4
                            _snscanf(&var_448, 0x400, 
                                "%s - vertex %d cannot orient incident faces and edges", 
                                sub_1429cc9e0(0xb))
                            rcx_23 = 0xb
                            break
                        
                        int32_t rsi_5 = 0
                        
                        if (r12_4.d s> 0)
                            void* r14_7 = r14_6 - rdi_1
                            
                            while (*rdi_1 == *(r14_7 + rdi_1))
                                rsi_5 += 1
                                rdi_1 = &rdi_1[1]
                                
                                if (rsi_5 s>= r12_4.d)
                                    goto label_1429cdb37
                            
                            r14_8 = arg2
                            
                            if (r14_8 == 0)
                                goto label_1429cdd4a
                            
                            int32_t var_530_2 = rsi_5
                            int32_t var_538_1 = var_518_1
                            _snscanf(&var_448, 0x400, 
                                "%s - vertex %d orientation failure at incident face %d", 
                                sub_1429cc9e0(0xa))
                            rcx_23 = 0xa
                            break
                        
                    label_1429cdb37:
                        int32_t rdi_2 = 0
                        
                        if (r13_3 s> 0)
                            int64_t r15_2 = r15_1 - rbx_3
                            
                            while (*rbx_3 == *(r15_2 + rbx_3))
                                rdi_2 += 1
                                rbx_3 += 4
                                
                                if (rdi_2 s>= r13_3)
                                    goto label_1429cdb59
                            
                            r14_8 = arg2
                            
                            if (r14_8 == 0)
                                goto label_1429cdd4a
                            
                            int32_t var_530_3 = rdi_2
                            int32_t var_538_2 = var_518_1
                            _snscanf(&var_448, 0x400, 
                                "%s - vertex %d orientation failure at incident edge %d", 
                                sub_1429cc9e0(9))
                            rcx_23 = 9
                            break
                        
                    label_1429cdb59:
                        r14_6 = var_4e8_1
                        rsi_4 = var_518_1
                        rcx_18 = var_508_1
                        rdx_8 = var_500_1
                        r15 = var_510
                    
                    rsi_4 += 1
                    var_518_1 = rsi_4
                    rcx_18 = &rcx_18[1]
                    var_508_1 = rcx_18
                    rdx_8 += 8
                    var_500_1 = rdx_8
                    
                    if (rsi_4 s>= r15[2])
                        goto label_1429cdc68
                
                goto label_1429cdd47
            
        label_1429cdc68:
            int32_t r11_4 = r15[1]
            
            if (r11_4 s<= 0)
            label_1429cdd4e:
                rbx_3.b = 1
            else
                void* r9_10 = nullptr
                int32_t r10_4 = 0
                char* r8_6 = *(r15 + 0xf0)
                int32_t r13_4 = 0
                
                while (true)
                    if ((*r8_6 & 1) == 0)
                        int32_t* rdx_12 = *(r15 + 0x78) + (sx.q(r10_4) << 2)
                        
                        if (*rdx_12 == rdx_12[1])
                            r14_8 = arg2
                            
                            if (r14_8 == 0)
                                goto label_1429cdd4a
                            
                            int32_t var_538_5 = r13_4
                            _snscanf(&var_448, 0x400, 
                                "%s - Error in eIndex = %d:  degenerate edge not tagged marked "
                            "non-manifold", 
                                sub_1429cc9e0(0xc))
                            rcx_23 = 0xc
                            break
                        
                        rbx_3 = zx.q(*(r9_10 + *(r15 + 0x90)))
                        
                        if ((rbx_3 - 1).d u> 1)
                            r14_8 = arg2
                            
                            if (r14_8 == 0)
                                goto label_1429cdd4a
                            
                            int32_t var_530_4 = rbx_3.d
                            int32_t var_538_4 = r13_4
                            _snscanf(&var_448, 0x400, 
                                "%s - edge %d with %d incident faces not tagged non-manifold", 
                                sub_1429cc9e0(0xd))
                            rcx_23 = 0xd
                            break
                    
                    r13_4 += 1
                    r10_4 += 2
                    r8_6 = &r8_6[1]
                    r9_10 += 8
                    
                    if (r13_4 s>= r11_4)
                        goto label_1429cdd4e
                
            label_1429cdd47:
                r14_8(rcx_23, &var_448, arg3)
            label_1429cdd4a:
                rbx_3.b = 0
            
            j_sub_140a74f90(var_458_1)
            result = zx.q(rbx_3.b)
__security_check_cookie(rax_1 ^ &var_558)
return result
