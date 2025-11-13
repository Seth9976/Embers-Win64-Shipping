// 函数: sub_141fbf5b0
// 地址: 0x141fbf5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xe28) == 0 || *(arg1 + 0xac0) == *(arg1 + 0xaec))
    return 

int32_t r8_1 = 0
int32_t rdi_1 = *(arg1 + 0xae0)
int32_t var_a4_1 = 1
int32_t rcx = 0
int32_t var_a8_1 = 0
void* var_a0_1 = arg1 + 0xac8
int32_t var_98_1 = 0xffffffff
int64_t var_94_1 = 0

if (rdi_1 != 0)
    void* rax_1 = *(arg1 + 0xad8)
    void* r9_1 = arg1 + 0xac8
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi_1 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141fbf688:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94_1.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> rdi_1)
            var_94_1.d = rdi_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8_1 += 0x20
            rcx += 1
            var_94_1:4.d = r8_1
            var_a8_1 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_98_2 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141fbf688
        
        var_94_1.d = rdi_1

int32_t rdx_5 = *(arg1 + 0xae0)
int128_t var_48_1 = 0xffffffff
int32_t r12_1 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_58_1 = var_a8_1.o
int32_t r8_4 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_68_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_3 = r12_1
var_94_1.d = rdx_5
int128_t var_88 = (arg1 + 0xab8).o
int128_t var_78_1 = var_58_1

if (rdx_5 != rdi_1)
    void* rax_11 = *(arg1 + 0xad8)
    void* r10_1 = arg1 + 0xac8
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi_1 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
    
    if (rdx_9 != 0)
    label_141fbf752:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_94_1.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi_1)
            var_94_1.d = rdi_1
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_5 << 2) + 4)
            var_98_3 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141fbf752
        
        var_94_1.d = rdi_1

while (true)
    int64_t rcx_7 = sx.q(var_78_1:0xc.d)
    int64_t rax_20 = var_88.q
    
    if (rcx_7.d == (var_98_3.q u>> 0x20).d && var_78_1.q == arg1 + 0xac8 && rax_20 == arg1 + 0xab8)
        break
    
    int64_t rax_21 = sub_140d3c6e0((rcx_7 << 4) + *rax_20)
    int64_t arg_18 = rax_21
    void arg_8
    int32_t arg_10
    
    if (rax_21 != 0 && *sub_1408296b0(arg1 + 0xe30, &arg_8, rax_21) == 0xffffffff)
        sub_140b91690(arg1 + 0xe30, &arg_10, &arg_18, nullptr)
    var_78_1:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)

int512_t zmm1_1 = sub_141fb06f0(arg1 + 0xab8, 0)

if (*(arg1 + 0xe38) == *(arg1 + 0xe64) || 0f f== *(arg1 + 0xe20)
        || sub_141fba550(arg1, &data_143f3d668).b != 0
        || sub_141fba550(arg1, &data_143f3d670).b != 0)
    return 

void*** rax_25 = j_sub_140a82f30(0x50)
void*** rdi_2 = rax_25

if (rax_25 == 0)
    rdi_2 = nullptr
else
    rax_25[1] = 0
    rax_25[2] = 0
    *rdi_2 = &data_14328e970
    zmm1_1 = sub_140d3a3a0(&rdi_2[3], arg1)
    rdi_2[4].d = 0
    *rdi_2 = &data_14328f150
    *(rdi_2 + 0x24) = 0
    rdi_2[9].b = 0

sub_141fa9990(arg1, rdi_2, zmm1_1)
