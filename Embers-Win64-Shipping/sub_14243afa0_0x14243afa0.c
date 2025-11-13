// 函数: sub_14243afa0
// 地址: 0x14243afa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = (data_143a307d8).d
int32_t r8 = 0
int32_t var_74 = 1
int32_t var_78 = 0
void* var_70 = &data_143a307c0
int32_t var_68 = 0xffffffff
int32_t r9 = 0
int64_t var_64 = 0

if (r11 != 0)
    void* rax_1 = data_143a307d0
    void* rbx_1 = &data_143a307c0
    
    if (rax_1 != 0)
        rbx_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *rbx_1
    
    if (rcx != 0)
    label_14243b046:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_64:4.d = r9
            var_78 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(rbx_1 + (rcx_1 << 2) + 4)
            int32_t var_68_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_14243b046
        
        var_64.d = r11

int128_t var_18 = 0xffffffff
int128_t var_28 = var_78.o
var_64.d = r11
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = (&data_143a307b0).o
int128_t var_48 = var_28
int64_t var_38 = temp0_3

while (true)
    int64_t result = sx.q(var_48:0xc.d)
    int64_t* rdx_3 = var_58.q
    
    if (result.d == ((0xffffffff << (r11.b & 0x1f)).q u>> 0x20).d && var_48.q == &data_143a307c0
            && rdx_3 == &data_143a307b0)
        result.b = 0
        return result
    
    if (*(*rdx_3 + result * 0x28 + 0x18) == arg1)
        result.b = 1
        return result
    
    var_48:8.d &= not.d(var_58:0xc.d)
    sub_14059bdd0(&var_58:8)
