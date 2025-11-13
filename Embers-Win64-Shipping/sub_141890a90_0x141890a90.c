// 函数: sub_141890a90
// 地址: 0x141890a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t r11 = *(arg2 + 0x28)
int32_t r10 = 0
int32_t var_c4 = 1
int32_t r8 = 0
int32_t var_c8 = 0
void* var_c0 = arg2 + 0x10
int32_t var_b8 = 0xffffffff
void* rbx = arg1
int64_t var_b4 = 0

if (r11 != 0)
    void* rax_1 = *(arg2 + 0x20)
    void* r9 = arg2 + 0x10
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r9
    
    if (rcx != 0)
    label_141890b3b:
        int32_t rax_8 = ((rcx - 1) & rcx) ^ rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_c4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_b4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r10)
            r8 += 0x20
            r10 += 1
            var_b4:4.d = r8
            var_c8 = r10
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r9 + (rcx_1 << 2) + 4)
            var_b8 = 0xffffffff
            
            if (rcx != 0)
                goto label_141890b3b
        
        var_b4.d = r11

int32_t rdx_2 = *(arg2 + 0x28)
double zmm2[0x2] = var_b8.o
var_b4.d = rdx_2
double var_58[0x2] = zmm2
int128_t var_68 = var_c8.o
int32_t rdi = 0xffffffff << (rdx_2 & 0x1f).b
int32_t r8_3 = rdx_2 s>> 5
int32_t r9_2 = rdx_2 & 0xffffffe0
int64_t var_78 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_b8_1 = rdi
int128_t var_98 = arg2.o
int128_t var_88 = var_68

if (rdx_2 != r11)
    void* rax_12 = *(arg2 + 0x20)
    void* r10_1 = arg2 + 0x10
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *(r10_1 + (sx.q(r8_3) << 2)) & rdi
    
    if (rdx_6 != 0)
    label_141890c16:
        int32_t rax_18 = ((rdx_6 - 1) & rdx_6) ^ rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_b4.d = r9_2 - rax_19 + 0x1f
        
        if (r9_2 - rax_19 + 0x1f s> r11)
            var_b4.d = r11
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_1 + (rcx_5 << 2) + 4)
            var_b8_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141890c16
        
        var_b4.d = r11
    
    rbx = arg1

int64_t var_a8
int32_t result

while (true)
    int64_t rdx_7 = sx.q(var_88:0xc.d)
    
    if (rdx_7.d != (var_b8_1.q u>> 0x20).d || var_88.q != arg2 + 0x10)
        result.b = 0
    else
        result.b = 1
    
    int64_t rcx_7 = var_98.q
    
    if (result.b == 0 || rcx_7 != arg2)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int128_t* rdi_3 = (rdx_7 << 5) + *rcx_7
    int64_t* rcx_8 = *(rbx + 8)
    
    if ((*(*rcx_8 + 0x10))(rcx_8, rdi_3) == 0)
        sub_140598750(arg4, &var_a8)
        int128_t* var_a0
        *var_a0 = *rdi_3
        var_a0[1].d = 0xffffffff
        void arg_10
        sub_14093ebb0(arg4, &arg_10, sub_140a6b260(var_a0, 0x10), var_a0, var_a8.d, nullptr)
        rbx = arg1
    
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)

int32_t i = *(arg4 + 0x34) - *(arg2 + 0x34) - arg4[1].d - arg_18 + *(arg2 + 8)

if (i s> 0)
    int32_t var_c4_2 = 1
    var_a8 = 0
    int32_t rcx_14 = 0
    int64_t var_a0_1 = 0
    int32_t r8_5 = 0
    int32_t r10_2 = *(arg2 + 0x28)
    var_c8 = 0
    int32_t var_b8_2 = 0xffffffff
    int64_t var_b4_1 = 0
    
    if (r10_2 != 0)
        void* rax_25 = *(arg2 + 0x20)
        void* r9_5 = arg2 + 0x10
        
        if (rax_25 != 0)
            r9_5 = rax_25
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r10_2 - 1)
        int32_t rdx_13 = *r9_5
        
        if (rdx_13 != 0)
        label_141890d99:
            int32_t rax_32 = ((rdx_13 - 1) & rdx_13) ^ rdx_13
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_32)
            int32_t var_c4_3 = rax_32
            int32_t rax_33
            
            if (rax_32 == 0)
                rax_33 = 0x20
            else
                rax_33 = 0x1f - temp0_5
            
            var_b4_1.d = r8_5 - rax_33 + 0x1f
            
            if (r8_5 - rax_33 + 0x1f s> r10_2)
                var_b4_1.d = r10_2
        else
            while (true)
                int64_t rdx_14 = sx.q(rcx_14)
                r8_5 += 0x20
                rcx_14 += 1
                var_b4_1:4.d = r8_5
                var_c8 = rcx_14
                
                if (rdx_14.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_13 = *(r9_5 + (rdx_14 << 2) + 4)
                var_b8_2 = 0xffffffff
                
                if (rdx_13 != 0)
                    goto label_141890d99
            
            var_b4_1.d = r10_2
    
    int32_t rdx_15 = *(arg2 + 0x28)
    zmm2 = var_b8_2.o
    var_b4_1.d = rdx_15
    double var_58_1[0x2] = zmm2
    int128_t var_68_1 = var_c8.o
    int32_t rdi_4 = 0xffffffff << (rdx_15 & 0x1f).b
    int32_t r8_8 = rdx_15 s>> 5
    int32_t r9_7 = rdx_15 & 0xffffffe0
    int64_t var_78_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_b8_3 = rdi_4
    var_98 = arg2.o
    int128_t var_88_1 = var_68_1
    
    if (rdx_15 != r10_2)
        void* rax_37 = *(arg2 + 0x20)
        void* r11_1 = arg2 + 0x10
        
        if (rax_37 != 0)
            r11_1 = rax_37
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r10_2 - 1)
        int32_t rdx_19 = *(r11_1 + (sx.q(r8_8) << 2)) & rdi_4
        
        if (rdx_19 != 0)
        label_141890e76:
            int32_t rax_43 = ((rdx_19 - 1) & rdx_19) ^ rdx_19
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_43)
            int32_t r14_1
            
            if (rax_43 == 0)
                r14_1 = 0x20
            else
                r14_1 = 0x1f - temp0_7
            
            var_b4_1.d = r9_7 - r14_1 + 0x1f
            
            if (r9_7 - r14_1 + 0x1f s> r10_2)
                var_b4_1.d = r10_2
        else
            while (true)
                int64_t rcx_18 = sx.q(r8_8)
                r9_7 += 0x20
                r8_8 += 1
                
                if (rcx_18.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    break
                
                rdx_19 = *(r11_1 + (rcx_18 << 2) + 4)
                var_b8_3 = 0xffffffff
                
                if (rdx_19 != 0)
                    goto label_141890e76
            
            var_b4_1.d = r10_2
    
    while (true)
        int64_t rdx_20 = sx.q(var_88_1:0xc.d)
        int32_t rax_36
        
        if (rdx_20.d != (var_b8_3.q u>> 0x20).d || var_88_1.q != arg2 + 0x10)
            rax_36.b = 0
        else
            rax_36.b = 1
        
        int64_t rcx_20 = var_98.q
        
        if (rax_36.b == 0 || rcx_20 != arg2)
            rax_36.b = 1
        else
            rax_36.b = 0
        
        if (rax_36.b == 0)
            break
        
        int64_t* rbx_6 = (rdx_20 << 5) + *rcx_20
        
        if (*sub_140b162a0(arg4, &arg_18, rbx_6) == 0xffffffff)
            int64_t rdi_5 = sx.q(var_a0_1.d)
            int32_t rax_45 = (rdi_5 + 1).d
            var_a0_1.d = rax_45
            
            if (rax_45 s> var_a0_1:4.d)
                sub_1405a4f90(&var_a8)
            
            *(var_a8 + rdi_5 * 0x10) = *rbx_6
        
        var_88_1:8.d &= not.d(var_98:0xc.d)
        rax_36, r8_8 = sub_14059bdd0(&var_98:8)
    
    r8_8.b = 1
    int64_t* rcx_27 = *(arg1 + 8)
    result = (*(*rcx_27 + 0x18))(rcx_27, &var_a8, r8_8)
    int32_t r15_1 = 0
    
    if (var_a0_1.d s> 0)
        int128_t* r14_4 = nullptr
        
        while (i s> 0)
            int64_t rbx_7 = var_a8
            i -= 1
            sub_140598750(arg5, &var_c8)
            *(arg2 + 0x10) = *(r14_4 + rbx_7)
            *(arg2 + 0x20) = 0xffffffff
            result = sub_14093ebb0(arg5, &arg_18, sub_140a6b260(arg2 + 0x10, 0x10), arg2 + 0x10, 
                var_c8, nullptr)
            r15_1 += 1
            r14_4 = &r14_4[1]
            
            if (r15_1 s>= var_a0_1.d)
                break
    
    int64_t rcx_32 = var_a8
    
    if (rcx_32 != 0)
        return sub_140a74f90(rcx_32)

return result
