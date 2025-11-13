// 函数: sub_141d2d270
// 地址: 0x141d2d270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg1
*arg1 = arg2
arg1[1] = arg3
void* rdx = &arg1[4]
int32_t r8 = 0
int32_t var_94 = 1
__builtin_memset(&arg1[2], 0, 0x1c)
int32_t rcx = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)
int32_t var_98 = 0

if (rax != 0)
    rdx = rax

int32_t var_88 = 0xffffffff
int64_t var_84 = 0
*rdx = 0
*(rdx + 8) = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xc] = 0
int32_t rbx = *(arg4 + 0x28)

if (rbx != 0)
    int32_t* rax_1 = *(arg4 + 0x20)
    int32_t* r9 = arg4 + 0x10
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141d2d369:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
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
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9[rdx_4 + 1]
            var_88 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141d2d369
        
        var_84.d = rbx

int32_t rdx_5 = *(arg4 + 0x28)
double zmm2[0x2] = var_88.o
var_84.d = rdx_5
double var_38[0x2] = zmm2
int128_t var_48 = var_98.o
int32_t rsi = 0xffffffff << (rdx_5 & 0x1f).b
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_2 = rdx_5 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = rsi
int128_t var_78 = arg4.o
int96_t var_68 = var_48:8.12

if (rdx_5 != rbx)
    int32_t* rax_13 = *(arg4 + 0x20)
    int32_t* r10_1 = arg4 + 0x10
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_9 = r10_1[sx.q(r8_3)] & rsi
    
    if (rdx_9 != 0)
    label_141d2d437:
        int32_t rax_19 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rdi_1
        
        if (rax_19 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_84.d = r9_2 - rdi_1 + 0x1f
        
        if (r9_2 - rdi_1 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = r10_1[rcx_4 + 1]
            var_88_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141d2d437
        
        var_84.d = rbx

while (true)
    int32_t var_5c
    int64_t rcx_6 = sx.q(var_5c)
    int32_t rax_12
    
    if (rcx_6.d != (var_88_1.q u>> 0x20).d || var_68.q != arg4 + 0x10)
        rax_12.b = 0
    else
        rax_12.b = 1
    
    int64_t* rdx_10 = var_78.q
    
    if (rax_12.b == 0 || rdx_10 != arg4)
        rax_12.b = 1
    else
        rax_12.b = 0
    
    if (rax_12.b == 0)
        break
    
    int64_t rax_20 = *rdx_10
    int64_t rcx_7 = rcx_6 * 3
    *sub_141d2b800(&arg1[2], rax_20 + (rcx_7 << 3)) = *(rax_20 + (rcx_7 << 3) + 8)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)

int64_t* result = result_1
int32_t rdi_4 = *(*result + 8)
void*** rax_25 = j_sub_140a82f30(0x20)
void*** rbx_2 = rax_25

if (rax_25 == 0)
    rbx_2 = nullptr
else
    *(rbx_2 + 0xc) = rdi_4
    rbx_2[1].b = 0
    *rbx_2 = &data_142fc9630
    rbx_2[2] = 0
    rbx_2[3] = 0
    int32_t rdx_12 = *(rbx_2 + 0xc)
    
    if (rdx_12 s> 0)
        sub_1405c5570(&rbx_2[2], rdx_12)

if (&arg1[0xc] != &result_1)
    void*** rcx_11 = arg1[0xc]
    arg1[0xc] = rbx_2
    
    if (rcx_11 != 0)
        (**rcx_11)(rcx_11, 1)
else if (rbx_2 != 0)
    (**rbx_2)(rbx_2, 1)

int64_t rbx_3 = arg1[0xc]
sub_1405b3620(&arg1[2], &var_98)
int32_t rax_27 = var_98
*(arg4 + 0x10) = 4
*(arg4 + 0x18) = rbx_3
*(arg4 + 0x20) = 0xffffffff
sub_14104a220(&arg1[2], &result_1, *(arg4 + 0x10), arg4 + 0x10, rax_27, nullptr)
return result
