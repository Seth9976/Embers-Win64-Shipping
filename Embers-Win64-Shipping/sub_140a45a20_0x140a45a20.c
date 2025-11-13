// 函数: sub_140a45a20
// 地址: 0x140a45a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = EnterCriticalSection(arg1 + 0xd0)
int32_t rcx_1 = 0
int32_t var_54 = 1
int32_t var_58 = 0
int32_t r11 = *(arg1 + 0x30)
void* r9 = arg1 + 0x18
int32_t r8 = 0
void* var_50 = r9
int32_t var_48 = 0xffffffff
int64_t var_44 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    rdx = zx.q(*r9)
    
    if (rdx.d != 0)
    label_140a45ad8:
        int32_t rax_8 = neg.d(rdx.d) & rdx.d
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_44.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_44.d = r11
    else
        while (true)
            rdx = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_44:4.d = r8
            var_58 = rcx_1
            
            if (rdx.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx = zx.q(*(r9 + (rdx << 2) + 4))
            var_48 = 0xffffffff
            
            if (rdx.d != 0)
                goto label_140a45ad8
        
        var_44.d = r11

int128_t var_18 = 0xffffffff
double var_28[0x2] = var_58.o
var_58.o = (arg1 + 8).o
void* result = nullptr
int64_t var_38 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48.o = var_28

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* r11_3 = (sx.q(i) << 5) + *var_58.q
        int32_t rdi_2 = r11_3[1].d
        int16_t* const r10_1
        
        if (rdi_2 == 0)
            r10_1 = &data_142d40450
        else
            r10_1 = *r11_3
        
        int16_t j = *arg3
        int16_t* rax_12 = arg3
        
        while (j != 0)
            uint32_t r8_2 = zx.d(*(rax_12 + r10_1 - arg3))
            rdx.w = sbb.w(rdx.w, rdx.w, zx.d(j) - 0x41 u< 0x1a)
            rdx.w &= 0x20
            rdx.w += j
            int32_t rcx_5
            rcx_5.w = sbb.w((r8_2 - 0x41).w, (r8_2 - 0x41).w, r8_2 - 0x41 u< 0x1a)
            rcx_5.w &= 0x20
            rcx_5.w += r8_2.w
            
            if (rcx_5.w != rdx.w)
                goto label_140a45c01
            
            j = rax_12[1]
            rax_12 = &rax_12[1]
        
        int16_t* const rdx_3
        
        if (rdi_2 == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *r11_3
        
        int64_t* rcx_6
        
        if (arg2[1].d == 0)
            rcx_6 = nullptr
        else
            rcx_6 = *arg2
        
        (*(*rcx_6 + 0x48))(rcx_6, rdx_3, r11_3[2])
    label_140a45c01:
        var_44:4.d &= not.d(var_50:4.d)
        rdx = sub_14059bdd0(&var_50)
        result = var_48.q
        i = i_1
    while (i s< *(result + 0x18))

if (arg1 == -0xd0)
    return result

return LeaveCriticalSection(arg1 + 0xd0)
