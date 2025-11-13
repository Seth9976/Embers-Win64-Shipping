// 函数: sub_1425f9a90
// 地址: 0x1425f9a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c49130()

if (sub_141c49120() != 0)
    return 0

int32_t r12 = 0

if (arg3 != 0)
    r12.b = arg3 != 1
    r12 += 1

void* r11 = arg1 + 0x10
int32_t rdi_1 = *(r11 + 0x28)
void* r13 = r11 + 0x10
void* var_b0 = r13
int32_t rcx = 0
void* var_88 = r11
int32_t r8 = 0
int32_t var_b4 = 1
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0
int32_t var_b8 = 0
int64_t var_98
int128_t var_80
double zmm2[0x2]

if (arg2 == 0)
    if (rdi_1 != 0)
        void* rax_1 = *(r13 + 0x10)
        void* r10_1 = r13
        
        if (rax_1 != 0)
            r10_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1 - 1)
        int32_t rdx_2 = *r10_1
        
        if (rdx_2 != 0)
        label_1425f9b88:
            int32_t rax_8 = neg.d(rdx_2) & rdx_2
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_b4_1 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_a4.d = r8 - rax_9 + 0x1f
            
            if (r8 - rax_9 + 0x1f s> rdi_1)
                var_a4.d = rdi_1
        else
            while (true)
                int64_t rdx_3 = sx.q(rcx)
                r8 += 0x20
                rcx += 1
                var_a4:4.d = r8
                var_b8 = rcx
                
                if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_2 = *(r10_1 + (rdx_3 << 2) + 4)
                var_a8 = 0xffffffff
                
                if (rdx_2 != 0)
                    goto label_1425f9b88
            
            var_a4.d = rdi_1
    
    int32_t rdx_4 = *(r11 + 0x28)
    zmm2 = var_a8.o
    double var_40[0x2] = zmm2
    int32_t r15_1 = 0xffffffff << (rdx_4.b & 0x1f)
    int128_t var_50 = var_b8.o
    int32_t r8_3 = rdx_4 s>> 5
    int32_t r10_3 = rdx_4 & 0xffffffe0
    int64_t var_60 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_a8_1 = r15_1
    var_a4.d = rdx_4
    var_80 = r11.o
    int128_t var_70 = var_50
    
    if (rdx_4 != rdi_1)
        void* rax_11 = *(r13 + 0x10)
        void* r11_1 = r13
        
        if (rax_11 != 0)
            r11_1 = rax_11
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(rdi_1 - 1)
        int32_t rdx_8 = *(r11_1 + (sx.q(r8_3) << 2)) & r15_1
        
        if (rdx_8 != 0)
        label_1425f9c52:
            int32_t rax_18 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t r9
            
            if (rax_18 == 0)
                r9 = 0x20
            else
                r9 = 0x1f - temp0_4
            
            var_a4.d = r10_3 - r9 + 0x1f
            
            if (r10_3 - r9 + 0x1f s> rdi_1)
                var_a4.d = rdi_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_3)
                r10_3 += 0x20
                r8_3 += 1
                
                if (rcx_5.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r11_1 + (rcx_5 << 2) + 4)
                var_a8_1 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_1425f9c52
            
            var_a4.d = rdi_1
        
        r11 = var_88
    
    while (true)
        int64_t rcx_7 = sx.q(var_70:0xc.d)
        int64_t* rax_20 = var_80.q
        
        if (rcx_7.d == (var_a8_1.q u>> 0x20).d && var_70.q == r13 && rax_20 == r11)
            break
        
        int64_t rax_21 = *rax_20
        var_98 = 0
        int32_t rdx_9 = 0
        int32_t var_90_1 = 0
        int64_t* r14_1 = *(rax_21 + rcx_7 * 0x10)
        int32_t rcx_9 = 0
        int32_t var_8c_1 = 0
        
        if (arg4 != 0 && *arg4 != 0)
            int64_t rdi_2 = -1
            
            do
                rdi_2 += 1
            while (arg4[rdi_2] != 0)
            
            if (rdi_2.d + 1 s> 0)
                sub_1405947f0(&var_98, rdi_2.d + 1)
                rcx_9 = var_8c_1
                rdx_9 = var_90_1
            
            int32_t rax_22 = rdi_2.d + 1 + rdx_9
            int32_t var_90_2 = rax_22
            
            if (rax_22 s> rcx_9)
                sub_140594770(&var_98)
            
            UnDecorator::getReferenceType(var_98, arg4, (rdi_2.d + 1) * 2)
        
        (*(*r14_1 + 0x18))(r14_1, zx.q(r12), &var_98)
        int64_t rcx_14 = var_98
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        var_70:8.d &= not.d(var_80:0xc.d)
        sub_14059bdd0(&var_80:8)
        r11 = var_88
else if (arg2 != 1)
    if (rdi_1 != 0)
        void* rax_51 = *(r13 + 0x10)
        void* r10_9 = r13
        
        if (rax_51 != 0)
            r10_9 = rax_51
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rdi_1 - 1)
        int32_t rdx_28 = *r10_9
        
        if (rdx_28 != 0)
        label_1425f9fc8:
            int32_t rax_58 = neg.d(rdx_28) & rdx_28
            uint64_t rflags_5
            int32_t temp0_8
            temp0_8, rflags_5 = _bit_scan_reverse(rax_58)
            int32_t var_b4_3 = rax_58
            int32_t rax_59
            
            if (rax_58 == 0)
                rax_59 = 0x20
            else
                rax_59 = 0x1f - temp0_8
            
            var_a4.d = r8 - rax_59 + 0x1f
            
            if (r8 - rax_59 + 0x1f s> rdi_1)
                var_a4.d = rdi_1
        else
            while (true)
                int64_t rdx_29 = sx.q(rcx)
                r8 += 0x20
                rcx += 1
                var_a4:4.d = r8
                var_b8 = rcx
                
                if (rdx_29.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_28 = *(r10_9 + (rdx_29 << 2) + 4)
                var_a8 = 0xffffffff
                
                if (rdx_28 != 0)
                    goto label_1425f9fc8
            
            var_a4.d = rdi_1
    
    int32_t rdx_30 = *(r11 + 0x28)
    zmm2 = var_a8.o
    double var_40_2[0x2] = zmm2
    int32_t r15_7 = 0xffffffff << (rdx_30.b & 0x1f)
    int128_t var_50_2 = var_b8.o
    int32_t r8_15 = rdx_30 s>> 5
    int32_t r10_11 = rdx_30 & 0xffffffe0
    int64_t var_60_2 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_a8_3 = r15_7
    var_a4.d = rdx_30
    var_80 = r11.o
    int128_t var_70_2 = var_50_2
    
    if (rdx_30 != rdi_1)
        void* rax_61 = *(r13 + 0x10)
        void* r11_3 = r13
        
        if (rax_61 != 0)
            r11_3 = rax_61
        
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(rdi_1 - 1)
        int32_t rdx_34 = *(r11_3 + (sx.q(r8_15) << 2)) & r15_7
        
        if (rdx_34 != 0)
        label_1425fa092:
            int32_t rax_68 = neg.d(rdx_34) & rdx_34
            uint64_t rflags_6
            int32_t temp0_10
            temp0_10, rflags_6 = _bit_scan_reverse(rax_68)
            int32_t r9_2
            
            if (rax_68 == 0)
                r9_2 = 0x20
            else
                r9_2 = 0x1f - temp0_10
            
            var_a4.d = r10_11 - r9_2 + 0x1f
            
            if (r10_11 - r9_2 + 0x1f s> rdi_1)
                var_a4.d = rdi_1
        else
            while (true)
                int64_t rcx_35 = sx.q(r8_15)
                r10_11 += 0x20
                r8_15 += 1
                
                if (rcx_35.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                    break
                
                rdx_34 = *(r11_3 + (rcx_35 << 2) + 4)
                var_a8_3 = 0xffffffff
                
                if (rdx_34 != 0)
                    goto label_1425fa092
            
            var_a4.d = rdi_1
        
        r11 = var_88
    
    while (true)
        int64_t rcx_37 = sx.q(var_70_2:0xc.d)
        int64_t* rax_70 = var_80.q
        
        if (rcx_37.d == (var_a8_3.q u>> 0x20).d && var_70_2.q == r13 && rax_70 == r11)
            break
        
        int64_t rax_71 = *rax_70
        var_98 = 0
        int32_t rdx_35 = 0
        int32_t var_90_5 = 0
        int64_t* r14_3 = *(rax_71 + rcx_37 * 0x10)
        int32_t rcx_39 = 0
        int32_t var_8c_3 = 0
        
        if (arg4 != 0 && *arg4 != 0)
            int64_t rdi_6 = -1
            
            do
                rdi_6 += 1
            while (arg4[rdi_6] != 0)
            
            if (rdi_6.d + 1 s> 0)
                sub_1405947f0(&var_98, rdi_6.d + 1)
                rcx_39 = var_8c_3
                rdx_35 = var_90_5
            
            int32_t rax_72 = rdx_35 + rdi_6.d + 1
            int32_t var_90_6 = rax_72
            
            if (rax_72 s> rcx_39)
                sub_140594770(&var_98)
            
            UnDecorator::getReferenceType(var_98, arg4, (rdi_6.d + 1) * 2)
        
        (*(*r14_3 + 0x10))(r14_3, zx.q(r12), &var_98)
        int64_t rcx_44 = var_98
        
        if (rcx_44 != 0)
            sub_140a74f90(rcx_44)
        
        var_b8.q = 0
        int32_t rdx_39 = 0
        var_b0.d = 0
        int32_t rcx_45 = 0
        var_b0:4.d = 0
        
        if (arg4 != 0 && *arg4 != 0)
            int64_t rdi_8 = -1
            
            do
                rdi_8 += 1
            while (arg4[rdi_8] != 0)
            
            if (rdi_8.d + 1 s> 0)
                sub_1405947f0(&var_b8, rdi_8.d + 1)
                rcx_45 = var_b0:4.d
                rdx_39 = var_b0.d
            
            int32_t rax_74 = rdi_8.d + 1 + rdx_39
            var_b0.d = rax_74
            
            if (rax_74 s> rcx_45)
                sub_140594770(&var_b8)
            
            UnDecorator::getReferenceType(var_b8.q, arg4, (rdi_8.d + 1) * 2)
        
        (*(*r14_3 + 0x18))(r14_3, zx.q(r12), &var_b8)
        int64_t rcx_50 = var_b8.q
        
        if (rcx_50 != 0)
            sub_140a74f90(rcx_50)
        
        var_70_2:8.d &= not.d(var_80:0xc.d)
        sub_14059bdd0(&var_80:8)
        r11 = var_88
else
    if (rdi_1 != 0)
        void* rax_26 = *(r13 + 0x10)
        void* r10_5 = r13
        
        if (rax_26 != 0)
            r10_5 = rax_26
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rdi_1 - 1)
        int32_t rdx_15 = *r10_5
        
        if (rdx_15 != 0)
        label_1425f9da8:
            int32_t rax_33 = neg.d(rdx_15) & rdx_15
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_33)
            int32_t var_b4_2 = rax_33
            int32_t rax_34
            
            if (rax_33 == 0)
                rax_34 = 0x20
            else
                rax_34 = 0x1f - temp0_5
            
            var_a4.d = r8 - rax_34 + 0x1f
            
            if (r8 - rax_34 + 0x1f s> rdi_1)
                var_a4.d = rdi_1
        else
            while (true)
                int64_t rdx_16 = sx.q(rcx)
                r8 += 0x20
                rcx += 1
                var_a4:4.d = r8
                var_b8 = rcx
                
                if (rdx_16.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_15 = *(r10_5 + (rdx_16 << 2) + 4)
                var_a8 = 0xffffffff
                
                if (rdx_15 != 0)
                    goto label_1425f9da8
            
            var_a4.d = rdi_1
    
    int32_t rdx_17 = *(r11 + 0x28)
    zmm2 = var_a8.o
    double var_40_1[0x2] = zmm2
    int32_t r15_4 = 0xffffffff << (rdx_17.b & 0x1f)
    int128_t var_50_1 = var_b8.o
    int32_t r8_9 = rdx_17 s>> 5
    int32_t r10_7 = rdx_17 & 0xffffffe0
    int64_t var_60_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_a8_2 = r15_4
    var_a4.d = rdx_17
    var_80 = r11.o
    int128_t var_70_1 = var_50_1
    
    if (rdx_17 != rdi_1)
        void* rax_36 = *(r13 + 0x10)
        void* r11_2 = r13
        
        if (rax_36 != 0)
            r11_2 = rax_36
        
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(rdi_1 - 1)
        int32_t rdx_21 = *(r11_2 + (sx.q(r8_9) << 2)) & r15_4
        
        if (rdx_21 != 0)
        label_1425f9e72:
            int32_t rax_43 = neg.d(rdx_21) & rdx_21
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_43)
            int32_t r9_1
            
            if (rax_43 == 0)
                r9_1 = 0x20
            else
                r9_1 = 0x1f - temp0_7
            
            var_a4.d = r10_7 - r9_1 + 0x1f
            
            if (r10_7 - r9_1 + 0x1f s> rdi_1)
                var_a4.d = rdi_1
        else
            while (true)
                int64_t rcx_20 = sx.q(r8_9)
                r10_7 += 0x20
                r8_9 += 1
                
                if (rcx_20.d s>= (temp11_1 + (temp10_1 & 0x1f)) s>> 5)
                    break
                
                rdx_21 = *(r11_2 + (rcx_20 << 2) + 4)
                var_a8_2 = 0xffffffff
                
                if (rdx_21 != 0)
                    goto label_1425f9e72
            
            var_a4.d = rdi_1
        
        r11 = var_88
    
    while (true)
        int64_t rcx_22 = sx.q(var_70_1:0xc.d)
        int64_t* rax_45 = var_80.q
        
        if (rcx_22.d == (var_a8_2.q u>> 0x20).d && var_70_1.q == r13 && rax_45 == r11)
            break
        
        int64_t rax_46 = *rax_45
        var_98 = 0
        int32_t rdx_22 = 0
        int32_t var_90_3 = 0
        int64_t* r14_2 = *(rax_46 + rcx_22 * 0x10)
        int32_t rcx_24 = 0
        int32_t var_8c_2 = 0
        
        if (arg4 != 0 && *arg4 != 0)
            int64_t rdi_4 = -1
            
            do
                rdi_4 += 1
            while (arg4[rdi_4] != 0)
            
            if (rdi_4.d + 1 s> 0)
                sub_1405947f0(&var_98, rdi_4.d + 1)
                rcx_24 = var_8c_2
                rdx_22 = var_90_3
            
            int32_t rax_47 = rdi_4.d + 1 + rdx_22
            int32_t var_90_4 = rax_47
            
            if (rax_47 s> rcx_24)
                sub_140594770(&var_98)
            
            UnDecorator::getReferenceType(var_98, arg4, (rdi_4.d + 1) * 2)
        
        (*(*r14_2 + 0x10))(r14_2, zx.q(r12), &var_98)
        int64_t rcx_29 = var_98
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        var_70_1:8.d &= not.d(var_80:0xc.d)
        sub_14059bdd0(&var_80:8)
        r11 = var_88
return 0
