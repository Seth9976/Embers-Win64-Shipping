// 函数: sub_140ce6520
// 地址: 0x140ce6520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t rax_1 = (*(*arg1 + 0x18))()
int32_t rbx = arg1[0x1e].d
int32_t var_94 = 1
int32_t rcx = 0
int32_t var_98 = 0
void* var_90 = &arg1[0x1b]
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rbx != 0)
    void* rax_2 = arg1[0x1d]
    void* r9_1 = &arg1[0x1b]
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140ce65d8:
        int32_t rax_9 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_94_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140ce65d8
        
        var_84.d = rbx

int32_t rdx_4 = arg1[0x1e].d
int128_t var_38 = 0xffffffff
int32_t r15 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r15
var_84.d = rdx_4
int128_t var_78 = (&arg1[0x19]).o
int96_t var_68 = var_48:8.12

if (rdx_4 != rbx)
    void* rax_12 = arg1[0x1d]
    void* r10_1 = &arg1[0x1b]
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rcx_5 = *(r10_1 + (sx.q(r8_3) << 2)) & r15
    
    if (rcx_5 != 0)
    label_140ce66a2:
        int32_t rax_18 = neg.d(rcx_5) & rcx_5
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                break
            
            rcx_5 = *(r10_1 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rcx_5 != 0)
                goto label_140ce66a2
        
        var_84.d = rbx

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rdx_9 = var_78.q
    
    if (rax_20.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg1[0x1b] && rdx_9 == &arg1[0x19])
        sub_140865470(&arg1[0x19], 0)
        return zx.q(rdi)
    
    int64_t* rbx_1 = *rdx_9 + rax_20 * 0x18
    sub_140cea290()
    char rax_22 = sub_140cc1670(rbx_1, &data_143e1b8c0)
    void* rax_23
    
    if (rax_22 != 0)
        rax_23 = *rbx_1
    
    if (rax_22 == 0 || rax_23 == 0)
        sub_140d11730()
        
        if (sub_140cc1670(rbx_1, &data_143e1bb10) != 0)
            void* rax_25 = *rbx_1
            
            if (rax_25 != 0 && *(rax_25 + 0x78) == rax_1)
                *(rax_25 + 0x78) = arg2
                rdi += 1
    else
        if (*(rax_23 + 0x78) == rax_1)
            *(rax_23 + 0x78) = arg2
            rdi += 1
        
        int64_t rdx_10 = *(*(rax_23 + 8) + 0x10)
        
        if (((rdx_10 u>> 0xa).b & 1) == 0)
            if (((rdx_10 u>> 0x21).b & 1) != 0 && *(rax_23 + 0x80) == rax_1)
                *(rax_23 + 0x80) = arg2
                rdi += 1
        else if (*(rax_23 + 0x80) == rax_1)
            *(rax_23 + 0x80) = arg2
            rdi += 1
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
