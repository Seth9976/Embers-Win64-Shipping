// 函数: sub_141888100
// 地址: 0x141888100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_b4 = 1
__builtin_memset(arg2, 0, 0x1c)
int64_t* r8 = &arg2[2]
*(r8 + 0x1c) = 0x80
int32_t rcx = 0
int64_t* rax = r8[2]
int32_t var_b8 = 0
int32_t* var_b0 = arg1 + 0x18

if (rax != 0)
    r8 = rax

int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0
*r8 = 0
r8[1] = 0
int32_t r8_1 = 0
arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
arg2[8] = 0
arg2[9].d = 0
int32_t r10 = *(arg1 + 0x30)

if (r10 != 0)
    int32_t* rax_1 = *(arg1 + 0x28)
    int32_t* r9_1 = arg1 + 0x18
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_1418881e9:
        int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t arg_8 = temp0_2
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> r10)
            var_a4.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8_1 += 0x20
            rcx += 1
            var_a4:4.d = r8_1
            var_b8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r9_1[rdx_3 + 1]
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1418881e9
        
        var_a4.d = r10

int32_t rdx_4 = *(arg1 + 0x30)
int32_t r8_4 = rdx_4 s>> 5
int32_t rsi = 0xffffffff << (rdx_4 & 0x1f).b
int128_t var_80 = 0xffffffff
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_50 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
void* var_98
var_98.d = r8_4
int128_t var_90
var_90:8.d = rsi
var_90:0xc.d = rdx_4
var_80.d = r9_3
int128_t var_70 = (arg1 + 8).o

if (rdx_4 != r10)
    int32_t* rax_13 = *(arg1 + 0x28)
    int32_t* r11_1 = arg1 + 0x18
    
    if (rax_13 != 0)
        r11_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_8 = r11_1[sx.q(r8_4)] & rsi
    
    if (rdx_8 != 0)
    label_1418882de:
        int32_t rax_19 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t arg_10 = temp0_4
        int32_t rdi_1
        
        if (rax_19 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_90:0xc.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r10)
            var_90:0xc.d = r10
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_4)
            r9_3 += 0x20
            r8_4 += 1
            var_80.d = r9_3
            var_98.d = r8_4
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = r11_1[rcx_4 + 1]
            var_90:8.d = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1418882de
        
        var_90:0xc.d = r10

while (true)
    int32_t var_54
    int64_t rdx_9 = sx.q(var_54)
    int32_t rax_12
    
    if (rdx_9.d != (var_90:8.q u>> 0x20).d || var_b8.o:8.q != arg1 + 0x18)
        rax_12.b = 0
    else
        rax_12.b = 1
    
    int64_t rcx_6 = var_70.q
    
    if (rax_12.b == 0 || rcx_6 != arg1 + 8)
        rax_12.b = 1
    else
        rax_12.b = 0
    
    if (rax_12.b == 0)
        break
    
    int128_t* rdi_3 = rdx_9 * 0x1c + *rcx_6
    int32_t rax_20 = 0
    
    if (0 == rdi_3[1].d)
        rdi_3[1].d = 0
    else
        rax_20 = rdi_3[1].d
    
    if (rax_20 s> 0)
        int32_t var_48
        sub_140598750(arg2, &var_48)
        int32_t* var_40
        *var_40 = *rdi_3
        var_40[4] = 0xffffffff
        void arg_18
        sub_14093ebb0(arg2, &arg_18, sub_140a6b260(var_40, 0x10), var_40, var_48, nullptr)
    
    int32_t var_58 = var_58 & not.d(var_70:0xc.d)
    sub_14059bdd0(&var_70:8)

return arg2
