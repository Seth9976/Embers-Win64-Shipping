// 函数: sub_14183cb90
// 地址: 0x14183cb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2[1].d
int32_t rbx_3 = *(arg1 + 0xb0) - *(arg1 + 0xdc) - *(arg2 + 0x34) + r8

if (rbx_3 s> r8 - *(arg2 + 0x34))
    sub_140976540(arg2, rbx_3)
    int32_t rdx_2
    
    if (rbx_3 u< 4)
        rdx_2 = 1
    else
        uint32_t rbx_4 = rbx_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_4 + 8)
        int32_t rcx_1
        
        if (rbx_4 == 0xfffffff8)
            rcx_1 = 0x20
        else
            rcx_1 = 0x1f - temp0_2
        
        int32_t rcx_3 = rcx_1 << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_4 + 7)
        char rdx_1
        
        if (rcx_3 == 0)
            rdx_1 = 0x20
        else
            rdx_1 = 0x1f - temp0_3
        
        rdx_2 = 1 << ((not.d(rcx_3)).b & (0x20 - rdx_1))
    
    int32_t rax_4 = arg2[9].d
    
    if (rax_4 == 0 || rax_4 s< rdx_2)
        arg2[9].d = rdx_2
        sub_1405a4480(arg2)

int32_t var_94 = 1
int32_t var_88 = 0xffffffff
int32_t r10 = *(arg1 + 0xd0)
int32_t rcx_7 = 0
int32_t var_98 = 0
int32_t r8_3 = 0
int64_t var_84 = 0

if (r10 != 0)
    void* rax_5 = *(arg1 + 0xc8)
    void* r9_1 = arg1 + 0xb8
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_14183ccd9:
        int32_t rax_12 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_12)
        int32_t var_94_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_4
        
        var_84.d = r8_3 - rax_13 + 0x1f
        
        if (r8_3 - rax_13 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_7)
            r8_3 += 0x20
            rcx_7 += 1
            var_84:4.d = r8_3
            var_98 = rcx_7
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_14183ccd9
        
        var_84.d = r10

int32_t rdx_7 = *(arg1 + 0xd0)
double zmm2[0x2] = var_88.o
int32_t r8_6 = rdx_7 s>> 5
double var_38[0x2] = zmm2
int128_t var_48 = var_98.o
int32_t r15_1 = 0xffffffff << (rdx_7 & 0x1f).b
int32_t r9_3 = rdx_7 & 0xffffffe0
int32_t var_88_1 = r15_1
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_84.d = rdx_7
int128_t var_78 = (arg1 + 0xa8).o
int96_t var_68 = var_48:8.12

if (rdx_7 != r10)
    void* rax_16 = *(arg1 + 0xc8)
    void* r11_1 = arg1 + 0xb8
    
    if (rax_16 != 0)
        r11_1 = rax_16
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10 - 1)
    int32_t rdx_11 = *(r11_1 + (sx.q(r8_6) << 2)) & r15_1
    
    if (rdx_11 != 0)
    label_14183cdb6:
        int32_t rax_22 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
        uint64_t rflags_4
        int32_t temp0_6
        temp0_6, rflags_4 = _bit_scan_reverse(rax_22)
        int32_t rdi_1
        
        if (rax_22 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_6
        
        var_84.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rcx_11 = sx.q(r8_6)
            r9_3 += 0x20
            r8_6 += 1
            
            if (rcx_11.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r11_1 + (rcx_11 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_14183cdb6
        
        var_84.d = r10

int32_t result

while (true)
    int32_t var_5c
    int64_t rcx_13 = sx.q(var_5c)
    
    if (rcx_13.d != (var_88_1.q u>> 0x20).d || var_68.q != arg1 + 0xb8)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rdx_12 = var_78.q
    
    if (result.b == 0 || rdx_12 != arg1 + 0xa8)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int64_t* rbx_7 = *rdx_12 + rcx_13 * 0x28
    sub_140598750(arg2, &var_98)
    sub_140596d10(arg1 + 0xb8, rbx_7)
    *(arg1 + 0xc8) = 0xffffffff
    int32_t rax_23 = *(arg1 + 0xc0)
    int16_t* rdx_16
    
    if (rax_23 == 0)
        rdx_16 = &data_142d40450
    else
        rdx_16 = *(arg1 + 0xb8)
    
    int32_t rcx_17 = rax_23 - 1
    
    if (rax_23 == 0)
        rcx_17 = 0
    
    void arg_8
    sub_14059a6d0(arg2, &arg_8, sub_1405969c0(rcx_17, rdx_16), arg1 + 0xb8, var_98, nullptr)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)

return result
