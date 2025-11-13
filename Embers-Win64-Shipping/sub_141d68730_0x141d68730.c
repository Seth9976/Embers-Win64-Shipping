// 函数: sub_141d68730
// 地址: 0x141d68730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 0x3f0
int32_t var_a4 = 1
int32_t r10 = *(rbx + 0x28)
void* r13 = rbx + 0x10
int32_t rcx = 0
void* arg_8 = rbx
int32_t var_a8 = 0
int32_t var_a0 = r13.d
int32_t r8 = 0
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r10 != 0)
    void* rax_1 = *(r13 + 0x10)
    void* r9_1 = r13
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141d687d9:
        int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_94.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_94:4.d = r8
            var_a8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141d687d9
        
        var_94.d = r10

int32_t rdx_4 = *(rbx + 0x28)
double zmm2[0x2] = var_98.o
var_94.d = rdx_4
double var_48[0x2] = zmm2
int128_t var_58 = var_a8.o
int32_t r14 = 0xffffffff << (rdx_4 & 0x1f).b
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_98_1 = r14
int128_t var_88 = rbx.o
int128_t var_78 = var_58

if (rdx_4 != r10)
    void* rax_12 = *(r13 + 0x10)
    void* r11_1 = r13
    
    if (rax_12 != 0)
        r11_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_8 = *(r11_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_8 != 0)
    label_141d688b6:
        int32_t rax_18 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rdi_1
        
        if (rax_18 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_94.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r10)
            var_94.d = r10
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r11_1 + (rcx_4 << 2) + 4)
            var_98_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141d688b6
        
        var_94.d = r10
    
    rbx = arg_8

int32_t result

while (true)
    int64_t rcx_6 = sx.q(var_78:0xc.d)
    
    if (rcx_6.d != (var_98_1.q u>> 0x20).d || var_78.q != r13)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rdx_9 = var_88.q
    
    if (result.b == 0 || rdx_9 != rbx)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int32_t* r15_1 = *rdx_9 + rcx_6 * 0x18
    sub_141a58380(arg2, &var_a8, r15_1)
    
    for (int64_t* i = var_a8.q; i != &i[sx.q(var_a0)]; i = &i[1])
        int64_t arg_20 = *i
        void* rax_21 = sub_140d3c6e0(&arg_20)
        
        if (rax_21 == 0)
        label_141d689ad:
            int64_t rbx_3 = sx.q(arg3[1].d)
            int32_t rax_28 = (rbx_3 + 1).d
            arg3[1].d = rax_28
            
            if (rax_28 s> *(arg3 + 0xc))
                sub_1405a4f90(arg3)
            
            *(*arg3 + rbx_3 * 0x10) = *r15_1
        else
            void* rax_22 = sub_14245f6d0()
            void* rdx_12 = *(rax_21 + 0x10)
            int64_t rax_23 = sx.q(*(rax_22 + 0x38))
            
            if (rax_23.d s> *(rdx_12 + 0x38)
                    || *(*(rdx_12 + 0x30) + (rax_23 << 3)) != rax_22 + 0x30)
                goto label_141d689ad
            
            if (sub_1408d7580(rax_21) == 0)
                goto label_141d689ad
            
            if (sub_141f3b9f0(sub_1408d7580(rax_21)) != rax_21)
                goto label_141d689ad
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
    rbx = arg_8

return result
