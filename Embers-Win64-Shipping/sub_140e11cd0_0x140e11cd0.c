// 函数: sub_140e11cd0
// 地址: 0x140e11cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = (data_1439ae738).d
void* r10 = &data_1439ae720
int32_t r8 = 0
int32_t var_54 = 1
int32_t var_58 = 0
void* var_50 = &data_1439ae720
int32_t r9 = 0
int32_t var_48 = 0xffffffff
int64_t var_44 = 0

if (r11 != 0)
    void* rax_1 = data_1439ae730
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_140e11d6a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_44.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_44.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_44:4.d = r9
            var_58 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rcx != 0)
                goto label_140e11d6a
        
        var_44.d = r11

double var_28[0x2] = var_58.o
void* result = nullptr
int128_t var_18 = 0xffffffff
var_58.o = (&data_1439ae710).o
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rcx_4 = *(*var_58.q + sx.q(i) * 0x18 + 8)
        (*(*rcx_4 + 0x10))(rcx_4, arg1)
        var_44:4.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        result = var_48.q
        i = i_1
    while (i s< *(result + 0x18))

return result
