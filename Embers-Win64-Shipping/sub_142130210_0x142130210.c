// 函数: sub_142130210
// 地址: 0x142130210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = data_143a2e848
void* r9 = &data_143a2e830
int32_t var_94 = 1
int32_t rcx = 0
void* var_90 = &data_143a2e830
int32_t r8 = 0
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r10 != 0)
    void* rax_1 = data_143a2e840
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1421302a8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
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
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1421302a8
        
        var_84.d = r10

char var_60 = 0
int128_t zmm0 = var_98.o
int128_t var_40 = 0xffffffff
int64_t* var_30 = &data_143a2e820
int64_t* var_68 = &data_143a2e820
void* result = zmm0.q
var_88.o = zmm0
var_98.o = (&data_143a2e820).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = zmm0

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    int64_t r12
    int64_t var_18_1 = r12
    
    do
        int64_t* r8_4 = *var_98.q + 8 + (sx.q(i) << 5)
        int64_t* arg_10 = r8_4
        int64_t rcx_2 = sx.q(r8_4[1].d)
        
        if (rcx_2.d != 0)
            int32_t r15_1 = 0
            int32_t rdi_1 = 0
            int64_t rbx_1 = 0
            r12.b = **r8_4 != arg1
            
            do
                int64_t r9_1 = sx.q(rdi_1)
                rbx_1 += 1
                rdi_1 += 1
                
                if (rbx_1 s< rcx_2)
                    int64_t* rcx_3 = *r8_4 + (rbx_1 << 3)
                    
                    do
                        int32_t rax_14
                        rax_14.b = *rcx_3 != arg1
                        
                        if (zx.d(r12.b) != rax_14)
                            break
                        
                        rdi_1 += 1
                        rbx_1 += 1
                        rcx_3 = &rcx_3[1]
                    while (rbx_1 s< rcx_2)
                
                int32_t r14_2 = rdi_1 - r9_1.d
                
                if (r12.b != 0)
                    if (r15_1 != r9_1.d)
                        int64_t rcx_4 = *r8_4
                        memmove(rcx_4 + (sx.q(r15_1) << 3), rcx_4 + (r9_1 << 3), r14_2 << 3)
                        r8_4 = arg_10
                    
                    r15_1 += r14_2
                
                r12.b ^= 1
            while (rbx_1 s< rcx_2)
            
            r8_4[1].d = r15_1
        
        var_84:4.d &= not.d(var_90:4.d)
        sub_14059bdd0(&var_90)
        result = var_88.q
        i = i_1
    while (i s< *(result + 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        return sub_1405b6520(var_68, var_68[1].d - *(var_68 + 0x34), 1)

return result
