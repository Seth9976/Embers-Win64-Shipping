// 函数: sub_140d25690
// 地址: 0x140d25690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t result = zx.q(arg1[1].d)
char r8 = arg2
int64_t* r15 = arg1

if (result.d == 0)
label_140d25ca5:
    result.b = 0
else
    int32_t i_4 = 0
    
    while (true)
        int64_t* rdi_2 = *r15 + sx.q(result.d) * 0x38 - 0x38
        int64_t* var_80_1 = rdi_2
        int64_t rcx_2 = sx.q(rdi_2[6].d)
        result = zx.q(rdi_2[5].d)
        bool cond:0_1 = rcx_2.d != result.d
        
        if (rcx_2.d s< result.d)
            int64_t rax_3 = rdi_2[4]
            int32_t r10_1 = (rcx_2 + 1).d
            int32_t var_e8_1 = r10_1
            int64_t rbx_2 = rcx_2 * 2
            void* rdx = *(rax_3 + (rbx_2 << 3))
            int64_t* rbx_3 = *(rax_3 + (rbx_2 << 3) + 8)
            void* const rax_5
            
            if (rdx != 0)
                rax_5 = rdx
            
            if (rdx == 0 || ((*(*(rdx + 8) + 0x10) u>> 0x15).b & 1) == 0)
                rax_5 = nullptr
            
            int64_t r9_1 = sx.q(r10_1)
            
            if (rax_5 == 0)
                if (rdx != 0)
                    int64_t rcx_10 = *(*(rdx + 8) + 0x10)
                    void* const var_c8_1
                    
                    if (((rcx_10 u>> 0x2e).b & 1) == 0)
                        int72_t var_a8
                        
                        if (((rcx_10 u>> 0x2f).b & 1) == 0)
                            if (((rcx_10 u>> 0x14).b & 1) != 0 && r8 == 1)
                                int32_t r15_8 = *(r15 + 0x1c)
                                void* r14_7 = *(rdx + 0x78)
                                sub_140cea340()
                                int64_t* var_b8 = nullptr
                                int32_t i_1 = 1
                                var_a8.q = &data_143e1b820
                                var_a8:8.b = 0
                                var_a8:0xc.d = r15_8
                                char var_98_1 = 0
                                sub_1407c3b60(&var_b8)
                                int64_t* rsi_11 = var_b8
                                *rsi_11 = r14_7
                                int64_t rax_55
                                
                                if (r14_7 == 0)
                                    rax_55 = 0
                                else
                                    rax_55 = *(r14_7 + 0x50)
                                
                                rsi_11[1] = rax_55
                                rsi_11[2].d = 0xffffffff
                                rax_55.b = r15_8 == 1
                                *(rsi_11 + 0x14) = 1
                                *(rsi_11 + 0x15) = rax_55.b
                                *(rsi_11 + 0x16) = 0
                                sub_140bc98b0(rsi_11)
                                rsi_11[3] = rbx_3
                                __builtin_memset(&rsi_11[4], 0, 0x14)
                                uint64_t rdx_34 = zx.q(var_a8:8.b)
                                
                                if (var_98_1 != 0)
                                    rdx_34.b = 0
                                    var_98_1 = 0
                                
                                if (sub_140d25690(&var_b8, rdx_34) != 0)
                                    char i
                                    
                                    do
                                        void* rax_60 = &var_b8[sx.q(i_1 - 1) * 7]
                                        
                                        if ((*(var_a8.q + 8) & *(*(
                                                *(*(rax_60 + 0x20) + sx.q(*(rax_60 + 0x30)) * 0x10)
                                                + 8) + 0x10)) != 0)
                                            break
                                        
                                        i = sub_140d25690(&var_b8, zx.q(var_a8:8.b))
                                    while (i != 0)
                                
                                int32_t r13_4 = var_e8_1
                                int64_t r15_10 = r9_1 << 4
                                
                                while (i_1 s> 0)
                                    int32_t rsi_12 = rdi_2[5].d
                                    void* rax_68 = &var_b8[sx.q(i_1 - 1) * 7]
                                    int64_t rbx_6 = sx.q(*(rax_68 + 0x30))
                                    int64_t* rbx_8 = (rbx_6 << 4) + *(rax_68 + 0x20)
                                    void* r14_10 = (rbx_6 << 4) + *(rax_68 + 0x20)
                                    rdi_2[5].d = rsi_12 + 1
                                    
                                    if (rsi_12 + 1 s> *(rdi_2 + 0x2c))
                                        sub_1405a4f90(&rdi_2[4])
                                    
                                    int64_t rdx_40 = (sx.q(r13_4) << 4) + rdi_2[4]
                                    memmove(rdx_40 + 0x10, rdx_40, (rsi_12 - r13_4) << 4)
                                    r13_4 += 1
                                    int64_t* rcx_47 = rdi_2[4]
                                    *(rcx_47 + r15_10) = *rbx_8
                                    *(rcx_47 + r15_10 + 8) = *(r14_10 + 8)
                                    r15_10 += 0x10
                                    uint64_t rdx_41 = zx.q(var_a8:8.b)
                                    
                                    if (var_98_1 != 0)
                                        rdx_41.b = 0
                                        var_98_1 = 0
                                    
                                    if (sub_140d25690(&var_b8, rdx_41) != 0)
                                        char j
                                        
                                        do
                                            void* rax_76 = &var_b8[sx.q(i_1 - 1) * 7]
                                            
                                            if ((*(var_a8.q + 8) & *(*(*(*(rax_76 + 0x20)
                                                    + sx.q(*(rax_76 + 0x30)) * 0x10) + 8) + 0x10)) != 0)
                                                break
                                            
                                            j = sub_140d25690(&var_b8, zx.q(var_a8:8.b))
                                        while (j != 0)
                                
                                sub_1408d45e0(&var_b8)
                                r15 = arg1
                        else if (r8 == 1)
                            int32_t rsi_8 = 0
                            var_c8_1.d = *(rdx + 0x90)
                            int32_t rdx_19 = rbx_3[1].d
                            int32_t i_2 = rdx_19 - *(rbx_3 + 0x34)
                            int32_t i_5 = i_2
                            var_a8 = (*(rdx + 0x80)).9
                            
                            if (rdx_19 != *(rbx_3 + 0x34))
                                int32_t rax_40 = var_c8_1.d
                                int32_t r12_1 = 1
                                int64_t var_d8_5 = r9_1 << 4
                                int32_t r13_3 = 0
                                
                                do
                                    if (rsi_8 s>= 0 && rsi_8 s< rbx_3[5].d)
                                        void* rax_41 = rbx_3[4]
                                        void* rcx_23 = &rbx_3[2]
                                        
                                        if (rax_41 != 0)
                                            rcx_23 = rax_41
                                        
                                        int32_t rax_42 = rsi_8
                                        
                                        if (rsi_8 s< 0)
                                            rax_42 = rsi_8 + 0x1f
                                        
                                        if ((*(rcx_23 + (sx.q(rax_42 s>> 5) << 2)) & r12_1) != 0)
                                            int64_t r14_4
                                            
                                            if (rbx_3[1].d != *(rbx_3 + 0x34))
                                                r14_4 = sx.q(r13_3) + *rbx_3
                                            else
                                                r14_4 = 0
                                            
                                            int32_t r15_6 = rdi_2[5].d
                                            rdi_2[5].d = r15_6 + 1
                                            
                                            if (r15_6 + 1 s> *(rdi_2 + 0x2c))
                                                sub_1405a4f90(&rdi_2[4])
                                                r10_1 = var_e8_1
                                            
                                            int64_t rdx_23 = (sx.q(r10_1) << 4) + rdi_2[4]
                                            memmove(rdx_23 + 0x10, rdx_23, (r15_6 - r10_1) << 4)
                                            int64_t* rcx_26 = rdi_2[4]
                                            r10_1 = var_e8_1 + 1
                                            var_e8_1 = r10_1
                                            *(rcx_26 + var_d8_5) = *(rdx + 0x78)
                                            *(rcx_26 + var_d8_5 + 8) = r14_4
                                            var_d8_5 += 0x10
                                            i_2 = i_5 - 1
                                            i_5 = i_2
                                        
                                        rax_40 = var_c8_1.d
                                    
                                    rsi_8 += 1
                                    r12_1 = rol.d(r12_1, 1)
                                    r13_3 += rax_40
                                while (i_2 != 0)
                                
                                i_4 = 0
                                r15 = arg1
                    else if (r8 == 1)
                        int32_t rcx_11 = *(rdx + 0xa0)
                        int64_t zmm1 = *(rdx + 0x98)
                        int32_t r8_3 = rbx_3[1].d
                        int32_t var_60_1 = (*(rdx + 0x88)).9.d
                        int32_t i_3
                        
                        if ((not.b(rcx_11.b) & r8) != 0)
                            i_3 = r8_3 - *(rbx_3 + 0x34)
                        else
                            i_3 = r8_3 - *(rbx_3 + 0x24)
                        
                        var_c8_1.d = i_3
                        int32_t r14_3 = 0
                        
                        if (i_3 != 0)
                            int32_t rdx_5 = 1
                            rcx_11.b = not.b(rcx_11.b)
                            rcx_11.b &= 1
                            int32_t var_e0_2 = 1
                            int32_t r13_2 = 0
                            int64_t var_d8_3 = r9_1 << 4
                            int32_t var_d0_1 = rcx_11
                            
                            do
                                void* rsi_3
                                
                                if (rcx_11.b != 0)
                                    if (r14_3 s>= 0 && r14_3 s< rbx_3[5].d)
                                        void* rax_23 = rbx_3[4]
                                        void* rcx_14 = &rbx_3[2]
                                        
                                        if (rax_23 != 0)
                                            rcx_14 = rax_23
                                        
                                        int32_t rax_24 = r14_3
                                        
                                        if (r14_3 s< 0)
                                            rax_24 = r14_3 + 0x1f
                                        
                                        if ((*(rcx_14 + (sx.q(rax_24 s>> 5) << 2)) & rdx_5) == 0)
                                            rcx_11 = var_d0_1
                                        else
                                            if (rbx_3[1].d != *(rbx_3 + 0x34))
                                                rsi_3 = sx.q(r13_2) + *rbx_3
                                            else
                                                rsi_3 = nullptr
                                            
                                        label_140d25965:
                                            int32_t r15_2 = rdi_2[5].d
                                            rdi_2[5].d = r15_2 + 1
                                            
                                            if (r15_2 + 1 s> *(rdi_2 + 0x2c))
                                                sub_1405a4f90(&rdi_2[4])
                                                r10_1 = var_e8_1
                                            
                                            int64_t rdx_9 = (sx.q(r10_1) << 4) + rdi_2[4]
                                            memmove(rdx_9 + 0x10, rdx_9, (r15_2 - r10_1) << 4)
                                            int64_t* rcx_17 = rdi_2[4]
                                            int32_t r8_7 = var_e8_1 + 1
                                            int32_t var_e8_2 = r8_7
                                            *(rcx_17 + var_d8_3) = *(rdx + 0x78)
                                            *(rcx_17 + var_d8_3 + 8) = rsi_3
                                            int32_t rax_31 = rbx_3[1].d
                                            void* rsi_6
                                            
                                            if (var_d0_1.b != 0)
                                                if (rax_31 != *(rbx_3 + 0x34))
                                                    rsi_6 = sx.q(var_60_1) + sx.q(r13_2) + *rbx_3
                                                else
                                                    rsi_6 = nullptr
                                            else if (rax_31 != *(rbx_3 + 0x24))
                                                void* rcx_18 = *rbx_3
                                                
                                                if ((rcx_18.b & 1) != 0)
                                                    rcx_18 = (rcx_18 s>> 1) + rbx_3
                                                
                                                rsi_6 = sx.q(var_60_1) + sx.q(r13_2) + rcx_18
                                            else
                                                rsi_6 = nullptr
                                            
                                            int32_t r15_4 = rdi_2[5].d
                                            rdi_2[5].d = r15_4 + 1
                                            
                                            if (r15_4 + 1 s> *(rdi_2 + 0x2c))
                                                sub_1405a4f90(&rdi_2[4])
                                                r8_7 = var_e8_2
                                            
                                            int64_t rdx_15 = (sx.q(r8_7) << 4) + rdi_2[4]
                                            memmove(rdx_15 + 0x10, rdx_15, (r15_4 - r8_7) << 4)
                                            int64_t* rcx_22 = rdi_2[4]
                                            r10_1 = var_e8_2 + 1
                                            var_e8_1 = r10_1
                                            *(rcx_22 + var_d8_3 + 0x10) = *(rdx + 0x80)
                                            *(rcx_22 + var_d8_3 + 0x10 + 8) = rsi_6
                                            i_3 = var_c8_1.d - 1
                                            var_d8_3 += 0x20
                                            rdx_5 = var_e0_2
                                            var_c8_1.d = i_3
                                            rcx_11 = var_d0_1
                                else if (r14_3 s>= 0 && r14_3 s< rbx_3[3].d)
                                    void* rcx_12 = rbx_3[2]
                                    
                                    if ((rcx_12.b & 1) != 0)
                                        rcx_12 = (rcx_12 s>> 1) + &rbx_3[2]
                                    
                                    int32_t rax_17 = r14_3
                                    
                                    if (r14_3 s< 0)
                                        rax_17 = r14_3 + 0x1f
                                    
                                    if ((*(rcx_12 + (sx.q(rax_17 s>> 5) << 2)) & rdx_5) != 0)
                                        if (rbx_3[1].d != *(rbx_3 + 0x24))
                                            void* rax_21 = *rbx_3
                                            
                                            if ((rax_21.b & 1) != 0)
                                                rax_21 = (rax_21 s>> 1) + rbx_3
                                            
                                            rsi_3 = sx.q(r13_2) + rax_21
                                        else
                                            rsi_3 = nullptr
                                        
                                        goto label_140d25965
                                    
                                    rcx_11 = var_d0_1
                                r13_2 += zmm1:4.d
                                r14_3 += 1
                                rdx_5 = rol.d(rdx_5, 1)
                                var_e0_2 = rdx_5
                            while (i_3 != 0)
                            
                            r15 = arg1
            else if (r8 == 1)
                int32_t r15_1 = 0
                char r13_1 = not.b((*(rax_5 + 0x80)).b) & r8
                int64_t r9_2 = r9_1 << 4
                int32_t rax_7 = *(*(rax_5 + 0x78) + 0x3c)
                
                while (true)
                    int32_t rax_8 = rbx_3[1].d
                    
                    if (r15_1 s>= rax_8)
                        break
                    
                    void* r14_1
                    
                    if (rax_8 != 0)
                        void* rcx_5 = *rbx_3
                        
                        if (r13_1 == 0 && (rcx_5.b & 1) != 0)
                            rcx_5 = (rcx_5 s>> 1) + rbx_3
                        
                        r14_1 = sx.q(i_4) + rcx_5
                    else
                        r14_1 = nullptr
                    
                    int32_t rsi_1 = rdi_2[5].d
                    rdi_2[5].d = rsi_1 + 1
                    
                    if (rsi_1 + 1 s> *(rdi_2 + 0x2c))
                        sub_1405a4f90(&rdi_2[4])
                        r10_1 = var_e8_1
                    
                    int64_t rdx_4 = (sx.q(r10_1) << 4) + rdi_2[4]
                    memmove(rdx_4 + 0x10, rdx_4, (rsi_1 - r10_1) << 4)
                    r15_1 += 1
                    int64_t* rcx_9 = rdi_2[4]
                    r10_1 = var_e8_1 + 1
                    var_e8_1 = r10_1
                    *(rcx_9 + r9_2) = *(rax_5 + 0x78)
                    *(rcx_9 + r9_2 + 8) = r14_1
                    r9_2 += 0x10
                    i_4 += rax_7
                
                i_4 = 0
                r15 = arg1
            
            rdi_2 = var_80_1
            rdi_2[6].d += 1
            cond:0_1 = rdi_2[6].d != rdi_2[5].d
        
        if (not(cond:0_1))
            void* rbx_4 = rdi_2[1]
            
            if (rbx_4 != 0)
                rdi_2[1] = *(rbx_4 + 0x20)
                sub_140bc98b0(rdi_2)
                result = zx.q(*(rdi_2 + 0x2c))
                rdi_2[5].d = 0
                
                if (result.d s< 0 && result.d != 0)
                    sub_1405a5410(&rdi_2[4], 0)
                
                var_80_1[6].d = 0
                
                if (*(rbx_4 + 0x38) != 0)
                    do
                        int64_t r14_11 = sx.q(rdi_2[5].d)
                        int32_t rax_84 = (r14_11 + 1).d
                        int64_t rsi_16 =
                            sx.q(*(rbx_4 + 0x3c) * i_4) + sx.q(*(rbx_4 + 0x4c)) + var_80_1[3]
                        rdi_2[5].d = rax_84
                        
                        if (rax_84 s> *(rdi_2 + 0x2c))
                            sub_1405a4f90(&rdi_2[4])
                        
                        i_4 += 1
                        result = (r14_11 << 4) + rdi_2[4]
                        *result = rbx_4
                        *(result + 8) = rsi_16
                    while (i_4 != *(rbx_4 + 0x38))
            else
                int64_t rdx_27 = *r15
                int64_t rcx_28 = sx.q(r15[1].d) * 0x38
                int64_t rdi_4 = *(rcx_28 + rdx_27 - 0x18)
                *(rcx_28 + rdx_27 - 0x18) = 0
                *(rcx_28 + rdx_27 - 0x10) = rbx_4
                int64_t rbx_5 = sx.q(r15[1].d)
                int64_t rsi_9 = rbx_5 * 0x38
                int64_t rcx_29 = *(*r15 + rsi_9 - 0x18)
                int32_t rdx_29 = rbx_5.d
                
                if (rcx_29 != 0)
                    sub_140a74f90(rcx_29)
                    rdx_29 = r15[1].d
                
                int32_t rax_51 = rdx_29 - (rbx_5 - 1).d
                
                if (rax_51 != 1)
                    int64_t r9_6 = *r15
                    memmove(rsi_9 - 0x38 + r9_6, rbx_5 * 0x38 + r9_6, (rax_51 - 1) * 0x38)
                    rdx_29 = r15[1].d
                
                r15[1].d = rdx_29 - 1
                sub_1407c4070(r15)
                
                if (rdi_4 != 0)
                    sub_140a74f90(rdi_4)
                
                result = sx.q(r15[1].d)
                
                if (result.d s<= 0)
                    goto label_140d25ca5
                
                int64_t rdx_32 = *r15
                r8 = arg2
                int64_t rcx_33 = result * 0x38
                *(rcx_33 + rdx_32 - 8) += 1
                result = zx.q(r15[1].d)
                
                if (result.d == 0)
                    goto label_140d25ca5
                
                continue
        
        result.b = 1
        break

__security_check_cookie(rax_1 ^ &var_108)
return result
