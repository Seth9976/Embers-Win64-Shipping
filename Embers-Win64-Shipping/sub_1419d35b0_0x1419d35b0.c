// 函数: sub_1419d35b0
// 地址: 0x1419d35b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14
uint64_t var_38 = r14
void* r13 = arg1
sub_140597df0(arg1 + 0xb0, arg2)
*(r13 + 0xc0) = arg3
char rax = sub_141979ed0(arg2, arg3, r13 + 0xc4)
int32_t j = 0
char r12 = rax

if (rax != 0)
    void* lpCriticalSection = r13 + 0x110
    void* lpCriticalSection_1 = lpCriticalSection
    EnterCriticalSection(lpCriticalSection)
    sub_1419ce1a0(r13, 1)
    int64_t* i = data_1439c9540
    int64_t rdx_2 = sx.q(data_1439c9548)
    
    for (; i != &i[rdx_2 * 2]; i = &i[2])
        if (i[1].d != 0 && *i != 0)
            int32_t rax_4 = (rdx_2 - 1).d
            int32_t rcx_5 = data_1439c9554 + 1
            r14 = sx.q(rax_4)
            int64_t r15
            r15.b = 0
            data_1439c9554 = rcx_5
            
            if (rax_4 s>= 0)
                uint64_t rdi_2 = r14 << 4
                uint64_t temp1_1
                
                do
                    int64_t rcx_6 = data_1439c9540
                    
                    if (*(rdi_2 + rcx_6 + 8) == 0)
                        r15.b = 1
                    else
                        int64_t* rcx_7 = *(rdi_2 + rcx_6)
                        
                        if (rcx_7 == 0)
                            r15.b = 1
                        else if ((*(*rcx_7 + 0x50))(rcx_7, arg2, zx.q(arg3), r13 + 0xde) == 0)
                            r15.b = 1
                    
                    rdi_2 -= 0x10
                    temp1_1 = r14
                    r14 -= 1
                while (temp1_1 - 1 s>= 0)
                rcx_5 = data_1439c9554
                lpCriticalSection = r13 + 0x110
                rdx_2 = zx.q(data_1439c9548)
                r12 = rax
            
            data_1439c9554 = rcx_5 - 1
            
            if (r15.b != 0 && rcx_5 - 1 s<= 0)
                int32_t r15_1 = rdx_2.d
                r14 = 0
                
                if (rdx_2.d s> 0)
                    int64_t* rdi_3 = nullptr
                    
                    do
                        int64_t rcx_9 = data_1439c9540
                        
                        if (*(rdi_3 + rcx_9 + 8) == 0)
                            sub_1405a4880(&data_1439c9540, r14.d, 1, 1)
                        else
                            int64_t* rcx_10 = *(rdi_3 + rcx_9)
                            
                            if (rcx_10 == 0)
                                sub_1405a4880(&data_1439c9540, r14.d, 1, 1)
                            else if ((*(*rcx_10 + 0x20))(rcx_10) != 0)
                                sub_1405a4880(&data_1439c9540, r14.d, 1, 1)
                            else
                                r14 = zx.q(r14.d + 1)
                                rdi_3 = &rdi_3[2]
                        
                        rdx_2 = zx.q(data_1439c9548)
                    while (r14.d s< rdx_2.d)
                
                int32_t rax_9 = (rdx_2 * 2).d
                
                if (rax_9 s<= 2)
                    rax_9 = 2
                
                data_1439c9550 = rax_9
                
                if (r15_1 s> rax_9 && data_1439c954c != rdx_2.d)
                    sub_1405a5410(&data_1439c9540, rdx_2.d)
            
            break
    
    if (*(r13 + 0xde) != 0)
        int64_t rdi_4 = data_143f202f8
        int64_t rcx_11
        
        if (data_143de5480 == 0)
            rcx_11 = 0
        else
            rcx_11.b = GetCurrentThreadId() != data_143de5470
        
        sub_141987030(sx.q(*(rdi_4 + (rcx_11 << 2))), sub_1419d4800)
        bool cond:2_1 = data_143de5848 != 0
        int16_t* const r15_2 = &data_142d40450
        int16_t* const r12_2 = &data_142d40450
        int32_t var_108 = 0
        
        if (cond:2_1)
            r12_2 = data_143de5840
        
        int32_t rdx_5 = 0
        int16_t* var_100 = nullptr
        int32_t rcx_13 = 0
        int32_t var_f8_1 = 0
        int64_t rdi_5 = -1
        int32_t var_f4_1 = 0
        
        if (r12_2 != 0 && *r12_2 != 0)
            int64_t r14_1 = -1
            
            do
                r14_1 += 1
            while (r12_2[r14_1] != 0)
            
            r14 = zx.q(r14_1.d + 1)
            
            if (r14.d s> 0)
                sub_1405947f0(&var_100, r14.d)
                rcx_13 = var_f4_1
                rdx_5 = var_f8_1
            
            int32_t rax_11 = rdx_5 + r14.d
            int32_t var_f8_2 = rax_11
            
            if (rax_11 s> rcx_13)
                sub_140594770(&var_100)
            
            UnDecorator::getReferenceType(var_100, r12_2, r14.d * 2)
        
        char rax_12 =
            sub_140af3c10(data_143ddb400, data_1439c9720, data_1439c9730, &var_108, &var_100)
        int16_t* rcx_18 = var_100
        r14.b = rax_12 == 0
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        if (r14.b != 0)
            bool cond:4_1 = data_143de5838 != 0
            int32_t rdx_9 = 0
            int32_t rcx_19 = 0
            int16_t* var_f0 = nullptr
            
            if (cond:4_1)
                r15_2 = data_143de5830
            
            int32_t var_e8_1 = 0
            int32_t var_e4_1 = 0
            
            if (r15_2 != 0 && *r15_2 != 0)
                do
                    rdi_5 += 1
                while (r15_2[rdi_5] != 0)
                
                if (rdi_5.d + 1 s> 0)
                    sub_1405947f0(&var_f0, rdi_5.d + 1)
                    rcx_19 = var_e4_1
                    rdx_9 = var_e8_1
                
                int32_t rax_13 = rdi_5.d + 1 + rdx_9
                int32_t var_e8_2 = rax_13
                
                if (rax_13 s> rcx_19)
                    sub_140594770(&var_f0)
                
                UnDecorator::getReferenceType(var_f0, r15_2, (rdi_5.d + 1) * 2)
            
            sub_140af3c10(data_143ddb400, data_1439c9720, data_1439c9730, &var_108, &var_f0)
            int16_t* rcx_24 = var_f0
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
        
        bool cond:3_1 = data_143de5480 == 0
        int64_t rdi_7 = data_143f20370
        void* var_e0 = nullptr
        int32_t var_d8_1 = 0
        int64_t rcx_25
        
        if (cond:3_1)
            rcx_25 = 0
        else
            rcx_25.b = GetCurrentThreadId() != data_143de5470
        
        int512_t zmm1_1 =
            sub_1419731b0(&var_e0, var_108, sx.q(*(rdi_7 + (rcx_25 << 2))), r13 + 0x60)
        int64_t r9_6 = 0
        void* rax_16 = var_e0
        void* i_1 = sx.q(var_d8_1) * 0x58 + rax_16
        int64_t var_a8_1 = 0
        
        if (rax_16 != i_1)
            int64_t* r13_1 = rax_16 + 0x20
            
            do
                int32_t r11_1 = r13_1[1].d
                void* var_c8_1 = &r13_1[-2]
                int32_t rcx_27 = 0
                int32_t var_d0_1 = 0
                r12_2.b = 1
                int32_t var_cc_1 = 1
                int32_t r8_9 = 0
                int32_t var_c0_1 = 0xffffffff
                int64_t var_bc_1 = 0
                
                if (r11_1 != 0)
                    void* rax_17 = *r13_1
                    void* r9_7 = &r13_1[-2]
                    
                    if (rax_17 != 0)
                        r9_7 = rax_17
                    
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(r11_1 - 1)
                    int32_t rdx_16 = *r9_7
                    
                    if (rdx_16 != 0)
                    label_1419d3a58:
                        int32_t rax_24 = neg.d(rdx_16) & rdx_16
                        uint64_t rflags_1
                        int32_t temp0_1
                        temp0_1, rflags_1 = _bit_scan_reverse(rax_24)
                        int32_t var_cc_2 = rax_24
                        int32_t var_b0_1 = temp0_1
                        int32_t rax_25
                        
                        if (rax_24 == 0)
                            rax_25 = 0x20
                        else
                            rax_25 = 0x1f - temp0_1
                        
                        var_bc_1.d = r8_9 - rax_25 + 0x1f
                        
                        if (r8_9 - rax_25 + 0x1f s> r11_1)
                            var_bc_1.d = r11_1
                    else
                        while (true)
                            int64_t rdx_17 = sx.q(rcx_27)
                            r8_9 += 0x20
                            rcx_27 += 1
                            var_bc_1:4.d = r8_9
                            var_d0_1 = rcx_27
                            
                            if (rdx_17.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_16 = *(r9_7 + (rdx_17 << 2) + 4)
                            int32_t var_c0_2 = 0xffffffff
                            
                            if (rdx_16 != 0)
                                goto label_1419d3a58
                        
                        var_bc_1.d = r11_1
                
                int128_t var_58_1 = 0xffffffff
                zmm1_1.o = var_d0_1.o
                int128_t var_68_1
                var_68_1:8.d = 0xffffffff << (r11_1.b & 0x1f)
                int32_t var_5c_1 = r11_1
                int64_t temp0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                int128_t var_98 = (&r13_1[-4]).o
                int128_t var_88_1 = zmm1_1.o
                int64_t var_78_1 = temp0_2
                
                while (true)
                    int64_t rax_27 = sx.q(var_88_1:0xc.d)
                    int64_t rdx_19 = var_98.q
                    
                    if (rax_27.d == (var_68_1:8.q u>> 0x20).d && var_88_1.q == &r13_1[-2]
                            && rdx_19 == &r13_1[-4])
                        break
                    
                    r12_2.b &= sub_1419caf50(rax_27 * 0x1c + *rdx_19)
                    var_88_1:8.d &= not.d(var_98:0xc.d)
                    sub_14059bdd0(&var_98:8)
                
                int64_t rax_31 = var_a8_1 + 1
                
                if (r12_2.b == 0)
                    rax_31 = var_a8_1
                
                r13_1 = &r13_1[0xb]
                r9_6 = rax_31
                var_a8_1 = rax_31
            while (&r13_1[-4] != i_1)
            
            lpCriticalSection = lpCriticalSection_1
            r13 = arg1
        
        *(r13 + 0xf0)
        *(r13 + 0xf0) += r9_6
        
        for (int64_t* i_2 = data_1439c9558; i_2 != &i_2[sx.q(data_1439c9560) * 2]; i_2 = &i_2[2])
            if (i_2[1].d != 0 && *i_2 != 0)
                sub_1419c7ce0(&data_1439c9558, zmm1_1, arg3, var_d8_1, r13 + 0xc4, r13 + 0xe4)
                break
        
        sub_1419c3e90(r13 + 0x138, &var_e0)
        int64_t rax_35 = sx.q(*(r13 + 0x140))
        *(r13 + 0x1f0) = rax_35
        rax_35.b = rax_35 s> 0
        *(r13 + 0xdf) = rax_35.b
        sub_1419c30b0(&var_e0)
        r12 = rax
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)

*(r13 + 0xdd) = r12

if (r12 != 0)
    int64_t* i_3 = data_1439c9588
    int64_t rdx_22 = sx.q(data_1439c9590)
    
    for (; i_3 != &i_3[rdx_22 * 2]; i_3 = &i_3[2])
        if (i_3[1].d != 0 && *i_3 != 0)
            int32_t rax_36 = (rdx_22 - 1).d
            int32_t r15_4 = *(r13 + 0x140)
            int32_t rcx_44 = data_1439c959c + 1
            r14.b = 0
            data_1439c959c = rcx_44
            int64_t rdi_10 = sx.q(rax_36)
            
            if (rax_36 s>= 0)
                int64_t rbx_4 = rdi_10 << 4
                int64_t temp2_1
                
                do
                    int64_t* rcx_45 = data_1439c9588
                    
                    if (*(rcx_45 + rbx_4 + 8) == 0)
                        r14.b = 1
                    else
                        int64_t* rcx_46 = *(rcx_45 + rbx_4)
                        
                        if (rcx_46 == 0)
                            r14.b = 1
                        else if ((*(*rcx_46 + 0x50))(rcx_46, zx.q(r15_4), r13 + 0xe4) == 0)
                            r14.b = 1
                    
                    rbx_4 -= 0x10
                    temp2_1 = rdi_10
                    rdi_10 -= 1
                while (temp2_1 - 1 s>= 0)
                rcx_44 = data_1439c959c
                rdx_22 = zx.q(data_1439c9590)
            
            data_1439c959c = rcx_44 - 1
            
            if (r14.b != 0 && rcx_44 - 1 s<= 0)
                int32_t rdi_11 = rdx_22.d
                
                if (rdx_22.d s> 0)
                    int64_t rbx_5 = 0
                    
                    do
                        int64_t* rcx_48 = data_1439c9588
                        
                        if (*(rcx_48 + rbx_5 + 8) == 0)
                            sub_1405a4880(&data_1439c9588, j, 1, 1)
                        else
                            int64_t* rcx_49 = *(rcx_48 + rbx_5)
                            
                            if (rcx_49 == 0)
                                sub_1405a4880(&data_1439c9588, j, 1, 1)
                            else if ((*(*rcx_49 + 0x20))(rcx_49) != 0)
                                sub_1405a4880(&data_1439c9588, j, 1, 1)
                            else
                                j += 1
                                rbx_5 += 0x10
                        
                        rdx_22 = zx.q(data_1439c9590)
                    while (j s< rdx_22.d)
                
                int32_t rax_41 = (rdx_22 * 2).d
                
                if (rax_41 s<= 2)
                    rax_41 = 2
                
                data_1439c9598 = rax_41
                
                if (rdi_11 s> rax_41 && data_1439c9594 != rdx_22.d)
                    sub_1405a5410(&data_1439c9588, rdx_22.d)
            
            break

return zx.q(r12)
