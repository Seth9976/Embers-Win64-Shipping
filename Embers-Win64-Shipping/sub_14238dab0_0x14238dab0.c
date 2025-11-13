// 函数: sub_14238dab0
// 地址: 0x14238dab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t result = __security_cookie ^ &var_1b8
int64_t result_1 = result

if (arg1[0xa1].d s> 0)
    char rax_2 = (*(*arg1 + 0xf0))()
    int64_t r8 = *arg1
    uint32_t r15_1 = zx.d(*(arg1[0x2a] + 0x5f))
    uint32_t rax_3 = (*(r8 + 0x10))(arg1, *(arg2 + 8), r8)
    char var_15f_1 = 0xff
    
    if (rax_3 s>= r15_1)
        r15_1 = rax_3
    
    int64_t rdi_1 = sx.q(r15_1)
    int64_t var_138_1 = rdi_1
    void* rax_5 = arg1[0xa0]
    void* r13_1 = *(*arg1[0x2a] + (rdi_1 << 3))
    void* rcx_3 = &arg1[0x30]
    
    if (rax_5 != 0)
        rcx_3 = rax_5
    
    void* rcx_4 = rcx_3 + rdi_1 * 0x70
    void* var_170 = nullptr
    int64_t var_168_1 = 0
    int32_t var_15c_1 = 0
    int64_t var_158 = 0
    int32_t var_150_1 = 0
    int64_t var_148 = 0
    int32_t rax_8 = (*(*arg1 + 0x188))(arg1)
    int32_t rsi_1 = 0
    
    if (rax_8 s> 0)
        int32_t rcx_6 = *(r13_1 + 0x30)
        
        do
            int32_t rax_9 = rcx_6
            
            if (rcx_6 s> var_168_1:4.d)
                sub_1407c4520(&var_170, rcx_6)
                rax_9 = *(r13_1 + 0x30)
            
            int32_t rbx_1 = 0
            rcx_6 = rax_9
            
            if (rax_9 s> 0)
                do
                    int32_t var_ac = var_ac & 0xf8000000
                    int32_t var_84 = var_84 & 0xfffff800
                    int128_t var_e8
                    int128_t* var_180_1 = &var_e8
                    int32_t var_4c = (var_4c & 0xfc0c003c) | 0x40c003c
                    int64_t rax_13 = *arg1
                    int64_t var_80_1 = 0
                    char var_188_1 = 0
                    char var_190_1 = 0
                    int32_t var_74_1 = 1
                    int128_t var_70_1
                    __builtin_memset(&var_70_1, 0, 0x18)
                    int32_t var_58_1 = 0xffffffff
                    int32_t var_54_1 = 0
                    int32_t var_50_1 = 0xffff0000
                    int32_t var_78_1 = 1
                    __builtin_memset(&var_e8, 0, 0x3c)
                    int64_t var_a0_1 = 1
                    int32_t var_90_1 = 0xffffffff
                    int32_t var_8c_1 = 0
                    int32_t var_88_1 = 0x3f800000
                    
                    if ((*(rax_13 + 0x198))(arg1, zx.q(r15_1), zx.q(rsi_1), zx.q(rbx_1), rax_2, 
                            var_190_1, var_188_1, var_180_1) == 0)
                        int64_t* rax_15 = sub_14210f630(0)
                        int64_t rdx_3 = *rax_15
                        var_70_1:8.q = (*(rdx_3 + 0x280))(rax_15, rdx_3)
                        var_70_1.q = rdi_1 * 0x430 + *(arg1[0x2a] + 0x10)
                    
                    int64_t rdi_2 = sx.q(var_168_1.d)
                    var_50_1:3.b = rbx_1.b
                    int32_t rax_18 = (rdi_2 + 1).d
                    var_168_1.d = rax_18
                    
                    if (rax_18 s> var_168_1:4.d)
                        sub_140775640(&var_170)
                    
                    sub_140819f30(rdi_2 * 0xa0 + var_170, &var_e8)
                    
                    if (var_80_1 != 0)
                        sub_140a74f90(var_80_1)
                    
                    rcx_6 = *(r13_1 + 0x30)
                    rbx_1 += 1
                    rdi_1 = var_138_1
                while (rbx_1 s< rcx_6)
            
            rsi_1 += 1
        while (rsi_1 s< rax_8)
    
    int64_t rbx_2 = sx.q(var_150_1)
    void* var_178 = rcx_4
    int32_t rax_20 = (rbx_2 + 1).d
    var_150_1 = rax_20
    
    if (rax_20 s> 0)
        sub_1405c4fe0(&var_158)
    
    int128_t zmm0 = data_14399f6e0
    int64_t rax_21 = var_158
    int64_t r15_2 = 0
    int64_t rcx_19 = rbx_2 << 6
    int64_t var_128 = 0
    *(rcx_19 + rax_21) = zmm0
    *(rcx_19 + rax_21 + 0x10) = data_14399f6f0
    *(rcx_19 + rax_21 + 0x20) = data_14399f700
    *(rcx_19 + rax_21 + 0x30) = data_14399f710
    int32_t i_1 = var_168_1.d
    void* rbx_3 = var_170
    int32_t i_2 = i_1
    int32_t rsi_2
    
    if (i_1 != 0)
        sub_14083a0c0(&var_128, i_1, 0)
        r15_2 = var_128
        void* rsi_4 = r15_2 - rbx_3
        int32_t i
        
        do
            sub_140819f30(rsi_4 + rbx_3, rbx_3)
            rbx_3 += 0xa0
            i = i_1
            i_1 -= 1
        while (i != 1)
        int32_t var_11c
        rsi_2 = var_11c
        i_1 = i_2
    else
        rsi_2 = 0
    
    char var_118_1 = 0
    int32_t rax_22 = sub_142366560(r13_1)
    uint64_t rax_23 = sub_142366560(r13_1)
    void* rcx_24 = arg1[0xc2]
    void* rdx_9 = &arg1[0xa2]
    void* var_108_1 = rcx_4
    int64_t r14_1 = sx.q(*(arg2 + 0x30))
    uint32_t r12_3 = (rax_23 * 3).d << 2
    int32_t r13_2 = *(rcx_4 + 0x48)
    
    if (rcx_24 != 0)
        rdx_9 = rcx_24
    
    uint32_t var_110_1 = r12_3
    int32_t var_10c_1 = r13_2
    int32_t rax_28 = (r14_1 + 1).d
    *(arg2 + 0x30) = rax_28
    
    if (rax_28 s> *(arg2 + 0x34))
        sub_1405c4f50(arg2 + 0x28)
    
    var_128 = 0
    i_2.q = 0
    int64_t* rcx_28 = r14_1 * 0x30 + *(arg2 + 0x28)
    *rcx_28 = r15_2
    rcx_28[1].d = i_1
    *(rcx_28 + 0xc) = rsi_2
    rcx_28[2].b = 0
    *(rcx_28 + 0x14) = rax_22
    rcx_28[4] = rcx_4
    rcx_28[5] = (var_138_1 << 5) + rdx_9
    rcx_28[3].d = r12_3
    *(rcx_28 + 0x1c) = r13_2
    sub_14081c7d0(&var_128)
    sub_1422926f0(&var_178)
    int64_t rbx_5 = sx.q(arg3[1].d)
    int32_t rax_32 = (rbx_5 + 1).d
    arg3[1].d = rax_32
    
    if (rax_32 s> *(arg3 + 0xc))
        sub_1407c3b60(arg3)
    
    sub_14081b0c0(rbx_5 * 0x38 + *arg3, &var_178)
    sub_1405ec8a0(&var_148)
    int64_t rcx_35 = var_158
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    result = sub_14081c7d0(&var_170)

__security_check_cookie(result_1 ^ &var_1b8)
return result
