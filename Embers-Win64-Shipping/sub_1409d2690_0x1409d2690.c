// 函数: sub_1409d2690
// 地址: 0x1409d2690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
void* r12_1 = &arg1[5][0x23]
int32_t var_78 = 0
int32_t rdi = *(r12_1 + 0x28)
void* r9 = r12_1 + 0x10
int32_t var_74 = 1
void* var_70 = r9
int32_t rcx = 0
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int32_t var_60 = 0

if (rdi != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_2 = *r9
    int32_t var_64_2
    
    if (rdx_2 != 0)
    label_1409d2746:
        int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_64_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rdi)
            var_64_2 = rdi
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_60 = rcx
            var_78 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1409d2746
        
        var_64_2 = rdi

int32_t rsi = *(r12_1 + 0x28)
int32_t r15 = *(r12_1 + 0x28)
int128_t var_48 = var_78.o
int32_t r8_2 = rsi s>> 5
int32_t r9_2 = rsi & 0xffffffe0
int128_t var_38 = 0xffffffff
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_78.o = r12_1.o
var_68.o = var_48

if (rsi != r15)
    void* rax_11 = *(r12_1 + 0x20)
    void* r10_1 = r12_1 + 0x10
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r15 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_2) << 2)) & 0xffffffff << (rsi.b & 0x1f)
    
    if (rdx_8 != 0)
    label_1409d280c:
        int32_t rax_18 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r14_1
        
        if (rax_18 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_4
        
        rsi = r9_2 - r14_1 + 0x1f
        
        if (rsi s> r15)
            rsi = r15
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_2 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            
            if (rdx_8 != 0)
                goto label_1409d280c
        
        rsi = r15

TEB* gsbase
void* r14_2 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)

while (true)
    int64_t rcx_8 = var_68.q
    int32_t result
    
    if (result == rsi && rcx_8 == r12_1 + 0x10 && var_78.q == r12_1)
        return result
    
    int32_t result_1 = data_143a1c6c4
    
    if (result s< *(rcx_8 + 0x18))
        result_1 = result
    
    if (data_143ceef60 s> *(0x14 + *r14_2))
        _Init_thread_header(&data_143ceef60)
        
        if (data_143ceef60 == 0xffffffff)
            atexit(sub_142cb8c40)
            _Init_thread_footer(&data_143ceef60)
    
    sub_1409d2940(arg1, result_1, &data_143ceef50)
    int64_t rdi_1 = sx.q(data_143ceef58)
    
    if (rdi_1.d != 0)
        int32_t rax_23 = arg2[1].d
        int32_t rdx_10 = rax_23 + rdi_1.d
        
        if (rdx_10 s> *(arg2 + 0xc))
            sub_1405dadb0(arg2, rdx_10)
            rax_23 = arg2[1].d
        
        memcpy(*arg2 + (sx.q(rax_23) << 2), data_143ceef50, (rdi_1 << 2).d)
        arg2[1].d += rdi_1.d
    
    var_60 &= not.d(var_70:4.d)
    sub_14059bdd0(&var_70)
