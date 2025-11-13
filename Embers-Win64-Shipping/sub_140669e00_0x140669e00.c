// 函数: sub_140669e00
// 地址: 0x140669e00
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
    label_140669e9a:
        int32_t rax_7 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_54_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_44.d = r9 - rax_8 + 0x1f
        
        if (r9 - rax_8 + 0x1f s> r10)
            var_44.d = r10
    else
        while (true)
            r8 += 1
            r9 += 0x20
            var_58 = r8
            var_44:4.d = r9
            
            if (r8 s> ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            int32_t var_48_1 = 0xffffffff
            rcx = *(r11_1 + (sx.q(r8) << 2))
            
            if (rcx != 0)
                goto label_140669e9a
        
        var_44.d = r10

int64_t* rdx_5 = arg1
int128_t var_30 = var_58.o
int64_t var_20 = 0xffffffff

if (0 s< r10)
    int32_t rcx_2 = 0
    
    while (true)
        int64_t rcx_4 = *(*rdx_5 + sx.q(rcx_2) * 0x18)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        var_20.d &= not.d(var_30:4.d)
        sub_14059bdd0(&var_30)
        rcx_2 = var_20:4.d
        
        if (rcx_2 s>= *(var_30:8.q + 0x18))
            break
        
        rdx_5 = arg1

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405a5130(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
void* result = sub_14059a8e0(&arg1[2], 0)
int64_t rcx_8 = arg1[4]

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = *arg1

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
