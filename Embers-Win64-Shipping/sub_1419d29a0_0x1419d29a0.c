// 函数: sub_1419d29a0
// 地址: 0x1419d29a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = (data_1439c9658).d
int32_t rcx = 0
int32_t var_74 = 1
int32_t var_78 = 0
void* var_70 = &data_1439c9640
int32_t r8 = 0
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r10 != 0)
    void* rax_1 = data_1439c9650
    void* r11_1 = &data_1439c9640
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r11_1
    
    if (rdx_3 != 0)
    label_1419d2a45:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t rax_10 = r8 - rax_9 + 0x1f
        
        if (rax_10 s> r10)
            rax_10 = r10
        
        var_64.d = rax_10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_64.d = r10
                break
            
            rdx_3 = *(r11_1 + (rdx_4 << 2) + 4)
            int32_t var_68_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1419d2a45

int128_t var_18 = 0xffffffff
int128_t var_28 = var_78.o
int128_t result = (&data_1439c9630).o
var_64.d = r10
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t result_1 = result
int128_t var_48 = var_28
int64_t var_38 = temp0_3

while (var_48:0xc.d != ((0xffffffff << (r10.b & 0x1f)).q u>> 0x20).d || var_48.q != &data_1439c9640
        || result_1.q != &data_1439c9630)
    var_48:8.d &= not.d(result_1:0xc.d)
    sub_14059bdd0(&result_1:8)

return result
