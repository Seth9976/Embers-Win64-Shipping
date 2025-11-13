// 函数: sub_141a39070
// 地址: 0x141a39070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = arg1[3].d - *(arg1 + 0x44)
void* var_e0 = &arg3[1]
void* var_d8 = &arg3[0xb]
int32_t rax_2 = data_1439d284c
int64_t* r13 = nullptr
int32_t var_d0 = rax_2
int32_t i_2 = 0
int32_t var_c4 = rax_2
int64_t* var_e8 = arg3
int64_t var_cc = -1
int64_t var_c0 = -1
int64_t* var_f8 = nullptr
int64_t var_f0 = 0

if (rdx_1 s> 0)
    sub_1405c5660(&var_f8, rdx_1)
    i_2 = var_f0.d
    r13 = var_f8

int32_t var_b4 = 1
int32_t rsi_1 = arg1[7].d
int32_t rcx_1 = 0
int32_t var_b8 = 0
int32_t r8 = 0
int32_t var_a8 = 0xffffffff
int64_t var_a4 = 0

if (rsi_1 != 0)
    void* rax_3 = arg1[6]
    void* r9_1 = &arg1[4]
    
    if (rax_3 != 0)
        r9_1 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi_1 - 1)
    int32_t rdx_4 = *r9_1
    
    if (rdx_4 != 0)
    label_141a39188:
        int32_t rax_10 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_b4_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> rsi_1)
            var_a4.d = rsi_1
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_a4:4.d = r8
            var_b8 = rcx_1
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141a39188
        
        var_a4.d = rsi_1

int32_t rdx_6 = arg1[7].d
int128_t var_90 = var_b8.o
int32_t r12_1 = 0xffffffff << (rdx_6.b & 0x1f)
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int128_t var_80 = 0xffffffff
int64_t var_50 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t zmm1 = var_90
var_90:8.d = r12_1
var_90:0xc.d = rdx_6
int128_t var_70 = (&arg1[2]).o
int64_t var_60 = zmm1.q

if (rdx_6 != rsi_1)
    void* rax_13 = arg1[6]
    void* r10_1 = &arg1[4]
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rsi_1 - 1)
    int32_t rdx_10 = *(r10_1 + (sx.q(r8_3) << 2)) & r12_1
    
    if (rdx_10 != 0)
    label_141a39252:
        int32_t rax_20 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t r14_1
        
        if (rax_20 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_4
        
        var_90:0xc.d = r9_3 - r14_1 + 0x1f
        
        if (r9_3 - r14_1 + 0x1f s> rsi_1)
            var_90:0xc.d = rsi_1
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r10_1 + (rcx_6 << 2) + 4)
            var_90:8.d = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141a39252
        
        var_90:0xc.d = rsi_1

while (true)
    int32_t var_54
    int64_t rax_22 = sx.q(var_54)
    int64_t rdx_11 = var_70.q
    
    if (rax_22.d == (var_90:8.q u>> 0x20).d && var_60 == &arg1[4] && rdx_11 == &arg1[2])
        sub_141a2c8e0(r13, i_2, arg1.b, sub_141a69d70)
        int32_t rax_27 = data_1439d284c
        int32_t r15_1 = 0
        var_f8.d = rax_27
        var_f8:4.d = 0xffffffff
        var_f8.d = rax_27
        var_f8:4.d = 0xffffffff
        var_c4.q = var_f8
        var_f8.d = rax_27
        char rax_28 = *(arg3 + 0x2dd)
        var_d0.q = var_f8
        var_f8:4.d = 0xffffffff
        arg3[0x5a] = var_f8
        arg3[0x5b].d = 0xffffffff
        var_c0:4.d = 0xffffffff
        var_cc:4.d = 0xffffffff
        *(arg3 + 0x2dc) = rax_28
        
        if (i_2 s> 0)
            int64_t* rsi_4 = r13
            
            do
                int64_t* rcx_12 = rsi_4
                
                if ((rsi_4[4].b & 2) == 0)
                    rcx_12 = *rsi_4
                
                if (rcx_12[1].d s> 0)
                    break
                
                (*(*rcx_12 + 8))(rcx_12, &var_e8, arg3)
                r15_1 += 1
                rsi_4 = &rsi_4[5]
            while (r15_1 s< i_2)
        
        void* r14_2 = *arg1
        void* r12_5 = sx.q(arg1[1].d) * 0xc8 + r14_2
        
        if (r14_2 != r12_5)
            int64_t* rsi_5 = r14_2 + 0x14
            
            do
                var_d0.q = *rsi_5
                var_cc:4.d = 0xffffffff
                var_c4.q = *rsi_5
                var_c0:4.d = rsi_5[1].d
                uint32_t rcx_13 = zx.d(*(rsi_5 + 0xc))
                arg3[0x5a] = *rsi_5
                arg3[0x5b].d = rsi_5[1].d
                
                if (rcx_13.b == 0)
                    *(arg3 + 0x2dc) = *(arg3 + 0x2dd)
                else if (rcx_13 == 1)
                    *(arg3 + 0x2dc) = 2
                
                void* rcx_14 = rsi_5 + 0x6c
                
                if ((*(rsi_5 + 0xac) & 2) == 0)
                    rcx_14 = *rcx_14
                
                (*(*rcx_14 + 8))(rcx_14, rsi_5 + 0x14, r14_2, &var_e8, arg3)
                r14_2 += 0xc8
                rsi_5 = &rsi_5[0x19]
            while (r14_2 != r12_5)
        
        sub_141a62e60(arg1, 0)
        int32_t rax_36 = data_1439d284c
        var_f8.d = rax_36
        var_f8:4.d = 0xffffffff
        var_f8.d = rax_36
        var_f8:4.d = 0xffffffff
        var_c4.q = var_f8
        var_f8.d = rax_36
        char rax_37 = *(arg3 + 0x2dd)
        var_d0.q = var_f8
        var_f8:4.d = 0xffffffff
        arg3[0x5a] = var_f8
        arg3[0x5b].d = 0xffffffff
        var_c0:4.d = 0xffffffff
        var_cc:4.d = 0xffffffff
        *(arg3 + 0x2dc) = rax_37
        
        if (r15_1 s< i_2)
            void* rsi_7 = &r13[sx.q(r15_1) * 5]
            uint64_t i_3 = zx.q(i_2 - r15_1)
            uint64_t i
            
            do
                void* rcx_17 = rsi_7
                rsi_7 += 0x28
                
                if ((*(rcx_17 + 0x20) & 2) == 0)
                    rcx_17 = *rcx_17
                
                (*(*rcx_17 + 8))(rcx_17, &var_e8, arg3)
                i = i_3
                i_3 -= 1
            while (i != 1)
        
        sub_141a63430(&arg1[2])
        char result = sub_141a388d0(&arg1[0xc], arg2, &var_e8, arg3)
        int64_t* rbx_2 = r13
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                result = rbx_2[4].b
                
                if ((result & 1) != 0)
                    int64_t* rcx_20 = rbx_2
                    
                    if ((result & 2) == 0)
                        rcx_20 = *rbx_2
                    
                    rbx_2[4].b = result & 0xfe
                    result = (**rcx_20)(rcx_20, 0)
                    
                    if ((rbx_2[4].b & 2) == 0)
                        result = sub_140a74f90(*rbx_2)
                
                rbx_2 = &rbx_2[5]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        if (r13 == 0)
            return result
        
        return sub_140a74f90(r13)
    
    int64_t i_4 = sx.q(i_2)
    void* rsi_3 = rax_22 * 0x38 + *rdx_11
    i_2 = (i_4 + 1).d
    var_f0.d = i_2
    
    if (i_2 s> var_f0:4.d)
        sub_1405c4ec0(&var_f8)
        i_2 = var_f0.d
        r13 = var_f8
    
    int64_t rcx_9 = i_4 * 5
    char rax_23 = (r13[rcx_9 + 4].b & 0xfe) | 2
    r13[rcx_9 + 4].b = rax_23
    
    if ((*(rsi_3 + 0x28) & 1) != 0)
        r13[rcx_9 + 4].b = rax_23 | 1
        *(rsi_3 + 0x28) &= 0xfe
        r13[rcx_9 + 4].b &= 0xfd
        r13[rcx_9 + 4].b |= *(rsi_3 + 0x28) & 2
        *(r13 + (rcx_9 << 3)) = *(rsi_3 + 8)
        *(r13 + (rcx_9 << 3) + 0x10) = *(rsi_3 + 0x18)
    
    int32_t var_58 = var_58 & not.d(var_70:0xc.d)
    sub_14059bdd0(&var_70:8)
