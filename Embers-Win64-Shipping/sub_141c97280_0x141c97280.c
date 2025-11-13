// 函数: sub_141c97280
// 地址: 0x141c97280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
void* rax_2

if (*(*arg1 + 8) s<= 0 && *(arg1[1] + 8) s<= 0)
    rax_2 = arg1[2]

int32_t var_78
void* var_70
int32_t var_68
int64_t var_64
int32_t i_7

if (*(*arg1 + 8) s> 0 || *(arg1[1] + 8) s> 0 || *(rax_2 + 8) - *(rax_2 + 0x34) s> 0)
    int32_t i_8 = 0
    int64_t* rsi_1 = nullptr
    void* r14_1 = r15[2]
    int64_t* var_88 = nullptr
    int32_t i_11 = 0
    int32_t var_7c_1 = 0
    int32_t rdx_2 = *(r14_1 + 8) - *(r14_1 + 0x34)
    
    if (rdx_2 s> 0)
        sub_14061cd70(&var_88, rdx_2)
        i_8 = i_11
        rsi_1 = var_88
    
    int32_t r9_1 = *(r14_1 + 0x28)
    void* r8_1 = r14_1 + 0x10
    var_64 = 0
    int32_t rcx_3 = 0
    var_78 = 0
    int32_t var_74_1 = 1
    int32_t rdi_1 = 0
    var_70 = r8_1
    var_68 = 0xffffffff
    
    if (r9_1 != 0)
        void* rax_3 = *(r8_1 + 0x10)
        
        if (rax_3 != 0)
            r8_1 = rax_3
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r9_1 - 1)
        int32_t rdx_5 = *r8_1
        
        if (rdx_5 != 0)
        label_141c97394:
            int32_t rax_9 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_74_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_1
            
            var_64.d = rdi_1 - rax_10 + 0x1f
            
            if (rdi_1 - rax_10 + 0x1f s> r9_1)
                var_64.d = r9_1
        else
            while (true)
                int64_t rax_6 = sx.q(rcx_3)
                rdi_1 += 0x20
                rcx_3 += 1
                var_64:4.d = rdi_1
                var_78 = rcx_3
                
                if (rax_6.d s>= ((temp1_1 & 0x1f) + temp2_1) s>> 5)
                    break
                
                rdx_5 = *(r8_1 + (rax_6 << 2) + 4)
                var_68 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141c97394
            
            var_64.d = r9_1
    
    double zmm2[0x2] = var_68.o
    double var_38_1[0x2] = zmm2
    double var_48_1[0x2] = var_78.o
    var_78.o = r14_1.o
    uint32_t rax_13 = (zmm2[0] u>> 0x20).d
    int64_t var_58_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    var_68.o = var_48_1
    
    if (rax_13 s< r9_1)
        int32_t i = i_7
        
        do
            int64_t i_12 = sx.q(i_8)
            int64_t r14_2 = *var_78.q
            i_8 = (i_12 + 1).d
            
            if (i_8 s> var_7c_1)
                sub_1405a4f90(&var_88)
                rsi_1 = var_88
            
            sub_140596d10(&rsi_1[i_12 * 2], r14_2 + sx.q(i) * 0x18)
            var_64:4.d &= not.d(var_70:4.d)
            sub_14059bdd0(&var_70)
            i = i_7
        while (i s< *(var_68.q + 0x18))
        
        r15 = arg1
    
    CRITICAL_SECTION* lpCriticalSection = r15[3] + 8
    EnterCriticalSection(lpCriticalSection)
    void* r14_3 = r15[3]
    int32_t rdx_8 = *(r14_3 + 0x60)
    int32_t rdx_9 = rdx_8 + i_8
    uint64_t rflags_2
    int32_t temp0_4
    temp0_4, rflags_2 = _bit_scan_reverse(rdx_9)
    int32_t rcx_12
    
    if (rdx_8 == neg.d(i_8))
        rcx_12 = 0x20
    else
        rcx_12 = 0x1f - temp0_4
    
    int32_t rcx_14 = rcx_12 << 0x1a s>> 0x1f
    uint64_t rflags_3
    char temp0_5
    temp0_5, rflags_3 = _bit_scan_reverse(rdx_9 - 1)
    char rdx_10
    
    if (rcx_14 == 0)
        rdx_10 = 0x20
    else
        rdx_10 = 0x1f - temp0_5
    
    int32_t rdx_11 = 1 << ((not.d(rcx_14)).b & (0x20 - rdx_10))
    
    if (rdx_11 s> *(r14_3 + 0x64))
        sub_14061cd70(r14_3 + 0x58, rdx_11)
    
    int64_t i_13 = sx.q(i_8)
    
    if (i_8 != 0)
        int32_t rax_22 = *(r14_3 + 0x60)
        int32_t rdx_12 = i_13.d + rax_22
        
        if (rdx_12 s> *(r14_3 + 0x64))
            sub_14061cd70(r14_3 + 0x58, rdx_12)
            rax_22 = *(r14_3 + 0x60)
        
        memmove((sx.q(rax_22) << 4) + *(r14_3 + 0x58), rsi_1, (i_13 << 4).d)
        i_8 = 0
        *(r14_3 + 0x60) += i_13.d
    
    r15 = arg1
    int64_t* rcx_22 = *r15
    void* r14_4 = r15[3]
    int32_t rax_23 = *(r14_4 + 0x70)
    int32_t rax_24 = rax_23 + rcx_22[1].d
    bool cond:4_1 = rax_23 == neg.d(rcx_22[1].d)
    uint64_t rflags_4
    int32_t temp0_6
    temp0_6, rflags_4 = _bit_scan_reverse(rax_24)
    int32_t rcx_23
    
    rcx_23 = cond:4_1 ? 0x20 : 0x1f - temp0_6
    
    uint64_t rflags_5
    char temp0_7
    temp0_7, rflags_5 = _bit_scan_reverse(rax_24 - 1)
    char rdx_15
    
    if (rax_24 == 1)
        rdx_15 = 0x20
    else
        rdx_15 = 0x1f - temp0_7
    
    int32_t rdx_16 = 1 << ((not.d(rcx_23 << 0x1a s>> 0x1f)).b & (0x20 - rdx_15))
    
    if (rdx_16 s> *(r14_4 + 0x74))
        sub_1405a5130(r14_4 + 0x68, rdx_16)
    
    sub_141c8efe0(r14_4 + 0x68, rcx_22)
    int64_t* rcx_30 = r15[1]
    void* r14_5 = r15[3]
    int32_t rax_27 = *(r14_5 + 0x80)
    int32_t rax_28 = rax_27 + rcx_30[1].d
    bool cond:6_1 = rax_27 == neg.d(rcx_30[1].d)
    uint64_t rflags_6
    int32_t temp0_8
    temp0_8, rflags_6 = _bit_scan_reverse(rax_28)
    int32_t rcx_31
    
    rcx_31 = cond:6_1 ? 0x20 : 0x1f - temp0_8
    
    uint64_t rflags_7
    char temp0_9
    temp0_9, rflags_7 = _bit_scan_reverse(rax_28 - 1)
    char r13_1
    
    if (rax_28 == 1)
        r13_1 = 0x20
    else
        r13_1 = 0x1f - temp0_9
    
    int32_t rax_30 = 1 << ((not.d(rcx_31 << 0x1a s>> 0x1f)).b & (0x20 - r13_1))
    
    if (rax_30 s> *(r14_5 + 0x84))
        sub_1405a5130(r14_5 + 0x78, rax_30)
    
    sub_141c8efe0(r14_5 + 0x78, rcx_30)
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    int64_t* rdi_4 = rsi_1
    
    if (i_8 != 0)
        int32_t i_1
        
        do
            int64_t rcx_39 = *rdi_4
            
            if (rcx_39 != 0)
                sub_140a74f90(rcx_39)
            
            rdi_4 = &rdi_4[2]
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

int64_t* rbx_1 = r15[2]

if (rbx_1[1].d != *(rbx_1 + 0x34))
    sub_1407453e0(&var_78, rbx_1)
    
    for (int32_t i_2 = i_7; i_2 s< *(var_68.q + 0x18); i_2 = i_7)
        int64_t rcx_43 = *(*var_78.q + sx.q(i_2) * 0x18)
        
        if (rcx_43 != 0)
            sub_140a74f90(rcx_43)
        
        var_64:4.d &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
    
    int32_t rax_38 = *(rbx_1 + 0xc)
    rbx_1[1].d = 0
    
    if (rax_38 s< 0 && rax_38 != 0)
        sub_1405a5130(rbx_1, 0)
    
    rbx_1[6].d = 0xffffffff
    *(rbx_1 + 0x34) = 0
    sub_140774790(&rbx_1[2])
    int64_t rcx_47 = sx.q(rbx_1[9].d)
    void* rdi_5 = &rbx_1[7]
    void* rdx_24 = *(rdi_5 + 8)
    
    if (rcx_47 s> 0)
        if (rdx_24 != 0)
            rdi_5 = rdx_24
        
        __builtin_memset(rdi_5, 0xffffffff, rcx_47 << 2)

int64_t* rsi_2 = *r15
int32_t rax_39 = *(rsi_2 + 0xc)
int64_t* rdi_6 = *rsi_2
int32_t i_9 = rsi_2[1].d

if (rax_39 s< 0)
    if (i_9 != 0)
        int32_t i_3
        
        do
            int64_t rcx_49 = *rdi_6
            
            if (rcx_49 != 0)
                sub_140a74f90(rcx_49)
            
            rdi_6 = &rdi_6[3]
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
        rax_39 = *(rsi_2 + 0xc)
    
    rsi_2[1].d = 0
    
    if (rax_39 != 0)
        sub_1405a5130(rsi_2, 0)
else
    if (i_9 != 0)
        int32_t i_4
        
        do
            int64_t rcx_48 = *rdi_6
            
            if (rcx_48 != 0)
                sub_140a74f90(rcx_48)
            
            rdi_6 = &rdi_6[3]
            i_4 = i_9
            i_9 -= 1
        while (i_4 != 1)
    
    rsi_2[1].d = 0

int64_t* rsi_3 = r15[1]
int32_t result = *(rsi_3 + 0xc)
int64_t* rdi_7 = *rsi_3
int32_t i_10 = rsi_3[1].d

if (result s>= 0)
    if (i_10 != 0)
        int32_t i_5
        
        do
            int64_t rcx_51 = *rdi_7
            
            if (rcx_51 != 0)
                result = sub_140a74f90(rcx_51)
            
            rdi_7 = &rdi_7[3]
            i_5 = i_10
            i_10 -= 1
        while (i_5 != 1)
    
    rsi_3[1].d = 0
    return result

if (i_10 != 0)
    int32_t i_6
    
    do
        int64_t rcx_52 = *rdi_7
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
        
        rdi_7 = &rdi_7[3]
        i_6 = i_10
        i_10 -= 1
    while (i_6 != 1)
    result = *(rsi_3 + 0xc)

rsi_3[1].d = 0

if (result == 0)
    return result

return sub_1405a5130(rsi_3, 0)
