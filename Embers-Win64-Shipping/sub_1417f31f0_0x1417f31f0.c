// 函数: sub_1417f31f0
// 地址: 0x1417f31f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = data_1439c29d8 - data_1439c2a04
int32_t* i_1 = nullptr
int64_t var_e0 = 0

if (rdx_1 s> 0)
    sub_14083ad30(&i_1, rdx_1)

int32_t r9 = (data_1439c29f8).d
int32_t var_d8 = 0
int32_t var_d4 = 1
int32_t rcx_2 = 0
void* var_d0 = &data_1439c29e0
int32_t r8 = 0
int32_t var_c8 = 0xffffffff
int64_t var_c4 = 0

if (r9 != 0)
    void* rax_1 = data_1439c29f0
    void* r10_1 = &data_1439c29e0
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_4 = *r10_1
    
    if (rdx_4 != 0)
    label_1417f32b4:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_d4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t rax_10 = r8 - rax_9 + 0x1f
        
        if (rax_10 s> r9)
            rax_10 = r9
        
        var_c4.d = rax_10
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_c4:4.d = r8
            var_d8 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_c4.d = r9
                break
            
            rdx_4 = *(r10_1 + (rdx_5 << 2) + 4)
            var_c8 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1417f32b4

double zmm2[0x2] = var_c8.o
int64_t* var_90 = &data_1439c29d0
uint128_t var_88 = var_d8.o
int32_t var_9c = r9
double var_78 = zmm2[0]
uint128_t zmm1 = var_88
double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
var_d8.o = var_90.o
var_c8.o = zmm1
int64_t var_b8 = temp0_3.q

while (true)
    int32_t var_bc
    int64_t rax_11 = sx.q(var_bc)
    int64_t rcx_6 = var_d8.q
    
    if (rax_11.d == ((0xffffffff << (r9.b & 0x1f)).q u>> 0x20).d && var_c8.q == &data_1439c29e0
            && rcx_6 == &data_1439c29d0)
        int32_t r9_1 = (data_1439c2a48).d
        void* r10_2 = &data_1439c2a30
        int64_t r14_2 = 0
        int32_t var_ac = 1
        var_d8.q = 0
        int32_t rcx_10 = 0
        int32_t arg_8 = 0
        int64_t* r13 = nullptr
        var_d0:4.d = 0
        int32_t r12 = 0
        int32_t var_b0 = 0
        void* var_a8 = &data_1439c2a30
        int32_t r8_2 = 0
        int32_t var_a0_1 = 0xffffffff
        var_9c.q = 0
        
        if (r9_1 != 0)
            void* rax_16 = data_1439c2a40
            
            if (rax_16 != 0)
                r10_2 = rax_16
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r9_1 - 1)
            int32_t rdx_11 = *r10_2
            
            if (rdx_11 != 0)
            label_1417f3434:
                int32_t rax_23 = neg.d(rdx_11) & rdx_11
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
                int32_t var_ac_1 = rax_23
                int32_t r15_1
                
                if (rax_23 == 0)
                    r15_1 = 0x20
                else
                    r15_1 = 0x1f - temp0_4
                
                int32_t rax_24 = r8_2 - r15_1 + 0x1f
                
                if (rax_24 s> r9_1)
                    rax_24 = r9_1
                
                int32_t var_9c_2 = rax_24
            else
                while (true)
                    int64_t rdx_12 = sx.q(rcx_10)
                    r8_2 += 0x20
                    rcx_10 += 1
                    int32_t var_98_1 = r8_2
                    var_b0 = rcx_10
                    
                    if (rdx_12.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        int32_t var_9c_1 = r9_1
                        break
                    
                    rdx_11 = *(r10_2 + (rdx_12 << 2) + 4)
                    int32_t var_a0_2 = 0xffffffff
                    
                    if (rdx_11 != 0)
                        goto label_1417f3434
        
        uint128_t var_60 = var_b0.o
        int32_t var_9c_3 = r9_1
        int128_t var_50 = 0xffffffff
        uint64_t rdx_14 = (0xffffffff << (r9_1.b & 0x1f)).q u>> 0x20
        uint64_t arg_10 = rdx_14
        double temp0_5[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_90.o = (&data_1439c2a20).o
        uint128_t var_58
        var_88 = var_58
        var_78 = temp0_5.q
        
        while (true)
            int64_t rcx_14 = sx.q(var_78:4.d)
            
            if (rcx_14.d == rdx_14.d && var_88:8.q == &data_1439c2a30 && var_90 == &data_1439c2a20)
                int64_t* rbx_8 = r13
                void* rcx_24 = &r13[sx.q(r12)]
                uint64_t rdi_7 = (rcx_24 - r13 + 7) u>> 3
                
                if (r13 u> rcx_24)
                    rdi_7 = 0
                
                if (rdi_7 != 0)
                    do
                        sub_1417f3fe0(&data_1439c2a20, *rbx_8)
                        r14_2 += 1
                        rbx_8 = &rbx_8[1]
                    while (r14_2 != rdi_7)
                
                if (r13 != 0)
                    sub_140a74f90(r13)
                
                int32_t* i = i_1
                uint64_t result = sx.q(var_e0.d)
                
                for (void* rdi_8 = &i[result * 3]; i != rdi_8; i = &i[3])
                    result = sub_1417f4170(&data_1439c29d0, i)
                
                int32_t* i_3 = i_1
                
                if (i_3 == 0)
                    return result
                
                return sub_140a74f90(i_3)
            
            int32_t* rbx_6 = (rcx_14 << 5) + *var_90
            
            if (sub_140d3e110(rbx_6) == 0)
                int64_t rdi_3 = sx.q(r12)
                r12 = (rdi_3 + 1).d
                arg_8 = r12
                var_d0.d = r12
                
                if (r12 s> var_d0:4.d)
                    sub_1405a4d70(&var_d8)
                    r12 = var_d0.d
                    r13 = var_d8.q
                    arg_8 = r12
                
                r13[rdi_3] = *rbx_6
            else
                void* r13_1 = *(rbx_6 + 8)
                sub_140d3c6e0(rbx_6)
                int64_t rcx_17 = sx.q(var_e0.d)
                
                if (rcx_17.d != 0)
                    int32_t* i_4 = i_1
                    int32_t r12_1 = 0
                    int32_t rdi_2 = 0
                    int64_t rbx_7 = 0
                    
                    if (*i_4 != *(r13_1 + 0x150) || *(i_4 + 4) != *(r13_1 + 0x154))
                        r14_2.b = 1
                    else
                        r14_2.b = 0
                    
                    int64_t r15_2 = rcx_17
                    
                    do
                        int64_t r9_2 = sx.q(rdi_2)
                        rbx_7 += 1
                        rdi_2 += 1
                        
                        if (rbx_7 s< r15_2)
                            void* rax_30 = &i_4[rbx_7 * 3]
                            
                            do
                                if (*rax_30 != *(r13_1 + 0x150)
                                        || *(rax_30 + 4) != *(r13_1 + 0x154))
                                    rcx_17.b = 1
                                else
                                    rcx_17.b = 0
                                
                                if (r14_2.b != rcx_17.b)
                                    break
                                
                                rdi_2 += 1
                                rbx_7 += 1
                                rax_30 += 0xc
                            while (rbx_7 s< r15_2)
                        
                        int32_t rsi_2 = rdi_2 - r9_2.d
                        
                        if (r14_2.b != 0)
                            if (r12_1 != r9_2.d)
                                memmove(&i_4[sx.q(r12_1) * 3], &i_4[r9_2 * 3], rsi_2 * 0xc)
                                i_4 = i_1
                            
                            r12_1 += rsi_2
                        
                        r14_2.b ^= 1
                    while (rbx_7 s< r15_2)
                    
                    var_e0.d = r12_1
                    r14_2 = 0
                    r12 = arg_8
                
                r13 = var_d8.q
            
            var_78.d &= not.d(var_88:4.d)
            sub_14059bdd0(&var_88)
            rdx_14 = arg_10
    
    int64_t rdi_1 = sx.q(var_e0.d)
    int64_t* rbx_3 = rax_11 * 0x30 + *rcx_6
    int32_t rax_12 = (rdi_1 + 1).d
    var_e0.d = rax_12
    
    if (rax_12 s> var_e0:4.d)
        sub_14083a7e0(&i_1)
    
    int32_t* i_2 = i_1
    int64_t rcx_8 = rdi_1 * 3
    *(i_2 + (rcx_8 << 2)) = *rbx_3
    i_2[rcx_8 + 2] = rbx_3[1].d
    var_c4:4.d &= not.d(var_d0:4.d)
    sub_14059bdd0(&var_d0)
