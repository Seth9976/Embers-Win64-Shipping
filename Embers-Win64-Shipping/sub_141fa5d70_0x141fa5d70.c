// 函数: sub_141fa5d70
// 地址: 0x141fa5d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg1[5].d
int32_t r8 = 0
int32_t var_54 = 1
int32_t r9 = 0
int32_t var_58 = 0
void* var_50 = &arg1[2]
int32_t var_48 = 0xffffffff
int64_t var_44 = 0

if (r10 != 0)
    void* rax_1 = arg1[4]
    void* r11_1 = &arg1[2]
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rcx = *r11_1
    
    if (rcx != 0)
    label_141fa5e0a:
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
        
        if (r9 - rax_9 + 0x1f s> r10)
            var_44.d = r10
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_44:4.d = r9
            var_58 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r11_1 + (rcx_1 << 2) + 4)
            int32_t var_48_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141fa5e0a
        
        var_44.d = r10

int64_t* rdx_3 = arg1
int128_t var_30 = var_58.o
int64_t var_20 = 0xffffffff

if (0 s< r10)
    int32_t rcx_3 = 0
    
    while (true)
        sub_1422b5230(sx.q(rcx_3) * 0xd8 + 8 + *rdx_3)
        var_20.d &= not.d(var_30:4.d)
        sub_14059bdd0(&var_30)
        rcx_3 = var_20:4.d
        
        if (rcx_3 s>= *(var_30:8.q + 0x18))
            break
        
        rdx_3 = arg1

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140ac1010(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_10 = arg1[4]

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = *arg1

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
