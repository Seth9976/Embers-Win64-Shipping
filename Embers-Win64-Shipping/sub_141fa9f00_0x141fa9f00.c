// 函数: sub_141fa9f00
// 地址: 0x141fa9f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r15 = *(arg1 + 0xe29)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t rbx = 0
*(arg1 + 0x1108) = 0

if (*(arg1 + 0x110c) s<= 0xffffffff)
    sub_1405a5220(arg1 + 0x1100, 0)

void* r11 = *(arg1 + 0x150)
int32_t rcx_2 = 0
int32_t* r8 = r11 + 0x10
*(arg1 + 0x1110) = 0
int32_t r10 = r8[6]
int32_t var_88 = 0
int32_t var_84 = 1
int32_t* var_80 = r8
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r10 != 0)
    int32_t* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r8
    
    if (rdx_3 != 0)
    label_141fa9fc6:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = rcx_2 - rax_9 + 0x1f
        
        if (rcx_2 - rax_9 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rbx)
            rcx_2 += 0x20
            rbx += 1
            var_74:4.d = rcx_2
            var_88 = rbx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r8[rdx_4 + 1]
            var_78 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141fa9fc6
        
        var_74.d = r10

void* var_20 = r11
int16_t var_50 = 0
double zmm3[0x2] = var_88.o
double zmm0[0x2] = 0xffffffff
double result = zmm3[0]
var_78.o = zmm3
var_88.o = r11.o
zmm0[0] = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_30 = zmm0
double var_68[0x2] = zmm0

if (0 s< *(result i+ 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int32_t* rbx_1 = sx.q(i) * 0x38
        int64_t rdi_1 = *var_88.q
        
        if (r15 == 0 || (*(rbx_1 + rdi_1 + 0x28) & 0x10) != 0)
            int32_t rax_13 = *(rbx_1 + rdi_1)
            
            if (rax_13 != 0)
                int64_t r14_1 = sx.q(*(arg1 + 0x1108))
                void* var_48
                var_48.d = rax_13
                double var_40_1[0x2] = *(rbx_1 + rdi_1 + 8)
                int32_t rax_14 = (r14_1 + 1).d
                zmm0 = zx.o(*(rbx_1 + rdi_1 + 0x28))
                double var_30_1[0x2] = *(rbx_1 + rdi_1 + 0x18)
                *(arg1 + 0x1108) = rax_14
                int64_t var_20_1 = zmm0.q
                
                if (rax_14 s> *(arg1 + 0x110c))
                    sub_1405c4f50(arg1 + 0x1100)
                
                int64_t rax_15 = *(arg1 + 0x1100)
                int64_t rcx_6 = r14_1 * 6
                *(rax_15 + (rcx_6 << 3)) = var_48.o
                *(rax_15 + (rcx_6 << 3) + 0x10) = var_40_1
                *(rax_15 + (rcx_6 << 3) + 0x20) = var_30_1
                *(rbx_1 + rdi_1 + 0x28) &= 0xef
        
        var_74:4.d &= not.d(var_80:4.d)
        sub_14059bdd0(&var_80)
        result = var_78.q
        i = i_1
    while (i s< *(result i+ 0x18))
    
    if (var_50.b != 0 && var_50:1.b != 0)
        return sub_140aecff0(r11, *(r11 + 8) - *(r11 + 0x34), 1)

return result
