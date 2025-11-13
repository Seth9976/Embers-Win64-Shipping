// 函数: sub_140e79540
// 地址: 0x140e79540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[2].b
int64_t r13
r13.b = 0
arg1[2].b = 1
int64_t* i = *arg1

for (void* rdi_2 = &i[sx.q(arg1[1].d) * 2]; i != rdi_2; i = &i[2])
    int64_t rdx = *i
    
    if (rdx != 0 && (*arg2)(*(arg2 + 8), rdx) != 0)
        r13.b = 1
        break

int64_t* arg_18 = arg1
sub_140e493c0(arg1, &arg_18)
sub_140e86360(&arg1[3], 0)
int32_t rcx_3 = 0
int32_t var_a4 = 1
int32_t var_a8 = 0
int32_t r11 = arg1[0xa].d
void* var_a0 = &arg1[7]
int32_t r8 = 0
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r11 != 0)
    void* rax_2 = arg1[9]
    void* r9_1 = &arg1[7]
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_140e79648:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_a4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_94.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_3)
            r8 += 0x20
            rcx_3 += 1
            var_94:4.d = r8
            var_a8 = rcx_3
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140e79648
        
        var_94.d = r11

int32_t rdx_6 = arg1[0xa].d
double zmm2[0x2] = var_98.o
double var_48[0x2] = zmm2
int32_t r12 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_58 = var_a8.o
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_98_1 = r12
var_94.d = rdx_6
int128_t var_88 = (&arg1[5]).o
int128_t var_78 = var_58

if (rdx_6 != r11)
    void* rax_12 = arg1[9]
    void* r10_1 = &arg1[7]
    
    if (rax_12 != 0)
        r10_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_10 != 0)
    label_140e79712:
        int32_t rax_19 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rbx
        
        if (rax_19 == 0)
            rbx = 0x20
        else
            rbx = 0x1f - temp0_4
        
        var_94.d = r9_3 - rbx + 0x1f
        
        if (r9_3 - rbx + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_8 << 2) + 4)
            var_98_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_140e79712
        
        var_94.d = r11

while (true)
    int64_t rax_21 = sx.q(var_78:0xc.d)
    int64_t rcx_10 = var_88.q
    
    if (rax_21.d == (var_98_1.q u>> 0x20).d && var_78.q == &arg1[7] && rcx_10 == &arg1[5])
        sub_140e866e0(&arg1[5])
        arg1[2].b = rax
        return zx.q(r13.b)
    
    int64_t* rax_23 = (rax_21 << 5) + *rcx_10
    var_a8.q = *rax_23
    void* rcx_12 = rax_23[1]
    void* var_a0_1 = rcx_12
    
    if (rcx_12 != 0)
        *(rcx_12 + 8) += 1
    
    sub_140e59140(arg1, &var_a8, zx.q(rax_23[2].d))
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
