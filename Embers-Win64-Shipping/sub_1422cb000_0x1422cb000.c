// 函数: sub_1422cb000
// 地址: 0x1422cb000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
void* r14_1 = arg2[1] + 0xa8
int32_t rbx = *(r14_1 + 0x28)
int32_t var_98 = 0
int64_t rsi
rsi.b = 0
int32_t var_94 = 1
int32_t* r13 = *(*arg2 + 0x68)
int32_t rcx = 0
void* var_90 = r14_1 + 0x10
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int32_t var_80 = 0

if (rbx != 0)
    void* rax_1 = *(r14_1 + 0x20)
    void* r9_1 = r14_1 + 0x10
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9_1
    int32_t var_84_2
    
    if (rdx_2 != 0)
    label_1422cb0c9:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_94_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        int32_t var_84_1 = rcx - rax_8 + 0x1f
        
        if (rcx - rax_8 + 0x1f s> rbx)
            var_84_2 = rbx
    else
        while (true)
            int64_t rax_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_80_1 = rcx
            var_98 = r8
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rax_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1422cb0c9
        
        var_84_2 = rbx

int32_t rdx_4 = *(r14_1 + 0x28)
int32_t var_84_3 = rdx_4
int32_t r15 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_4 s>> 5
int32_t rcx_5 = rdx_4 & 0xffffffe0
int32_t var_88_2 = r15
int128_t var_38 = 0xffffffff
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = r14_1.o
int96_t var_68 = var_48:8.12

if (rdx_4 != rbx)
    void* rax_10 = *(r14_1 + 0x20)
    void* r9_2 = r14_1 + 0x10
    
    if (rax_10 != 0)
        r9_2 = rax_10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_8 = *(r9_2 + (sx.q(r8_2) << 2)) & r15
    int32_t var_84_5
    
    if (rdx_8 != 0)
    label_1422cb192:
        int32_t rax_17 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
        int32_t r11_1
        
        if (rax_17 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_84_4 = rcx_5 - r11_1 + 0x1f
        
        if (rcx_5 - r11_1 + 0x1f s> rbx)
            var_84_5 = rbx
    else
        while (true)
            int64_t rax_14 = sx.q(r8_2)
            rcx_5 += 0x20
            r8_2 += 1
            
            if (rax_14.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rdx_8 = *(r9_2 + (rax_14 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1422cb192
        
        var_84_5 = rbx

while (true)
    int32_t var_5c
    int64_t rax_19 = sx.q(var_5c)
    int64_t* rdx_10 = var_78.q
    
    if (rax_19.d == (var_88_2.q u>> 0x20).d && var_68.q == r14_1 + 0x10 && rdx_10 == r14_1)
        return zx.q(rsi.b)
    
    rsi.b |= sub_1422cb230(arg1, *rdx_10 + 8 + rax_19 * 0x60, r13)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
