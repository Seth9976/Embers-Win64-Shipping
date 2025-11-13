// 函数: sub_141224ad0
// 地址: 0x141224ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg1[5].d
void* rdi = &arg1[2]
int64_t r14 = 0
void* var_70 = rdi
int32_t var_78 = 0
int32_t var_68 = 0xffffffff
int32_t r15 = 1
int32_t var_74 = 1
int32_t rcx = 0
int32_t var_64 = 0
int32_t var_60 = 0
int32_t r8 = 0

if (r10 != 0)
    void* rax_1 = *(rdi + 0x10)
    void* r9_1 = rdi
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9_1
    int32_t var_64_2
    
    if (rdx_2 != 0)
    label_141224b88:
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
        
        int32_t var_64_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_64_2 = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_60_1 = rcx
            var_78 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_68_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141224b88
        
        var_64_2 = r10

uint64_t* rdx_5 = arg1
uint64_t* var_58 = rdx_5
int128_t var_50 = var_78.o
int64_t var_40 = 0xffffffff

if (0 s< r10)
    int32_t rcx_2 = 0
    
    while (true)
        int64_t* rdi_4 = (sx.q(rcx_2) << 6) + 0x30 + *rdx_5
        int64_t* rcx_3 = *rdi_4
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3)
        
        for (int64_t i = 3; i != 0; )
            int64_t* rcx_4 = rdi_4[-1]
            rdi_4 = &rdi_4[-1]
            i -= 1
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x38))(rcx_4)
        
        var_40.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        rcx_2 = var_40:4.d
        
        if (rcx_2 s>= *(var_50:8.q + 0x18))
            break
        
        rdx_5 = var_58
    
    rdi = &arg1[2]

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_1405a52a0(arg1, arg2)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
sub_14059a8e0(rdi, arg2)

if (arg2 u>= 4)
    uint32_t rax_17 = arg2 u>> 1
    uint64_t rflags_2
    int32_t temp0_3
    temp0_3, rflags_2 = _bit_scan_reverse(rax_17 + 8)
    int32_t rcx_8
    
    if (rax_17 == 0xfffffff8)
        rcx_8 = 0x20
    else
        rcx_8 = 0x1f - temp0_3
    
    uint64_t rflags_3
    char temp0_4
    temp0_4, rflags_3 = _bit_scan_reverse(rax_17 + 7)
    char rbx_1
    
    if (rax_17 == 0xfffffff9)
        rbx_1 = 0x20
    else
        rbx_1 = 0x1f - temp0_4
    
    r15 = 1 << ((not.d(rcx_8 << 0x1a s>> 0x1f)).b & (0x20 - rbx_1))

if (arg2 s> 0)
    int32_t rax_20 = arg1[9].d
    
    if (rax_20 == 0 || rax_20 s< r15 || rax_20 s> r15)
        arg1[9].d = r15
        return sub_140837330(arg1)

void* result = zx.q(arg1[9].d)

if (result.d s> 0)
    uint64_t i_2 = zx.q(result.d)
    uint64_t i_1
    
    do
        void* result_1 = arg1[8]
        result = &arg1[7]
        int64_t rdx_12 = (sx.q(arg1[9].d) - 1) & r14
        
        if (result_1 != 0)
            result = result_1
        
        r14 += 1
        *(result + (rdx_12 << 2)) = 0xffffffff
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
