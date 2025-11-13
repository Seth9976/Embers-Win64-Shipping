// 函数: sub_14266bcf0
// 地址: 0x14266bcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_2 = sub_140d21950(arg2, sub_14254cd20())
    
    if (rax_2 != 0)
        sub_14266ce10(arg1, arg2, rax_2, 0)

int32_t rcx_2 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t rbx = arg2[0x39].d
void* var_90 = &arg2[0x36]
int32_t r8_2 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rbx != 0)
    void* rax_3 = arg2[0x38]
    void* r9_1 = &arg2[0x36]
    
    if (rax_3 != 0)
        r9_1 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_14266bdc8:
        int32_t rax_10 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_94_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_84.d = r8_2 - rax_11 + 0x1f
        
        if (r8_2 - rax_11 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8_2 += 0x20
            rcx_2 += 1
            var_84:4.d = r8_2
            var_98 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_14266bdc8
        
        var_84.d = rbx

int32_t rdx_6 = arg2[0x39].d
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_6.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_5 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14
var_84.d = rdx_6
int128_t var_78 = (&arg2[0x34]).o
int96_t var_68 = var_48:8.12

if (rdx_6 != rbx)
    void* rax_13 = arg2[0x38]
    void* r10_1 = &arg2[0x36]
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_5) << 2)) & r14
    
    if (rdx_10 != 0)
    label_14266be92:
        int32_t rax_20 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t r11_1
        
        if (rax_20 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_5)
            r9_3 += 0x20
            r8_5 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_7 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_14266be92
        
        var_84.d = rbx

while (true)
    int32_t var_5c
    int64_t rcx_9 = sx.q(var_5c)
    int64_t* result = var_78.q
    
    if (rcx_9.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg2[0x36] && result == &arg2[0x34])
        return result
    
    void* rbx_1 = *(*result + rcx_9 * 0x10)
    
    if (rbx_1 != 0)
        int64_t* rax_24 = sub_140d21950(rbx_1, sub_14254cd20())
        
        if (rax_24 != 0)
            int64_t r8_6 = *arg2
            
            if ((*(r8_6 + 0x618))(arg2, rbx_1, r8_6) == 0)
                sub_14266b610(arg1, rbx_1, rax_24, 0)
            else
                sub_14266ce10(arg1, rbx_1, rax_24, 0)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
