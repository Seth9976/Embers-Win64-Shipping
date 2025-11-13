// 函数: sub_142322750
// 地址: 0x142322750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* r15 = arg1
int32_t var_98
sub_142336dc0(arg2, &var_98, arg1)
int64_t rax_2 = sx.q(var_98)
int32_t rdi = 0
int64_t rax_4

if (rax_2.d != 0xffffffff)
    rax_4 = rax_2 * 0x30

int32_t rcx_1

if (rax_2.d == 0xffffffff || rax_4 == neg.q(*arg2))
    rcx_1 = 0
else
    rcx_1 = *(rax_4 + *arg2 + 0x20)

int64_t result = *arg3
var_98 = rcx_1

if (*(sx.q(rcx_1) + result) == 0)
    void* rax_6 = *(r15 + 0x10)
    void* r10_1 = r15
    int32_t r8_1 = *(r15 + 0x18)
    int32_t r9 = 0
    
    if (rax_6 != 0)
        r10_1 = rax_6
    
    int64_t rax_7 = 0
    uint64_t rdx_2 = zx.q((r8_1 + 0x1f) u>> 5)
    
    if (rdx_2 != 0)
        while (*(r10_1 + (rax_7 << 2)) == 0xffffffff)
            r9 += 1
            rax_7 += 1
            
            if (rax_7 s>= rdx_2)
                break
    
    int32_t r9_2
    
    if (r9 s< rdx_2.d)
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_forward(not.d(*(r10_1 + (sx.q(r9) << 2))))
        r9_2 = (r9 << 5) + temp0_2
    
    if (r9 s>= rdx_2.d || r9_2 s>= r8_1)
        r9_2 = -1
    
    int32_t rcx_6 = (r8_1 - 1) & 0x8000001f
    
    if (rcx_6 s< 0)
        rcx_6 = ((rcx_6 - 1) | 0xffffffe0) + 1
    
    uint32_t r8_2 = 0xffffffff u>> (0x1f - rcx_6.b)
    int32_t rdx_3
    
    if (rdx_2.d == 0)
    label_14232287e:
        rdx_3 = 0
    else
        while (true)
            rdx_2 = zx.q(rdx_2.d - 1)
            int32_t rcx_10 = *(r10_1 + (rdx_2 << 2))
            
            if ((rcx_10 & r8_2) != r8_2)
                int32_t rcx_21 = not.d(rcx_10) & r8_2
                uint64_t rflags_2
                int32_t temp0_3
                temp0_3, rflags_2 = _bit_scan_reverse(rcx_21)
                
                if (rcx_21 == 0)
                    rdx_3 = rdx_2.d << 5
                else
                    rdx_3 = (rdx_2.d << 5) - (0x1f - temp0_3) + 0x20
                
                break
            
            r8_2 = -1
            
            if (rdx_2.d == 0)
                goto label_14232287e
    
    void* var_60_1 = nullptr
    int32_t r14_2 = (r9_2 + rdx_3) s>> 1
    int64_t var_58_1 = 0
    void var_70
    
    if (&var_70 != r15)
        sub_14059a8e0(&var_70, *(r15 + 0x18))
        int32_t rax_13 = *(r15 + 0x18)
        var_58_1.d = rax_13
        
        if (rax_13 != 0)
            void* rcx_12 = *(r15 + 0x10)
            void* rdx_5 = r15
            
            if (rcx_12 != 0)
                rdx_5 = rcx_12
            
            void* rcx_13 = &var_70
            
            if (var_60_1 != 0)
                rcx_13 = var_60_1
            
            memcpy(rcx_13, rdx_5, (zx.q(rax_13 + 0x1f) u>> 5 << 2).d)
    
    r9_2.b = 1
    sub_1423477b0(&var_70, 0, r14_2, r9_2.b)
    void* var_80_1 = nullptr
    int32_t var_78_1 = 0
    void var_90
    
    if (&var_90 != r15)
        sub_14059a8e0(&var_90, *(r15 + 0x18))
        int32_t rax_15 = *(r15 + 0x18)
        rdi = rax_15
        
        if (rax_15 != 0)
            void* rcx_16 = *(r15 + 0x10)
            
            if (rcx_16 != 0)
                r15 = rcx_16
            
            void* rcx_17 = &var_90
            
            if (var_80_1 != 0)
                rcx_17 = var_80_1
            
            memcpy(rcx_17, r15, (zx.q(rax_15 + 0x1f) u>> 5 << 2).d)
            rdi = rax_15
    
    sub_1423477b0(&var_90, r14_2, rdi - r14_2, 1)
    int32_t var_94
    sub_142336dc0(arg2, &var_94, &var_70)
    int64_t rax_17 = sx.q(var_94)
    int64_t rax_19
    void* rax_20
    
    if (rax_17.d != 0xffffffff)
        rax_19 = rax_17 * 0x30
        rax_20 = rax_19 + *arg2
    
    int64_t r15_1
    
    if (rax_17.d == 0xffffffff || rax_19 == neg.q(*arg2) || rax_20 == -0x20)
        sub_142322b30(arg2, &var_70, arg5)
        int64_t rdi_2 = sx.q(arg3[1].d)
        int32_t rax_24 = (rdi_2 + 1).d
        arg3[1].d = rax_24
        
        if (rax_24 s> *(arg3 + 0xc))
            sub_140679a80(arg3)
        
        *(rdi_2 + *arg3) = 0
        r15_1 = zx.q(*arg5)
        *arg5 = (r15_1 + 1).d
        sub_142322750(&var_70, arg2, arg3, arg4, arg5)
    else
        r15_1 = sx.q(*(rax_20 + 0x20))
        
        if (*(r15_1 + *arg3) == 0)
            sub_142322750(&var_70, arg2, arg3, arg4, arg5)
    
    sub_142336dc0(arg2, &var_94, &var_90)
    int64_t rax_27 = sx.q(var_94)
    int64_t rax_29
    void* rax_30
    
    if (rax_27.d != 0xffffffff)
        rax_29 = rax_27 * 0x30
        rax_30 = rax_29 + *arg2
    
    uint64_t r14_3
    
    if (rax_27.d == 0xffffffff || rax_29 == neg.q(*arg2) || rax_30 == -0x20)
        sub_142322b30(arg2, &var_90, arg5)
        int64_t rdi_3 = sx.q(arg3[1].d)
        int32_t rax_33 = (rdi_3 + 1).d
        arg3[1].d = rax_33
        
        if (rax_33 s> *(arg3 + 0xc))
            sub_140679a80(arg3)
        
        *(rdi_3 + *arg3) = 0
        r14_3 = zx.q(*arg5)
        *arg5 = (r14_3 + 1).d
        sub_142322750(&var_90, arg2, arg3, arg4, arg5)
    else
        r14_3 = sx.q(*(rax_30 + 0x20))
        
        if (*(r14_3 + *arg3) == 0)
            sub_142322750(&var_90, arg2, arg3, arg4, arg5)
    
    if (var_80_1 != 0)
        sub_140a74f90(var_80_1)
    
    if (var_60_1 != 0)
        sub_140a74f90(var_60_1)
    
    int64_t rdi_4 = sx.q(arg4[1].d)
    int32_t rax_36 = (rdi_4 + 1).d
    arg4[1].d = rax_36
    
    if (rax_36 s> *(arg4 + 0xc))
        sub_14083a7e0(arg4)
    
    int64_t rax_37 = *arg4
    int64_t rcx_32 = rdi_4 * 3
    int64_t rdx_22 = sx.q(var_98)
    *(rax_37 + (rcx_32 << 2) + 8) = r14_3.d
    *(rax_37 + (rcx_32 << 2)) = rdx_22.d
    *(rax_37 + (rcx_32 << 2) + 4) = r15_1.d
    result = *arg3
    *(rdx_22 + result) = 1

__security_check_cookie(rax_1 ^ &var_c8)
return result
