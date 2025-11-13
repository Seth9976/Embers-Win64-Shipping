// 函数: sub_1415121b0
// 地址: 0x1415121b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t var_b4 = 1
int32_t var_b8 = 0
int32_t r11 = *(arg1 + 0x120)
void* var_b0 = arg1 + 0x108
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = *(arg1 + 0x118)
    void* r10_1 = arg1 + 0x108
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_14151226a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r9)
            r8 += 0x20
            r9 += 1
            var_a4:4.d = r8
            var_b8 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rcx != 0)
                goto label_14151226a
        
        var_a4.d = r11

int32_t rdx_2 = *(arg1 + 0x120)
double zmm2[0x2] = var_a8.o
double var_50[0x2] = zmm2
int32_t r15 = 0xffffffff << (rdx_2.b & 0x1f)
int128_t var_60 = var_b8.o
int32_t r8_3 = rdx_2 s>> 5
int32_t r9_2 = rdx_2 & 0xffffffe0
int64_t var_78 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_a8_1 = r15
var_a4.d = rdx_2
int128_t var_98 = (arg1 + 0xf8).o
uint128_t var_58
uint128_t var_88 = var_58

if (rdx_2 != r11)
    void* rax_11 = *(arg1 + 0x118)
    void* r10_2 = arg1 + 0x108
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_3) << 2)) & r15
    
    if (rdx_6 != 0)
    label_141512332:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_a4.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
            var_a8_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141512332
        
        var_a4.d = r11

while (true)
    int64_t result = sx.q(var_88:0xc.d)
    int64_t* rdx_7 = var_98.q
    
    if (result.d == (var_a8_1.q u>> 0x20).d && var_88.q == arg1 + 0x108 && rdx_7 == arg1 + 0xf8)
        return result
    
    var_b8.o = zx.o(0)
    sub_1415123e0(arg1, _mm_bsrli_si128(*(*rdx_7 + result * 0x48 + 0x30), 8).q, arg2, &var_b8, arg3)
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)
