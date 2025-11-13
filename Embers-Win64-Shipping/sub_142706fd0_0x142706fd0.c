// 函数: sub_142706fd0
// 地址: 0x142706fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0xa0)
int32_t var_b4 = 1
int32_t var_b8 = 0
int32_t rcx = 0
int32_t var_a0 = 0
int32_t r8 = 0
void* var_b0 = arg1 + 0x88
int32_t var_a8 = 0xffffffff
int32_t var_a4 = 0

if (r10 != 0)
    void* rax_1 = *(arg1 + 0x98)
    void* r9_1 = arg1 + 0x88
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_a4_2
    
    if (rdx_3 != 0)
    label_142707079:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_a4_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_a4_2 = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_a0_1 = rcx
            var_b8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142707079
        
        var_a4_2 = r10

int32_t rdx_6 = *(arg1 + 0xa0)
int128_t var_38 = 0xffffffff
int128_t var_48 = var_b8.o
int32_t rdi = 0xffffffff << (rdx_6 & 0x1f).b
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_78 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_a8_2 = rdi
int32_t var_a4_3 = rdx_6
int128_t var_98 = (arg1 + 0x78).o
int128_t var_88 = var_48

if (rdx_6 != r10)
    void* rax_13 = *(arg1 + 0x98)
    void* r11_1 = arg1 + 0x88
    
    if (rax_13 != 0)
        r11_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_10 = *(r11_1 + (sx.q(r8_2) << 2)) & rdi
    int32_t var_a4_5
    
    if (rdx_10 != 0)
    label_142707156:
        int32_t rax_19 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rax_20
        
        if (rax_19 == 0)
            rax_20 = 0x20
        else
            rax_20 = 0x1f - temp0_4
        
        int32_t var_a4_4 = r9_3 - rax_20 + 0x1f
        
        if (r9_3 - rax_20 + 0x1f s> r10)
            var_a4_5 = r10
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r11_1 + (rcx_4 << 2) + 4)
            var_a8_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_142707156
        
        var_a4_5 = r10

while (true)
    int64_t rdx_11 = sx.q(var_88:0xc.d)
    int32_t rax_12
    
    if (rdx_11.d != (var_a8_2.q u>> 0x20).d || var_88.q != arg1 + 0x88)
        rax_12.b = 0
    else
        rax_12.b = 1
    
    int64_t rcx_6 = var_98.q
    
    if (rax_12.b == 0 || rcx_6 != arg1 + 0x78)
        rax_12.b = 1
    else
        rax_12.b = 0
    
    if (rax_12.b == 0)
        break
    
    int64_t* rdx_13 = rdx_11 * 0x38 + *rcx_6
    int64_t* rdi_1 = rdx_13[2]
    int64_t* rcx_7 = *rdx_13
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t rsi_1 = sx.q(rdx_13[4].d)
    
    if (rcx_7 != 0)
        int64_t* rax_22 = (*(*rcx_7 + 8))(rcx_7)
        void* rax_23 = sub_142737e30()
        void* rcx_8 = rax_22[2]
        int64_t rdx_14 = sx.q(*(rax_23 + 0x38))
        void var_60
        
        if (rdx_14.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rdx_14 << 3)) == rax_23 + 0x30
                && (*(*rax_22 + 0x578))(rax_22, &var_60) != 0)
            char rax_26
            
            if (rsi_1.d s< 0 || rsi_1.d s>= *(arg1 + 0xd0))
                rax_26 = 0
            else
                rax_26 = 1
            
            if (rax_26 != 0)
                sub_141ead1f0(&rax_22[0x29], sub_140d3c6e0(rax_22[0x20] + 0x38), &var_60)
                void* rax_28 = sub_14260f680(*(arg1 + 0xd8), rsi_1.d)
                int32_t var_70
                sub_142697e10(&var_70, &var_60)
                *(rax_28 + 0x30c) = var_70.d
                int32_t var_6c
                *(rax_28 + 0x310) = var_6c.d
                int32_t var_68
                *(rax_28 + 0x314) = var_68.d
                char* rax_29 = *(arg1 + 0xc8)
                rax_29[rsi_1] |= 1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp9_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)

void* rax_34 = *(arg1 + 0xd8)
int32_t r15_1 = 0
int32_t i = 0
int64_t* r9_5 = *(rax_34 + 0x10)

if (*(rax_34 + 4) s> 0)
    do
        void* r8_4 = *r9_5
        
        if (*(r8_4 + 0x327) == 1 && *(r8_4 + 0x304) == 1 && *(r8_4 + 0x50) s< 5
                && (*(r8_4 + 0x300) & 4) == 0)
            int32_t rdx_22 = ((r8_4 - *(rax_34 + 8)) s/ 0x328).d
            uint32_t rax_37
            
            if (rdx_22 s< 0 || rdx_22 s>= *(arg1 + 0xd0))
                rax_37.b = 0
            else
                rax_37.b = 1
            
            if (rax_37.b != 0 && (*(sx.q(rdx_22) + *(arg1 + 0xc8)) & 1) != 0)
                *(r8_4 + 0x2b0) = *(r8_4 + 0x30c)
                *(r8_4 + 0x2b4) = *(r8_4 + 0x310)
                *(r8_4 + 0x2b8) = *(r8_4 + 0x314)
        
        rax_34 = *(arg1 + 0xd8)
        i += 1
        r9_5 = &r9_5[1]
    while (i s< *(rax_34 + 4))

int32_t var_b8_1 = 0
int32_t r10_1 = *(arg1 + 0xa0)
int32_t var_b4_2 = 1
int32_t rcx_22 = 0
void* var_b0_1 = arg1 + 0x88
int32_t var_a8_3 = 0xffffffff
int32_t var_a4_6 = 0
int32_t var_a0_2 = 0

if (r10_1 != 0)
    void* rax_42 = *(arg1 + 0x98)
    void* r8_5 = arg1 + 0x88
    
    if (rax_42 != 0)
        r8_5 = rax_42
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r10_1 - 1)
    int32_t rdx_25 = *r8_5
    int32_t var_a4_8
    
    if (rdx_25 != 0)
    label_142707458:
        int32_t rax_49 = neg.d(rdx_25) & rdx_25
        uint64_t rflags_3
        int32_t temp0_5
        temp0_5, rflags_3 = _bit_scan_reverse(rax_49)
        int32_t var_b4_3 = rax_49
        int32_t rax_50
        
        if (rax_49 == 0)
            rax_50 = 0x20
        else
            rax_50 = 0x1f - temp0_5
        
        int32_t var_a4_7 = rcx_22 - rax_50 + 0x1f
        
        if (rcx_22 - rax_50 + 0x1f s> r10_1)
            var_a4_8 = r10_1
    else
        while (true)
            int64_t rdx_26 = sx.q(r15_1)
            rcx_22 += 0x20
            r15_1 += 1
            int32_t var_a0_3 = rcx_22
            var_b8_1 = r15_1
            
            if (rdx_26.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_25 = *(r8_5 + (rdx_26 << 2) + 4)
            int32_t var_a8_4 = 0xffffffff
            
            if (rdx_25 != 0)
                goto label_142707458
        
        var_a4_8 = r10_1

int32_t rdx_28 = *(arg1 + 0xa0)
int128_t var_38_1 = 0xffffffff
int128_t var_48_1 = var_b8_1.o
int32_t rdi_2 = 0xffffffff << (rdx_28 & 0x1f).b
int32_t r8_7 = rdx_28 s>> 5
int32_t r9_7 = rdx_28 & 0xffffffe0
int64_t var_78_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_a8_5 = rdi_2
int32_t var_a4_9 = rdx_28
var_98 = (arg1 + 0x78).o
int128_t var_88_1 = var_48_1

if (rdx_28 != r10_1)
    void* rax_53 = *(arg1 + 0x98)
    void* r11_2 = arg1 + 0x88
    
    if (rax_53 != 0)
        r11_2 = rax_53
    
    int32_t temp7_1
    int32_t temp8_1
    temp7_1:temp8_1 = sx.q(r10_1 - 1)
    int32_t rdx_32 = *(r11_2 + (sx.q(r8_7) << 2)) & rdi_2
    int32_t var_a4_11
    
    if (rdx_32 != 0)
    label_142707535:
        int32_t rax_59 = neg.d(rdx_32) & rdx_32
        uint64_t rflags_4
        int32_t temp0_7
        temp0_7, rflags_4 = _bit_scan_reverse(rax_59)
        int32_t rax_60
        
        if (rax_59 == 0)
            rax_60 = 0x20
        else
            rax_60 = 0x1f - temp0_7
        
        int32_t var_a4_10 = r9_7 - rax_60 + 0x1f
        
        if (r9_7 - rax_60 + 0x1f s> r10_1)
            var_a4_11 = r10_1
    else
        while (true)
            int64_t rcx_26 = sx.q(r8_7)
            r9_7 += 0x20
            r8_7 += 1
            
            if (rcx_26.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                break
            
            rdx_32 = *(r11_2 + (rcx_26 << 2) + 4)
            var_a8_5 = 0xffffffff
            
            if (rdx_32 != 0)
                goto label_142707535
        
        var_a4_11 = r10_1

int32_t result

while (true)
    int64_t rcx_28 = sx.q(var_88_1:0xc.d)
    
    if (rcx_28.d != (var_a8_5.q u>> 0x20).d || var_88_1.q != arg1 + 0x88)
        result.b = 0
    else
        result.b = 1
    
    int64_t rdx_33 = var_98.q
    
    if (result.b == 0 || rdx_33 != arg1 + 0x78)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    void* rcx_30 = rcx_28 * 0x38 + *rdx_33
    int64_t* rbx_5 = *(rcx_30 + 0x10)
    
    if (rbx_5 != 0)
        rbx_5[1].d += 1
    
    int64_t rax_61 = sx.q(*(rcx_30 + 0x20))
    
    if (rax_61.d s< 0 || rax_61.d s>= *(arg1 + 0xd0))
        rcx_30.b = 0
    else
        rcx_30.b = 1
    
    if (rcx_30.b != 0)
        char* rax_62 = *(arg1 + 0xc8)
        rax_62[rax_61] &= 0xfe
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t temp11_1 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_5 + 8))(rbx_5, 1)
    
    var_88_1:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)

return result
