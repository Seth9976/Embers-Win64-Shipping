// 函数: sub_141cabdc0
// 地址: 0x141cabdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg1
void* var_80
int64_t var_74
int32_t i_5
int32_t r15_2

if (arg1[0x47].d == 0)
    int32_t r10_1 = r13[5].d
    void* r9_1 = &r13[2]
    r15_2 = 0
    int32_t var_84_1 = 1
    var_80 = r9_1
    int32_t rcx_5 = 0
    int32_t var_88_1 = 0
    int32_t r8_1 = 0
    int32_t var_78_1 = 0xffffffff
    var_74 = 0
    
    if (r10_1 != 0)
        void* rax_5 = *(r9_1 + 0x10)
        
        if (rax_5 != 0)
            r9_1 = rax_5
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_6 = *r9_1
        
        if (rdx_6 != 0)
        label_141cabf58:
            int32_t rax_12 = neg.d(rdx_6) & rdx_6
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_84_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_2
            
            var_74.d = r8_1 - rax_13 + 0x1f
            
            if (r8_1 - rax_13 + 0x1f s> r10_1)
                var_74.d = r10_1
        else
            while (true)
                int64_t rdx_7 = sx.q(rcx_5)
                r8_1 += 0x20
                rcx_5 += 1
                var_74:4.d = r8_1
                var_88_1 = rcx_5
                
                if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
                var_78_1 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_141cabf58
            
            var_74.d = r10_1
    
    int128_t var_48_1 = 0xffffffff
    double var_58_1[0x2] = var_88_1.o
    var_88_1.o = r13.o
    int64_t var_68_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_78_1.o = var_58_1
    
    if (0 s< r10_1)
        int32_t i = i_5
        
        do
            void* rdi_1 = *(*var_88_1.q + sx.q(i) * 0x18 + 8)
            
            if (rdi_1 != 0)
                int64_t rcx_8 = *(rdi_1 + 0x38)
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                int64_t* rbx_2 = *(rdi_1 + 0x30)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp5_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                j_sub_140a74f90(rdi_1)
                r13[0x4c].d -= 1
            
            var_74:4.d &= not.d(var_80:4.d)
            sub_14059bdd0(&var_80)
            i = i_5
        while (i s< *(var_78_1.q + 0x18))
else
    int64_t* i_1 = arg1[0x46]
    
    for (void* r12_1 = &i_1[sx.q(arg1[0x47].d)]; i_1 != r12_1; i_1 = &i_1[1])
        void* rax_2 = *i_1
        
        if (rax_2 != 0)
            int64_t j = *(rax_2 - 8)
            
            if (j != 0)
                void* rsi_4 = j * 0x50 + 0x30 + rax_2
                
                do
                    int64_t rcx = *(rsi_4 - 0x48)
                    rsi_4 -= 0x50
                    j -= 1
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    int64_t* rbx_1 = *rsi_4
                    
                    if (rbx_1 != 0)
                        rbx_1[1].d -= 1
                        
                        if (rbx_1[1].d == 1)
                            (**rbx_1)(rbx_1)
                            int32_t temp9_1 = *(rbx_1 + 0xc)
                            *(rbx_1 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                (*(*rbx_1 + 8))(rbx_1, 1)
                while (j != 0)
                
                *(rax_2 - 8)
            
            j_sub_140a74f90(rax_2 - 8)
    
    r15_2 = 0
    r13[0x47].d = 0
    
    if (*(r13 + 0x23c) s<= 0xffffffff)
        sub_1405c5570(&r13[0x46], 0)
    
    r13 = arg1
    r13[0x4c].d = 0

if (r13[0x49].d == 0)
    int32_t var_84_3 = 1
    int32_t r10_2 = r13[0x37].d
    void* r9_2 = &r13[0x34]
    var_80 = r9_2
    int32_t rcx_21 = 0
    int32_t var_88_2 = 0
    int32_t r8_3 = 0
    int32_t var_78_2 = 0xffffffff
    var_74 = 0
    
    if (r10_2 != 0)
        void* rax_26 = *(r9_2 + 0x10)
        
        if (rax_26 != 0)
            r9_2 = rax_26
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_2 - 1)
        int32_t rdx_13 = *r9_2
        
        if (rdx_13 != 0)
        label_141cac1e8:
            int32_t rax_33 = neg.d(rdx_13) & rdx_13
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_33)
            int32_t var_84_4 = rax_33
            int32_t rax_34
            
            if (rax_33 == 0)
                rax_34 = 0x20
            else
                rax_34 = 0x1f - temp0_4
            
            var_74.d = r8_3 - rax_34 + 0x1f
            
            if (r8_3 - rax_34 + 0x1f s> r10_2)
                var_74.d = r10_2
        else
            while (true)
                int64_t rdx_14 = sx.q(rcx_21)
                r8_3 += 0x20
                rcx_21 += 1
                var_74:4.d = r8_3
                var_88_2 = rcx_21
                
                if (rdx_14.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r9_2 + (rdx_14 << 2) + 4)
                var_78_2 = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_141cac1e8
            
            var_74.d = r10_2
    
    int128_t var_48_2 = 0xffffffff
    double var_58_2[0x2] = var_88_2.o
    var_88_2.o = (&r13[0x32]).o
    int64_t var_68_2 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_78_2.o = var_58_2
    
    if (0 s< r10_2)
        int32_t i_2 = i_5
        
        do
            void* rbx_8 = *(*var_88_2.q + sx.q(i_2) * 0x30 + 0x20)
            
            if (rbx_8 != 0)
                sub_141c947f0(rbx_8)
                j_sub_140a74f90(rbx_8)
                *(r13 + 0x264) -= 1
            
            var_74:4.d &= not.d(var_80:4.d)
            sub_14059bdd0(&var_80)
            i_2 = i_5
        while (i_2 s< *(var_78_2.q + 0x18))
else
    void* r12_2 = &r13[0x48]
    int64_t* rsi_5 = *r12_2
    void* rax_23 = &rsi_5[sx.q(*(r12_2 + 8))]
    
    if (rsi_5 != rax_23)
        do
            void* rax_24 = *rsi_5
            
            if (rax_24 != 0)
                int64_t i_3 = *(rax_24 - 8)
                
                if (i_3 != 0)
                    void* rbx_6 = (i_3 << 7) + 0x60 + rax_24
                    
                    do
                        int64_t rcx_13 = *(rbx_6 - 0x70)
                        rbx_6 -= 0x80
                        i_3 -= 1
                        
                        if (rcx_13 != 0)
                            sub_140a74f90(rcx_13)
                        
                        int64_t rcx_14 = *rbx_6
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                        
                        int64_t rcx_15 = *(rbx_6 - 0x10)
                        
                        if (rcx_15 != 0)
                            sub_140a74f90(rcx_15)
                        
                        int64_t rcx_16 = *(rbx_6 - 0x20)
                        
                        if (rcx_16 != 0)
                            sub_140a74f90(rcx_16)
                        
                        int64_t rcx_17 = *(rbx_6 - 0x30)
                        
                        if (rcx_17 != 0)
                            sub_140a74f90(rcx_17)
                        
                        int64_t rcx_18 = *(rbx_6 - 0x40)
                        
                        if (rcx_18 != 0)
                            sub_140a74f90(rcx_18)
                    while (i_3 != 0)
                    
                    *(rax_24 - 8)
                
                j_sub_140a74f90(rax_24 - 8)
            
            rsi_5 = &rsi_5[1]
        while (rsi_5 != rax_23)
        
        r13 = arg1
    
    int32_t rax_25 = *(r12_2 + 0xc)
    *(r12_2 + 8) = 0
    
    if (rax_25 s< 0 && rax_25 != 0)
        sub_1405c5570(r12_2, 0)
    
    *(r13 + 0x264) = 0

if (r13[0x4b].d == 0)
    int32_t var_88_3 = 0
    int32_t r9_3 = r13[0x41].d
    void* r8_5 = &r13[0x3e]
    int32_t var_84_5 = 1
    int32_t rcx_29 = 0
    var_80 = r8_5
    int32_t var_78_3 = 0xffffffff
    var_74.d = 0
    var_74:4.d = 0
    
    if (r9_3 != 0)
        void* rax_44 = *(r8_5 + 0x10)
        
        if (rax_44 != 0)
            r8_5 = rax_44
        
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(r9_3 - 1)
        int32_t rdx_20 = *r8_5
        
        if (rdx_20 != 0)
        label_141cac3a8:
            int32_t rax_51 = neg.d(rdx_20) & rdx_20
            uint64_t rflags_3
            int32_t temp0_6
            temp0_6, rflags_3 = _bit_scan_reverse(rax_51)
            int32_t var_84_6 = rax_51
            int32_t rax_52
            
            if (rax_51 == 0)
                rax_52 = 0x20
            else
                rax_52 = 0x1f - temp0_6
            
            var_74.d = rcx_29 - rax_52 + 0x1f
            
            if (rcx_29 - rax_52 + 0x1f s> r9_3)
                var_74.d = r9_3
        else
            while (true)
                int64_t rdx_21 = sx.q(r15_2)
                rcx_29 += 0x20
                r15_2 += 1
                var_74:4.d = rcx_29
                var_88_3 = r15_2
                
                if (rdx_21.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                    break
                
                rdx_20 = *(r8_5 + (rdx_21 << 2) + 4)
                var_78_3 = 0xffffffff
                
                if (rdx_20 != 0)
                    goto label_141cac3a8
            
            var_74.d = r9_3
    
    int128_t var_48_3 = 0xffffffff
    double var_58_3[0x2] = var_88_3.o
    var_88_3.o = (&r13[0x3c]).o
    int64_t var_68_3 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_78_3.o = var_58_3
    
    if (0 s< r9_3)
        int32_t i_4 = i_5
        
        do
            int64_t rcx_32 = *(*var_88_3.q + sx.q(i_4) * 0x18 + 8)
            
            if (rcx_32 != 0)
                j_sub_140a74f90(rcx_32)
                r13[0x4d].d -= 1
            
            var_74:4.d &= not.d(var_80:4.d)
            sub_14059bdd0(&var_80)
            i_4 = i_5
        while (i_4 s< *(var_78_3.q + 0x18))
else
    int64_t rdi_3 = 0
    int64_t* rbx_9 = r13[0x4a]
    uint64_t rsi_7 = sx.q(r13[0x4b].d) << 3 u>> 3
    
    if (rbx_9 u> &rbx_9[r13[0x4b]])
        rsi_7 = 0
    
    if (rsi_7 != 0)
        do
            j_sub_140a74f90(*rbx_9)
            rdi_3 += 1
            rbx_9 = &rbx_9[1]
        while (rdi_3 != rsi_7)
    
    int32_t rax_43 = *(r13 + 0x25c)
    r13[0x4b].d = 0
    
    if (rax_43 s< 0 && rax_43 != 0)
        sub_1405c5570(&r13[0x4a], 0)
    
    r13[0x4d].d = 0

sub_1405b8890(r13, 0)
sub_141c9c480(&r13[0xa], 0)
sub_141c9c480(&r13[0x14], 0)
sub_141c9c480(&r13[0x1e], 0)
sub_141c9c480(&r13[0x28], 0)
sub_141c9c340(&r13[0x32], 0)
return sub_1405b8890(&r13[0x3c], 0) __tailcall
