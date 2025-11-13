// 函数: sub_14216f6d0
// 地址: 0x14216f6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
void* r12 = arg2

if ((*(*arg1 + 0x368))() != 0)
    int64_t rsi_1 = 0
    int64_t* rdi_1 = *(r12 + 0x98)
    uint64_t r15_2 = sx.q(*(r12 + 0xa0)) << 3 u>> 3
    
    if (rdi_1 u> &rdi_1[sx.q(*(r12 + 0xa0))])
        r15_2 = 0
    
    if (r15_2 != 0)
        do
            void* rbx_1 = *rdi_1
            
            if (rbx_1 != 0 && sub_141dce3a0(rbx_1) != 0)
                (*(*arg1 + 0x348))(arg1, rbx_1)
            
            rdi_1 = &rdi_1[1]
            rsi_1 += 1
        while (rsi_1 != r15_2)
    
    int64_t var_78 = 0
    int32_t r11_1 = arg1[0x6a].d
    void* r9_1 = &arg1[0x67]
    int32_t var_6c_1 = 0
    int64_t rdi_2 = 0
    int32_t var_b8_1 = 0
    int32_t r13_1 = 0
    int32_t var_b4_1 = 1
    int32_t rcx_2 = 0
    void* var_b0 = r9_1
    int32_t r8_1 = 0
    int32_t var_a8_1 = 0xffffffff
    int64_t var_a4_1 = 0
    
    if (r11_1 != 0)
        void* rax_6 = *(r9_1 + 0x10)
        
        if (rax_6 != 0)
            r9_1 = rax_6
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_14216f818:
            int32_t rax_13 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_13)
            int32_t var_b4_2 = rax_13
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_1
            
            r8_1 -= rax_14
            var_a4_1.d = r8_1 + 0x1f
            
            if (r8_1 + 0x1f s> r11_1)
                var_a4_1.d = r11_1
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_a4_1:4.d = r8_1
                var_b8_1 = rcx_2
                
                if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_a8_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_14216f818
            
            var_a4_1.d = r11_1
    
    void* var_40_1 = &arg1[0x65]
    int128_t var_50_1 = 0xffffffff
    int128_t var_60_1 = var_b8_1.o
    int16_t var_80_1 = 0
    int128_t var_58
    var_a8_1.o = var_58
    var_b8_1.o = (&arg1[0x65]).o
    int128_t zmm0
    zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    
    if (0 s< *(var_58.q + 0x18))
        int32_t i_2
        int32_t i = i_2
        
        do
            int32_t* r15_3 = *(*var_b8_1.q + sx.q(i) * 0x18 + 8)
            
            if (sub_1405a66e0(r15_3, r12, r8_1) != 0)
                if ((r15_3[7].b & 1) != 0)
                    void** rbx_3 = arg1[0x12]
                    int64_t rdi_3 = 0
                    uint64_t rsi_3 = sx.q(arg1[0x13].d) << 3 u>> 3
                    
                    if (rbx_3 u> &rbx_3[arg1[0x13]])
                        rsi_3 = 0
                    
                    if (rsi_3 != 0)
                        do
                            void* rax_23 = *rbx_3
                            int64_t* rcx_7 = *(rax_23 + 0x13c0)
                            
                            if (rcx_7 == 0)
                                sub_141fc3c20(rax_23 + 0x13c8, &r15_3[7])
                            else
                                (*(*rcx_7 + 0x288))(rcx_7, r15_3)
                            
                            rbx_3 = &rbx_3[1]
                            rdi_3 += 1
                        while (rdi_3 != rsi_3)
                    
                    int64_t rbx_4 = sx.q(r13_1)
                    int32_t* rdi_4 = *var_b8_1.q
                    r13_1 = (rbx_4 + 1).d
                    
                    if (r13_1 s> var_6c_1)
                        sub_1405a4cf0(&var_78)
                    
                    rdi_2 = var_78
                    *(rdi_2 + (rbx_4 << 2)) = rdi_4[sx.q(i) * 6]
                    sub_142174370(zmm0:8.q, i_2)
                    var_80_1.b = 1
                
                r12 = arg_10
            
            var_a4_1:4.d &= not.d(var_b0:4.d)
            r8_1 = sub_14059bdd0(&var_b0)
            i = i_2
        while (i s< *(var_a8_1.q + 0x18))
        
        if (var_80_1.b != 0 && var_80_1:1.b != 0)
            r8_1.b = 1
            sub_140b9ddc0(&arg1[0x65], arg1[0x66].d - *(arg1 + 0x35c), r8_1.b)
        
        if (rdi_2 != 0)
            sub_140a74f90(rdi_2)

void* rdx_12 = *(r12 + 0xe8)

if (rdx_12 != 0)
    sub_142174bc0(arg1, *(rdx_12 + 0x10))
    sub_142173c60(&arg1[0x8e], *(r12 + 0xe8))

void* rax_31 = arg1[0x11]

if (rax_31 != 0 && *(rax_31 + 0x68) != 0)
    void* rdx_15 = *(r12 + 0xe8)
    
    if (rdx_15 != 0)
        sub_140d3a3a0(&arg_10, rdx_15)
        void* r10_1 = arg1[0x11]
        
        if (*(r10_1 + 0x1378) != *(r10_1 + 0x13a4))
            void* rcx_17 = arg_10
            void* r9_2 = r10_1 + 0x13a8
            void* rdx_16 = *(r9_2 + 8)
            uint32_t r11_3 = (rcx_17 u>> 0x20).d
            
            if (rdx_16 != 0)
                r9_2 = rdx_16
            
            int32_t i_1 =
                *(r9_2 + (((sx.q(r11_3) ^ sx.q(rcx_17.d)) & (sx.q(*(r10_1 + 0x13b8)) - 1)) << 2))
            
            if (i_1 != 0xffffffff)
                int64_t r9_3 = *(r10_1 + 0x1370)
                
                do
                    int64_t r8_6 = sx.q(i_1) * 0x18
                    int64_t rdx_18 = *(r8_6 + r9_3)
                    
                    if (rdx_18.d == rcx_17.d && (rdx_18 u>> 0x20).d == r11_3)
                        if (i_1 != 0xffffffff)
                            void* rcx_18 = r8_6 + r9_3
                            
                            if (rcx_18 != 0)
                                void* rcx_19 = *(rcx_18 + 8)
                                
                                if (rcx_19 != 0)
                                    *(rcx_19 + 0x30) |= 0x20
                                    *(rcx_19 + 0x70) = 0
                                    sub_141f83590(rcx_19, 0)
                        
                        break
                    
                    i_1 = *(r8_6 + r9_3 + 0x10)
                while (i_1 != 0xffffffff)
    
    int64_t* rcx_20 = *(arg1[0x11] + 0x68)
    (*(*rcx_20 + 0x2a8))(rcx_20, r12)

int32_t rax_38 = arg1[0x13].d
uint64_t result = zx.q(rax_38 - 1)
int64_t rbx_5 = sx.q(result.d)

if (rax_38 - 1 s>= 0)
    int64_t temp3_1
    
    do
        result = arg1[0x12]
        void* rcx_21 = *(result + (rbx_5 << 3))
        
        if (rcx_21 != 0)
            int64_t* rcx_22 = *(rcx_21 + 0x68)
            
            if (rcx_22 != 0)
                result = (*(*rcx_22 + 0x2a8))(rcx_22, r12)
        
        temp3_1 = rbx_5
        rbx_5 -= 1
    while (temp3_1 - 1 s>= 0)

return result
