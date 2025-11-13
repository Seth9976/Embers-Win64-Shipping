// 函数: sub_140bab540
// 地址: 0x140bab540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143e1a3e0)
int32_t r11 = (data_1439a9758).d
int32_t r8 = 0
int32_t var_74 = 1
int32_t var_78 = 0
int32_t rcx = 0
int32_t var_60 = 0
void* var_70 = &data_1439a9740
int32_t var_68 = 0xffffffff
int32_t var_64 = 0

if (r11 != 0)
    void* rax_1 = data_1439a9750
    void* r10_1 = &data_1439a9740
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r10_1
    int32_t var_64_2
    
    if (rdx_3 != 0)
    label_140bab5f5:
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
        
        int32_t var_64_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_64_2 = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_60_1 = rcx
            var_78 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r10_1 + (rdx_4 << 2) + 4)
            int32_t var_68_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140bab5f5
        
        var_64_2 = r11

int128_t var_18 = 0xffffffff
int128_t var_28 = var_78.o
int32_t var_64_3 = r11
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_58 = (&data_1439a9730).o
int128_t var_48 = var_28
int64_t var_38 = temp0_3

while (true)
    int64_t rcx_4 = sx.q(var_48:0xc.d)
    int64_t* rax_11 = var_58.q
    int64_t result
    
    if (rcx_4.d == ((0xffffffff << (r11.b & 0x1f)).q u>> 0x20).d && var_48.q == &data_1439a9740
            && rax_11 == &data_1439a9730)
        LeaveCriticalSection(&data_143e1a3e0)
        result.b = 0
        return result
    
    if (sub_140d3cb50(*(*rax_11 + rcx_4 * 0x10)) == arg1)
        LeaveCriticalSection(&data_143e1a3e0)
        result.b = 1
        return result
    
    var_48:8.d &= not.d(var_58:0xc.d)
    sub_14059bdd0(&var_58:8)
