// 函数: sub_1426c1a20
// 地址: 0x1426c1a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_d0 = arg2
int64_t var_cc = -1
sub_1426ac380(arg1 + 0xf8, *(arg1 + 0x100) - *(arg1 + 0x12c), 0)
int64_t rax = sx.q(*(arg1 + 0x140))

if (rax.d != 0)
    void* rcx_1 = *(arg1 + 0x138)
    void* r8 = arg1 + 0x130
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((rax - 1) & zx.q(arg2)) << 2))
    var_cc:4.d = i
    var_cc.d = i
    
    if (i != 0xffffffff)
        int64_t rdx_4 = *(arg1 + 0xf8)
        var_cc.d = i
        
        do
            int64_t rcx_3 = sx.q(i) << 5
            i = *(rcx_3 + rdx_4 + 0x18)
            
            if (*(rcx_3 + rdx_4) == arg2)
                break
            
            var_cc.d = i
        while (i != 0xffffffff)
        
        var_cc:4.d = i

uint128_t zmm1 = (arg1 + 0xf8).o
int64_t* var_c0 = arg1 + 0xf8
uint64_t result = _mm_bsrli_si128(zmm1, 8).q u>> 0x20
uint128_t var_68 = var_cc:4.o

if (result.d != 0xffffffff)
    int32_t i_1 = var_68.d
    int32_t i_2 = zmm1:0xc.d
    int64_t* r12_1 = zmm1.q
    int32_t r14_1 = 0
    
    while (true)
        result = 0
        void* rcx_6 = (sx.q(i_2) << 5) + *r12_1
        
        if (*(rcx_6 + 0x10) != 0)
            int64_t* rcx_7 = *(rcx_6 + 8)
            void arg_8
            
            if (rcx_7 != 0)
                result = *(*(*rcx_7 + 0x30))(rcx_7, &arg_8)
        
        if (result == arg3)
            int64_t* var_d8
            var_d8.d = 0
            int32_t r10_1 = *(arg1 + 0x170)
            void* r8_1 = arg1 + 0x158
            var_d8:4.d = 1
            int32_t rcx_9 = 0
            var_d0.q = r8_1
            var_cc:4.d = 0xffffffff
            int32_t var_c4_1 = 0
            var_c0.d = 0
            
            if (r10_1 != 0)
                void* rax_6 = *(r8_1 + 0x10)
                
                if (rax_6 != 0)
                    r8_1 = rax_6
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(r10_1 - 1)
                int32_t rdx_8 = *r8_1
                int32_t var_c4_3
                
                if (rdx_8 != 0)
                label_1426c1bf8:
                    int32_t rax_13 = neg.d(rdx_8) & rdx_8
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
                    var_d8:4.d = rax_13
                    int32_t rax_14
                    
                    if (rax_13 == 0)
                        rax_14 = 0x20
                    else
                        rax_14 = 0x1f - temp0_2
                    
                    int32_t var_c4_2 = rcx_9 - rax_14 + 0x1f
                    
                    if (rcx_9 - rax_14 + 0x1f s> r10_1)
                        var_c4_3 = r10_1
                else
                    while (true)
                        int64_t rdx_9 = sx.q(r14_1)
                        rcx_9 += 0x20
                        r14_1 += 1
                        var_c0.d = rcx_9
                        var_d8.d = r14_1
                        
                        if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_8 = *(r8_1 + (rdx_9 << 2) + 4)
                        var_cc:4.d = 0xffffffff
                        
                        if (rdx_8 != 0)
                            goto label_1426c1bf8
                    
                    var_c4_3 = r10_1
            
            uint128_t zmm4_1 = var_cc:4.o
            int64_t* var_30_1 = arg1 + 0x148
            uint128_t zmm0 = var_d8.o
            uint128_t var_40_1 = zmm4_1
            int16_t var_80_1 = 0
            void* rax_16 = zmm0.q
            uint128_t var_a8_1 = zmm0
            int128_t var_b8 = (arg1 + 0x148).o
            zmm0.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
            
            if ((zmm4_1.q u>> 0x20).d s< *(rax_16 + 0x18))
                int32_t r8_2 = var_a8_1:0xc.d
                
                while (true)
                    if (*(*var_b8.q + sx.q(r8_2) * 0x18 + 8) == arg3)
                        sub_1405c2fb0(zmm0:8.q, r8_2)
                    else
                        var_a8_1:8.d &= not.d(var_b8:0xc.d)
                        sub_14059bdd0(&var_b8:8)
                        r8_2 = var_a8_1:0xc.d
                        
                        if (r8_2 s< *(var_a8_1.q + 0x18))
                            continue
                        else if (var_80_1.b == 0)
                            break
                    
                    if (var_80_1:1.b == 0)
                        break
                    
                    r8_2.b = 1
                    sub_1405b6470(arg1 + 0x148, *(arg1 + 0x150) - *(arg1 + 0x17c), r8_2.b)
                    break
            
            return sub_1426bc430(var_68:8.q, i_2)
        
        i_2 = i_1
        
        if (i_1 == 0xffffffff)
            break
        
        int64_t rcx_8 = *r12_1
        
        do
            result = sx.q(i_2) << 5
            i_1 = *(result + rcx_8 + 0x18)
            
            if (*(result + rcx_8) == zmm1:8.b)
                break
            
            i_2 = i_1
        while (i_1 != 0xffffffff)
        
        if (i_2 == 0xffffffff)
            break

return result
