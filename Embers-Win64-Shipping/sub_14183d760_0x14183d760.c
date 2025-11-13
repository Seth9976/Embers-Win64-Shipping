// 函数: sub_14183d760
// 地址: 0x14183d760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_94 = 1
int32_t var_88 = 0xffffffff
int32_t r10 = *(arg1 + 0x228)
int32_t rcx = 0
int32_t var_98 = 0
int64_t var_84 = 0
int32_t r8 = 0

if (r10 != 0)
    void* rax_1 = *(arg1 + 0x220)
    void* r9_1 = arg1 + 0x210
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_14183d819:
        int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
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
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14183d819
        
        var_84.d = r10

int32_t rdx_4 = *(arg1 + 0x228)
double zmm2[0x2] = var_88.o
var_84.d = rdx_4
double var_38[0x2] = zmm2
int128_t var_48 = var_98.o
int32_t r14 = 0xffffffff << (rdx_4 & 0x1f).b
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = r14
int128_t var_78 = (arg1 + 0x200).o
int96_t var_68 = var_48:8.12

if (rdx_4 != r10)
    void* rax_12 = *(arg1 + 0x220)
    void* r11_1 = arg1 + 0x210
    
    if (rax_12 != 0)
        r11_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_8 = *(r11_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_8 != 0)
    label_14183d8f6:
        int32_t rax_18 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r11_1 + (rcx_4 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_14183d8f6
        
        var_84.d = r10

int32_t result

while (true)
    int32_t var_5c
    int64_t rcx_6 = sx.q(var_5c)
    
    if (rcx_6.d != (var_88_1.q u>> 0x20).d || var_68.q != arg1 + 0x210)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rdx_9 = var_78.q
    
    if (result.b == 0 || rdx_9 != arg1 + 0x200)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int64_t* rbx_2 = *rdx_9 + rcx_6 * 0x28
    sub_140598750(arg2, &var_98)
    sub_140596d10(arg1 + 0x210, rbx_2)
    *(arg1 + 0x220) = 0xffffffff
    int32_t rax_19 = *(arg1 + 0x218)
    int16_t* rdx_13
    
    if (rax_19 == 0)
        rdx_13 = &data_142d40450
    else
        rdx_13 = *(arg1 + 0x210)
    
    int32_t rcx_10 = rax_19 - 1
    
    if (rax_19 == 0)
        rcx_10 = 0
    
    void arg_8
    sub_14059a6d0(arg2, &arg_8, sub_1405969c0(rcx_10, rdx_13), arg1 + 0x210, var_98, nullptr)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)

return result
