// 函数: sub_142662b80
// 地址: 0x142662b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg2 + 0x28)
int32_t r9 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0
int32_t r8 = 0

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
    label_142662c2a:
        int32_t rax_8 = neg.d(rcx) & rcx
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
            int64_t rcx_1 = sx.q(r9)
            r8 += 0x20
            r9 += 1
            var_84:4.d = r8
            var_98 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_142662c2a
        
        var_84.d = rbx

int32_t rdx_2 = *(arg2 + 0x28)
var_84.d = rdx_2
int128_t var_38 = 0xffffffff
int128_t var_48 = var_98.o
int32_t r12 = 0xffffffff << (rdx_2 & 0x1f).b
int32_t r8_3 = rdx_2 s>> 5
int32_t r9_2 = rdx_2 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
int128_t var_78 = arg2.o
int96_t var_68 = var_48:8.12

if (rdx_2 != rbx)
    void* rax_13 = *(arg2 + 0x20)
    void* r10_2 = arg2 + 0x10
    
    if (rax_13 != 0)
        r10_2 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_6 != 0)
    label_142662d05:
        int32_t rax_19 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t r11_1
        
        if (rax_19 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_2 - r11_1 + 0x1f
        
        if (r9_2 - r11_1 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_5 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_142662d05
        
        var_84.d = rbx

int64_t r9_4

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t* rdx_7 = var_78.q
    int32_t rax_12
    
    if (rcx_7.d != (var_88_2.q u>> 0x20).d || var_68.q != arg2 + 0x10 || rdx_7 != arg2)
        rax_12.b = 1
    else
        rax_12.b = 0
    
    r9_4 = *arg1
    
    if (rax_12.b == 0)
        break
    
    (*(r9_4 + 0x738))(arg1, *(*rdx_7 + rcx_7 * 0x10), zx.q(arg3), r9_4, var_98, arg2 + 0x10, 
        var_88_2)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)

jump(*(r9_4 + 0x748))
