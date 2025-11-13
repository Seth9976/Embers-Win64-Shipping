// 函数: sub_141fc6ee0
// 地址: 0x141fc6ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *(arg1 + 0x28)

if (r14 == 0)
    if (((*(arg1 + 8) u>> 4).b & 1) == 0)
        sub_140d21d80(arg1)
        sub_140cde0b0()
    
    int64_t* rax_3
    rax_3, arg3 = sub_142499390()
    r14 = rax_3

int32_t arg_8 = *(arg1 + 0x38) - *(arg1 + 0x64)
int64_t* r9 = *(*arg2 + 8)
int64_t* rdx = r9[1]
int32_t* rax_4 = *rdx

if (&rax_4[1] u> rdx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(r9 + 0x29) & 0x20) != 0)
        sub_140b54070(r9, rdx_1, arg3)
    else
        (*(*r9 + 0x150))(r9, rdx_1, 4)
else
    arg_8 = *rax_4
    int64_t* rax_6 = r9[1]
    *rax_6 += 4

int32_t rcx_5 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t r11 = *(arg1 + 0x58)
void* r9_1 = arg1 + 0x40
void* var_80 = r9_1
int32_t r8 = 0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r11 != 0)
    void* rax_8 = *(r9_1 + 0x10)
    
    if (rax_8 != 0)
        r9_1 = rax_8
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_141fc6ff8:
        int32_t rax_15 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
        int32_t var_84_1 = rax_15
        int32_t rax_16
        
        if (rax_15 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - temp0_2
        
        var_74.d = r8 - rax_16 + 0x1f
        
        if (r8 - rax_16 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_5)
            r8 += 0x20
            rcx_5 += 1
            var_74:4.d = r8
            var_88 = rcx_5
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141fc6ff8
        
        var_74.d = r11

void* var_20 = arg1 + 0x30
int128_t zmm0 = var_88.o
int128_t var_30 = 0xffffffff
int16_t var_50 = 0
void* result = zmm0.q
var_78.o = zmm0
arg3.o = 0xffffffff
var_88.o = (arg1 + 0x30).o
arg3.o = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
zmm0.q = (arg3.o).q
int128_t var_68 = zmm0

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* rdi_2 = var_88.q
        int64_t rsi_1 = sx.q(i) * 0x18
        void* rax_20 = *arg2
        int64_t arg_10 = *(rsi_1 + *rdi_2)
        int64_t* rcx_9 = *(rax_20 + 8)
        (*(*rcx_9 + 0x140))(rcx_9, &arg_10)
        sub_140ca6840(r14, arg2, *(rsi_1 + *rdi_2 + 8), 0)
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        result = var_78.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        return sub_1405b6730(arg1 + 0x30, *(arg1 + 0x38) - *(arg1 + 0x64), 1)

return result
