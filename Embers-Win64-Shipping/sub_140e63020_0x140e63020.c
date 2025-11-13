// 函数: sub_140e63020
// 地址: 0x140e63020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* rdi = arg4
void* r13 = arg1
int64_t var_d8

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
label_140e630cf_1:
    sub_140e50b60(&var_d8)
else
    int32_t rax_4 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = r13 + 0x90
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_6 = *(r8 + (((sx.q(*(r13 + 0xa0)) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_140e630cf_2:
        sub_140e50b60(&var_d8)
    else
        int64_t* rdx_5
        
        while (true)
            rdx_5 = (sx.q(rax_6) << 7) + *(r13 + 0x58)
            
            if (*rdx_5 == arg3)
                break
            
            rax_6 = rdx_5[0xf].d
            
            if (rax_6 == 0xffffffff)
                goto label_140e630cf
        
        if (rax_6 == 0xffffffff || rdx_5 == 0)
        label_140e630cf:
            sub_140e50b60(&var_d8)
        else
            sub_140e50a10(&var_d8, &rdx_5[1])

double zmm6[0x2] = zx.o(0)
double var_178[0x2] = zx.o(0)
int64_t* result
void* var_b8
void* var_98
int64_t var_88
int64_t* var_70

if (arg5 == 0)
    int32_t rdi_1 = 0
    int32_t var_17c_1 = 0
    int32_t i = 0
    int64_t rbx_3 = 0.q
    uint32_t r14_3 = 0
    uint32_t rax_39 = 0
    int32_t var_188
    uint32_t r13_1
    
    do
        r13_1 = rax_39
        
        if ((r14_3 == 0 & sub_140b5b8a0(rdi_1, 0)) == 0)
            break
        
        int64_t* rdi_4 = sx.q(i) * 0x50 + var_88
        sub_140e637c0(rdi_4, &var_188, arg4)
        int64_t rax_42 = sx.q(var_188)
        int64_t rbx_5
        
        if (rax_42.d != 0xffffffff)
            rbx_5 = rax_42 * 0x30
        
        int32_t var_168
        
        if (rax_42.d == 0xffffffff || rbx_5 == neg.q(*rdi_4))
            var_168.q = 0
            rbx_3 = 0
        else
            rbx_3 = *(rbx_5 + *rdi_4 + 0x20)
            var_168.q = rbx_3
        int32_t var_180_1
        var_180_1.q = rbx_3
        rdi_1 = var_180_1
        i += 1
        r14_3 = (rbx_3 u>> 0x20).d
        rax_39 = r14_3
        r13_1 = r14_3
    while (i u< 2)
    
    int32_t rcx_20
    rcx_20.b = sub_140b5b8a0(rdi_1, 0) == 0
    rcx_20.b |= r13_1 != 0
    
    if (rcx_20.b == 0)
        goto label_140e636fd
    
    int32_t var_d0
    int32_t var_a4
    void* rdx_19
    
    if (var_d0 == var_a4)
    label_140e634b4:
        rdx_19 = nullptr
    else
        void var_a0
        void* rcx_22 = &var_a0
        int32_t var_90
        int64_t rdx_17 = (sx.q(var_90) - 1) & sx.q(sub_140b5ead0(rdi_1) + var_17c_1)
        
        if (var_98 != 0)
            rcx_22 = var_98
        
        int32_t rax_49 = *(rcx_22 + (rdx_17 << 2))
        
        if (rax_49 == 0xffffffff)
        label_140e634b4_1:
            rdx_19 = nullptr
        else
            int64_t r8_7 = var_d8
            int64_t rcx_24
            
            while (true)
                rcx_24 = sx.q(rax_49) << 5
                
                if (*(rcx_24 + r8_7) == rbx_3)
                    break
                
                rax_49 = *(rcx_24 + r8_7 + 0x18)
                
                if (rax_49 == 0xffffffff)
                    goto label_140e634b4_2
            
            rdx_19 = rcx_24 + r8_7
            
            if (rax_49 == 0xffffffff)
            label_140e634b4_2:
                rdx_19 = nullptr
    
    var_178[0] = *(rdx_19 + 8)
    void* rax_51 = *(rdx_19 + 0x10)
    var_178[1] = rax_51
    
    if (rax_51 != 0)
        *(rax_51 + 8) += 1
    
    double rbx_7 = _mm_bsrli_si128(zx.o(0), 8)[0]
    
    if (rbx_7 != 0)
        int32_t temp6_1 = *(rbx_7 i+ 8)
        *(rbx_7 i+ 8) -= 1
        
        if (temp6_1 == 1)
            (**rbx_7)(rbx_7)
            int32_t temp7_1 = *(rbx_7 i+ 0xc)
            *(rbx_7 i+ 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_7 + 8))(rbx_7, 1)
    
    r13 = arg1
label_140e63511:
    
    if (var_178[0] == 0)
        goto label_140e636fd
    
label_140e6352e:
    int64_t rbx_9 = *(var_178[0] i+ 0x74)
    sub_140e638b0(r13 + 8, &var_188, arg3)
    int64_t rax_54 = sx.q(var_188)
    void* const rax_56
    
    if (rax_54.d == 0xffffffff)
        rax_56 = nullptr
    else
        rax_56 = rax_54 * 0xb0 + *(r13 + 8)
    
    int64_t* rdi_5 = rax_56 + 8
    
    if (rax_56 == 0)
        rdi_5 = nullptr
    
    if (rdi_5 == 0)
        goto label_140e636fd
    
    int32_t rsi_1 = rbx_9:4.d
    
    if (rdi_5[1].d == *(rdi_5 + 0x34))
    label_140e635d0:
        
        if (rdi_5[0xb].d != *(rdi_5 + 0x84))
            int32_t rax_63 = sub_140b5ead0(rbx_9.d)
            void* r8_10 = &rdi_5[0x11]
            void* rcx_33 = *(r8_10 + 8)
            
            if (rcx_33 != 0)
                r8_10 = rcx_33
            
            int32_t rax_66 = *(r8_10 + (((sx.q(rdi_5[0x13].d) - 1) & sx.q(rax_63 + rsi_1)) << 2))
            
            if (rax_66 != 0xffffffff)
                int64_t rdx_28 = rdi_5[0xa]
                
                while (true)
                    int64_t rcx_35 = sx.q(rax_66) << 5
                    
                    if (*(rcx_35 + rdx_28) == rbx_9)
                        break
                    
                    rax_66 = *(rcx_35 + rdx_28 + 0x18)
                    
                    if (rax_66 == 0xffffffff)
                        goto label_140e6363a
                
                if (rax_66 != 0xffffffff)
                    goto label_140e636fd
        
    label_140e6363a:
        
        if (rdi_5[0xb].d - *(rdi_5 + 0x84) s<= 0)
            goto label_140e636fd
    else
        int32_t rax_58 = sub_140b5ead0(rbx_9.d)
        void* rcx_29 = rdi_5[8]
        void* r8_9 = &rdi_5[7]
        
        if (rcx_29 != 0)
            r8_9 = rcx_29
        
        int32_t rax_61 = *(r8_9 + (((sx.q(rdi_5[9].d) - 1) & sx.q(rax_58 + rsi_1)) << 2))
        
        if (rax_61 == 0xffffffff)
            goto label_140e635d0
        
        int64_t rdx_24 = *rdi_5
        
        while (true)
            int64_t rcx_31 = sx.q(rax_61) << 5
            
            if (*(rcx_31 + rdx_24) == rbx_9)
                break
            
            rax_61 = *(rcx_31 + rdx_24 + 0x18)
            
            if (rax_61 == 0xffffffff)
                goto label_140e635d0
        
        if (rax_61 == 0xffffffff)
            goto label_140e635d0
    
    double rbx_10 = var_178[1]
    *arg2 = 0
    arg2[1] = 0
    
    if (rbx_10 != 0)
        int32_t temp10_1 = *(rbx_10 i+ 8)
        *(rbx_10 i+ 8) -= 1
        
        if (temp10_1 == 1)
            (**rbx_10)(rbx_10)
            int32_t temp13_1 = *(rbx_10 i+ 0xc)
            *(rbx_10 i+ 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rbx_10 + 8))(rbx_10, 1)
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp15_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    sub_140e52f80(&var_88)
    int32_t var_90_1 = 0
    
    if (var_98 != 0)
        sub_140a74f90(var_98)
    
    sub_1407ece30(&var_d8, 0)
    
    if (var_b8 != 0)
        sub_140a74f90(var_b8)
    
    int64_t rcx_44 = var_d8
    
    if (rcx_44 != 0)
        sub_140a74f90(rcx_44)
    
    result = arg2
else
    void var_c8
    void* var_160_1 = &var_c8
    int32_t rcx_3 = 0
    int32_t var_168_1 = 0
    int32_t r8_2 = 0
    int32_t var_164_1 = 1
    int32_t var_158_1 = 0xffffffff
    int64_t var_154_1 = 0
    int32_t var_b0
    
    if (var_b0 != 0)
        void* r10_1 = &var_c8
        
        if (var_b8 != 0)
            r10_1 = var_b8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_b0 - 1)
        int32_t rdx_8 = *r10_1
        
        if (rdx_8 != 0)
        label_140e6319b:
            int32_t rax_14 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
            int32_t var_164_2 = rax_14
            int32_t rax_15
            
            if (rax_14 == 0)
                rax_15 = 0x20
            else
                rax_15 = 0x1f - temp0_2
            
            int32_t rax_16 = r8_2 - rax_15 + 0x1f
            
            if (rax_16 s> var_b0)
                rax_16 = var_b0
            
            var_154_1.d = rax_16
        else
            while (true)
                int64_t rdx_9 = sx.q(rcx_3)
                r8_2 += 0x20
                rcx_3 += 1
                var_154_1:4.d = r8_2
                var_168_1 = rcx_3
                
                if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_154_1.d = var_b0
                    break
                
                rdx_8 = *(r10_1 + (rdx_9 << 2) + 4)
                int32_t var_158_2 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_140e6319b
    
    char var_f0_1 = -1
    double var_130[0x2] = (&var_d8).o
    int64_t var_110_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    uint128_t var_120_1 = var_168_1.o
    
    if (0 s< var_b0)
        int32_t i_1 = var_120_1:0xc.d
        
        do
            if (var_178[0] != 0)
                goto label_140e6352e
            
            int64_t* r15_1 = var_130[0]
            int64_t* rbx_1 = rdi[2]
            int64_t r9_1 = *rdi
            int64_t r14_2 = sx.q(i_1) << 5
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t* r8_5 = *(*(*r15_1 + r14_2 + 8) + 0x40)
            char rcx_9 = ((var_f0_1 ^ (rdi[3].d).b) & 0xf) ^ var_f0_1
            char rdx_11
            
            if (*r8_5 == r9_1)
                rdx_11 = (r8_5[3].d).b
            
            char rdx_13
            
            if ((*r8_5 != r9_1 || ((rdx_11 ^ rcx_9) & 1) != 0 || ((rdx_11 ^ rcx_9) & 2) != 0
                    || ((rdx_11 ^ rcx_9) & 4) != 0 || ((rdx_11 ^ rcx_9) & 8) != 0) && r8_5[4] == r9_1)
                rdx_13 = (r8_5[7].d).b
            
            if ((*r8_5 != r9_1 || ((rdx_11 ^ rcx_9) & 1) != 0 || ((rdx_11 ^ rcx_9) & 2) != 0
                    || ((rdx_11 ^ rcx_9) & 4) != 0 || ((rdx_11 ^ rcx_9) & 8) != 0) && (r8_5[4] != r9_1
                    || ((rcx_9 ^ rdx_13) & 1) != 0 || ((rcx_9 ^ rdx_13) & 2) != 0
                    || ((rcx_9 ^ rdx_13) & 4) != 0 || ((rcx_9 ^ rdx_13) & 8) != 0))
                rdi.b = 0
            else
                rdi.b = 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp9_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rdi.b != 0)
                int64_t rcx_13 = *r15_1
                var_168_1.q = *(rcx_13 + r14_2 + 8)
                void* rax_33 = *(rcx_13 + r14_2 + 0x10)
                void* var_160_2 = rax_33
                
                if (rax_33 != 0)
                    *(rax_33 + 8) += 1
                
                double zmm0_1[0x2] = var_168_1.o
                int64_t* rbx_2 = _mm_bsrli_si128(zmm6, 8).q
                var_168_1.o = zmm6
                zmm6 = zmm0_1
                var_178 = zmm0_1
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp14_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp14_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            
            var_120_1:8.d &= not.d(var_130[1]:4.d)
            sub_14059bdd0(&var_130[1])
            i_1 = var_120_1:0xc.d
            rdi = arg4
        while (i_1 s< *(var_120_1.q + 0x18))
        
        goto label_140e63511
    
label_140e636fd:
    *arg2 = var_178[0]
    arg2[1] = var_178[1]
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            (**var_70)(var_70)
            int32_t temp5_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_70 + 8))(var_70, 1)
    
    sub_140e52f80(&var_88)
    int32_t var_90_2 = 0
    
    if (var_98 != 0)
        sub_140a74f90(var_98)
    
    sub_1407ece30(&var_d8, 0)
    
    if (var_b8 != 0)
        sub_140a74f90(var_b8)
    
    int64_t rcx_51 = var_d8
    
    if (rcx_51 != 0)
        sub_140a74f90(rcx_51)
    
    result = arg2
__security_check_cookie(rax_1 ^ &var_1a8)
return result
