// 函数: sub_14276e510
// 地址: 0x14276e510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x10)

if (rax == *(arg1 + 0x3c))
    return zx.q(rax - *(arg1 + 0x3c))

void* r10 = arg1 + 8
int32_t rcx = 0
int32_t rdi = *(r10 + 0x28)
int32_t r8 = 0
void* r12 = r10 + 0x10
int32_t var_98 = 0
int32_t var_94 = 1
void* var_90 = r12
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rdi != 0)
    void* rax_2 = *(r12 + 0x10)
    void* r9_1 = r12
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_14276e5e8:
        int32_t rax_9 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_94_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_1
        
        var_84.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> rdi)
            var_84.d = rdi
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_3.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14276e5e8
        
        var_84.d = rdi
    
    r10 = arg1 + 8

int32_t rdx_4 = *(r10 + 0x28)
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int32_t var_88_2 = r14
var_84.d = rdx_4
int128_t var_78 = r10.o
int96_t var_68 = var_48:8.12

if (rdx_4 != rdi)
    void* rax_12 = *(r12 + 0x10)
    void* r10_1 = r12
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(rdi - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_8 != 0)
    label_14276e6b4:
        int32_t rax_19 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t r11_1
        
        if (rax_19 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_3
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi)
            var_84.d = rdi
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_14276e6b4
        
        var_84.d = rdi
    
    r10 = arg1 + 8

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t result = var_78.q
    
    if (rcx_7.d == (var_88_2.q u>> 0x20).d && var_68.q == r12 && result == r10)
        result.b = 1
        return result
    
    int16_t* rsi_3 = (rcx_7 << 5) + *result
    int16_t r14_1 = rsi_3[8]
    
    if (r14_1 != 0)
        uint32_t rcx_8 = zx.d(rsi_3[2].b)
        int64_t rdi_1
        
        if (rcx_8 == 0)
            int64_t* rcx_11 = *(arg2 + 8)
            rdi_1 = sx.q(rcx_11[1].d)
            int32_t rax_24 = (rdi_1 + 8).d
            rcx_11[1].d = rax_24
            void* (* rax_23)(void* arg1)
            int64_t rcx_10
            
            if (*(arg1 + 6) == 0)
                if (rax_24 s> *(rcx_11 + 0xc))
                    sub_1405daba0(rcx_11)
                
                rcx_10 = **(arg2 + 8)
                rax_23 = sub_14274cc80
            else
                if (rax_24 s> *(rcx_11 + 0xc))
                    sub_1405daba0(rcx_11)
                
                rcx_10 = **(arg2 + 8)
                rax_23 = sub_14274a670
            
            *(rdi_1 + rcx_10) = rax_23
        else if (rcx_8 == 1)
            int64_t* rcx_9 = *(arg2 + 8)
            rdi_1 = sx.q(rcx_9[1].d)
            int32_t rax_21 = (rdi_1 + 8).d
            rcx_9[1].d = rax_21
            
            if (rax_21 s> *(rcx_9 + 0xc))
                sub_1405daba0(rcx_9)
            
            *(rdi_1 + **(arg2 + 8)) = sub_14274a520
        int64_t* rcx_12 = *(arg2 + 8)
        int64_t rdi_2 = sx.q(rcx_12[1].d)
        int32_t rax_27 = (rdi_2 + 2).d
        rcx_12[1].d = rax_27
        
        if (rax_27 s> *(rcx_12 + 0xc))
            sub_1405daba0(rcx_12)
        
        *(rdi_2 + **(arg2 + 8)) = rsi_3[1]
        int64_t* rcx_14 = *(arg2 + 8)
        int64_t rdi_3 = sx.q(rcx_14[1].d)
        int32_t rax_30 = (rdi_3 + 2).d
        rcx_14[1].d = rax_30
        
        if (rax_30 s> *(rcx_14 + 0xc))
            sub_1405daba0(rcx_14)
        
        *(rdi_3 + **(arg2 + 8)) = *rsi_3
        int64_t* rcx_16 = *(arg2 + 8)
        int64_t rdi_4 = sx.q(rcx_16[1].d)
        int32_t rax_33 = (rdi_4 + 2).d
        rcx_16[1].d = rax_33
        
        if (rax_33 s> *(rcx_16 + 0xc))
            sub_1405daba0(rcx_16)
        
        *(rdi_4 + **(arg2 + 8)) = r14_1
        int16_t* rdi_5 = *(rsi_3 + 8)
        void* r14_2 = &rdi_5[sx.q(*(rsi_3 + 0x10)) * 2]
        
        while (rdi_5 != r14_2)
            int64_t* rcx_18 = *(arg2 + 8)
            int64_t rsi_4 = sx.q(rcx_18[1].d)
            int32_t rax_36 = (rsi_4 + 2).d
            rcx_18[1].d = rax_36
            
            if (rax_36 s> *(rcx_18 + 0xc))
                sub_1405daba0(rcx_18)
            
            *(rsi_4 + **(arg2 + 8)) = *rdi_5
            int64_t* rcx_20 = *(arg2 + 8)
            int64_t rsi_5 = sx.q(rcx_20[1].d)
            int32_t rax_39 = (rsi_5 + 2).d
            rcx_20[1].d = rax_39
            
            if (rax_39 s> *(rcx_20 + 0xc))
                sub_1405daba0(rcx_20)
            
            int16_t rax_41 = rdi_5[1]
            rdi_5 = &rdi_5[2]
            *(rsi_5 + **(arg2 + 8)) = rax_41
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
    r10 = arg1 + 8
