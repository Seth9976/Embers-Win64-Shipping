// 函数: sub_141239530
// 地址: 0x141239530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = &__return_addr
int32_t rbx = 0

if (arg3 != 0)
    int32_t i = 0
    
    if (*(arg2 + 0xdc0) s> 0)
        int64_t* r15_1 = nullptr
        
        do
            void* r10_1 = *(r15_1 + *(arg2 + 0xdb8))
            rax_1 = *(arg1 + 0x128)
            void* const rcx_4
            
            if (rax_1 == *(arg1 + 0x154))
            label_1412395f0:
                rcx_4 = nullptr
            else
                void* r8 = arg1 + 0x158
                void* rdx = *(r8 + 8)
                int64_t r9_1 = sx.q(*(r10_1 + 0x10))
                
                if (rdx != 0)
                    r8 = rdx
                
                rax_1 = *(r8 + (((sx.q(*(arg1 + 0x168)) - 1) & r9_1) << 2))
                
                if (rax_1 == 0xffffffff)
                label_1412395f0_1:
                    rcx_4 = nullptr
                else
                    int64_t r8_1 = *(arg1 + 0x120)
                    
                    while (true)
                        int64_t rdx_1 = sx.q(rax_1) * 3
                        rcx_4 = r8_1 + (rdx_1 << 3)
                        
                        if (*(r8_1 + (rdx_1 << 3)) == r9_1.d)
                            break
                        
                        rax_1 = *(rcx_4 + 0x10)
                        
                        if (rax_1 == 0xffffffff)
                            goto label_1412395f0_2
                    
                    if (rax_1 == 0xffffffff)
                    label_1412395f0_2:
                        rcx_4 = nullptr
            
            void* rdi_1 = rcx_4 + 8
            
            if (rcx_4 == 0)
                rdi_1 = nullptr
            
            if (rdi_1 != 0)
                void* rdi_2 = *rdi_1
                
                if (rdi_2 != 0)
                    rax_1 = sub_1422a66f0(arg3, *(r10_1 + 8) + 0xc0)
                    
                    if (rax_1.b != 0)
                        *(rdi_2 + 0x182) = 1
                        *(rdi_2 + 0x180) = 0
            
            i += 1
            r15_1 = &r15_1[1]
        while (i s< *(arg2 + 0xdc0))
    
    return rax_1

int32_t var_98 = 0
int32_t r9_2 = *(arg1 + 0x148)
void* r8_2 = arg1 + 0x130
int32_t var_94 = 1
int32_t rcx_6 = 0
void* var_90 = r8_2
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r9_2 != 0)
    void* rax_2 = *(r8_2 + 0x10)
    
    if (rax_2 != 0)
        r8_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9_2 - 1)
    int32_t rdx_6 = *r8_2
    
    if (rdx_6 != 0)
    label_1412396e6:
        int32_t rax_9 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_94_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_84.d = rcx_6 - rax_10 + 0x1f
        
        if (rcx_6 - rax_10 + 0x1f s> r9_2)
            var_84.d = r9_2
    else
        while (true)
            int64_t rdx_7 = sx.q(rbx)
            rcx_6 += 0x20
            rbx += 1
            var_84:4.d = rcx_6
            var_98 = rbx
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r8_2 + (rdx_7 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_1412396e6
        
        var_84.d = r9_2

void* var_30 = arg1 + 0x120
int128_t zmm0 = var_98.o
int128_t var_40 = 0xffffffff
char var_60 = 0
void* rax_12 = zmm0.q
var_88.o = zmm0
var_98.o = (arg1 + 0x120).o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_78 = zmm0

if (0 s< *(rax_12 + 0x18))
    int32_t i_2
    int32_t i_1 = i_2
    
    do
        int64_t* rdx_9 = var_98.q
        int64_t r8_3 = sx.q(i_1) * 0x18
        *(*(r8_3 + *rdx_9 + 8) + 0x182) = 1
        var_84:4.d &= not.d(var_90:4.d)
        *(*(r8_3 + *rdx_9 + 8) + 0x180) = 0
        sub_14059bdd0(&var_90)
        rax_12 = var_88.q
        i_1 = i_2
    while (i_1 s< *(rax_12 + 0x18))
    
    char var_5f
    
    if (var_60 != 0 && var_5f != 0)
        rax_12 = sub_140b9ddc0(arg1 + 0x120, *(arg1 + 0x128) - *(arg1 + 0x154), 1)

*(arg1 + 0x10) = 1
return rax_12
