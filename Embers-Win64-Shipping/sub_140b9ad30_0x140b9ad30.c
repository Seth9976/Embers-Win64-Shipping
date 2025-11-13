// 函数: sub_140b9ad30
// 地址: 0x140b9ad30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140bacd80(arg2)

if (result == 0)
    return result

EnterCriticalSection(arg1)
int32_t rcx_2 = 0
int32_t var_a8 = 0xffffffff
int32_t var_b8 = 0
int32_t r11 = arg1->__offset(0x78).d
int32_t r8 = 0
int32_t var_b0 = (arg1 + 0x60).d
int64_t var_a4 = 0
int32_t var_b4 = 1

if (r11 != 0)
    void* rax = arg1->__offset(0x70).q
    void* __offset(_RTL_CRITICAL_SECTION, 0x60) r9_1 = arg1 + 0x60
    
    if (rax != 0)
        r9_1 = rax
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = (r9_1 - 0x60)->__offset(0x60).d
    
    if (rdx_2 != 0)
    label_140b9ae18:
        int32_t rax_7 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_b4_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_8 + 0x1f
        
        if (r8 - rax_8 + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_a4:4.d = r8
            var_b8 = rcx_2
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140b9ae18
        
        var_a4.d = r11

int32_t rdx_4 = arg1->__offset(0x78).d
double zmm2[0x2] = var_a8.o
double var_48[0x2] = zmm2
int32_t r14 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_58 = var_b8.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_a8_1 = r14
var_a4.d = rdx_4
int128_t var_88 = (&arg1[2]).o
int128_t var_78 = var_58
void* rbx

if (rdx_4 != r11)
    void* rax_10 = arg1->__offset(0x70).q
    void* __offset(_RTL_CRITICAL_SECTION, 0x60) r10_1 = arg1 + 0x60
    
    if (rax_10 != 0)
        r10_1 = rax_10
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_8 != 0)
    label_140b9aee2:
        int32_t rax_17 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_17)
        
        if (rax_17 == 0)
            rbx = 0x20
        else
            rbx = zx.q(0x1f - temp0_4)
        
        var_a4.d = r9_3 - rbx.d + 0x1f
        
        if (r9_3 - rbx.d + 0x1f s> r11)
            var_a4.d = r11
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_7 << 2) + 4)
            var_a8_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_140b9aee2
        
        var_a4.d = r11

CRITICAL_SECTION* lpCriticalSection

while (true)
    int64_t rax_19 = sx.q(var_78:0xc.d)
    int64_t* rdx_9 = var_88.q
    
    if (rax_19.d == (var_a8_1.q u>> 0x20).d && var_78.q == arg1 + 0x60 && rdx_9 == &arg1[2])
        lpCriticalSection = arg1
        rbx.b = 0
        break
    
    int64_t rcx_9 = rax_19 * 5
    int64_t rax_20 = *rdx_9
    rbx = *(rax_20 + (rcx_9 << 3) + 0x10)
    int64_t* r15_1 = rax_20 + (rcx_9 << 3)
    void* rdi_3 = (sx.q(r15_1[3].d) << 4) + rbx
    
    if (rbx != rdi_3)
        while (true)
            if (sub_140a32a50(arg2, rbx, 1) != 0)
                int32_t rax_24 = *(rbx + 8)
                int32_t r8_4 = arg2[1].d
                
                if (rax_24 == 0)
                    rax_24 = 1
                
                int32_t rbx_1 = r8_4 - 1
                
                if (r8_4 == 0)
                    rbx_1 = 0
                
                int32_t rcx_12
                
                if (rax_24 s>= 0)
                    rcx_12 = rbx_1
                    
                    if (rax_24 s< rbx_1)
                        rcx_12 = rax_24
                else
                    rcx_12 = 0
                
                int64_t r9_5 = sx.q(rcx_12)
                
                if (sx.q(rax_24) + 0x7fffffff s< r9_5)
                    rbx_1 = rcx_12
                else if (sx.q(rax_24) + 0x7fffffff s< sx.q(rbx_1))
                    rbx_1 = rax_24 + 0x7fffffff
                
                int16_t* const r12_1 = &data_142d40450
                int16_t* const rax_26
                
                if (r8_4 == 0)
                    rax_26 = &data_142d40450
                else
                    rax_26 = *arg2
                
                int16_t* r13_1 = &rax_26[r9_5]
                int16_t* var_98 = nullptr
                int32_t rbx_2 = rbx_1 - rcx_12
                int32_t var_90_1 = 0
                int32_t rax_27 = 0
                int16_t* r14_3 = nullptr
                int32_t var_8c_1 = 0
                int32_t rdi_4 = 0
                
                if (r13_1 != 0 && *r13_1 != 0 && rbx_2 s> 0)
                    if (rbx_2 + 1 s> 0)
                        sub_1405947f0(&var_98, rbx_2 + 1)
                        rax_27 = var_8c_1
                        rdi_4 = var_90_1
                        r14_3 = var_98
                    
                    rdi_4 += rbx_2 + 1
                    
                    if (rdi_4 s> rax_27)
                        sub_140594770(&var_98)
                        r14_3 = var_98
                    
                    UnDecorator::getReferenceType(r14_3, r13_1, rbx_2 * 2)
                    r14_3[sx.q(rdi_4) - 1] = 0
                
                int32_t rdi_6
                
                if (rdi_4 == 0)
                    rdi_6 = 0
                else
                    rdi_6 = rdi_4 - 1
                
                int32_t rbx_3 = r15_1[1].d
                int32_t rax_30
                int32_t r13_2
                
                if (rbx_3 != 0 || rdi_6 == 0xffffffff)
                    r13_2 = 1
                    rax_30 = 1
                else
                    rax_30 = rbx_3 + 2
                    r13_2 = rbx_3 + 1
                
                int64_t r15_2 = *r15_1
                int32_t rcx_16 = rdi_6 + rax_30
                var_b8.q = 0
                var_b0 = rbx_3
                
                if (rbx_3 != 0 || rcx_16 != 0)
                    sub_1405a4c70(&var_b8, rbx_3 + rcx_16, 0)
                    memcpy(var_b8.q, r15_2, rbx_3 * 2)
                else
                    var_b0 = 0
                
                sub_140a2cf70(&var_b8, r14_3, rdi_6)
                int16_t* rdx_19 = &data_142d40450
                
                if (var_b0 != 0)
                    rdx_19 = var_b8.q
                
                int64_t i_3
                sub_140b58260(&i_3, rdx_19, r13_2)
                int64_t rcx_21 = var_b8.q
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
                
                if (r14_3 != 0)
                    sub_140a74f90(r14_3)
                
                int64_t i_2 = i_3
                int64_t i_1 = i_2
                lpCriticalSection = arg1
                void* rax_33 =
                    sub_140ae5460(&lpCriticalSection[4], sub_140b5ead0(i_2.d) + i_1:4.d, &i_3)
                
                if (arg2[1].d != 0)
                    r12_1 = *arg2
                
                sub_140b58260(&i_1, r12_1, r13_2)
                int64_t* r8_13 = *rax_33
                int64_t r9_6 = sx.q(*(rax_33 + 8))
                int64_t* rcx_26 = r8_13
                int64_t i = i_1
                void* rdx_22 = &r8_13[r9_6]
                
                if (r8_13 != rdx_22)
                    while (*rcx_26 != i)
                        rcx_26 = &rcx_26[1]
                        
                        if (rcx_26 == rdx_22)
                            goto label_140b9b19c
                
                if (r8_13 == rdx_22 || ((rcx_26 - r8_13) s>> 3).d == 0xffffffff)
                label_140b9b19c:
                    int32_t rcx_29 = (r9_6 + 1).d
                    *(rax_33 + 8) = rcx_29
                    
                    if (rcx_29 s> *(rax_33 + 0xc))
                        sub_1405a4d70(rax_33)
                        i = i_1
                    
                    *((r9_6 << 3) + *rax_33) = i
                
                rbx.b = 1
                break
            
            rbx += 0x10
            
            if (rbx == rdi_3)
                goto label_140b9af77
        
        break
    
label_140b9af77:
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return zx.q(rbx.b)
