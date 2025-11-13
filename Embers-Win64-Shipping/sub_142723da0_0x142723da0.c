// 函数: sub_142723da0
// 地址: 0x142723da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10_1 = *(arg1 + 0x38) + 0x38
int32_t* r9 = r10_1 + 0x10
int32_t rbx = r9[6]
int32_t var_b8 = 0
int32_t rcx = 0
int32_t var_b4 = 1
int32_t r8 = 0
int32_t* var_b0 = r9
int32_t var_a8 = 0xffffffff
int32_t var_a4 = 0
int32_t var_a0 = 0

if (rbx != 0)
    int32_t* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9
    int32_t var_a4_2
    
    if (rdx_3 != 0)
    label_142723e48:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_a4_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> rbx)
            var_a4_2 = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_a0 = rcx
            var_b8 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = r9[rdx_4 + 1]
            var_a8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142723e48
        
        var_a4_2 = rbx

void* var_50 = r10_1
void* var_78 = r10_1
uint128_t result = 0x7f7fffff
int128_t zmm2 = var_78.o
int16_t var_80 = 0
int128_t var_60 = 0xffffffff
uint128_t zmm4 = var_b8.o
uint128_t zmm0
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_b8.o = zmm2
var_a8.o = zmm4
uint128_t var_58_1 = zmm0
uint128_t var_98 = zmm0

if (0 s< *(zmm4.q + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        void* r14_2 = sx.q(i) * 0x3c + *var_b8.q
        
        if (test_bit(*(r14_2 + 0xc), zx.d(*(arg1 + 0x44))))
            int64_t* rsi_1 = *(arg1 + 0x80)
            void* r15_2 = sx.q(*(arg1 + 0x88)) * 0x38 + rsi_1
            
            if (rsi_1 != r15_2)
                int32_t* rdi_1 = rsi_1 + 0x14
                
                do
                    if (*(r14_2 + 0x28) == rdi_1[3].b)
                        zmm2.d = (*(r14_2 + 0x14)).d f- rdi_1[-1]
                        int64_t zmm1
                        zmm1.d = (*(r14_2 + 0x10)).d f- rdi_1[-2]
                        zmm0.d = (*(r14_2 + 0x18)).d f- *rdi_1
                        zmm2.d = zmm2.d f* zmm2.d
                        zmm1.d = zmm1.d f* zmm1.d
                        zmm0.d = zmm0.d f* zmm0.d
                        zmm2.d = zmm2.d f+ zmm1.d
                        zmm2.d = zmm2.d f+ zmm0.d
                        
                        if (not(zmm2.d f> rdi_1[1]))
                            uint128_t var_70
                            var_70:0xc.d = rsi_1[1].d
                            var_58_1.d = *rdi_1
                            var_70.d = rdi_1[4].d
                            var_58_1:4.q = 0
                            int64_t arg_8 = 0
                            var_78.d = 0
                            var_78:4.d = 0x7f7fffff
                            var_70:4.q = *rsi_1
                            var_60.q = *(rdi_1 - 8)
                            var_50:4.b = 0xff
                            int64_t var_48
                            sub_140b58260(&var_48, u"Invalid", 1)
                            int64_t rbx_1 = *(rdi_1 + 0x1c)
                            int32_t rcx_4
                            rcx_4.b = *(arg1 + 0x2c) == 1
                            var_78.d = rdi_1[2]
                            int64_t rax_21 = *(arg1 + 0x48)
                            int32_t var_40 = (rcx_4 + 2) | (var_40 & 0xfffffffa)
                            char rcx_7 = *(arg1 + 0x44)
                            *(r14_2 + 0x2c) |= 1
                            var_50:4.b = rcx_7
                            var_48 = rax_21
                            result = sub_14270a6d0(sub_140d3c6e0(r14_2 + 4), rbx_1, &var_78)
                    
                    rsi_1 = &rsi_1[7]
                    rdi_1 = &rdi_1[0xe]
                while (rsi_1 != r15_2)
        
        var_a0 &= not.d(var_b0:4.d)
        sub_14059bdd0(&var_b0)
        i = i_1
    while (i s< *(var_a8.q + 0x18))
    
    if (var_80.b != 0 && var_80:1.b != 0)
        sub_1426f6b40(r10_1, *(r10_1 + 8) - *(r10_1 + 0x34), 1)

*(arg1 + 0x88) = 0

if (*(arg1 + 0x8c) s<= 0xffffffff)
    sub_1408cf3a0(arg1 + 0x80, 0)

return result
