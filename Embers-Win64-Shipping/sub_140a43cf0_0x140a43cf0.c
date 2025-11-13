// 函数: sub_140a43cf0
// 地址: 0x140a43cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xd0)
int32_t var_64 = 1
int32_t var_58 = 0xffffffff
int32_t r11 = *(arg1 + 0x30)
void* r9 = arg1 + 0x18
void* var_60 = r9
int32_t rcx_1 = 0
int32_t var_68 = 0
int32_t r8 = 0
int64_t var_54 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_140a43da8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_54.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_54.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_54:4.d = r8
            var_68 = rcx_1
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140a43da8
        
        var_54.d = r11

double zmm2[0x2] = var_58.o
double var_28[0x2] = zmm2
double var_38[0x2] = var_68.o
var_68.o = (arg1 + 8).o
uint32_t rax_12 = (zmm2[0] u>> 0x20).d
int64_t var_48 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_58.o = var_38

if (rax_12 s>= r11)
label_140a43e52:
    *arg2 = 0
    arg2[1] = 0
else
    int32_t var_4c
    int32_t rdx_4 = var_4c
    
    while (true)
        int64_t rax_13 = *var_68.q
        
        if (*((sx.q(rdx_4) << 5) + rax_13 + 0x10) == arg3)
            sub_140596d10(arg2, (sx.q(rdx_4) << 5) + rax_13)
            break
        
        var_54:4.d &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        rdx_4 = var_4c
        
        if (rdx_4 s>= *(var_58.q + 0x18))
            goto label_140a43e52

if (arg1 != -0xd0)
    LeaveCriticalSection(arg1 + 0xd0)

return arg2
