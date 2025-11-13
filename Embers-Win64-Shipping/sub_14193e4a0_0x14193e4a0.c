// 函数: sub_14193e4a0
// 地址: 0x14193e4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg4
int32_t r13 = arg9
void* rbx = arg1
int32_t r12 = *(arg2 + 0x84)
uint32_t r15 = arg11
arg9.b = 0
int32_t var_74 = r12
int32_t var_88
int32_t rsi

if (arg5 != 0 || *(arg2 + 0x6c) u<= 1 || (r15.b & 4) == 0)
    int64_t rcx = sx.q(data_1439c74c8)
    rsi = 0
    arg11.b = 0
    var_88 = 0
    
    if (0x400 - rcx.d s<= 1)
        memcpy(&var_88, &data_143efbd00 + (rcx << 2), (0x400 - rcx.d) << 2)
        data_143effa28(0x400, &data_143efbd00)
        memcpy(&(&var_88)[sx.q(0x400 - rcx.d)], &data_143efbd00, (1 - (0x400 - rcx.d)) << 2)
        data_1439c74c8 = 1 - (0x400 - rcx.d)
        rbx = arg1
    else
        int32_t rax_1 = *(&data_143efbd00 + (rcx << 2))
        data_1439c74c8 = rcx.d + 1
        var_88 = rax_1
    
    rbp = arg4
else
    rsi = 0
    arg11.b = 1
    var_88 = 0

uint64_t rdx_1 = zx.q(arg7)
void* rdi_3 = rdx_1 * 0x1c + &data_143efeda0
uint8_t rax_4 = (r15 u>> 4).b & 1
uint64_t rcx_4 = zx.q(rax_4)
void* r14 = rdi_3 + (rcx_4 << 2)

if (*(rdi_3 + (rcx_4 << 2)) == 0)
    uint32_t var_c8_1 = zx.d(rax_4)
    sub_140af98a0("Unknown", 0x185, Texture format '%s' not supported (sRGB=%d).", 
        (&data_1439c85e0)[rdx_1 * 5])
    sub_140afbb40()

rdx_1.b = 1
void* rax_6 = sub_14190d690(rbx, rdx_1.b)

if (*(rax_6 + 0x428) != 0)
    data_143effcd8(0x88ec, 0)
    *(rax_6 + 0x428) = 0

int64_t rax_7 = *(rax_6 + 8)
int32_t r8_4 = data_1439c7498 - 1
int64_t rdx_2 = sx.q(r8_4) * 5
int32_t var_c0
int32_t var_b8
int32_t r15_1

if (*(rax_7 + (rdx_2 << 3) + 0x10) != r12 || *(rax_7 + (rdx_2 << 3) + 0x14) != var_88)
    r15_1 = arg8
    var_b8 = r15_1
    var_c0 = 0
    sub_14190a090(arg1, rax_6, r8_4, r12, var_88, 0)
else
    r15_1 = arg8

if (arg11.b == 0)
    if (r13 != 1)
        int64_t rax_57 = data_143f00370
        uint64_t rdx_17 = zx.q(r13)
        uint64_t r8_15 = zx.q(*r14)
        uint64_t rcx_45 = zx.q(r12)
        uint64_t r9_11 = zx.q(arg3)
        
        if (rax_57 == 0)
            data_143f001c8(rcx_45, rdx_17, r8_15, r9_11, rbp, 1, var_b8)
        else
            rax_57(rcx_45, rdx_17, r8_15, r9_11, rbp, 1, var_b8)
    else
        int64_t r8_5
        
        if (r12 == 0x8d65 || (arg3 & (arg3 - 1)) != 0 || (rbp & (rbp - 1)) != 0)
            data_143effb50(zx.q(r12), 0x2802, 0x812f)
            data_143effb50(zx.q(r12), 0x2803, 0x812f)
            r8_5 = 0x812f
        else
            data_143effb50(zx.q(r12), 0x2802, 0x2901)
            data_143effb50(zx.q(r12), 0x2803, 0x2901)
            r8_5 = 0x2901
        
        data_143effb50(zx.q(r12), 0x8072, r8_5)
        int32_t rbx_3 = 0x2600
        data_143effb50(zx.q(r12), 0x2800, 0x2600)
        
        if (r15_1 u> 1)
            rbx_3 = 0x2700
        
        data_143effb50(zx.q(r12), 0x2801, zx.q(rbx_3))
        
        if (data_143efbce5 != 0)
            data_143effb50(zx.q(r12), 0x84fe, 1)
        
        data_143effb50(zx.q(r12), 0x813c, 0)
        
        if (r12 != 0x8d65)
            data_143effb50(zx.q(r12), 0x813d, zx.q(r15_1 - 1))
        
        int32_t var_60 = 0
        int32_t var_5c_1 = r15_1 - 1
        sub_141904ca0(arg1 + 0x15b68, &var_88, &var_60)
        
        if (*(rdi_3 + 0x19) != 0 && (r15.b & 1) == 0)
            data_143effb50(zx.q(r12), 0x8e42, 0x1905)
            data_143effb50(zx.q(r12), 0x8e44, 0x1903)
        
        int32_t var_a8
        int64_t var_a0
        int32_t r14_1
        
        if (arg6 == 0)
            if (r12 != 0x8d65)
                int64_t rax_20 = data_143f00350
                
                if (rax_20 != 0)
                    rax_20(zx.q(r12), zx.q(r15_1), zx.q(*(rdi_3 + (rcx_4 << 2) + 8)), zx.q(arg3), 
                        rbp, var_c0, var_b8)
                    arg9.b = 1
                else if (*(rdi_3 + 0x18) == 0)
                    arg9.b = 1
                    int32_t r13_3 = r12
                    int32_t rax_21 = 1
                    
                    if (r12 == 0x8513)
                        r13_3 = 0x8515
                    
                    if (r12 == 0x8513)
                        rax_21 = 6
                    
                    int32_t rbp_3 = 0
                    
                    if (r15_1 != 0)
                        do
                            char rcx_31 = rbp_3.b
                            int32_t rbx_5 = 0
                            uint32_t r14_3 = arg4 u>> rcx_31
                            uint32_t r15_3 = arg3 u>> rcx_31
                            
                            if (r14_3 u<= 1)
                                r14_3 = 1
                            
                            if (r15_3 u<= 1)
                                r15_3 = 1
                            
                            do
                                var_a8.q = 0
                                data_143effb38(zx.q(rbx_5 + r13_3), zx.q(rbp_3), 
                                    zx.q(*(rdi_3 + (rcx_4 << 2))), zx.q(r15_3), r14_3, 0, 
                                    *(rdi_3 + 0x10), *(rdi_3 + 0x14), 0)
                                rbx_5 += 1
                            while (rbx_5 u< rax_21)
                            
                            r15_1 = arg8
                            rbp_3 += 1
                        while (rbp_3 u< r15_1)
                        
                        r12 = var_74
            
            r14_1 = arg4
        else
            uint32_t rax_14 = *(rdi_3 + 0x10)
            int32_t r13_2 = *(rdi_3 + 0x14)
            int32_t rbp_2 = *r14
            int64_t rax_15 = data_143f00358
            
            if (rax_15 == 0)
                if (r12 == 0x8c1a || r12 == 0x9009)
                    rax_15.b = 1
                else
                    rax_15.b = 0
                
                r14_1 = arg4
                int32_t rbx_4 = 0
                
                if (r15_1 != 0)
                    if (rax_15.b == 0)
                        do
                            char rcx_27 = rbx_4.b
                            int32_t rdx_8 = arg10 s>> rcx_27
                            int32_t rax_19 = r14_1 s>> rcx_27
                            int32_t r9_7 = arg3 s>> rcx_27
                            var_a0 = 0
                            
                            if (rdx_8 u<= 1)
                                rdx_8 = 1
                            
                            if (rax_19 u<= 1)
                                rax_19 = 1
                            
                            if (r9_7 u<= 1)
                                r9_7 = 1
                            
                            data_143effc00(zx.q(r12), zx.q(rbx_4), zx.q(rbp_2), r9_7, rax_19, 
                                rdx_8, 0, rax_14, r13_2, 0)
                            rbx_4 += 1
                        while (rbx_4 u< r15_1)
                    else
                        do
                            char rcx_24 = rbx_4.b
                            int32_t r9_5 = arg3 s>> rcx_24
                            int32_t rax_17 = r14_1 s>> rcx_24
                            var_a0 = 0
                            
                            if (rax_17 u<= 1)
                                rax_17 = 1
                            
                            if (r9_5 u<= 1)
                                r9_5 = 1
                            
                            data_143effc00(zx.q(r12), zx.q(rbx_4), zx.q(rbp_2), r9_5, rax_17, 
                                arg10, 0, rax_14, r13_2, 0)
                            rbx_4 += 1
                        while (rbx_4 u< r15_1)
            else
                r14_1 = arg4
                rax_15(zx.q(r12), zx.q(r15_1), zx.q(rbp_2), zx.q(arg3), r14_1, arg10, var_b8)
        
        int64_t* rbx_8 = arg12
        
        if (rbx_8 != 0)
            int64_t rax_26 = (*(*rbx_8 + 8))(rbx_8)
            int32_t rbp_4 = 0
            int32_t r13_4 = 0
            uint64_t rax_27 = zx.q(arg7) * 0x28
            int32_t r8_14 = *(rax_27 + 0x1439c85e8)
            int32_t r9_10 = *(rax_27 + &data_1439c85ec)
            void* var_68
            var_68.d = r8_14
            var_60 = r9_10
            
            if (r15_1 != 0)
                int32_t rbx_6 = arg10
                uint64_t r10_1 = zx.q(r8_14)
                uint64_t r11_1 = zx.q(r9_10)
                
                if (rbx_6 u<= 1)
                    rbx_6 = 1
                
                int32_t var_70_1 = rbx_6
                
                do
                    char rcx_36 = r13_4.b
                    uint32_t r15_5 = arg3 u>> rcx_36
                    uint64_t rax_28 = zx.q(r15_5)
                    
                    if (r15_5 u<= 1)
                        rax_28 = 1
                    
                    uint32_t r14_4 = r14_1 u>> rcx_36
                    uint64_t rcx_37 = zx.q(r14_4)
                    uint32_t temp0_2 =
                        divu.dp.d(0:((divu.dp.q(0:(rax_28 - 1 + r10_1), r10_1)).d * r8_14), r8_14)
                    
                    if (r14_4 u<= 1)
                        rcx_37 = 1
                    
                    uint32_t temp0_4 =
                        divu.dp.d(0:((divu.dp.q(0:(r11_1 - 1 + rcx_37), r11_1)).d * r9_10), r9_10)
                    data_143effac0(0xcf5, 1, 1)
                    int64_t var_98
                    
                    if (arg6 == 0)
                        int32_t rbx_7 = 0
                        
                        if (arg5 != 0)
                            r12 = 0x8515
                        
                        int32_t rax_47 = 1
                        
                        if (arg5 != 0)
                            rax_47 = 6
                        
                        if (r14_4 u<= 1)
                            r14_4 = 1
                        
                        if (r15_5 u<= 1)
                            r15_5 = 1
                        
                        do
                            var_a8.q = zx.q(rbp_4) + rax_26
                            data_143effb68(zx.q(rbx_7 + r12), zx.q(r13_4), 0, 0, r15_5, r14_4, 
                                *(rdi_3 + 0x10), *(rdi_3 + 0x14), var_a8, var_a0, var_98)
                            rbx_7 += 1
                            rbp_4 +=
                                (&data_1439c85f4)[zx.q(arg7) * 0xa] * var_70_1 * temp0_4 * temp0_2
                        while (rbx_7 u< rax_47)
                        
                        r12 = var_74
                        rsi = 0
                        rbx_6 = var_70_1
                    else
                        if (arg5 != 0)
                            var_98 = zx.q(rbp_4) + rax_26
                            
                            if (r14_4 u<= 1)
                                r14_4 = 1
                            
                            if (r15_5 u<= 1)
                                r15_5 = 1
                            
                            var_a0.d = *(rdi_3 + 0x14)
                            data_143effc08(zx.q(r12), zx.q(r13_4), 0, 0, 0, r15_5, r14_4, arg10, 
                                *(rdi_3 + 0x10), var_a0, var_98)
                        
                        rbp_4 += (&data_1439c85f4)[zx.q(arg7) * 0xa] * rbx_6 * temp0_4 * temp0_2
                    data_143effac0(0xcf5, 4)
                    r8_14 = var_68.d
                    r13_4 += 1
                    r10_1 = zx.q(r8_14)
                    r9_10 = var_60
                    r11_1 = zx.q(r9_10)
                    r14_1 = arg4
                while (r13_4 u< arg8)
                
                rbx_8 = arg12
            
            (*(*rbx_8 + 0x18))(rbx_8)

if ((r15 & 0x40001) != 0)
    rsi = 0x8ce0
else if ((r15.b & 4) != 0)
    rsi = 0x821a
    
    if (arg7 != 0xb)
        rsi = 0x8d00
else if ((r15.b & 2) != 0)
    if (arg7 != 0xb)
        rsi = 0x8d00
        
        if (((arg7 - 0xc) & 0xf7) != 0)
            rsi = 0x8ce0
    else
        rsi = 0x821a

char rdx_18 = arg9.b
*(arg2 + 0x84) = r12
*(arg2 + 0x8c) = rsi
arg2[0x10].d = var_88

if (arg5 == 0)
    sub_14194d740(arg2, rdx_18)
else
    sub_14194d740(arg2, rdx_18)

return sub_141941370(arg2, r15)
