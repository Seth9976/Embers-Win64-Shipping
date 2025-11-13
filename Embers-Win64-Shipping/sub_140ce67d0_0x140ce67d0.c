// 函数: sub_140ce67d0
// 地址: 0x140ce67d0
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
    label_140ce6889:
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
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_84.d = rbx
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
                goto label_140ce6889
        
        var_84.d = rbx

int32_t rdx_3 = arg1[0x1e].d
var_84.d = rdx_3
int32_t rsi = 0xffffffff << (rdx_3.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_3 s>> 5
int32_t rcx_5 = rdx_3 & 0xffffffe0
int32_t var_88_2 = rsi
int128_t var_38 = 0xffffffff
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = (&arg1[0x19]).o
int96_t var_68 = var_48:8.12

if (rdx_3 != rbx)
    void* rax_11 = arg1[0x1d]
    void* r9_2 = &arg1[0x1b]
    
    if (rax_11 != 0)
        r9_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_7 = *(r9_2 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_7 != 0)
    label_140ce6952:
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
        
        if (rcx_5 - r11_1 + 0x1f s> rbx)
            var_84.d = rbx
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
                goto label_140ce6952
        
        var_84.d = rbx

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rdx_9 = var_78.q
    
    if (rax_20.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg1[0x1b] && rdx_9 == &arg1[0x19])
        sub_140865470(&arg1[0x19], 0)
        return zx.q(rdi)
    
    int64_t* rbx_1 = *rdx_9 + rax_20 * 0x18
    sub_140d11260()
    char rax_22 = sub_140cc1670(rbx_1, &data_143e1bac0)
    void* rax_23
    
    if (rax_22 != 0)
        rax_23 = *rbx_1
    
    if (rax_22 != 0 && rax_23 != 0)
    label_140ce69da:
        
        if (*(rax_23 + 0x78) == rax_1)
            rdi += 1
            *(rax_23 + 0x78) = arg2
    else
        sub_140d11940()
        
        if (sub_140cc1670(rbx_1, &data_143e1bc00) != 0)
            rax_23 = *rbx_1
            
            if (rax_23 != 0)
                goto label_140ce69da
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
