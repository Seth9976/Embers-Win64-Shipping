// 函数: sub_14213f790
// 地址: 0x14213f790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_74 = 1
int32_t var_68 = 0xffffffff
int32_t r11 = *(arg1 + 0xb0)
void* r9 = arg1 + 0x98
void* var_70 = r9
int32_t rcx = 0
int32_t var_78 = 0
int32_t r8 = 0
int64_t var_64 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_14213f828:
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
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_64.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14213f828
        
        var_64.d = r11

double zmm4[0x2] = var_68.o
int64_t* var_10 = arg1 + 0x88
int16_t var_40 = 0
double zmm3[0x2] = var_78.o
double result = zmm3[0]
var_68.o = zmm3
var_78.o = (arg1 + 0x88).o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_58[0x2] = zmm4

if ((rcx_2 u>> 0x20).d s< *(result i+ 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        uint64_t* rcx_6 = *(*var_78.q + sx.q(i) * 0x18 + 8) + 0x18
        rcx_6[1].d = 0
        
        if (*(rcx_6 + 0xc) != 0)
            sub_1405dadb0(rcx_6, 0)
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        result = var_68.q
        i = i_1
    while (i s< *(result i+ 0x18))
    
    if (var_40.b != 0 && var_40:1.b != 0)
        return sub_1405b6470(arg1 + 0x88, *(arg1 + 0x90) - *(arg1 + 0xbc), 1)

return result
