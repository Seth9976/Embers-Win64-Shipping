// 函数: sub_14189c550
// 地址: 0x14189c550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14_1 = *(arg1 + 8) - *(arg1 + 0x34)
int32_t i_3 = arg2[1].d
int64_t* rdi = *arg2

if (i_3 != 0)
    int32_t i
    
    do
        if (*rdi != 0)
            void* rax_1 = rdi[2]
            void* rcx = &rdi[4]
            
            if (rax_1 != 0)
                rcx = rax_1
            
            (*(*rcx + 0x10))(rcx)
        
        rdi = &rdi[8]
        i = i_3
        i_3 -= 1
    while (i != 1)

arg2[1].d = 0

if (*(arg2 + 0xc) != r14_1)
    sub_1405a52a0(arg2, r14_1)

int32_t r10 = *(arg1 + 0x28)
void* r9 = arg1 + 0x10
int32_t var_64 = 1
int32_t rcx_2 = 0
int32_t var_68 = 0
int32_t r8 = 0
void* var_60 = r9
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

if (r10 != 0)
    void* rax_3 = *(r9 + 0x10)
    
    if (rax_3 != 0)
        r9 = rax_3
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_14189c638:
        int32_t rax_10 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_64_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_1
        
        var_54.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r10)
            var_54.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_54:4.d = r8
            var_68 = rcx_2
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14189c638
        
        var_54.d = r10

int128_t var_28 = 0xffffffff
int128_t var_38 = var_68.o
var_68.o = arg1.o
void* result = nullptr
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_38

if (0 s< r10)
    int32_t i_2
    int32_t i_1 = i_2
    
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int32_t rax_13 = (rdi_1 + 1).d
        arg2[1].d = rax_13
        
        if (rax_13 s> *(arg2 + 0xc))
            sub_1405c4fe0(arg2)
        
        int64_t rax_15 = rdi_1 << 6
        int64_t* rax_16 = rax_15 + *arg2
        
        if (rax_15 != neg.q(*arg2))
            int64_t r8_3 = sx.q(i_1) * 0x60
            void* rdx_6 = *var_68.q
            *rax_16 = *(r8_3 + rdx_6 + 0x10)
            rax_16[2] = 0
            
            if (*rax_16 != 0)
                int64_t* rax_17 = *(r8_3 + rdx_6 + 0x20)
                int64_t* rcx_9 = rdx_6 + 0x30 + r8_3
                
                if (rax_17 != 0)
                    rcx_9 = rax_17
                
                (**rcx_9)(rcx_9, &rax_16[2])
        
        var_54:4.d &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        result = var_58.q
        i_1 = i_2
    while (i_1 s< *(result + 0x18))

return result
