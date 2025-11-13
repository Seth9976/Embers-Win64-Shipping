// 函数: sub_141245880
// 地址: 0x141245880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a4 = 1
int32_t var_98 = 0xffffffff
int32_t r11 = *(arg1 + 0xb68)
void* r9 = arg1 + 0xb50
void* var_a0 = r9
int32_t rcx = 0
int32_t var_a8 = 0
int64_t var_94 = 0
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_141245918:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
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
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_94:4.d = r8
            var_a8 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141245918
        
        var_94.d = r11

void* var_60 = arg1 + 0xb40
int128_t var_70 = 0xffffffff
int128_t var_80 = var_a8.o
int16_t var_20 = 0
int128_t zmm3 = var_80
void* result = zmm3.q
int128_t var_48 = zmm3
int128_t var_58 = (arg1 + 0xb40).o
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_70 = zmm0

if (0 s< *(result + 0x18))
    int32_t i = var_48:0xc.d
    
    do
        int32_t r11_1 = *(arg2 + 0xf10)
        int32_t r8_2 = 0
        int32_t var_a8_1 = 0
        int32_t r9_1 = 0
        int32_t var_a4_2 = 1
        int32_t* var_a0_1 = arg2 + 0xef8
        int32_t var_98_2 = 0xffffffff
        int64_t var_94_1 = 0
        
        if (r11_1 != 0)
            int32_t* rax_11 = *(arg2 + 0xf08)
            int32_t* r10_1 = arg2 + 0xef8
            
            if (rax_11 != 0)
                r10_1 = rax_11
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rcx_2 = *r10_1
            
            if (rcx_2 != 0)
            label_141245a4a:
                int32_t rax_18 = neg.d(rcx_2) & rcx_2
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
                int32_t var_a4_3 = rax_18
                int32_t rax_19
                
                if (rax_18 == 0)
                    rax_19 = 0x20
                else
                    rax_19 = 0x1f - temp0_4
                
                var_94_1.d = r9_1 - rax_19 + 0x1f
                
                if (r9_1 - rax_19 + 0x1f s> r11_1)
                    var_94_1.d = r11_1
            else
                while (true)
                    int64_t rcx_3 = sx.q(r8_2)
                    r9_1 += 0x20
                    r8_2 += 1
                    var_94_1:4.d = r9_1
                    var_a8_1 = r8_2
                    
                    if (rcx_3.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rcx_2 = r10_1[rcx_3 + 1]
                    int32_t var_98_3 = 0xffffffff
                    
                    if (rcx_2 != 0)
                        goto label_141245a4a
                
                var_94_1.d = r11_1
        
        int64_t* rdx_6 = arg2 + 0xee8
        int64_t* var_88_1 = rdx_6
        var_80 = var_a8_1.o
        int64_t var_70_1 = 0xffffffff
        
        if (0 s>= r11_1)
        label_141245afc:
            sub_14122eb30(zmm0:8.q, i)
            var_20.b = 1
        else
            int64_t* rdi_1 = var_58.q
            int32_t rcx_5 = 0
            
            while (*(*(*(*rdx_6 + sx.q(rcx_5) * 0x30 + 0x20) + 0x20) + 0x10)
                    != *(sx.q(i) * 0x38 + *rdi_1))
                var_70_1.d &= not.d(var_80:4.d)
                sub_14059bdd0(&var_80)
                rcx_5 = var_70_1:4.d
                
                if (rcx_5 s>= *(var_80:8.q + 0x18))
                    goto label_141245afc
                
                rdx_6 = var_88_1
        
        var_48:8.d &= not.d(var_58:0xc.d)
        sub_14059bdd0(&var_58:8)
        result = var_48.q
        i = var_48:0xc.d
    while (i s< *(result + 0x18))
    
    if (var_20.b != 0 && var_20:1.b != 0)
        return sub_140aa4bc0(arg1 + 0xb40, *(arg1 + 0xb48) - *(arg1 + 0xb74), 1)

return result
