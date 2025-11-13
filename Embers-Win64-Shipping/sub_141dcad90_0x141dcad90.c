// 函数: sub_141dcad90
// 地址: 0x141dcad90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0

if (arg2[1].d != *(arg2 + 0x34))
    int32_t rax_1 = *(arg2 + 0xc)
    arg2[1].d = 0
    
    if (rax_1 s< 0 && rax_1 != 0)
        sub_1405a5410(arg2, 0)
    
    arg2[6].d = 0xffffffff
    *(arg2 + 0x34) = 0
    sub_140774790(&arg2[2])
    int64_t rcx_2 = sx.q(arg2[9].d)
    void* rdi_1 = &arg2[7]
    void* rax_2 = *(rdi_1 + 8)
    
    if (rcx_2 s> 0)
        if (rax_2 != 0)
            rdi_1 = rax_2
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_2 << 2)
    
    rdi = 0

uint64_t var_98 = 0
int32_t var_90 = 0
int32_t r9 = *(arg1 + 0x1c8)
int32_t rcx_3 = 0
int32_t var_88 = 0
uint64_t r14 = 0
int32_t var_84 = 1
int32_t* var_80 = arg1 + 0x1b0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r9 != 0)
    int32_t* rax_3 = *(arg1 + 0x1c0)
    int32_t* r8_1 = arg1 + 0x1b0
    
    if (rax_3 != 0)
        r8_1 = rax_3
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r9 - 1)
    int32_t rdx_2 = *r8_1
    
    if (rdx_2 != 0)
    label_141dcae93:
        int32_t rax_10 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_84_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_74.d = rdi - rax_11 + 0x1f
        
        if (rdi - rax_11 + 0x1f s> r9)
            var_74.d = r9
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_3)
            rdi += 0x20
            rcx_3 += 1
            var_74:4.d = rdi
            var_88 = rcx_3
            
            if (rdx_3.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = r8_1[rdx_3 + 1]
            var_78 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141dcae93
        
        var_74.d = r9

int32_t r15_1 = *(arg1 + 0x1c8)
int32_t rdi_4 = r15_1 s>> 5
int128_t var_58 = var_88.o
int32_t r8_3 = r15_1 & 0xffffffe0
int128_t var_48 = 0xffffffff
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
var_88.o = (arg1 + 0x1a0).o
var_78.o = var_58
int32_t result

if (r15_1 != r9)
    int32_t* rax_14 = *(arg1 + 0x1c0)
    int32_t* r10_1 = arg1 + 0x1b0
    
    if (rax_14 != 0)
        r10_1 = rax_14
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r9 - 1)
    int32_t rdx_7 = r10_1[sx.q(rdi_4)] & 0xffffffff << (r15_1 & 0x1f).b
    
    if (rdx_7 != 0)
    label_141dcaf5f:
        int32_t rax_20 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        
        if (rax_20 == 0)
            result = 0x20
        else
            result = 0x1f - temp0_4
        
        r15_1 = r8_3 - result + 0x1f
        
        if (r15_1 s> r9)
            r15_1 = r9
    else
        while (true)
            int64_t rcx_7 = sx.q(rdi_4)
            r8_3 += 0x20
            rdi_4 += 1
            
            if (rcx_7.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = r10_1[rcx_7 + 1]
            
            if (rdx_7 != 0)
                goto label_141dcaf5f
        
        r15_1 = r9

while (true)
    int32_t var_6c
    int64_t rdx_8 = sx.q(var_6c)
    
    if (rdx_8.d != r15_1 || var_78.q != arg1 + 0x1b0)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rcx_9 = var_88.q
    
    if (result.b == 0 || rcx_9 != arg1 + 0x1a0)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    void* rdi_5 = *(*rcx_9 + rdx_8 * 0x10)
    
    if (rdi_5 != 0)
        void* rax_23 = sub_142577430()
        void* rcx_11 = *(rdi_5 + 0x10)
        int64_t rax_24 = sx.q(*(rax_23 + 0x38))
        
        if (rax_24.d s<= *(rcx_11 + 0x38) && *(*(rcx_11 + 0x30) + (rax_24 << 3)) == rax_23 + 0x30)
            sub_141f16b60(rdi_5, &var_98)
            int32_t rcx_14 = arg2[1].d - *(arg2 + 0x34)
            int32_t rdi_7 = var_90 + rcx_14
            
            if (rdi_7 s> rcx_14)
                sub_1409d96c0(arg2, rdi_7)
                int32_t rdx_13
                
                if (rdi_7 u< 4)
                    rdx_13 = 1
                else
                    uint32_t rdi_8 = rdi_7 u>> 1
                    uint64_t rflags_3
                    int32_t temp0_5
                    temp0_5, rflags_3 = _bit_scan_reverse(rdi_8 + 8)
                    int32_t rcx_16
                    
                    if (rdi_8 == 0xfffffff8)
                        rcx_16 = 0x20
                    else
                        rcx_16 = 0x1f - temp0_5
                    
                    int32_t rcx_18 = rcx_16 << 0x1a s>> 0x1f
                    uint64_t rflags_4
                    char temp0_6
                    temp0_6, rflags_4 = _bit_scan_reverse(rdi_8 + 7)
                    char rdx_12
                    
                    if (rcx_18 == 0)
                        rdx_12 = 0x20
                    else
                        rdx_12 = 0x1f - temp0_6
                    
                    rdx_13 = 1 << ((not.d(rcx_18)).b & (0x20 - rdx_12))
                
                int32_t rax_30 = arg2[9].d
                
                if (rax_30 == 0 || rax_30 s< rdx_13)
                    arg2[9].d = rdx_13
                    sub_1408370c0(arg2)
            
            uint64_t rdi_10 = var_98
            int64_t rcx_22 = rdi_10 + (sx.q(var_90) << 3)
            int64_t rbx_1 = 0
            uint64_t r14_4 = (rcx_22 - rdi_10 + 7) u>> 3
            
            if (rdi_10 u> rcx_22)
                r14_4 = 0
            
            if (r14_4 != 0)
                do
                    int64_t arg_10 = *rdi_10
                    void arg_8
                    sub_140812a70(arg2, &arg_8, &arg_10, nullptr)
                    rbx_1 += 1
                    rdi_10 += 8
                while (rbx_1 != r14_4)
    
    var_74:4.d &= not.d(var_80:4.d)
    sub_14059bdd0(&var_80)
    r14 = var_98

if (r14 == 0)
    return result

return sub_140a74f90(r14)
