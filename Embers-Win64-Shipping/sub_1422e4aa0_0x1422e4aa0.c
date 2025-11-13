// 函数: sub_1422e4aa0
// 地址: 0x1422e4aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a4 = 1
int32_t r11 = *(arg1 + 0x88)
void* r9 = arg1 + 0x70
int32_t var_98 = 0xffffffff
int32_t r10 = arg2
void* var_a0 = r9
void* rdx = arg1
int32_t r8 = 0
int32_t r14 = 0
int32_t rcx = 0
int32_t var_a8 = 0
int64_t var_94 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1422e4b48:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94.d = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_94:4.d = rcx
            var_a8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1422e4b48
        
        var_94.d = r11
    
    r10 = arg2
    rdx = arg1

double zmm4[0x2] = var_98.o
int64_t* var_40 = arg1 + 0x60
double var_60[0x2] = var_a8.o
int16_t var_70 = 0
int128_t var_58
uint64_t result = var_58.q
var_98.o = var_58
var_a8.o = (arg1 + 0x60).o
double rcx_2 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
double var_88[0x2] = zmm4

if ((rcx_2 u>> 0x20).d s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        result = zx.q(*(rdx + 0x68) - *(rdx + 0x94))
        
        if (r14 s>= result.d)
            break
        
        if (r14 == r10)
            int64_t* r12_1 = var_a8.q
            int64_t r15_1 = sx.q(i) * 0x28
            int64_t* rcx_6 = *r12_1 + r15_1
            
            if (arg3 != rcx_6)
                int32_t rdi_1 = rcx_6[1].d
                int64_t r13_1 = *rcx_6
                int32_t r8_1 = *(arg3 + 0xc)
                arg3[1].d = rdi_1
                
                if (rdi_1 != 0 || r8_1 != 0)
                    sub_1405a4c70(arg3, rdi_1, r8_1)
                    memcpy(*arg3, r13_1, rdi_1 * 2)
                else
                    *(arg3 + 0xc) = rdi_1
            
            int64_t* rcx_11 = *r12_1 + 0x10 + r15_1
            
            if (arg4 != rcx_11)
                int32_t rdi_2 = rcx_11[1].d
                int64_t r15_2 = *rcx_11
                int32_t r8_4 = *(arg4 + 0xc)
                arg4[1].d = rdi_2
                
                if (rdi_2 != 0 || r8_4 != 0)
                    sub_1405a4c70(arg4, rdi_2, r8_4)
                    memcpy(*arg4, r15_2, rdi_2 * 2)
                else
                    *(arg4 + 0xc) = rdi_2
        
        var_94:4.d &= not.d(var_a0:4.d)
        sub_14059bdd0(&var_a0)
        result = var_98.q
        r14 += 1
        i = i_1
        rdx = arg1
        r10 = arg2
    while (i s< *(result + 0x18))
    
    if (var_70.b != 0 && var_70:1.b != 0)
        r8.b = 1
        return sub_1405e1160(arg1 + 0x60, *(arg1 + 0x68) - *(arg1 + 0x94), r8.b)

return result
