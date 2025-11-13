// 函数: sub_141d48820
// 地址: 0x141d48820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
char* rax = sub_140a752e0()
int64_t* r12 = *(rax + 0x30)

if (r12 != 0)
    r12[1].d += 1

int64_t* var_118
sub_140a7c320(*(rax + 0x28), &var_118)
int64_t* rbx = var_118
int32_t i_2
void* rdi_2 = &rbx[sx.q(i_2) * 2]
int64_t var_e8 = 0
int64_t var_e0 = 0
int64_t* rsi

if (rbx == rdi_2)
label_141d488d0:
    rsi = var_118
    void* r13_3 = &rsi[sx.q(i_2) * 2]
    
    if (rsi == r13_3)
    label_141d48c06:
        rsi.b = 0
    else
        while (true)
            int16_t* r8_2 = *rsi
            int16_t* rcx_2 = r8_2
            void* rdx_2 = &r8_2[sx.q(rsi[1].d)]
            
            if (r8_2 != rdx_2)
                while (*rcx_2 != 0x2d)
                    rcx_2 = &rcx_2[1]
                    
                    if (rcx_2 == rdx_2)
                        goto label_141d489b4
                
                if (((rcx_2 - r8_2) s>> 1).d != 0xffffffff)
                label_141d48bef:
                    rsi = &rsi[2]
                    
                    if (rsi == r13_3)
                        goto label_141d48c06
                    
                    continue
            
        label_141d489b4:
            void* r15_1 = *r15
            int32_t rcx_10 = 0
            int32_t r10_1 = *(r15_1 + 0x28)
            int32_t var_108_1 = 0
            int32_t r8_3 = 0
            int32_t var_104_1 = 1
            void* var_100_1 = r15_1 + 0x10
            int32_t var_f8_1 = 0xffffffff
            int64_t var_f4_1 = 0
            
            if (r10_1 != 0)
                void* rax_12 = *(r15_1 + 0x20)
                void* r9_1 = r15_1 + 0x10
                
                if (rax_12 != 0)
                    r9_1 = rax_12
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r10_1 - 1)
                int32_t rdx_8 = *r9_1
                
                if (rdx_8 != 0)
                label_141d48a3d:
                    int32_t rax_19 = neg.d(rdx_8) & rdx_8
                    uint64_t rflags_1
                    int32_t temp0_3
                    temp0_3, rflags_1 = _bit_scan_reverse(rax_19)
                    int32_t var_104_2 = rax_19
                    int32_t arg_18 = temp0_3
                    int32_t rax_20
                    
                    if (rax_19 == 0)
                        rax_20 = 0x20
                    else
                        rax_20 = 0x1f - temp0_3
                    
                    var_f4_1.d = r8_3 - rax_20 + 0x1f
                    
                    if (r8_3 - rax_20 + 0x1f s> r10_1)
                        var_f4_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_9 = sx.q(rcx_10)
                        r8_3 += 0x20
                        rcx_10 += 1
                        var_f4_1:4.d = r8_3
                        var_108_1 = rcx_10
                        
                        if (rdx_9.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
                        int32_t var_f8_2 = 0xffffffff
                        
                        if (rdx_8 != 0)
                            goto label_141d48a3d
                    
                    var_f4_1.d = r10_1
            
            int32_t rdx_10 = *(r15_1 + 0x28)
            int128_t var_d0_1 = var_108_1.o
            int32_t r8_6 = rdx_10 s>> 5
            int32_t rdi_3 = 0xffffffff << (rdx_10.b & 0x1f)
            int32_t r9_3 = rdx_10 & 0xffffffe0
            void* var_d8_1
            var_d8_1.d = r8_6
            int128_t var_c0_1 = 0xffffffff
            int64_t var_90_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
            int128_t zmm1_1 = var_d0_1
            var_d0_1:8.d = rdi_3
            var_d0_1:0xc.d = rdx_10
            var_c0_1.d = r9_3
            int128_t var_b0 = r15_1.o
            int128_t var_a0_1 = zmm1_1
            
            if (rdx_10 != r10_1)
                void* rax_22 = *(r15_1 + 0x20)
                void* r11_1 = r15_1 + 0x10
                
                if (rax_22 != 0)
                    r11_1 = rax_22
                
                int32_t temp7_1
                int32_t temp8_1
                temp7_1:temp8_1 = sx.q(r10_1 - 1)
                int32_t rdx_14 = *(r11_1 + (sx.q(r8_6) << 2)) & rdi_3
                
                if (rdx_14 != 0)
                label_141d48b2e:
                    int32_t rax_29 = neg.d(rdx_14) & rdx_14
                    uint64_t rflags_2
                    int32_t temp0_5
                    temp0_5, rflags_2 = _bit_scan_reverse(rax_29)
                    int32_t arg_20 = temp0_5
                    int32_t rax_30
                    
                    if (rax_29 == 0)
                        rax_30 = 0x20
                    else
                        rax_30 = 0x1f - temp0_5
                    
                    var_d0_1:0xc.d = r9_3 - rax_30 + 0x1f
                    
                    if (r9_3 - rax_30 + 0x1f s> r10_1)
                        var_d0_1:0xc.d = r10_1
                else
                    while (true)
                        int64_t rcx_15 = sx.q(r8_6)
                        r9_3 += 0x20
                        r8_6 += 1
                        var_c0_1.d = r9_3
                        var_d8_1.d = r8_6
                        
                        if (rcx_15.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_14 = *(r11_1 + (rcx_15 << 2) + 4)
                        var_d0_1:8.d = 0xffffffff
                        
                        if (rdx_14 != 0)
                            goto label_141d48b2e
                    
                    var_d0_1:0xc.d = r10_1
            
            while (true)
                int64_t rax_32 = sx.q(var_a0_1:0xc.d)
                int64_t* rdx_15 = var_b0.q
                
                if (rax_32.d == (var_d0_1:8.q u>> 0x20).d && var_a0_1.q == r15_1 + 0x10
                        && rdx_15 == r15_1)
                    r15 = arg1
                    goto label_141d48bef
                
                int64_t rcx_17 = rax_32 * 5
                int64_t rax_33 = *rdx_15
                int16_t* r8_7 = *(rax_33 + (rcx_17 << 3))
                uint64_t rbx_2 = rax_33 + (rcx_17 << 3)
                int16_t* rax_34 = r8_7
                void* rdx_16 = &r8_7[sx.q(*(rax_33 + (rcx_17 << 3) + 8))]
                
                if (r8_7 != rdx_16)
                    while (*rax_34 != 0x2d)
                        rax_34 = &rax_34[1]
                        
                        if (rax_34 == rdx_16)
                            goto label_141d48bde
                    
                    if (((rax_34 - r8_7) s>> 1).d != 0xffffffff
                            && sub_140a32a50(rbx_2, rsi, 1) != 0)
                        int64_t var_88
                        void var_60
                        int64_t* rax_44 =
                            sub_140aae2f0(&var_60, sub_140b74df0(*(rbx_2 + 0x10), &var_88))
                        int64_t rdx_21 = *arg2
                        *arg2 = *rax_44
                        *rax_44 = rdx_21
                        int64_t rdx_22 = arg2[1]
                        arg2[1] = rax_44[1]
                        rax_44[1] = rdx_22
                        arg2[2].d = rax_44[2].d
                        int64_t* var_58
                        
                        if (var_58 != 0)
                            var_58[1].d -= 1
                            
                            if (var_58[1].d == 1)
                                (**var_58)(var_58)
                                int32_t rax_49 = *(var_58 + 0xc)
                                *(var_58 + 0xc) -= 1
                                
                                if (rax_49 == 1)
                                    (*(*var_58 + 8))(var_58, 1)
                        
                        int64_t rcx_32 = var_88
                        
                        if (rcx_32 != 0)
                            sub_140a74f90(rcx_32)
                        
                        break
                
            label_141d48bde:
                var_a0_1:8.d &= not.d(var_b0:0xc.d)
                sub_14059bdd0(&var_b0:8)
            
            break
        
        rsi.b = 1
else
    while (sub_140b76580(*r15, rbx, &var_e8) == 0)
        rbx = &rbx[2]
        
        if (rbx == rdi_2)
            goto label_141d488d0
    
    void var_78
    int64_t* rax_4 = sub_140aae420(&var_78, &var_e8)
    int64_t rdx_4 = *arg2
    *arg2 = *rax_4
    *rax_4 = rdx_4
    int64_t rdx_5 = arg2[1]
    arg2[1] = rax_4[1]
    rax_4[1] = rdx_5
    arg2[2].d = rax_4[2].d
    int64_t* var_70
    
    if (var_70 == 0)
        rsi.b = 1
    else
        var_70[1].d -= 1
        
        if (var_70[1].d != 1)
            rsi.b = 1
        else
            (**var_70)(var_70)
            int32_t rax_9 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (rax_9 != 1)
                rsi.b = 1
            else
                (*(*var_70 + 8))(var_70, 1)
                rsi.b = 1

int64_t rcx_21 = var_e8

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int32_t i_1 = i_2
int64_t* rbx_3 = var_118

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_22 = *rbx_3
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        rbx_3 = &rbx_3[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* rcx_23 = var_118

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

if (r12 != 0)
    r12[1].d -= 1
    
    if (r12[1].d == 1)
        (**r12)(r12)
        int32_t r14_2 = *(r12 + 0xc)
        *(r12 + 0xc) -= 1
        
        if (r14_2 == 1)
            int64_t r8_9 = *r12
            (*(r8_9 + 8))(r12, zx.q(r14_2), r8_9)

return zx.q(rsi.b)
