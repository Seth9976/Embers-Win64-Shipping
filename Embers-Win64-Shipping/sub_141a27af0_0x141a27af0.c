// 函数: sub_141a27af0
// 地址: 0x141a27af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t var_94 = 1
int32_t rbx = *(arg1 + 0x50)
int32_t rcx = 0
void* var_90 = arg1 + 0x38
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int32_t r8_1 = 0
int64_t var_84 = 0

if (rbx != 0)
    void* rax_1 = *(arg1 + 0x48)
    void* r9_1 = arg1 + 0x38
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141a27b98:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8_1 += 0x20
            rcx += 1
            var_84:4.d = r8_1
            var_98 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141a27b98
        
        var_84.d = rbx

int32_t rdx_4 = *(arg1 + 0x50)
double zmm2[0x2] = var_88.o
double var_38[0x2] = zmm2
int32_t r15 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_4 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = r15
var_84.d = rdx_4
int128_t var_78 = (arg1 + 0x28).o
int96_t var_68 = var_48:8.12

if (rdx_4 != rbx)
    void* rax_11 = *(arg1 + 0x48)
    void* r10_1 = arg1 + 0x38
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_4) << 2)) & r15
    
    if (rdx_8 != 0)
    label_141a27c62:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141a27c62
        
        var_84.d = rbx

int32_t i

while (i != (var_88_1.q u>> 0x20).d || var_68.q != arg1 + 0x38 || var_78.q != arg1 + 0x28)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)

int64_t r8
int64_t var_90_1 = r8
var_98.q = &arg_10
void arg_8
return sub_141a29f00(arg1 + 0x28, &arg_8, &var_98, nullptr)
