// 函数: sub_1419e2d60
// 地址: 0x1419e2d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140cddf60(arg1, arg2)
int32_t rcx = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t rbx = arg1[0x15].d
void* var_80 = &arg1[0x12]
int32_t r8 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (rbx != 0)
    void* rax = arg1[0x14]
    void* r9_1 = &arg1[0x12]
    
    if (rax != 0)
        r9_1 = rax
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9_1
    result = (temp1_1 + (temp0_1 & 0x1f)) s>> 5
    
    if (rdx_2 != 0)
    label_1419e2e18:
        int32_t rax_6 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_6)
        int32_t var_84_1 = rax_6
        int32_t rax_7
        
        if (rax_6 == 0)
            rax_7 = 0x20
        else
            rax_7 = 0x1f - temp0_2
        
        result = r8 - rax_7 + 0x1f
        var_74.d = result
        
        if (result s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_74:4.d = r8
            var_88 = rcx
            
            if (rdx_3.d s>= result)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1419e2e18
        
        var_74.d = rbx

int32_t rdx_4 = arg1[0x15].d
int128_t var_28 = 0xffffffff
int32_t r12 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r12
var_74.d = rdx_4
int128_t var_68 = (arg1 + 0x80).o
int128_t var_58 = var_38

if (rdx_4 != rbx)
    void* rax_8 = arg1[0x14]
    void* r10_1 = &arg1[0x12]
    
    if (rax_8 != 0)
        r10_1 = rax_8
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    result = (temp3_1 + (temp2_1 & 0x1f)) s>> 5
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r12
    
    if (rdx_8 != 0)
    label_1419e2ee2:
        int32_t rax_14 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_14)
        int32_t r11_1
        
        if (rax_14 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        result = r9_3 - r11_1 + 0x1f
        var_74.d = result
        
        if (result s> rbx)
            var_74.d = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= result)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_1419e2ee2
        
        var_74.d = rbx

while (var_58:0xc.d != (var_78_2.q u>> 0x20).d || var_58.q != &arg1[0x12]
        || var_68.q != arg1 + 0x80)
    *(arg2 + 8) += 0x60
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    result = sub_14059bdd0(&var_68:8)

return result
