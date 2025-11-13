// 函数: sub_141a43860
// 地址: 0x141a43860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r11 = arg1[8].d
void* r10 = &arg1[5]
void* var_90 = r10
int32_t var_88 = 0xffffffff
int64_t var_84 = 0
int32_t r8 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_141a438fa:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r9)
            r8 += 0x20
            r9 += 1
            var_84:4.d = r8
            var_98 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rcx != 0)
                goto label_141a438fa
        
        var_84.d = r11

void* var_30 = &arg1[3]
int128_t zmm0 = var_98.o
int128_t var_40 = 0xffffffff
char var_60 = 0
void* result = zmm0.q
var_88.o = zmm0
var_98.o = (&arg1[3]).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t* r14_1 = var_98.q
        int64_t rcx_3 = *(arg3 + 8)
        int64_t rsi_1 = sx.q(i) * 0x38
        void* rdx_3 = *r14_1 + rsi_1
        char arg_8 = *(rdx_3 + 0x2c)
        
        if ((*arg3)(rcx_3, rdx_3 + 0x14, &arg_8, rdx_3 + 0x10, var_98) != 0)
            int64_t rax_14 = sub_140d3c6e0(*r14_1 + 0x24 + rsi_1)
            
            if (rax_14 != 0)
                int64_t r8_4 = *r14_1 + rsi_1
                (*(*arg1 + 0x18))(arg1, rax_14, r8_4, r8_4 + 0x10)
                int64_t r8_5 = *arg1
                (*(r8_5 + 0x10))(arg1, rax_14, r8_5)
            
            sub_141a612d0(zmm0:8.q, i)
            var_60 = 1
        
        var_84:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        result = var_88.q
        i = i_1
    while (i s< *(result + 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        return sub_141a40850(&arg1[3], arg1[4].d - *(arg1 + 0x4c), 1)

return result
