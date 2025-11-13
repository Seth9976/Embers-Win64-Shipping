// 函数: sub_140b3a840
// 地址: 0x140b3a840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int16_t* var_98 = nullptr
int32_t rax = 0
int32_t var_8c = 0
int32_t var_90 = 0
int16_t* r15 = nullptr
int32_t r12 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_98, rbx_1.d + 1)
        rax = var_8c
        r12 = var_90
        r15 = var_98
    
    r12 += rbx_1.d + 1
    
    if (r12 s> rax)
        sub_140594770(&var_98)
        r15 = var_98
    
    UnDecorator::getReferenceType(r15, arg2, (rbx_1.d + 1) * 2)

sub_140b43760(arg1)
void* r11 = arg1 + 0x268
var_98.d = 0
int32_t r10 = *(r11 + 0x28)
void* r13_1 = r11 + 0x10
void* arg_8 = r11
int32_t rcx_4 = 0
var_98:4.d = 1
var_90.q = r13_1
int32_t var_88 = 0xffffffff
int32_t var_84 = 0
int32_t var_80 = 0

if (r10 != 0)
    void* rax_1 = *(r13_1 + 0x10)
    void* r8_2 = r13_1
    
    if (rax_1 != 0)
        r8_2 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_5 = *r8_2
    int32_t var_84_2
    
    if (rdx_5 != 0)
    label_140b3a976:
        int32_t rax_8 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        var_98:4.d = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_84_1 = rcx_4 - rax_9 + 0x1f
        
        if (rcx_4 - rax_9 + 0x1f s> r10)
            var_84_2 = r10
    else
        while (true)
            int64_t rdx_6 = sx.q(rdi)
            rcx_4 += 0x20
            rdi += 1
            int32_t var_80_1 = rcx_4
            var_98.d = rdi
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r8_2 + (rdx_6 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_140b3a976
        
        var_84_2 = r10

int32_t rdx_8 = *(r11 + 0x28)
double zmm2[0x2] = var_88.o
double var_38[0x2] = zmm2
int32_t r14_1 = 0xffffffff << (rdx_8.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_4 = rdx_8 s>> 5
int32_t r9_1 = rdx_8 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = r14_1
int32_t var_84_3 = rdx_8
int128_t var_78 = r11.o
int96_t var_68 = var_48:8.12

if (rdx_8 != r10)
    void* rax_11 = *(r13_1 + 0x10)
    void* r10_1 = r13_1
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_12 = *(r10_1 + (sx.q(r8_4) << 2)) & r14_1
    int32_t var_84_5
    
    if (rdx_12 != 0)
    label_140b3aa42:
        int32_t rax_18 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_3
        
        if (rax_18 == 0)
            rbx_3 = 0x20
        else
            rbx_3 = 0x1f - temp0_4
        
        int32_t var_84_4 = r9_1 - rbx_3 + 0x1f
        
        if (r9_1 - rbx_3 + 0x1f s> r10)
            var_84_5 = r10
    else
        while (true)
            int64_t rcx_9 = sx.q(r8_4)
            r9_1 += 0x20
            r8_4 += 1
            
            if (rcx_9.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r10_1 + (rcx_9 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_140b3aa42
        
        var_84_5 = r10

while (true)
    int32_t var_5c
    int64_t rcx_11 = sx.q(var_5c)
    int64_t result = var_78.q
    
    if (rcx_11.d == (var_88_1.q u>> 0x20).d && var_68.q == r13_1 && result == r11)
        if (r15 == 0)
            return result
        
        return sub_140a74f90(r15)
    
    int32_t* rdi_4 = (rcx_11 << 5) + *result
    int64_t* rax_20 = sub_140b63b70(rdi_4, &var_98)
    int16_t* rdx_14 = &data_142d40450
    
    if (r12 != 0)
        rdx_14 = r15
    
    char rax_21 = sub_140a2c910(rax_20, rdx_14, 1)
    int16_t* rcx_14 = var_98
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    if (rax_21 != 0)
        int64_t rbx_5 = sx.q(arg3[1].d)
        int32_t rax_22 = (rbx_5 + 1).d
        arg3[1].d = rax_22
        
        if (rax_22 s> *(arg3 + 0xc))
            sub_1405a4d70(arg3)
        
        *(*arg3 + (rbx_5 << 3)) = *rdi_4
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
    r11 = arg_8
