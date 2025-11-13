// 函数: sub_140867b00
// 地址: 0x140867b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Niagara")
void* r13_1 = arg1 + 0x1d8
int64_t i_5 = 7
void* r15 = r13_1
int64_t i_3 = 7
int128_t var_98
int64_t i

do
    int32_t r10_1 = *(r15 + 8)
    void* r9_1 = r15 - 0x10
    int32_t rcx = 0
    int32_t var_b4_1 = 1
    int32_t r8_1 = 0
    int32_t var_b8_1 = 0
    void* var_b0_1 = r9_1
    int32_t var_a8_1 = 0xffffffff
    int64_t var_a4_1 = 0
    
    if (r10_1 != 0)
        void* rax_1 = *r15
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_140867bc8:
            int32_t rax_8 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_b4_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_2
            
            var_a4_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r10_1)
                var_a4_1.d = r10_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_a4_1:4.d = r8_1
                var_b8_1 = rcx
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                int32_t var_a8_2 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_140867bc8
            
            var_a4_1.d = r10_1
    
    int32_t rbx_1 = *(r15 + 8)
    int128_t var_58_1 = 0xffffffff
    int128_t var_68_1 = var_b8_1.o
    int32_t rdi_1 = 0xffffffff << (r10_1.b & 0x1f)
    int32_t r8_4 = r10_1 s>> 5
    int32_t r9_3 = r10_1 & 0xffffffe0
    int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_a8_3 = rdi_1
    var_a4_1.d = r10_1
    var_98 = (r15 - 0x20).o
    int128_t var_88_1 = var_68_1
    
    if (r10_1 != rbx_1)
        void* rax_11 = *r15
        void* r10_2 = r15 - 0x10
        
        if (rax_11 != 0)
            r10_2 = rax_11
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(rbx_1 - 1)
        int32_t rdx_8 = *(r10_2 + (sx.q(r8_4) << 2)) & rdi_1
        
        if (rdx_8 != 0)
        label_140867ca2:
            int32_t rax_18 = neg.d(rdx_8) & rdx_8
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
            int32_t rax_19
            
            if (rax_18 == 0)
                rax_19 = 0x20
            else
                rax_19 = 0x1f - temp0_4
            
            var_a4_1.d = r9_3 - rax_19 + 0x1f
            
            if (r9_3 - rax_19 + 0x1f s> rbx_1)
                var_a4_1.d = rbx_1
        else
            while (true)
                int64_t rcx_5 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_8 = *(r10_2 + (rcx_5 << 2) + 4)
                var_a8_3 = 0xffffffff
                
                if (rdx_8 != 0)
                    goto label_140867ca2
            
            var_a4_1.d = rbx_1
    
    while (true)
        int64_t rcx_7 = sx.q(var_88_1:0xc.d)
        int64_t* rax_21 = var_98.q
        
        if (rcx_7.d == (var_a8_3.q u>> 0x20).d && var_88_1.q == r15 - 0x10 && rax_21 == r15 - 0x20)
            break
        
        void* rbx_2 = *((rcx_7 << 5) + *rax_21 + 8)
        
        if (sub_140d3c6e0(rbx_2 + 0x20) != 0 && (*(rbx_2 + 0xd68) & 1) != 0 && *(rbx_2 + 0x38) != 0)
            sub_140861e90(rbx_2)
        
        var_88_1:8.d &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)
    
    r15 += 0x50
    i = i_5
    i_5 -= 1
while (i != 1)
int64_t i_1

do
    int32_t r10_3 = *(r13_1 + 8)
    void* r9_5 = r13_1 - 0x10
    void* var_b0_2 = r9_5
    int32_t rcx_12 = 0
    int32_t var_b8_2 = 0
    int32_t r8_5 = 0
    int32_t var_b4_3 = 1
    int32_t var_a8_4 = 0xffffffff
    int64_t var_a4_2 = 0
    
    if (r10_3 != 0)
        void* rax_26 = *r13_1
        
        if (rax_26 != 0)
            r9_5 = rax_26
        
        int32_t temp5_1
        int32_t temp6_1
        temp5_1:temp6_1 = sx.q(r10_3 - 1)
        int32_t rdx_11 = *r9_5
        
        if (rdx_11 != 0)
        label_140867db8:
            int32_t rax_33 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_3
            int32_t temp0_5
            temp0_5, rflags_3 = _bit_scan_reverse(rax_33)
            int32_t var_b4_4 = rax_33
            int32_t rax_34
            
            if (rax_33 == 0)
                rax_34 = 0x20
            else
                rax_34 = 0x1f - temp0_5
            
            var_a4_2.d = r8_5 - rax_34 + 0x1f
            
            if (r8_5 - rax_34 + 0x1f s> r10_3)
                var_a4_2.d = r10_3
        else
            while (true)
                int64_t rdx_12 = sx.q(rcx_12)
                r8_5 += 0x20
                rcx_12 += 1
                var_a4_2:4.d = r8_5
                var_b8_2 = rcx_12
                
                if (rdx_12.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r9_5 + (rdx_12 << 2) + 4)
                int32_t var_a8_5 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_140867db8
            
            var_a4_2.d = r10_3
    
    int32_t rbx_3 = *(r13_1 + 8)
    int128_t var_58_2 = 0xffffffff
    int128_t var_68_2 = var_b8_2.o
    int32_t rdi_4 = 0xffffffff << (r10_3.b & 0x1f)
    int32_t r8_8 = r10_3 s>> 5
    int32_t r9_7 = r10_3 & 0xffffffe0
    int64_t var_78_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
    int32_t var_a8_6 = rdi_4
    var_a4_2.d = r10_3
    var_98 = (r13_1 - 0x20).o
    int128_t var_88_2 = var_68_2
    
    if (r10_3 != rbx_3)
        void* rax_36 = *r13_1
        void* r10_4 = r13_1 - 0x10
        
        if (rax_36 != 0)
            r10_4 = rax_36
        
        int32_t temp7_1
        int32_t temp8_1
        temp7_1:temp8_1 = sx.q(rbx_3 - 1)
        int32_t rdx_16 = *(r10_4 + (sx.q(r8_8) << 2)) & rdi_4
        
        if (rdx_16 != 0)
        label_140867e92:
            int32_t rax_43 = neg.d(rdx_16) & rdx_16
            uint64_t rflags_4
            int32_t temp0_7
            temp0_7, rflags_4 = _bit_scan_reverse(rax_43)
            int32_t rax_44
            
            if (rax_43 == 0)
                rax_44 = 0x20
            else
                rax_44 = 0x1f - temp0_7
            
            var_a4_2.d = r9_7 - rax_44 + 0x1f
            
            if (r9_7 - rax_44 + 0x1f s> rbx_3)
                var_a4_2.d = rbx_3
        else
            while (true)
                int64_t rcx_17 = sx.q(r8_8)
                r9_7 += 0x20
                r8_8 += 1
                
                if (rcx_17.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                    break
                
                rdx_16 = *(r10_4 + (rcx_17 << 2) + 4)
                var_a8_6 = 0xffffffff
                
                if (rdx_16 != 0)
                    goto label_140867e92
            
            var_a4_2.d = rbx_3
    
    while (true)
        int64_t rcx_19 = sx.q(var_88_2:0xc.d)
        int64_t* rax_46 = var_98.q
        
        if (rcx_19.d == (var_a8_6.q u>> 0x20).d && var_88_2.q == r13_1 - 0x10
                && rax_46 == r13_1 - 0x20)
            break
        
        void* rbx_4 = *((rcx_19 << 5) + *rax_46 + 8)
        
        if (sub_140d3c6e0(rbx_4 + 0x20) != 0 && (*(rbx_4 + 0xd68) & 1) != 0 && *(rbx_4 + 0x38) != 0)
            sub_14085d430(rbx_4)
        
        var_88_2:8.d &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)
    
    r13_1 += 0x50
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
*(arg1 + 0x3ec) = 0
uint64_t rax_51 = zx.q(*(arg1 + 0x45c))
*(arg1 + 0x458) = 0

if (rax_51.d s<= 0xffffffff)
    sub_140869520(arg1 + 0x3f0, 0)

int32_t i_4 = *(arg1 + 0x4c8)
int64_t* rbx_5 = *(arg1 + 0x4c0)

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t* rcx_25 = *rbx_5
        
        if (rcx_25 != 0)
            (**rcx_25)(rcx_25, 1)
        
        rbx_5 = &rbx_5[1]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

*(arg1 + 0x4c8) = 0

if (*(arg1 + 0x4cc) != 0)
    sub_1405c5570(arg1 + 0x4c0, 0)

if (arg1 + 0x18 != arg1 + 0x168)
    void* rcx_28 = arg1 + 0x21
    
    do
        rax_51.b = 6
        
        if (data_14396ff28 == 0)
            rax_51 = zx.q(*(rcx_28 - 1))
        
        *rcx_28 = rax_51.b
        rcx_28 += 0x30
    while (rcx_28 - 9 != arg1 + 0x168)

return sub_140b37f60("Niagara") __tailcall
