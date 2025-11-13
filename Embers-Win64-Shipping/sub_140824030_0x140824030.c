// 函数: sub_140824030
// 地址: 0x140824030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[3].d
int32_t rdi = 0
int64_t* r13 = arg1
int32_t i_1 = 0
void* var_b8 = nullptr
int32_t i_3 = 0
int32_t i_2 = 0
int32_t var_ac = 0

if (rdx s> 0)
    sub_1405c5660(&var_b8, rdx)
    i_1 = i_2
    i_3 = i_1

int64_t* rsi = r13[2]
void* r12_2 = &rsi[sx.q(r13[3].d) * 4]

if (rsi != r12_2)
    void* r13_1 = var_b8
    
    do
        int64_t rax_1 = rsi[1]
        int64_t rbx_1 = *rsi
        int64_t i_4 = sx.q(i_1)
        i_3.w = rsi[2].w
        i_1 = (i_4 + 1).d
        
        if (i_1 s> var_ac)
            sub_1405c4ec0(&var_b8)
            r13_1 = var_b8
        
        int64_t rcx_2 = i_4 * 5
        *(r13_1 + (rcx_2 << 3)) = rbx_1
        rsi = &rsi[4]
        *(r13_1 + (rcx_2 << 3) + 8) = rax_1
        *(r13_1 + (rcx_2 << 3) + 0x10) = i_3.w
        *(r13_1 + (rcx_2 << 3) + 0x12) = 0xffffffff
        *(r13_1 + (rcx_2 << 3) + 0x18) = 0
        *(r13_1 + (rcx_2 << 3) + 0x20) = 0
    while (rsi != r12_2)
    
    r13 = arg1
    i_3 = i_1

void* r15_3 = var_b8
void* result = r15_3 + sx.q(i_1) * 0x28

if (r15_3 != result)
    int16_t* rbx_2 = r15_3 + 0x12
    void* result_1 = result
    
    do
        int32_t* rax_7 = (*(*r13 + 0x30))(r13, &rbx_2[-9])
        int32_t r12_3
        
        if (rax_7 == 0)
            r12_3 = -1
        else
            r12_3 = *rax_7
        
        int16_t rdx_5 = *rbx_2
        int64_t rax_8 = r13[4]
        int32_t rsi_1 = *(rbx_2 + 0xe)
        
        if (rdx_5 == 0xffff)
            if (*(rbx_2 - 0xa) == 0 || rbx_2[-1] == 1)
                *rbx_2 = 0
                rdx_5 = 0
            else
                void* rax_9 = sub_140761a70(&rbx_2[-5])
                int16_t rcx_6 = *(rax_9 + 0x5c)
                rdx_5 = (*(rax_9 + 0x58) - 1 + rcx_6) & neg.w(rcx_6)
                *rbx_2 = rdx_5
        
        if (rsi_1 != sx.d(rdx_5))
            if (rdx_5 == 0xffff)
                if (*(rbx_2 - 0xa) == 0 || rbx_2[-1] == 1)
                    *rbx_2 = 0
                    rdx_5 = 0
                else
                    void* rax_11 = sub_140761a70(&rbx_2[-5])
                    int16_t rcx_8 = *(rax_11 + 0x5c)
                    rdx_5 = (*(rax_11 + 0x58) - 1 + rcx_8) & neg.w(rcx_8)
                    *rbx_2 = rdx_5
            
            int64_t rsi_2 = sx.q(*(rbx_2 + 0xe))
            int32_t rax_12 = sx.d(rdx_5)
            
            if (rax_12 s> rsi_2.d)
                *(rbx_2 + 0xe) = rax_12
                
                if (rax_12 s> *(rbx_2 + 0x12))
                    sub_1405daba0(&rbx_2[3])
                
                memset(rsi_2 + *(rbx_2 + 6), 0, sx.q(rax_12 - rsi_2.d))
            else if (rax_12 s< rsi_2.d && rax_12 != rsi_2.d)
                *(rbx_2 + 0xe) = rax_12
                sub_1405dac10(&rbx_2[3])
        
        memcpy(*(rbx_2 + 6), sx.q(r12_3) + rax_8, *(rbx_2 + 0xe))
        rbx_2 = &rbx_2[0x14]
        result = &rbx_2[-9]
    while (result != result_1)
    
    i_1 = i_3
    r15_3 = var_b8

if (arg2 != 0)
    var_b8.d = 0
    int32_t r10_1 = r13[0xf].d
    var_b8:4.d = 1
    int32_t rcx_14 = 0
    i_2.q = &r13[0xc]
    int32_t var_a8_1 = 0xffffffff
    int32_t var_a4_1 = 0
    int32_t var_a0_1 = 0
    
    if (r10_1 != 0)
        void* rax_13 = r13[0xe]
        void* r8_3 = &r13[0xc]
        
        if (rax_13 != 0)
            r8_3 = rax_13
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_11 = *r8_3
        result = zx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        int32_t var_a4_3
        
        if (rdx_11 != 0)
        label_1408242f6:
            int32_t rax_19 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_19)
            var_b8:4.d = rax_19
            int32_t rax_20
            
            if (rax_19 == 0)
                rax_20 = 0x20
            else
                rax_20 = 0x1f - temp0_2
            
            result = zx.q(rcx_14 - rax_20 + 0x1f)
            int32_t var_a4_2 = result.d
            
            if (result.d s> r10_1)
                var_a4_3 = r10_1
        else
            while (true)
                int64_t rdx_12 = sx.q(rdi)
                rcx_14 += 0x20
                rdi += 1
                int32_t var_a0_2 = rcx_14
                var_b8.d = rdi
                
                if (rdx_12.d s>= result.d)
                    break
                
                rdx_11 = *(r8_3 + (rdx_12 << 2) + 4)
                var_a8_1 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_1408242f6
            
            var_a4_3 = r10_1
    
    int32_t rdx_14 = r13[0xf].d
    double zmm2[0x2] = var_a8_1.o
    double var_58_1[0x2] = zmm2
    int32_t r12_4 = 0xffffffff << (rdx_14.b & 0x1f)
    int128_t var_68_1 = var_b8.o
    int32_t r8_5 = rdx_14 s>> 5
    int32_t r9_2 = rdx_14 & 0xffffffe0
    int64_t var_78_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_a8_2 = r12_4
    int32_t var_a4_4 = rdx_14
    int128_t var_98 = (&r13[0xa]).o
    int128_t var_88_1 = var_68_1
    
    if (rdx_14 != r10_1)
        void* rax_21 = r13[0xe]
        void* r10_2 = &r13[0xc]
        
        if (rax_21 != 0)
            r10_2 = rax_21
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r10_1 - 1)
        result = zx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        int32_t rdx_18 = *(r10_2 + (sx.q(r8_5) << 2)) & r12_4
        int32_t var_a4_6
        
        if (rdx_18 != 0)
        label_1408243c2:
            int32_t rax_27 = neg.d(rdx_18) & rdx_18
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_27)
            int32_t r11_1
            
            if (rax_27 == 0)
                r11_1 = 0x20
            else
                r11_1 = 0x1f - temp0_4
            
            result = zx.q(r9_2 - r11_1 + 0x1f)
            int32_t var_a4_5 = result.d
            
            if (result.d s> r10_1)
                var_a4_6 = r10_1
        else
            while (true)
                int64_t rcx_19 = sx.q(r8_5)
                r9_2 += 0x20
                r8_5 += 1
                
                if (rcx_19.d s>= result.d)
                    break
                
                rdx_18 = *(r10_2 + (rcx_19 << 2) + 4)
                var_a8_2 = 0xffffffff
                
                if (rdx_18 != 0)
                    goto label_1408243c2
            
            var_a4_6 = r10_1
    
    while (var_88_1:0xc.d != (var_a8_2.q u>> 0x20).d || var_88_1.q != &r13[0xc]
            || var_98.q != &r13[0xa])
        var_88_1:8.d &= not.d(var_98:0xc.d)
        result = sub_14059bdd0(&var_98:8)

if (i_1 != 0)
    void* rbx_5 = r15_3 + 0x18
    int32_t i
    
    do
        int64_t rcx_22 = *rbx_5
        
        if (rcx_22 != 0)
            result = sub_140a74f90(rcx_22)
        
        rbx_5 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r15_3 == 0)
    return result

return sub_140a74f90(r15_3)
