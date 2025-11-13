// 函数: sub_141ceb9d0
// 地址: 0x141ceb9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 && arg3 != 0)
    return 

void* var_98
sub_14090aa40(arg1 + 0x1a8, &var_98, data_143f360f8)
void* var_90
sub_14090aa40(arg1 + 0x1a8, &var_90, data_143f36100)
void* var_88
sub_14099aef0(arg1 + 0x1a8, &var_88, data_143f36108)
int32_t rcx_3 = 0
int32_t var_b4_1 = 1
void* r10_1 = arg1 + 0x38
int32_t var_b8_1 = 0
int32_t r11_1 = *(r10_1 + 0x28)
void* r9_1 = r10_1 + 0x10
int32_t r8_3 = 0
void* arg_20 = r10_1
void* var_b0_1 = r9_1
int32_t var_a8_1 = 0xffffffff
int64_t var_a4_1 = 0

if (r11_1 != 0)
    void* rax_1 = *(r9_1 + 0x10)
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_141cebae8:
        int32_t rax_7 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_b4_2 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_a4_1.d = r8_3 - rax_8 + 0x1f
        
        if (r8_3 - rax_8 + 0x1f s> r11_1)
            var_a4_1.d = r11_1
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_3)
            r8_3 += 0x20
            rcx_3 += 1
            var_a4_1:4.d = r8_3
            var_b8_1 = rcx_3
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_a8_2 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141cebae8
        
        var_a4_1.d = r11_1

int32_t rdx_7 = *(r10_1 + 0x28)
void* r15_1 = r10_1 + 0x10
int32_t rdi_1 = *(r15_1 + 0x18)
int128_t var_40_1 = 0xffffffff
uint128_t var_50_1 = var_b8_1.o
int32_t rsi_1 = 0xffffffff << (rdx_7.b & 0x1f)
int32_t r8_6 = rdx_7 s>> 5
int32_t r9_3 = rdx_7 & 0xffffffe0
int64_t var_60_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_a8_3 = rsi_1
var_a4_1.d = rdx_7
uint128_t var_80 = r10_1.o
uint128_t var_70_1 = var_50_1

if (rdx_7 != rdi_1)
    void* rax_9 = *(r15_1 + 0x10)
    void* r10_2 = r15_1
    
    if (rax_9 != 0)
        r10_2 = rax_9
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi_1 - 1)
    int32_t rdx_11 = *(r10_2 + (sx.q(r8_6) << 2)) & rsi_1
    
    if (rdx_11 != 0)
    label_141cebbb2:
        int32_t rax_15 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_15)
        int32_t rbx_1
        
        if (rax_15 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_a4_1.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> rdi_1)
            var_a4_1.d = rdi_1
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_6)
            r9_3 += 0x20
            r8_6 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_2 + (rcx_8 << 2) + 4)
            var_a8_3 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141cebbb2
        
        var_a4_1.d = rdi_1
    
    r10_1 = arg_20

void* rbx_2 = var_98
void* rdi_2 = var_90
void* rsi_2 = var_88

while (true)
    int32_t rcx_10 = var_70_1:0xc.d
    int64_t rdx_12 = var_70_1.q
    
    if (rcx_10 == (var_a8_3.q u>> 0x20).d && rdx_12 == r15_1 && var_80.q == r10_1)
        break
    
    int32_t rax_16 = data_143a1c6b8
    
    if (rcx_10 s< *(rdx_12 + 0x18))
        rax_16 = rcx_10
    
    int64_t r8_7 = sx.q(rax_16)
    
    if (arg2 != 0)
        int64_t rdx_13 = r8_7 * 3
        int64_t rcx_11 = **(rbx_2 + 0x18)
        *(rcx_11 + (rdx_13 << 2)) = data_143dbb1f8.q
        *(rcx_11 + (rdx_13 << 2) + 8) = data_143dbb200
    
    if (arg3 != 0)
        int64_t rdx_14 = r8_7 * 3
        int64_t* rax_20 = *(rdi_2 + 0x18)
        *(**(rsi_2 + 0x18) + (r8_7 << 2)) = 0
        int64_t rcx_13 = *rax_20
        *(rcx_13 + (rdx_14 << 2)) = data_143dbb1f8.q
        *(rcx_13 + (rdx_14 << 2) + 8) = data_143dbb200
    
    var_70_1:8.d &= not.d(var_80:0xc.d)
    sub_14059bdd0(&var_80:8)
    r10_1 = arg_20
