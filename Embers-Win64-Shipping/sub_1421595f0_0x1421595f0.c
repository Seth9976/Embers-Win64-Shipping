// 函数: sub_1421595f0
// 地址: 0x1421595f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1].d
int32_t rbx_3 = *(arg2 + 8) - *(arg2 + 0x34) - *(arg1 + 0x34) + r8

if (rbx_3 s> r8 - *(arg1 + 0x34))
    sub_1407c2fa0(arg1, rbx_3)
    int32_t rdx_2
    
    if (rbx_3 u< 4)
        rdx_2 = 1
    else
        uint32_t rbx_4 = rbx_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_4 + 8)
        int32_t rcx
        
        if (rbx_4 == 0xfffffff8)
            rcx = 0x20
        else
            rcx = 0x1f - temp0_2
        
        int32_t rcx_2 = rcx << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_4 + 7)
        char rdx_1
        
        if (rcx_2 == 0)
            rdx_1 = 0x20
        else
            rdx_1 = 0x1f - temp0_3
        
        rdx_2 = 1 << ((not.d(rcx_2)).b & (0x20 - rdx_1))
    
    int32_t rax_4 = arg1[9].d
    
    if (rax_4 == 0 || rax_4 s< rdx_2)
        arg1[9].d = rdx_2
        sub_140771f10(arg1)

int32_t r11 = *(arg2 + 0x28)
int32_t rcx_6 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r8_3 = 0
void* var_90 = arg2 + 0x10
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_5 = *(arg2 + 0x20)
    void* r9_1 = arg2 + 0x10
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_142159718:
        int32_t rax_12 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_12)
        int32_t var_94_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_4
        
        var_84.d = r8_3 - rax_13 + 0x1f
        
        if (r8_3 - rax_13 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_6)
            r8_3 += 0x20
            rcx_6 += 1
            var_84:4.d = r8_3
            var_98 = rcx_6
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_142159718
        
        var_84.d = r11

int32_t rdx_7 = *(arg2 + 0x28)
int128_t var_38 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_7.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_6 = rdx_7 s>> 5
int32_t r9_3 = rdx_7 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r12
var_84.d = rdx_7
int128_t var_78 = arg2.o
int96_t var_68 = var_48:8.12

if (rdx_7 != r11)
    void* rax_15 = *(arg2 + 0x20)
    void* r10_1 = arg2 + 0x10
    
    if (rax_15 != 0)
        r10_1 = rax_15
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_6) << 2)) & r12
    
    if (rdx_11 != 0)
    label_1421597f2:
        int32_t rax_22 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_4
        int32_t temp0_6
        temp0_6, rflags_4 = _bit_scan_reverse(rax_22)
        int32_t r14_1
        
        if (rax_22 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_6
        
        var_84.d = r9_3 - r14_1 + 0x1f
        
        if (r9_3 - r14_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_11 = sx.q(r8_6)
            r9_3 += 0x20
            r8_6 += 1
            
            if (rcx_11.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_11 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_1421597f2
        
        var_84.d = r11

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t* rdx_12 = var_78.q
    
    if (result.d == (var_88_2.q u>> 0x20).d && var_68.q == arg2 + 0x10 && rdx_12 == arg2)
        return result
    
    int32_t arg_8
    sub_141f77ab0(arg1, &arg_8, *rdx_12 + result * 0xc, nullptr)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
