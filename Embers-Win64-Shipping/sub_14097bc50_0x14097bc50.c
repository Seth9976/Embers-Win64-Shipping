// 函数: sub_14097bc50
// 地址: 0x14097bc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t var_b4 = 1
int32_t var_a8 = 0xffffffff
int128_t zmm7
zmm7.q = float.d(performanceCount)
int64_t var_a4 = 0
int32_t r11 = *(arg1 + 0x118)
void* r9 = arg1 + 0x100
void* var_b0 = r9
int32_t rcx_1 = 0
int32_t var_b8 = 0
int32_t r8 = 0
zmm7.q = zmm7.q f* data_143d796f8
zmm7.q = zmm7.q f+ 16777216.0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_14097bd18:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t arg_8 = temp0_2
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_a4:4.d = r8
            var_b8 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14097bd18
        
        var_a4.d = r11

void* var_30 = arg1 + 0xf0
int128_t zmm0 = var_b8.o
int128_t var_40 = 0xffffffff
char var_60 = 0
void* result = zmm0.q
int128_t var_88 = zmm0
int128_t var_98 = (arg1 + 0xf0).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = zmm0

if (0 s< *(result + 0x18))
    int32_t i = var_88:0xc.d
    int128_t zmm6
    int128_t var_18_1 = zmm6
    
    do
        void* rbx_3 = sx.q(i) * 0x118 + *var_98.q
        void* rcx_3 = *(rbx_3 + 0x38)
        zmm6.q = zmm7.q f- *(rbx_3 + 0x28)
        
        if (rcx_3 == 0)
        label_14097bdf5:
            
            if (not(zmm6.q f< fconvert.d(sub_14075a020())))
                sub_1409767c0(rbx_3 + 0x18)
        else
            void* rcx_4 = *(rcx_3 + 0x6e8)
            
            if (rcx_4 == 0)
                if (*(rbx_3 + 0x49) == 0)
                    goto label_14097bdf5
                
                sub_1409767c0(rbx_3 + 0x18)
            else
                bool z_1
                
                if (0 == *(rcx_4 + 0x14))
                    *(rcx_4 + 0x14) = 0
                    z_1 = true
                else
                    *(rcx_4 + 0x14)
                    z_1 = false
                
                if (z_1 || *(rbx_3 + 0x49) == 0)
                    goto label_14097bdf5
                
                sub_1409767c0(rbx_3 + 0x18)
        
        var_88:8.d &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)
        result = var_88.q
        i = var_88:0xc.d
    while (i s< *(result + 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        return sub_1409562a0(arg1 + 0xf0, *(arg1 + 0xf8) - *(arg1 + 0x124), 1)

return result
