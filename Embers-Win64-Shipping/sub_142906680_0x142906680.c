// 函数: sub_142906680
// 地址: 0x142906680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
__chkstk(0xc0)
void var_e8
void* rsp_1 = &var_e8
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int32_t var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t result_1 = 0
int32_t var_a8 = 0
void* var_a0 = nullptr
void* rbx = nullptr
int32_t rax_2 = sub_142890290(arg4)
int32_t result

if (rax_2 != 0)
    int64_t r13 = sx.q(arg4[1].d)
    int32_t r15_1 = arg3[1].d << 6
    
    if (r15_1 != 0)
        int64_t* r14_1 = arg5
        sub_1428d8e50(r14_1)
        int32_t* rsi_1
        
        if (arg6 == 0)
            int32_t* rax_5 = sub_1428cc660()
            rsi_1 = rax_5
            
            if (rax_5 == 0)
                sub_1428cc600(rsi_1)
            else
                if (sub_1428cc700(rax_5, arg4, r14_1) != 0)
                    goto label_1429067af
                
                sub_1428cc600(rsi_1)
        else
            rsi_1 = arg6
        label_1429067af:
            int32_t i_6 = 3
            int32_t rdi_1
            
            if (r15_1 s> 0x3a9)
                rdi_1 = 6
            else if (r15_1 s> 0x132)
                rdi_1 = 5
            else if (r15_1 s<= 0x59)
                rdi_1 = 1
                
                if (r15_1 s> 0x16)
                    rdi_1 = 3
            else
                rdi_1 = 4
            
            int32_t rdx_2 = (r13 << 1).d
            int32_t rax_7 = 1 << rdi_1.b
            var_b8 = rax_7
            
            if (rdx_2 s<= rax_7)
                rdx_2 = rax_7
            
            int32_t rdx_4 = (rdx_2 + rax_7 * r13.d) << 3
            var_a8 = rdx_4
            int64_t rcx_7 = sx.q(rdx_4 + 0x40)
            
            if (rdx_4 s< 0xc00)
                int64_t rax_10 = rcx_7 + 0xf
                
                if (rax_10 u<= rcx_7)
                    rax_10 = 0xffffffffffffff0
                
                int64_t rax_11 = rax_10 & 0xfffffffffffffff0
                __chkstk(rax_11)
                rsp_1 = &var_e8 - rax_11
                rbx = rsp_1 + 0x30
                goto label_142906870
            
            void* rax_12 = sub_1428a6730(rcx_7)
            rbx = rax_12
            
            if (rax_12 == 0)
                result_1 = 0
            else
                rdx_4 = var_a8
            label_142906870:
                var_a0 = (rbx & 0xffffffffffffffc0) + 0x40
                memset((rbx & 0xffffffffffffffc0) + 0x40, 0, sx.q(rdx_4))
                int64_t* r8_3 = arg4
                void* rax_16 = nullptr
                int32_t var_70_1 = 0
                int64_t r9 = r13
                
                if (var_a8 s>= 0xc00)
                    rax_16 = rbx
                
                int32_t var_90_1 = 0
                rbx = rax_16
                int64_t rax_18 = sx.q(var_b8) * r13
                int32_t var_6c_1 = r13.d
                int32_t var_8c_1 = r13.d
                int32_t var_68_1 = 0
                int32_t var_88_1 = 0
                void* r10_1 = var_a0 + (rax_18 << 3)
                int32_t var_64_1 = 2
                void* var_98 = r10_1
                int32_t var_84_1 = 2
                int64_t* rax_20 = *r8_3
                void* var_78 = var_a0 + ((rax_18 + r13) << 3)
                int32_t rcx_11 = (r13 - 1).d
                
                if (*(rax_20 + (r13 << 3) + -fffffffffffffff8) s< 0)
                    *r10_1 = neg.q(*rax_20)
                    int32_t i_7 = 1
                    
                    if (r13.d s> 1 && rcx_11 u>= 8)
                        void* rax_23 = var_98
                        void* rdx_6 = *r8_3
                        void* r11_2 = (r13 << 3) + -fffffffffffffff8 + rax_23
                        
                        if ((rax_23 + 8 u> (r13 << 3) + -fffffffffffffff8 + rdx_6
                                || r11_2 u< rdx_6 + 8) && (rax_23 + 8 u> r8_3 || r11_2 u< r8_3))
                            int32_t rcx_12 = rcx_11 & 0x80000007
                            
                            if (rcx_12 s< 0)
                                rcx_12 = ((rcx_12 - 1) | 0xfffffff8) + 1
                            
                            int128_t zmm1 = data_142d3f800
                            void* rax_30 = var_98
                            int64_t i = 1
                            void* rcx_15 = rax_30 + 0x28
                            
                            do
                                i_7 += 8
                                int128_t zmm0_1 = *(rdx_6 + -0x20 - rax_30 + rcx_15)
                                i += 8
                                rcx_15 += 0x40
                                *(rcx_15 - 0x60) = zmm0_1 & not.o(zmm1)
                                *(rcx_15 - 0x50) =
                                    *(rdx_6 + -0x10 - rax_30 + rcx_15 - 0x40) & not.o(zmm1)
                                *(rcx_15 - 0x40) =
                                    *(rdx_6 + neg.q(rax_30) + rcx_15 - 0x40) & not.o(zmm1)
                                *(rcx_15 - 0x30) =
                                    *(rdx_6 + 0x10 - rax_30 + rcx_15 - 0x40) & not.o(zmm1)
                            while (i s< sx.q(r13.d - rcx_12))
                            
                            r14_1 = arg5
                            r9 = r13
                            r8_3 = arg4
                    
                    for (int64_t i_1 = sx.q(i_7); i_1 s< r9; i_1 += 1)
                        *(var_98 + (i_1 << 3)) = not.q(*(*r8_3 + (i_1 << 3)))
                    
                    var_90_1 = r13.d
                    goto label_142906a67
                
                if (sub_1428cd160(&var_98, &data_1434e8ea8, rsi_1, r14_1) == 0)
                    result_1 = 0
                else
                    r8_3 = arg4
                label_142906a67:
                    int32_t rax_38
                    
                    if (arg2[2].d == 0)
                        rax_38 = sub_1428909a0(arg2, r8_3)
                    
                    if (arg2[2].d != 0 || rax_38 s>= 0)
                        rbx = rax_16
                        
                        if (sub_1429084c0(&var_78, arg2, arg4, r14_1) == 0)
                            result_1 = 0
                        else
                            if (sub_1428cd160(&var_78, &var_78, rsi_1, r14_1) != 0)
                                goto label_142906b5c
                            
                            result_1 = 0
                    else if (sub_1428cd160(&var_78, arg2, rsi_1, r14_1) != 0)
                    label_142906b5c:
                        int32_t rcx_29 = r13.d
                        
                        if (r13.d s> var_90_1)
                            rcx_29 = var_90_1
                        
                        int64_t r9_6
                        
                        if (rcx_29 s<= 0)
                            r9_6 = zx.q(var_b8)
                        else
                            r9_6 = sx.q(var_b8)
                            int64_t i_2 = 0
                            void* r8_9 = var_a0
                            
                            do
                                int64_t rcx_30 = *(var_98 + (i_2 << 3))
                                i_2 += 1
                                *r8_9 = rcx_30
                                r8_9 += r9_6 << 3
                            while (i_2 s< sx.q(rcx_29))
                        
                        int32_t rcx_31 = r13.d
                        
                        if (r13.d s> var_70_1)
                            rcx_31 = var_70_1
                        
                        if (rcx_31 s> 0)
                            void* r8_10 = var_a0 + 8
                            int64_t i_3 = 0
                            
                            do
                                int64_t rcx_32 = *(var_78 + (i_3 << 3))
                                i_3 += 1
                                *r8_10 = rcx_32
                                r8_10 += sx.q(r9_6.d) << 3
                            while (i_3 s< sx.q(rcx_31))
                        
                        if (rdi_1 u<= 1)
                        label_142906cc6:
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(r15_1 - 1)
                            int32_t i_4 = r15_1 - (mods.dp.d(temp2_1:temp3_1, rdi_1) + 1)
                            int32_t rax_52 = sub_142907880(arg3, i_4)
                            *(rsp_1 + 0x20) = rdi_1
                            rbx = rax_16
                            
                            if (sub_1429075d0(&var_98, zx.q(r13.d), var_a0, 
                                    zx.q(rax_52) &
                                        zx.q((1 << (mods.dp.d(temp2_1:temp3_1, rdi_1) + 1).b) - 1)) == 0)
                                result_1 = 0
                            else
                                int32_t rax_57 = var_b8 - 1
                                
                                while (i_4 s> 0)
                                    int32_t rbx_9 = 0
                                    
                                    do
                                        *(rsp_1 + 0x20) = r14_1
                                        
                                        if (sub_1428cd090(&var_98, &var_98, &var_98, rsi_1) == 0)
                                            goto label_142906a9a
                                        
                                        rbx_9 += 1
                                    while (rbx_9 s< rdi_1)
                                    
                                    i_4 -= rdi_1
                                    uint64_t r9_15 = zx.q(sub_142907880(arg3, i_4)) & zx.q(rax_57)
                                    *(rsp_1 + 0x20) = rdi_1
                                    
                                    if (sub_1429075d0(&var_78, zx.q(r13.d), var_a0, r9_15) == 0)
                                        goto label_142906a9a
                                    
                                    *(rsp_1 + 0x20) = r14_1
                                    
                                    if (sub_1428cd090(&var_98, &var_98, &var_78, rsi_1) == 0)
                                        goto label_142906a9a
                                
                                rbx = rax_16
                                
                                if (sub_1428ccac0(arg1, &var_98, rsi_1, r14_1) == 0)
                                    result_1 = 0
                                else
                                    result_1 = 1
                        else
                            rbx = rax_16
                            *(rsp_1 + 0x20) = r14_1
                            
                            if (sub_1428cd090(&var_98, &var_78, &var_78, rsi_1) != 0)
                                int32_t rcx_34 = r13.d
                                
                                if (r13.d s> var_90_1)
                                    rcx_34 = var_90_1
                                
                                int64_t rbx_7
                                
                                if (rcx_34 s<= 0)
                                    rbx_7 = zx.q(var_b8)
                                else
                                    rbx_7 = sx.q(var_b8)
                                    int64_t i_5 = 0
                                    void* r8_13 = var_a0 + 0x10
                                    
                                    do
                                        int64_t rcx_35 = *(var_98 + (i_5 << 3))
                                        i_5 += 1
                                        *r8_13 = rcx_35
                                        r8_13 += rbx_7 << 3
                                    while (i_5 s< sx.q(rcx_34))
                                
                                if (rbx_7.d s> 3)
                                    do
                                        *(rsp_1 + 0x20) = r14_1
                                        
                                        if (sub_1428cd090(&var_98, &var_78, &var_98, rsi_1) == 0)
                                            goto label_142906a9a
                                        
                                        int32_t rcx_37 = r13.d
                                        
                                        if (r13.d s> var_90_1)
                                            rcx_37 = var_90_1
                                        
                                        int64_t j = 0
                                        
                                        if (rcx_37 s> 0)
                                            void* r8_15 = var_a0 + (sx.q(i_6) << 3)
                                            
                                            do
                                                int64_t rdx_16 = *(var_98 + (j << 3))
                                                j += 1
                                                *r8_15 = rdx_16
                                                r8_15 += sx.q(rbx_7.d) << 3
                                            while (j s< sx.q(rcx_37))
                                        
                                        i_6 += 1
                                    while (i_6 s< rbx_7.d)
                                
                                goto label_142906cc6
                            
                            result_1 = 0
                    else
                    label_142906a9a:
                        rbx = rax_16
                        result_1 = 0
            
            if (arg6 == 0)
                sub_1428cc600(rsi_1)
        
        if (var_a0 != 0)
            sub_1428b8960(var_a0, sx.q(var_a8))
            sub_1428a6780(rbx)
        
        sub_1428d8a60(r14_1)
        result = result_1
    else if (sub_14288fa30(arg4, 1) == 0)
        result = sub_142890900(arg1, 1)
    else
        sub_142890900(arg1, 0)
        result = 1
else
    sub_1428a5670(rax_2 + 3, rax_2 + 0x7c, 0x66, "crypto\bn\bn_exp.c", 0x266)
    result = 0

__security_check_cookie(rax_1 ^ &var_b8)
return result
