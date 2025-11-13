// 函数: sub_1418544b0
// 地址: 0x1418544b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int32_t rbx_3 = arg2[1].d - *(arg2 + 0x34) - *(arg1 + 0x34) + rdi

if (rbx_3 s> rdi - *(arg1 + 0x34))
    sub_1409d93a0(arg1, rbx_3)
    int32_t rdx_2
    
    if (rbx_3 u< 4)
        rdx_2 = 1
    else
        uint32_t rbx_4 = rbx_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rbx_4 + 8)
        int32_t rcx
        
        if (rbx_4 == 0xfffffff8)
            rcx = 0x20
        else
            rcx = 0x1f - temp0_2
        
        int32_t rcx_2 = rcx << 0x1a s>> 0x1f
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rbx_4 + 7)
        char rdx_1
        
        if (rcx_2 == 0)
            rdx_1 = 0x20
        else
            rdx_1 = 0x1f - temp0_3
        
        rdx_2 = 1 << ((not.d(rcx_2)).b & (0x20 - rdx_1))
    
    int32_t rax_5 = arg1[9].d
    
    if (rax_5 == 0 || rax_5 s< rdx_2)
        arg1[9].d = rdx_2
        sub_140943380(arg1)

int32_t r8 = arg2[5].d
int32_t* result_1 = &arg2[2]
int32_t var_94 = 1
int32_t var_98 = 0
int32_t rcx_6 = 0
int32_t var_88 = 0xffffffff
int32_t rdi_2 = 0
int64_t var_84 = 0

if (r8 != 0)
    int32_t* result_4 = *(result_1 + 0x10)
    int32_t* result_2 = result_1
    
    if (result_4 != 0)
        result_2 = result_4
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r8 - 1)
    int32_t rdx_5 = *result_2
    
    if (rdx_5 != 0)
    label_1418545e5:
        int32_t rax_11 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
        uint64_t rflags_3
        int32_t temp0_4
        temp0_4, rflags_3 = _bit_scan_reverse(rax_11)
        int32_t var_94_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_4
        
        var_84.d = rdi_2 - rax_12 + 0x1f
        
        if (rdi_2 - rax_12 + 0x1f s> r8)
            var_84.d = r8
    else
        while (true)
            int64_t rax_8 = sx.q(rcx_6)
            rdi_2 += 0x20
            rcx_6 += 1
            var_84:4.d = rdi_2
            var_98 = rcx_6
            
            if (rax_8.d s>= ((temp1_1 & 0x1f) + temp2_1) s>> 5)
                break
            
            rdx_5 = result_2[rax_8 + 1]
            var_88 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_1418545e5
        
        var_84.d = r8

int32_t rdx_6 = arg2[5].d
double zmm2[0x2] = var_88.o
var_84.d = rdx_6
int32_t r11 = 0xffffffff << (rdx_6 & 0x1f).b
int128_t var_48 = var_98.o
int32_t rcx_10 = rdx_6 & 0xffffffe0
int32_t rdi_5 = rdx_6 s>> 5
int32_t var_88_1 = r11
double var_38[0x2] = zmm2
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t var_78 = arg2.o
int96_t var_68 = var_48:8.12
uint64_t rax_15

if (rdx_6 != r8)
    int32_t* result_5 = *(result_1 + 0x10)
    int32_t* result_3 = result_1
    
    if (result_5 != 0)
        result_3 = result_5
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r8 - 1)
    int32_t rdx_10 = result_3[sx.q(rdi_5)] & r11
    
    if (rdx_10 != 0)
    label_1418546af:
        int32_t rax_21 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
        uint64_t rflags_4
        int32_t temp0_6
        temp0_6, rflags_4 = _bit_scan_reverse(rax_21)
        int32_t r15_1
        
        if (rax_21 == 0)
            r15_1 = 0x20
        else
            r15_1 = 0x1f - temp0_6
        
        rax_15 = zx.q(rcx_10 - r15_1 + 0x1f)
        var_84.d = rax_15.d
        
        if (rax_15.d s> r8)
            var_84.d = r8
    else
        while (true)
            rax_15 = sx.q(rdi_5)
            rcx_10 += 0x20
            rdi_5 += 1
            
            if (rax_15.d s>= ((temp3_1 & 0x1f) + temp4_1) s>> 5)
                break
            
            rdx_10 = result_3[rax_15 + 1]
            var_88_1 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_1418546af
        
        var_84.d = r8

while (true)
    int32_t var_5c
    int64_t rcx_12 = sx.q(var_5c)
    
    if (rcx_12.d != (var_88_1.q u>> 0x20).d || var_68.q != result_1)
        rax_15.b = 0
    else
        rax_15.b = 1
    
    int64_t* rdx_12 = var_78.q
    
    if (rax_15.b == 0 || rdx_12 != arg2)
        rax_15.b = 1
    else
        rax_15.b = 0
    
    if (rax_15.b == 0)
        break
    
    int128_t* rdi_6 = *rdx_12 + rcx_12 * 0x18
    sub_140598750(arg1, &var_98)
    *result_1 = *rdi_6
    result_1[4] = 0xffffffff
    void arg_8
    sub_14093ebb0(arg1, &arg_8, sub_140a6b260(result_1, 0x10), result_1, var_98, nullptr)
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)

uint64_t result = zx.q(arg2[1].d)

if (result.d != *(arg2 + 0x34))
    int32_t rax_26 = *(arg2 + 0xc)
    arg2[1].d = 0
    
    if (rax_26 s< 0 && rax_26 != 0)
        sub_1405a5130(arg2, 0)
    
    *(arg2 + 0x34) = 0
    void* rbx_7 = &result_1[6]
    arg2[6].d = 0xffffffff
    result = *(result_1 + 0x10)
    uint64_t rcx_21 = zx.q((*rbx_7 + 0x1f) u>> 5)
    
    if (result != 0)
        result_1 = result
    
    if (rcx_21.d u> 8)
        result = memset(result_1, 0, zx.q(rcx_21.d) << 2)
    else if (rcx_21.d != 0)
        result = 0
        __builtin_memset(result_1, 0, rcx_21 << 2)
    
    *rbx_7 = 0
    void* rdi_8 = &arg2[7]
    int64_t rcx_23 = sx.q(arg2[9].d)
    void* rdx_16 = *(rdi_8 + 8)
    
    if (rcx_23 s> 0)
        result = 0xffffffff
        
        if (rdx_16 != 0)
            rdi_8 = rdx_16
        
        __builtin_memset(rdi_8, 0xffffffff, rcx_23 << 2)

return result
