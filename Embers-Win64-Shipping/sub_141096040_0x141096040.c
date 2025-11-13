// 函数: sub_141096040
// 地址: 0x141096040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int32_t var_68 = 0xffffffff
int64_t var_64 = 0
int32_t r10 = arg1[5].d
void* var_70 = &arg1[2]
int32_t rcx = 0
int32_t var_78 = 0
int32_t rsi = 1
int32_t var_74 = 1
int32_t r8 = 0

if (r10 != 0)
    void* rax_1 = arg1[4]
    void* r9_1 = &arg1[2]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_1410960e7:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
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
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_64.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_68_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1410960e7
        
        var_64.d = r10

uint64_t* rdx_4 = arg1
int128_t var_50 = var_78.o
int64_t var_40 = 0xffffffff

if (0 s< r10)
    int32_t rcx_2 = 0
    
    while (true)
        sub_1405ec8a0((sx.q(rcx_2) << 5) + 0x10 + *rdx_4)
        var_40.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        rcx_2 = var_40:4.d
        
        if (rcx_2 s>= *(var_50:8.q + 0x18))
            break
        
        rdx_4 = arg1

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1405a51b0(arg1, arg2)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
sub_14059a8e0(&arg1[2], arg2)

if (arg2 u>= 4)
    uint32_t rax_15 = arg2 u>> 1
    uint64_t rflags_2
    int32_t temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_15 + 8)
    int32_t rcx_10
    
    if (rax_15 == 0xfffffff8)
        rcx_10 = 0x20
    else
        rcx_10 = 0x1f - temp0_3
    
    uint64_t rflags_3
    char temp0_4
    temp0_4, rflags_3 = _bit_scan_reverse(rax_15 + 7)
    char r12_1
    
    if (rax_15 == 0xfffffff9)
        r12_1 = 0x20
    else
        r12_1 = 0x1f - temp0_4
    
    rsi = 1 << ((not.d(rcx_10 << 0x1a s>> 0x1f)).b & (0x20 - r12_1))

if (arg2 s> 0)
    int32_t rax_18 = arg1[9].d
    
    if (rax_18 == 0 || rax_18 s< rsi || rax_18 s> rsi)
        arg1[9].d = rsi
        return sub_1410ae780(arg1)

void* result = zx.q(arg1[9].d)

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        void* result_1 = arg1[8]
        result = &arg1[7]
        int64_t rdx_11 = (sx.q(arg1[9].d) - 1) & rdi
        
        if (result_1 != 0)
            result = result_1
        
        rdi += 1
        *(result + (rdx_11 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
