// 函数: sub_14104c100
// 地址: 0x14104c100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
int32_t r11 = *(arg1 + 0x58)
void* r9 = arg1 + 0x40
double (* rdi)[0x2] = nullptr
int32_t var_64 = 1
void* var_60 = r9
int32_t rcx_1 = 0
int32_t var_68 = 0
int32_t r8 = 0
int32_t var_58 = 0xffffffff
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
    label_14104c1a8:
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
                goto label_14104c1a8
        
        var_54.d = r11

int128_t var_28 = 0xffffffff
double var_38[0x2] = var_68.o
var_68.o = (arg1 + 0x30).o
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_38

if (0 s< r11)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* r8_2 = var_68.q
        
        if (*(*r8_2 + sx.q(i) * 0x30 + 0x20) == arg3)
            rdi = sx.q(i) * 0x30 + *r8_2
            break
        
        var_54:4.d &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        i = i_1
    while (i s< *(var_58.q + 0x18))

double zmm1[0x2] = rdi[1]
*arg2 = *rdi
arg2[1] = zmm1

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return arg2
