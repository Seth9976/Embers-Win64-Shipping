// 函数: sub_1417ac030
// 地址: 0x1417ac030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg2 + 0x28)
int32_t r8 = 0
int32_t r9 = 0
int32_t var_108 = 0
int32_t var_104 = 1
void* r14 = arg2
void* var_100 = arg2 + 0x10
int32_t var_f8 = 0xffffffff
int64_t var_f4 = 0

if (rbx != 0)
    void* rax_1 = *(arg2 + 0x20)
    void* r10_1 = arg2 + 0x10
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_1417ac0dd:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_104_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_f4.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> rbx)
            var_f4.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_f4:4.d = r9
            var_108 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_f8_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_1417ac0dd
        
        var_f4.d = rbx

int32_t rdx_2 = *(r14 + 0x28)
int128_t var_88 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_2.b & 0x1f)
int128_t var_98 = var_108.o
int32_t r8_2 = rdx_2 s>> 5
int32_t r9_3 = rdx_2 & 0xffffffe0
int64_t var_c0 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_f8_2 = rsi
var_f4.d = rdx_2
int128_t var_e0 = r14.o
int128_t var_d0 = var_98

if (rdx_2 != rbx)
    void* rax_11 = *(arg2 + 0x20)
    void* r10_2 = arg2 + 0x10
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_6 != 0)
    label_1417ac1b3:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_f4.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_f4.d = rbx
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
            var_f8_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_1417ac1b3
        
        var_f4.d = rbx

int128_t zmm6
int128_t var_48 = zmm6
uint64_t rdx_8 = var_f8_2.q u>> 0x20
int128_t zmm7
int128_t var_58 = zmm7
uint64_t arg_18 = rdx_8
int128_t zmm8
int128_t var_68 = zmm8

while (true)
    int64_t rcx_8 = sx.q(var_d0:0xc.d)
    int64_t* rax_20 = var_e0.q
    
    if (rcx_8.d == rdx_8.d && var_d0.q == arg2 + 0x10 && rax_20 == r14)
        return sub_1417b46a0(arg1, r14) __tailcall
    
    int64_t* r14_1 = *(*rax_20 + rcx_8 * 0x10)
    int32_t rbx_1 = *(*(*r14_1 + 0x50) + (sx.q(r14_1[1].d) << 2))
    int128_t* rax_23 = sub_1417ae350(arg1 + 0x2b0, rbx_1)
    int64_t* var_100_1 = r14_1
    int32_t r10_3 = 0
    int32_t rdi_1 = 0
    int32_t r11_2 = 0
    int64_t var_ec_1 = 0
    *(rax_23 + 0x2a) = 1
    int32_t rsi_1 = 0
    int64_t var_f4_1 = 0
    *(rax_23 + 0x28) = *(*(*r14_1 + 0x170) + (sx.q(r14_1[1].d) << 1))
    void* r9_5 = *r14_1
    int64_t r8_4 = sx.q(r14_1[1].d)
    int64_t rax_25 = *(r9_5 + 0xf8)
    int64_t rcx_16 = r8_4 * 3
    var_108.q = *(*(r9_5 + 0xe0) + (r8_4 << 3))
    void* rdx_13 = rax_25 + (rcx_16 << 3)
    void* rax_26 = *(rax_25 + (rcx_16 << 3) + 8)
    void* rcx_17 = rdx_13
    
    if (rax_26 != 0)
        rcx_17 = rax_26
    
    void* rdx_14 = rcx_17 + (sx.q(*(rdx_13 + 0x10)) << 3)
    
    if (rcx_17 != rdx_14)
        do
            int64_t rax_28 = *rcx_17
            rcx_17 += 8
            rsi_1 |= *rax_28
            rdi_1 |= *(rax_28 + 4)
            r11_2 |= *(rax_28 + 8)
            r10_3 |= *(rax_28 + 0xc)
        while (rcx_17 != rdx_14)
        
        var_ec_1:4.d = r10_3
        var_ec_1.d = r11_2
        var_f4_1:4.d = rdi_1
        var_f4_1.d = rsi_1
    
    char var_e4_1 = 1
    int128_t zmm1 = (*(*(r9_5 + 0x50) + (r8_4 << 2))).o
    *rax_23 = var_108.o
    rax_23[1] = zmm1
    rax_23[2].q = 0
    zmm6 = *rax_23
    zmm7 = rax_23[1]
    zmm8 = rax_23[2]
    int128_t* rax_29
    int32_t* r8_5
    rax_29, r8_5 = sub_1417ae350(arg1 + 0x2d0, rbx_1)
    *rax_29 = zmm6
    rax_29[1] = zmm7
    rax_29[2] = zmm8
    sub_1417b4030(arg1 + 0x290, rbx_1, r8_5)
    int64_t* rcx_20 = *(arg1 + 0x268)
    (*(*rcx_20 + 0x48))(rcx_20, rax_23, zx.q(*(rax_23 + 0x28)))
    char rcx_21 = *(r14_1 + 0xc)
    int64_t* rdi_2 = nullptr
    int64_t* rbx_2 = *(arg1 + 0x260)
    
    if (rcx_21 u>= 2)
        rdi_2 = r14_1
    
    if (rdi_2 == 0)
        int64_t* rax_42 = nullptr
        
        if (rcx_21 u>= 1)
            rax_42 = r14_1
        
        void* rdx_26
        
        if (rax_42 == 0)
            rdx_26 = rbx_2[1]
        else
            rdx_26 = rbx_2[3]
        
        sub_1417b1460(r14_1, rdx_26)
        sub_14175b460(rbx_2)
    else
        void* rax_31 = *rdi_2
        int64_t* rsi_2 = nullptr
        int64_t rcx_22 = sx.q(rdi_2[1].d)
        int64_t temp0_5 = _mm_unpacklo_ps(zx.o(0), 0)
        int32_t var_b0_1 = 0
        int32_t var_a4_1 = 0
        *(rcx_22 + *(rax_31 + 0x368)) = 1
        int64_t rdx_18 = sx.q(rdi_2[1].d) * 3
        int64_t rcx_23 = *(*rdi_2 + 0x1b8)
        *(rcx_23 + (rdx_18 << 2)) = temp0_5
        *(rcx_23 + (rdx_18 << 2) + 8) = var_b0_1
        int64_t rax_36 = sx.q(rdi_2[1].d)
        int64_t temp0_6 = _mm_unpacklo_ps(zx.o(0), 0)
        int64_t rdx_19 = rax_36 * 3
        int64_t rcx_24 = *(*rdi_2 + 0x1d0)
        *(rcx_24 + (rdx_19 << 2)) = temp0_6
        *(rcx_24 + (rdx_19 << 2) + 8) = var_a4_1
        char rax_39 = *(r14_1 + 0xc)
        
        if (rax_39 u>= 3)
            rsi_2 = r14_1
        
        if (rsi_2 == 0)
            sub_1417b1460(r14_1, rbx_2[6])
            sub_14179c500(rdi_2, &rbx_2[0x12], &rbx_2[0x1c])
            sub_14175b460(rbx_2)
        else if (rax_39 != 6)
            sub_14179c500(rsi_2, &rbx_2[0x2a], &rbx_2[0x34])
            int64_t* rdx_21 = nullptr
            
            if (*(r14_1 + 0xc) u>= 1)
                rdx_21 = r14_1
            
            if (rdx_21 != 0)
                int64_t* rax_40 = nullptr
                
                if (*(rdx_21 + 0xc) u>= 2)
                    rax_40 = rdx_21
                
                if (rax_40 != 0 && *(sx.q(rax_40[1].d) + *(*rax_40 + 0x398)) == 4)
                    sub_14179c500(rsi_2, &rbx_2[0x1e], &rbx_2[0x28])
            
            sub_14179c500(rdi_2, &rbx_2[0x12], &rbx_2[0x1c])
            sub_14175b460(rbx_2)
        else
            rbx_2[0x11].b = 1
    
    sub_141777130(arg1 + 0x110, r14_1)
    var_d0:8.d &= not.d(var_e0:0xc.d)
    sub_14059bdd0(&var_e0:8)
    rdx_8 = arg_18
    r14 = arg2
