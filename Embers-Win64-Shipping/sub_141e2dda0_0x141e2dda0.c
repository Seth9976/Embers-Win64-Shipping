// 函数: sub_141e2dda0
// 地址: 0x141e2dda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t i_6 = sx.q(*(arg1 + 0x70))
void* rsi = arg1
*(arg1 + 0x28) = 0
int32_t var_114 = i_6.d

if (i_6.d s> 0)
    void* r10_1 = *(arg1 + 0x68)
    int32_t rax_2 = 1
    int64_t i_5 = i_6
    int32_t r15_1 = 0
    int32_t var_118_1 = 0
    int128_t zmm0 = *(r10_1 + 0x10)
    *(arg1 + 0x28) = zmm0.d
    int64_t entry_i
    int128_t zmm1
    
    if (i_6 s> 1)
        void* r11_1 = 1
        
        if (i_6 s>= 5)
            int32_t rdx_1 = 3
            entry_i = ((i_6 - 5) u>> 2) + 1
            void* rcx = r10_1 + 0x70
            r11_1 = (entry_i << 2) + 1
            int64_t i
            
            do
                zmm1 = *(rcx - 0x30)
                int128_t zmm2 = zmm0
                
                if (not(zmm1.d f<= zmm0.d))
                    *(rsi + 0x28) = zmm1.d
                    r15_1 = rax_2
                    zmm2 = zmm1
                
                zmm1 = *rcx
                zmm0 = zmm2
                
                if (not(zmm1.d f<= zmm2.d))
                    *(rsi + 0x28) = zmm1.d
                    r15_1 = rdx_1 - 1
                    zmm0 = zmm1
                
                zmm1 = *(rcx + 0x30)
                
                if (not(zmm1.d f<= zmm0.d))
                    *(rsi + 0x28) = zmm1.d
                    r15_1 = rdx_1
                    zmm0 = zmm1
                
                zmm1 = *(rcx + 0x60)
                
                if (not(zmm1.d f<= zmm0.d))
                    *(rsi + 0x28) = zmm1.d
                    r15_1 = rdx_1 + 1
                    zmm0 = zmm1
                
                rax_2 += 4
                rdx_1 += 4
                rcx += 0xc0
                i = entry_i
                entry_i -= 1
            while (i != 1)
            var_118_1 = r15_1
        
        if (r11_1 s< i_5)
            zmm1 = *(rsi + 0x28)
            int64_t rcx_2 = r11_1 * 0x30
            i_5 -= r11_1
            int64_t i_1
            
            do
                zmm0 = *(rcx_2 + r10_1 + 0x10)
                
                if (not(zmm0.d f<= zmm1.d))
                    *(rsi + 0x28) = zmm0.d
                    zmm1 = zmm0
                    r15_1 = rax_2
                
                rax_2 += 1
                rcx_2 += 0x30
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            var_118_1 = r15_1
    
    int64_t* rcx_3 = *(rsi + 0x18)
    int64_t rbx_1 = sx.q(r15_1)
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x10))(rcx_3, rbx_1 * 0x30 + r10_1, i_5, entry_i, var_118_1)
    
    void* var_40_1 = nullptr
    int32_t r13_1 = 4
    int32_t var_34_1 = 4
    int32_t var_38_1 = 0
    
    if (i_6.d s> 1)
        void* rdi = *(*(rsi + 0x68) + rbx_1 * 0x30 + 8)
        void* var_d8 = rdi
        
        if (rdi != 0)
            int32_t rcx_6 = 0
            int32_t var_10c_1 = 1
            int32_t var_110_1 = 0
            int32_t r11_2 = *(rdi + 0x120)
            int32_t r8_1 = 0
            int32_t var_100_1 = 0xffffffff
            int64_t var_fc_1 = 0
            
            if (r11_2 != 0)
                int32_t* rax_5 = *(rdi + 0x118)
                int32_t* r9_2 = rdi + 0x110
                
                if (rax_5 != 0)
                    r9_2 = rax_5
                
                int32_t temp7_1
                int32_t temp8_1
                temp7_1:temp8_1 = sx.q(r11_2 - 1)
                int32_t rdx_7 = *r9_2
                
                if (rdx_7 != 0)
                label_141e2dfcc:
                    int32_t rax_12 = neg.d(rdx_7) & rdx_7
                    uint64_t rflags_1
                    int32_t temp0_1
                    temp0_1, rflags_1 = _bit_scan_reverse(rax_12)
                    int32_t var_10c_2 = rax_12
                    int32_t rax_13
                    
                    if (rax_12 == 0)
                        rax_13 = 0x20
                    else
                        rax_13 = 0x1f - temp0_1
                    
                    var_fc_1.d = r8_1 - rax_13 + 0x1f
                    
                    if (r8_1 - rax_13 + 0x1f s> r11_2)
                        var_fc_1.d = r11_2
                else
                    while (true)
                        int64_t rdx_8 = sx.q(rcx_6)
                        r8_1 += 0x20
                        rcx_6 += 1
                        var_fc_1:4.d = r8_1
                        var_110_1 = rcx_6
                        
                        if (rdx_8.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_7 = r9_2[rdx_8 + 1]
                        int32_t var_100_2 = 0xffffffff
                        
                        if (rdx_7 != 0)
                            goto label_141e2dfcc
                    
                    var_fc_1.d = r11_2
            
            int32_t rdx_9 = *(rdi + 0x120)
            int128_t var_90 = var_110_1.o
            int32_t r14_1 = 0xffffffff << (rdx_9 & 0x1f).b
            int32_t r9_4 = rdx_9 & 0xffffffe0
            int128_t var_80_1 = 0xffffffff
            int32_t r8_4 = rdx_9 s>> 5
            int64_t var_a8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            zmm1 = var_90
            var_90:8.d = r14_1
            var_90:0xc.d = rdx_9
            int128_t var_c8 = rdi.o
            int128_t var_b8_1 = zmm1
            
            if (rdx_9 != r11_2)
                int32_t* rax_17 = *(rdi + 0x118)
                int32_t* r10_2 = rdi + 0x110
                
                if (rax_17 != 0)
                    r10_2 = rax_17
                
                int32_t temp9_1
                int32_t temp10_1
                temp9_1:temp10_1 = sx.q(r11_2 - 1)
                int32_t rdx_13 = r10_2[sx.q(r8_4)] & r14_1
                
                if (rdx_13 != 0)
                label_141e2e0b6:
                    int32_t rax_23 = neg.d(rdx_13) & rdx_13
                    uint64_t rflags_2
                    int32_t temp0_3
                    temp0_3, rflags_2 = _bit_scan_reverse(rax_23)
                    int32_t rbx_2
                    
                    if (rax_23 == 0)
                        rbx_2 = 0x20
                    else
                        rbx_2 = 0x1f - temp0_3
                    
                    var_90:0xc.d = r9_4 - rbx_2 + 0x1f
                    
                    if (r9_4 - rbx_2 + 0x1f s> r11_2)
                        var_90:0xc.d = r11_2
                else
                    while (true)
                        int64_t rcx_10 = sx.q(r8_4)
                        r9_4 += 0x20
                        r8_4 += 1
                        
                        if (rcx_10.d s>= (temp10_1 + (temp9_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_13 = r10_2[rcx_10 + 1]
                        var_90:8.d = 0xffffffff
                        
                        if (rdx_13 != 0)
                            goto label_141e2e0b6
                    
                    var_90:0xc.d = r11_2
            
            void* r15_2 = var_d8
            uint32_t r12_3 = (var_90:8.q u>> 0x20).d
            void var_60
            
            while (true)
                int64_t rdx_14 = sx.q(var_b8_1:0xc.d)
                void* rcx_12 = var_c8.q
                int32_t rax_16
                
                if (rdx_14.d != r12_3 || var_b8_1.q != rdi + 0x110 || rcx_12 != r15_2)
                    rax_16.b = 1
                else
                    rax_16.b = 0
                
                if (rax_16.b == 0)
                    break
                
                void* rax_24 = *(rcx_12 + 0x100)
                
                if (rax_24 != 0)
                    rcx_12 = rax_24
                
                int128_t* r8_5 = nullptr
                void* rcx_13 = rcx_12 + (rdx_14 << 6)
                void* rdi_2 = rcx_13 + 8
                int64_t var_98_2 = *rcx_13
                int128_t* var_70_1 = nullptr
                int64_t rbx_3 = sx.q(*(rdi_2 + 0x28))
                void* r14_2 = *(rdi_2 + 0x20)
                int32_t var_68_1 = rbx_3.d
                
                if (rbx_3.d != 0)
                    sub_14085a010(&var_90, rbx_3.d, 0)
                    int128_t* rcx_15 = &var_90
                    
                    if (r14_2 != 0)
                        rdi_2 = r14_2
                    
                    if (var_70_1 != 0)
                        rcx_15 = var_70_1
                    
                    memcpy(rcx_15, rdi_2, (rbx_3 << 3).d)
                    r8_5 = var_70_1
                    rbx_3 = zx.q(var_68_1)
                else
                    int32_t var_64_1 = 4
                
                if (rbx_3.d != 0)
                    int128_t* rdx_17 = &var_90
                    
                    if (r8_5 != 0)
                        rdx_17 = r8_5
                    
                    int64_t* rbx_4 = *(rdx_17 + (sx.q((rbx_3 - 1).d) << 3))
                    
                    if (rbx_4 != 0)
                        if ((*(*rbx_4 + 0x68))(rbx_4) != 0)
                            int64_t rdi_3 = sx.q(var_38_1)
                            int32_t rax_32 = (rdi_3 + 1).d
                            var_38_1 = rax_32
                            
                            if (rax_32 s> var_34_1)
                                sub_14083a490(&var_60, rdi_3.d)
                            
                            void* rcx_19 = &var_60
                            
                            if (var_40_1 != 0)
                                rcx_19 = var_40_1
                            
                            *(rcx_19 + (rdi_3 << 3)) = rbx_4
                        
                        r8_5 = var_70_1
                
                if (r8_5 != 0)
                    sub_140a74f90(r8_5)
                
                var_b8_1:8.d &= not.d(var_c8:0xc.d)
                sub_140b4fe60(&var_c8:8)
            
            rsi = arg1
            
            if (var_38_1 s> 0)
                int32_t r8_8 = var_114
                int32_t var_9c_1 = 4
                int128_t* rdx_19 = nullptr
                int128_t* var_a8_2 = nullptr
                int32_t rbx_5 = 0
                int32_t var_a0_1 = 0
                int32_t rdi_4 = 0
                
                if (r8_8 s> 0)
                    int64_t r14_3 = 0
                    
                    do
                        if (rdi_4 != var_118_1)
                            int64_t r12_5 = *(rsi + 0x68) + r14_3
                            var_a0_1 = rbx_5 + 1
                            
                            if (rbx_5 + 1 s> r13_1)
                                sub_140869430(&var_c8, rbx_5)
                                rdx_19 = var_a8_2
                                r8_8 = var_114
                            
                            int128_t* rcx_23 = &var_c8
                            
                            if (rdx_19 != 0)
                                rcx_23 = rdx_19
                            
                            *(rcx_23 + (sx.q(rbx_5) << 3)) = r12_5
                            r13_1 = var_9c_1
                            rbx_5 = var_a0_1
                            rdx_19 = var_a8_2
                        
                        rdi_4 += 1
                        r14_3 += 0x30
                    while (rdi_4 s< r8_8)
                
                void* rdi_5 = &var_60
                int64_t r14_4 = 0
                
                if (var_40_1 != 0)
                    rdi_5 = var_40_1
                
                int64_t r15_4 = sx.q(var_38_1) << 3
                uint64_t r15_5 = r15_4 u>> 3
                
                if (rdi_5 u> rdi_5 + r15_4)
                    r15_5 = 0
                
                if (r15_5 != 0)
                    while (true)
                        int128_t* rax_40 = &var_c8
                        int32_t var_e0_1 = rbx_5
                        
                        if (rdx_19 != 0)
                            rax_40 = rdx_19
                        
                        zmm0 = rax_40.o
                        var_d8.o = zmm0
                        (*(**rdi_5 + 0x70))(zmm0, &var_d8)
                        rdx_19 = var_a8_2
                        rdi_5 += 8
                        r14_4 += 1
                        
                        if (r14_4 == r15_5)
                            break
                        
                        rbx_5 = var_a0_1
                
                if (rdx_19 != 0)
                    sub_140a74f90(rdx_19)
            
            if (var_40_1 != 0)
                sub_140a74f90(var_40_1)

int32_t result = *(rsi + 0x74)
void* rsi_2 = *(rsi + 0x68)
int32_t i_4 = *(rsi + 0x70)

if (result s< 0)
    if (i_4 != 0)
        void* rsi_4 = rsi_2 + 0x28
        int32_t i_2
        
        do
            int64_t* rbx_7 = *rsi_4
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    (**rbx_7)(rbx_7)
                    int32_t temp4_1 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
            
            rsi_4 += 0x30
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        result = *(rsi + 0x74)
    
    *(rsi + 0x70) = 0
    
    if (result != 0)
        result = sub_1405a5220(rsi + 0x68, 0)
else
    if (i_4 != 0)
        int64_t* rsi_3 = rsi_2 + 0x28
        int32_t i_3
        
        do
            int64_t* rbx_6 = *rsi_3
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d == 1)
                    result = (**rbx_6)(rbx_6)
                    int32_t temp5_1 = *(rbx_6 + 0xc)
                    *(rbx_6 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        result = (*(*rbx_6 + 8))(rbx_6, 1)
            
            rsi_3 = &rsi_3[6]
            i_3 = i_4
            i_4 -= 1
        while (i_3 != 1)
    
    *(rsi + 0x70) = 0

__security_check_cookie(rax_1 ^ &var_138)
return result
