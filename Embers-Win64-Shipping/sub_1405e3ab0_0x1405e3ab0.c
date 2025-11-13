// 函数: sub_1405e3ab0
// 地址: 0x1405e3ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = data_14395f3c8
void* r9 = &data_14395f3b0
int32_t var_a4 = 1
int32_t rcx = 0
void* var_a0 = &data_14395f3b0
int32_t r8 = 0
int32_t var_a8 = 0
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r10 != 0)
    void* rax_1 = data_14395f3c0
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1405e3b48:
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
        
        var_94.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_94.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_94:4.d = r8
            var_a8 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1405e3b48
        
        var_94.d = r10

int16_t var_70 = 0
int128_t var_50 = 0xffffffff
int64_t* var_40 = &data_14395f3a0
int128_t var_60 = var_a8.o
int64_t* var_78 = &data_14395f3a0
int128_t var_58
void* result = var_58.q
var_98.o = var_58
var_a8.o = (&data_14395f3a0).o
int128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_88 = zmm0

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    int64_t r13
    int64_t var_30_1 = r13
    
    do
        int64_t rcx_3 = sx.q(i) << 5
        int64_t* r8_4 = *var_a8.q + 8 + rcx_3
        int64_t* arg_18 = r8_4
        int64_t rcx_4 = sx.q(r8_4[1].d)
        
        if (rcx_4.d != 0)
            int32_t r12_1 = 0
            int32_t rdi_1 = 0
            int64_t rbx_1 = 0
            r13.b = **r8_4 != arg1
            
            do
                int64_t r9_1 = sx.q(rdi_1)
                rbx_1 += 1
                rdi_1 += 1
                
                if (rbx_1 s< rcx_4)
                    int64_t* rcx_5 = *r8_4 + (rbx_1 << 3)
                    
                    do
                        int32_t rax_14
                        rax_14.b = *rcx_5 != arg1
                        
                        if (zx.d(r13.b) != rax_14)
                            break
                        
                        rdi_1 += 1
                        rbx_1 += 1
                        rcx_5 = &rcx_5[1]
                    while (rbx_1 s< rcx_4)
                
                int32_t r14_2 = rdi_1 - r9_1.d
                
                if (r13.b != 0)
                    if (r12_1 != r9_1.d)
                        int64_t rcx_6 = *r8_4
                        memmove(rcx_6 + (sx.q(r12_1) << 3), rcx_6 + (r9_1 << 3), r14_2 << 3)
                        r8_4 = arg_18
                    
                    r12_1 += r14_2
                
                r13.b ^= 1
            while (rbx_1 s< rcx_4)
            
            r8_4[1].d = r12_1
            
            if (rcx_4.d != r12_1)
                sub_1405e39a0(arg1, *(*(rcx_3 + *var_a8.q) + 0x40))
                (*(*arg1 + 0x20))(arg1)
        
        var_94:4.d &= not.d(var_a0:4.d)
        sub_14059bdd0(&var_a0)
        result = var_98.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_70.b != 0 && var_70:1.b != 0)
        return sub_1405b6520(var_78, var_78[1].d - *(var_78 + 0x34), 1)

return result
