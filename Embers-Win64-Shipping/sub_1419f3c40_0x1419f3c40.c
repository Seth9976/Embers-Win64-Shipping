// 函数: sub_1419f3c40
// 地址: 0x1419f3c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t r10_1 = (data_1439cc058).d
int32_t rcx = 0
void* var_70_1 = &data_1439cc040
int32_t r8 = 0
int32_t var_78_1 = 0
int32_t var_74_1 = 1
int32_t var_68_1 = 0xffffffff
int64_t var_64_1 = 0

if (r10_1 != 0)
    void* rax_1 = data_1439cc050
    void* r11_1 = &data_1439cc040
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_2 = *r11_1
    
    if (rdx_2 != 0)
    label_1419f3cf5:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64_1.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10_1)
            var_64_1.d = r10_1
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64_1:4.d = r8
            var_78_1 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r11_1 + (rdx_3 << 2) + 4)
            int32_t var_68_2 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1419f3cf5
        
        var_64_1.d = r10_1

int128_t var_18_1 = 0xffffffff
int128_t var_28_1 = var_78_1.o
var_64_1.d = r10_1
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = (&data_1439cc030).o
int128_t var_48_1 = var_28_1
int64_t var_38_1 = temp0_3

while (true)
    int64_t rax = sx.q(var_48_1:0xc.d)
    int64_t* rcx_4 = var_58.q
    
    if (rax.d == ((0xffffffff << (r10_1.b & 0x1f)).q u>> 0x20).d && var_48_1.q == &data_1439cc040
            && rcx_4 == &data_1439cc030)
        break
    
    sub_141a01110(*(*rcx_4 + rax * 0x28 + 0x18), arg2)
    var_48_1:8.d &= not.d(var_58:0xc.d)
    sub_14059bdd0(&var_58:8)
