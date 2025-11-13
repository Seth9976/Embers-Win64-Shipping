// 函数: sub_141ca1060
// 地址: 0x141ca1060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_141ca0570(arg1 + 8, arg2)
uint32_t r8_2 = ((*(arg1 + 0x714) + 0x1f) u>> 5)
    + ((*(arg1 + 0x6a4) + (*(arg1 + 0x6f4) << 1) + *(arg1 + 0x2e4)) << 2)
    + ((*(arg1 + 0x6c4) + 0x1f) u>> 5)
int32_t r12 = ((zx.q(r8_2 + ((*(arg1 + 0x354) + 0x1f) u>> 5) + ((*(arg1 + 0x304) + 0x1f) u>> 5)
    + *(arg1 + 0x334) * 6 + *(arg1 + 0x730) + *(arg1 + 0x6e0) + *(arg1 + 0x370) + *(arg1 + 0x320))
    << 2) + 0x778).d
int32_t rcx_11 = ((*(arg1 + 0x52c) + *(arg1 + 0x4fc)) << 4) + sub_141ca0e20(arg1 + 0x420)
    + ((((*(arg1 + 0x674) + 0x1f) u>> 5) + *(arg1 + 0x654) * 6 + *(arg1 + 0x690)) << 2)
    + *(arg1 + 0x514) * 0xc8 + (*(arg1 + 0x4e4) << 3)

if (*(arg1 + 0x418) != 0)
    r12 += (((*(arg1 + 0x3f4) + 0x1f) u>> 5) + (*(arg1 + 0x384) + (*(arg1 + 0x3d4) << 2)) * 6
        + ((*(arg1 + 0x3a4) + 0x1f) u>> 5) + *(arg1 + 0x410) + *(arg1 + 0x3c0)) << 2

int32_t var_a4 = 1
int32_t var_98 = 0xffffffff
int32_t rcx_19 = 0
int32_t r8_5 = 0
int32_t var_a8 = 0
int32_t rdi_1 = *(arg1 + 0x2b0)
void* var_a0 = arg1 + 0x298
int64_t var_94 = 0
int32_t rsi_1 =
    r12 + ((((*(arg1 + 0x2b4) + 0x1f) u>> 5) + *(arg1 + 0x294) * 0x18 + *(arg1 + 0x2d0)) << 2)

if (rdi_1 != 0)
    void* rax_26 = *(arg1 + 0x2a8)
    void* r9_2 = arg1 + 0x298
    
    if (rax_26 != 0)
        r9_2 = rax_26
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1 - 1)
    int32_t rdx_13 = *r9_2
    
    if (rdx_13 != 0)
    label_141ca1278:
        int32_t rax_33 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_33)
        int32_t var_a4_1 = rax_33
        int32_t rax_34
        
        if (rax_33 == 0)
            rax_34 = 0x20
        else
            rax_34 = 0x1f - temp0_2
        
        var_94.d = r8_5 - rax_34 + 0x1f
        
        if (r8_5 - rax_34 + 0x1f s> rdi_1)
            var_94.d = rdi_1
    else
        while (true)
            int64_t rdx_14 = sx.q(rcx_19)
            r8_5 += 0x20
            rcx_19 += 1
            var_94:4.d = r8_5
            var_a8 = rcx_19
            
            if (rdx_14.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = *(r9_2 + (rdx_14 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_141ca1278
        
        var_94.d = rdi_1

int32_t rdx_15 = *(arg1 + 0x2b0)
int128_t var_48 = 0xffffffff
int32_t r15_2 = 0xffffffff << (rdx_15.b & 0x1f)
int128_t var_58 = var_a8.o
int32_t r8_8 = rdx_15 s>> 5
int32_t r9_4 = rdx_15 & 0xffffffe0
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_2 = r15_2
var_94.d = rdx_15
int128_t var_88 = (arg1 + 0x288).o
int128_t var_78 = var_58

if (rdx_15 != rdi_1)
    void* rax_36 = *(arg1 + 0x2a8)
    void* r10_1 = arg1 + 0x298
    
    if (rax_36 != 0)
        r10_1 = rax_36
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi_1 - 1)
    int32_t rdx_19 = *(r10_1 + (sx.q(r8_8) << 2)) & r15_2
    
    if (rdx_19 != 0)
    label_141ca1342:
        int32_t rax_43 = neg.d(rdx_19) & rdx_19
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_43)
        int32_t r11_1
        
        if (rax_43 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_94.d = r9_4 - r11_1 + 0x1f
        
        if (r9_4 - r11_1 + 0x1f s> rdi_1)
            var_94.d = rdi_1
    else
        while (true)
            int64_t rcx_24 = sx.q(r8_8)
            r9_4 += 0x20
            r8_8 += 1
            
            if (rcx_24.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_19 = *(r10_1 + (rcx_24 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_19 != 0)
                goto label_141ca1342
        
        var_94.d = rdi_1

while (true)
    int64_t rax_45 = sx.q(var_78:0xc.d)
    int64_t* rdx_20 = var_88.q
    
    if (rax_45.d == (var_98_2.q u>> 0x20).d && var_78.q == arg1 + 0x298 && rdx_20 == arg1 + 0x288)
        return zx.q(rcx_11 + rsi_1 + rax)
    
    void* rdx_22 = *rdx_20 + rax_45 * 0x60
    var_78:8.d &= not.d(var_88:0xc.d)
    rsi_1 += (((*(rdx_22 + 0x34) + 0x1f) u>> 5) + (*(rdx_22 + 0x14) << 2) + *(rdx_22 + 0x50)) << 2
    sub_14059bdd0(&var_88:8)
