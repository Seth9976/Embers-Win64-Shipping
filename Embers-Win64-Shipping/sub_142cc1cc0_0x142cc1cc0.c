// 函数: sub_142cc1cc0
// 地址: 0x142cc1cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = data_1439a9c08
int32_t var_54 = 1
int32_t var_58 = 0
int32_t rcx = 0
void* var_50 = &data_1439a9bf0
int32_t r8 = 0
int32_t var_48 = 0xffffffff
int64_t var_44 = 0

if (r9 != 0)
    void* rax_1 = data_1439a9c00
    void* r10_1 = &data_1439a9bf0
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_3 = *r10_1
    
    if (rdx_3 != 0)
    label_142cc1d58:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t rax_10 = r8 - rax_9 + 0x1f
        
        if (rax_10 s> r9)
            rax_10 = r9
        
        var_44.d = rax_10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_44:4.d = r8
            var_58 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_44.d = r9
                break
            
            rdx_3 = *(r10_1 + (rdx_4 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142cc1d58

double var_28[0x2] = var_58.o
int128_t var_18 = 0xffffffff
var_58.o = (&data_1439a9be0).o
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s< r9)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rcx_3 = *(*var_58.q + sx.q(i) * 0x18 + 8)
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
        
        var_44:4.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        i = i_1
    while (i s< *(var_48.q + 0x18))

int64_t rcx_5 = data_1439a9c20
data_1439a9c28 = 0

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

bool cond:1 = data_1439a9bec == 0
data_1439a9be8 = 0

if (not(cond:1))
    sub_1405a5130(&data_1439a9be0, 0)

data_1439a9c10 = 0xffffffff
data_1439a9c14 = 0
void* result = sub_14059a8e0(&data_1439a9bf0, 0)
int64_t rcx_6 = data_1439a9c00

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rcx_7 = data_1439a9be0

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
