// 函数: sub_140ce6a30
// 地址: 0x140ce6a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int32_t rsi = 0
int64_t rax_1 = (*(*arg1 + 0x18))()
int32_t var_94 = 1
int32_t r14 = arg1[0x28].d
int32_t rcx = 0
int32_t var_98 = 0
int32_t r8 = 0
void* var_90 = &arg1[0x25]
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r14 != 0)
    void* rax_2 = arg1[0x27]
    void* r9_1 = &arg1[0x25]
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r14 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140ce6af9:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r14)
            var_84.d = r14
    else
        while (true)
            int64_t rax_5 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rax_5.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rax_5 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140ce6af9
        
        var_84.d = r14

int32_t rdx_3 = arg1[0x28].d
var_84.d = rdx_3
int32_t r12 = 0xffffffff << (rdx_3.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_3 s>> 5
int32_t rcx_5 = rdx_3 & 0xffffffe0
int32_t var_88_2 = r12
int128_t var_38 = 0xffffffff
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = (&arg1[0x23]).o
int96_t var_68 = var_48:8.12

if (rdx_3 != r14)
    void* rax_11 = arg1[0x27]
    void* r9_2 = &arg1[0x25]
    
    if (rax_11 != 0)
        r9_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r14 - 1)
    int32_t rdx_7 = *(r9_2 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_7 != 0)
    label_140ce6bc4:
        int32_t rax_18 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = rcx_5 - r11_1 + 0x1f
        
        if (rcx_5 - r11_1 + 0x1f s> r14)
            var_84.d = r14
    else
        while (true)
            int64_t rax_15 = sx.q(r8_3)
            rcx_5 += 0x20
            r8_3 += 1
            
            if (rax_15.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_7 = *(r9_2 + (rax_15 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_140ce6bc4
        
        var_84.d = r14

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t* rax_20 = var_78.q
    
    if (rcx_7.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg1[0x25] && rax_20 == &arg1[0x23])
        arg1[0x24].d = 0
        
        if (*(arg1 + 0x124) != 0)
            sub_1405a5410(&arg1[0x23], 0)
        
        arg1[0x29].d = 0xffffffff
        *(arg1 + 0x14c) = 0
        sub_14059a8e0(&arg1[0x25], 0)
        int32_t i_2 = arg1[0x2c].d
        
        if (i_2 s> 0)
            uint64_t i_1 = zx.q(i_2)
            uint64_t i
            
            do
                void* rdx_10 = arg1[0x2b]
                void* rcx_12 = &arg1[0x2a]
                int64_t r8_6 = (sx.q(arg1[0x2c].d) - 1) & rdi
                
                if (rdx_10 != 0)
                    rcx_12 = rdx_10
                
                rdi += 1
                *(rcx_12 + (r8_6 << 2)) = 0xffffffff
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        return zx.q(rsi)
    
    int64_t* rdx_9 = *(*rax_20 + rcx_7 * 0x10)
    
    if (*rdx_9 == rax_1)
        *rdx_9 = arg2
        rsi += 1
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
