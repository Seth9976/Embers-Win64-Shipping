// 函数: sub_140934930
// 地址: 0x140934930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t var_88 = 0
int32_t rdx = 0
int32_t rcx = 0
int32_t var_80 = 0
int32_t var_7c = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_88, rbx_1.d + 1)
        rcx = var_7c
        rdx = var_80
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_80 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_88)
    
    UnDecorator::getReferenceType(var_88, arg2, (rbx_1.d + 1) * 2)

sub_140939b60(arg1[1], &var_88)
int64_t rcx_5 = var_88

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int32_t r10 = *(arg3 + 0x28)
var_88.d = 0
int32_t rcx_6 = 0
var_88:4.d = 1
var_80.q = arg3 + 0x10
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int32_t var_70 = 0

if (r10 != 0)
    void* rax_2 = *(arg3 + 0x20)
    void* r8_2 = arg3 + 0x10
    
    if (rax_2 != 0)
        r8_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_6 = *r8_2
    int32_t var_74_2
    
    if (rdx_6 != 0)
    label_140934a58:
        int32_t rax_9 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        var_88:4.d = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t var_74_1 = rcx_6 - rax_10 + 0x1f
        
        if (rcx_6 - rax_10 + 0x1f s> r10)
            var_74_2 = r10
    else
        while (true)
            int64_t rdx_7 = sx.q(rdi)
            rcx_6 += 0x20
            rdi += 1
            int32_t var_70_1 = rcx_6
            var_88.d = rdi
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r8_2 + (rdx_7 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_140934a58
        
        var_74_2 = r10

int32_t rdx_9 = *(arg3 + 0x28)
double zmm2[0x2] = var_78.o
double var_28[0x2] = zmm2
int32_t r12 = 0xffffffff << (rdx_9.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_4 = rdx_9 s>> 5
int32_t r9_1 = rdx_9 & 0xffffffe0
int64_t var_48 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_78_1 = r12
int32_t var_74_3 = rdx_9
int128_t var_68 = arg3.o
int128_t var_58 = var_38

if (rdx_9 != r10)
    void* rax_12 = *(arg3 + 0x20)
    void* r10_1 = arg3 + 0x10
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_13 = *(r10_1 + (sx.q(r8_4) << 2)) & r12
    int32_t var_74_5
    
    if (rdx_13 != 0)
    label_140934b23:
        int32_t rax_19 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t r11_1
        
        if (rax_19 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        int32_t var_74_4 = r9_1 - r11_1 + 0x1f
        
        if (r9_1 - r11_1 + 0x1f s> r10)
            var_74_5 = r10
    else
        while (true)
            int64_t rcx_11 = sx.q(r8_4)
            r9_1 += 0x20
            r8_4 += 1
            
            if (rcx_11.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = *(r10_1 + (rcx_11 << 2) + 4)
            var_78_1 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_140934b23
        
        var_74_5 = r10

while (true)
    int64_t rax_21 = sx.q(var_58:0xc.d)
    int64_t* rdx_14 = var_68.q
    
    if (rax_21.d == (var_78_1.q u>> 0x20).d && var_58.q == arg3 + 0x10 && rdx_14 == arg3)
        return sub_1409399d0(arg1[1]) __tailcall
    
    int64_t rcx_13 = rax_21 * 5
    int64_t rax_22 = *rdx_14
    int64_t* r8_5 = rax_22 + (rcx_13 << 3)
    int16_t* const rdx_15
    
    if (*(rax_22 + (rcx_13 << 3) + 8) == 0)
        rdx_15 = &data_142d40450
    else
        rdx_15 = *r8_5
    
    (*(*arg1 + 0x60))(arg1, rdx_15, &r8_5[2])
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)
