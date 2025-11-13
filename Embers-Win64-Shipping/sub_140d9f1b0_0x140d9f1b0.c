// 函数: sub_140d9f1b0
// 地址: 0x140d9f1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_64 = 1
int32_t r10 = arg1[5].d
void* var_60 = &arg1[2]
int32_t rcx = 0
int32_t var_68 = 0
int32_t r8 = 0
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

if (r10 != 0)
    void* rax_1 = arg1[4]
    void* r9_1 = &arg1[2]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140d9f258:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
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
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_54.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_54:4.d = r8
            var_68 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140d9f258
        
        var_54.d = r10

uint64_t* var_40 = arg1
int128_t var_20 = 0xffffffff
double var_30[0x2] = var_68.o
var_68.o = arg1.o
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_30

if (0 s< r10)
    int32_t i_2
    int32_t i = i_2
    
    do
        int64_t* rdi_1 = *(*var_68.q + sx.q(i) * 0x10)
        
        if (rdi_1 != 0)
            int64_t rcx_3 = *rdi_1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            j_sub_140a74f90(rdi_1)
        
        var_54:4.d &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        i = i_2
    while (i s< *(var_58.q + 0x18))

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405a5410(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
sub_14059a8e0(&arg1[2], 0)
void* result = zx.q(arg1[9].d)

if (result.d s> 0)
    int64_t r8_2 = 0
    uint64_t i_3 = zx.q(result.d)
    uint64_t i_1
    
    do
        void* result_1 = arg1[8]
        result = &arg1[7]
        int64_t rdx_10 = (sx.q(arg1[9].d) - 1) & r8_2
        
        if (result_1 != 0)
            result = result_1
        
        r8_2 += 1
        *(result + (rdx_10 << 2)) = 0xffffffff
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

arg1[0xa] = 0
arg1[0xb] = 0
return result
