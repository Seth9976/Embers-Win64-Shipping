// 函数: sub_141cebcc0
// 地址: 0x141cebcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t rdx = data_143f36130
void** const var_70 = &data_142e3fa48
sub_14099c9d0(arg1 + 0x2b0, rdx, 1, &data_143dbb1f8, 8)
sub_14099c9d0(arg1 + 0x2b0, data_143f36138, 1, &data_143dbb1f8, 8)
sub_14099c9d0(arg1 + 0x2b0, data_143f36140, 1, &data_143dbb1f8, 8)
sub_14099c9d0(arg1 + 0x2b0, data_143f36148, 1, &data_143dbb1f8, 8)
int32_t rdx_5 = *(arg1 + 0xe8) - *(arg1 + 0x114)
int32_t rbx = 0
int64_t var_c8 = 0
int32_t rdi = 0
int64_t var_c0 = 0

if (rdx_5 s> 0)
    sub_1405dadb0(&var_c8, rdx_5)
    rdi = var_c0.d

int32_t r10 = *(arg1 + 0x108)
void* r8 = arg1 + 0xf0
int32_t var_b8 = 0
int32_t rcx_8 = 0
int32_t var_b4 = 1
void* var_b0 = r8
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (r10 != 0)
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_8 = *r8
    
    if (rdx_8 != 0)
    label_141cebe46:
        int32_t rax_8 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = rcx_8 - rax_9 + 0x1f
        
        if (rcx_8 - rax_9 + 0x1f s> r10)
            var_a4.d = r10
    else
        while (true)
            int64_t rdx_9 = sx.q(rbx)
            rcx_8 += 0x20
            rbx += 1
            var_a4:4.d = rcx_8
            var_b8 = rbx
            
            if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r8 + (rdx_9 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141cebe46
        
        var_a4.d = r10

int32_t rdx_11 = *(arg1 + 0x108)
double zmm2[0x2] = var_a8.o
int32_t rsi = *(arg1 + 0x108)
double var_48[0x2] = zmm2
int128_t var_58 = var_b8.o
int32_t r12 = 0xffffffff << (rdx_11.b & 0x1f)
int32_t r8_2 = rdx_11 s>> 5
int32_t r9_1 = rdx_11 & 0xffffffe0
int64_t var_78 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_a8_1 = r12
var_a4.d = rdx_11
int128_t var_98 = (arg1 + 0xe0).o
int128_t var_88 = var_58

if (rdx_11 != rsi)
    void* rax_11 = *(arg1 + 0x100)
    void* r10_1 = arg1 + 0xf0
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rsi - 1)
    int32_t rdx_15 = *(r10_1 + (sx.q(r8_2) << 2)) & r12
    
    if (rdx_15 != 0)
    label_141cebf22:
        int32_t rax_18 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_a4.d = r9_1 - r11_1 + 0x1f
        
        if (r9_1 - r11_1 + 0x1f s> rsi)
            var_a4.d = rsi
    else
        while (true)
            int64_t rcx_13 = sx.q(r8_2)
            r9_1 += 0x20
            r8_2 += 1
            
            if (rcx_13.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_15 = *(r10_1 + (rcx_13 << 2) + 4)
            var_a8_1 = 0xffffffff
            
            if (rdx_15 != 0)
                goto label_141cebf22
        
        var_a4.d = rsi

while (true)
    int32_t rax_20 = var_88:0xc.d
    int64_t rcx_15 = var_88.q
    
    if (rax_20 == (var_a8_1.q u>> 0x20).d && rcx_15 == arg1 + 0xf0 && var_98.q == arg1 + 0xe0)
        int32_t arg_8 = 0x2000
        int32_t temp4
        int32_t temp5
        temp4:temp5 = sx.q(rdi)
        var_88:8.q = arg1
        var_98.q = &var_c8
        var_98:8.q = &arg_8
        var_88.q = &arg_10
        void** const* var_78_1 = &var_70
        var_b8.q = sub_141ceb9c0
        int128_t* var_b0_1 = &var_98
        int64_t result = sub_14077b750(((temp5 + (temp4 & 0x1fff)) s>> 0xd) + 1, &var_b8, 0)
        int64_t rcx_20 = var_c8
        
        if (rcx_20 == 0)
            return result
        
        return sub_140a74f90(rcx_20)
    
    int32_t rbx_1 = data_143a1c6c8
    
    if (rax_20 s< *(rcx_15 + 0x18))
        rbx_1 = rax_20
    
    var_c0.d = rdi + 1
    
    if (rdi + 1 s> var_c0:4.d)
        sub_1405a4cf0(&var_c8)
    
    *(var_c8 + (sx.q(rdi) << 2)) = rbx_1
    var_88:8.d &= not.d(var_98:0xc.d)
    sub_14059bdd0(&var_98:8)
    rdi = var_c0.d
