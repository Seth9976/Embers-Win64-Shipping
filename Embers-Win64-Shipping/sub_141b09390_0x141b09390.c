// 函数: sub_141b09390
// 地址: 0x141b09390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t var_140 = arg1
int64_t var_148 = arg6
int64_t result = sub_141aef8f0(arg3, arg4)
int64_t* result_2 = result

if (result != 0)
    int32_t zmm2 = 0xbf800000
    char r9 = 0
    char r8 = 0
    int32_t rcx_1 = data_143f2c430
    char r10_1 = 0
    int32_t zmm3 = -0x40800000
    int64_t* rbx_1 = *(arg1 + 0x10)
    int32_t zmm4_1 = -0x40800000
    int64_t rsi_1 = 0
    int64_t r12_1 = sx.q(*(arg1 + 0x18)) << 3
    int64_t result_1 = result
    int32_t rax_4 = -1
    int64_t var_100_1 = arg1
    uint64_t r12_2 = r12_1 u>> 3
    int64_t r15_1 = 0
    int32_t var_e8 = rcx_1
    int32_t rcx_2 = -1
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        r12_2 = 0
    
    int32_t var_cc_1 = 0xbf800000
    int32_t var_c4_1 = 0xbf800000
    int32_t var_9c_1 = 0xbf800000
    void* var_f8_1 = arg2
    void* var_f0_1 = arg7
    char var_e4_1 = 1
    int64_t var_e0_1 = 0
    int64_t var_d8_1 = 0
    int32_t var_d0_1 = 0xffffffff
    char var_c7_1 = 0
    char var_bf_1 = 0
    char var_bc_1 = 0
    char var_b4_1 = 1
    int64_t var_b0_1 = 0
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0xffffffff
    
    if (r12_2 != 0)
        do
            int64_t* rdx_3 = *rbx_1
            int64_t* rax_5 = rbx_1
            
            if ((rdx_3[0xa].b & 2) == 0)
                rax_5 = rdx_3
            
            int64_t* rcx_3 = *rax_5
            (*(*rcx_3 + 8))(rcx_3, &var_e8, &result_1, zx.q(rdx_3[0xe].b), &result_1)
            rbx_1 = &rbx_1[1]
            r15_1 += 1
        while (r15_1 != r12_2)
        
        zmm4_1 = var_9c_1
        rcx_2 = var_a0_1
        r10_1 = var_bc_1
        r8 = var_bf_1
        zmm3 = var_c4_1
        r9 = var_c7_1
        zmm2 = var_cc_1
        rax_4 = var_d0_1
    
    int128_t var_98 = var_e8.o
    int64_t var_88_1 = var_d8_1
    int32_t var_7c_1 = zmm2
    int32_t var_80_1 = rax_4
    char var_77_1 = 0
    
    if (r9 != 0)
        char var_c8
        char var_78_1 = var_c8
        char var_77_2 = 1
    
    int32_t var_74_1 = zmm3
    char var_6f_1 = 0
    
    if (r8 != 0)
        char var_c0
        char var_70_1 = var_c0
        char var_6f_2 = 1
    
    int64_t r12_3 = var_140
    int32_t var_50_1 = rcx_2
    int32_t var_4c_1 = zmm4_1
    char var_6c_1 = r10_1
    int128_t var_68_1 = rcx_1.o
    int64_t var_58_1 = var_a8_1
    (*(*result_2 + 0x20))(result_2, arg2, &var_98, r12_3, arg5, var_148, arg7)
    int32_t r8_3 = -1
    int32_t r9_3 = 0
    
    if (arg2 != 0)
        sub_140d3a3a0(&var_148, arg2)
        int64_t rax_10 = var_148
        var_140 = rax_10
        r8_3 = rax_10.d
        r9_3 = var_140:4.d
    
    int32_t* i = result_2[3]
    result = sx.q(result_2[4].d)
    
    for (void* rdx_8 = result * 0x58 + i; i != rdx_8; i = &i[0x16])
        if (*i == r8_3 && i[1] == r9_3)
            sub_141a3d100(&var_140, result_2[5], *sub_141a50e80(&var_148))
            int64_t* rbx_3 = result_2[2]
            int64_t rcx_10 = 0
            void** var_120
            int32_t var_158
            int64_t var_130
            int64_t* var_110
            
            if (arg2 == 0)
                var_148 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_19 = rbx_3[1].d
                    
                    if (rax_19 != 0)
                        rbx_3[1].d = rax_19 + 1
                        rax_19.b = 1
                    
                    if (rax_19.b == 0)
                        rbx_3 = nullptr
                    
                    var_148 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_10 = result_2[1]
                
                var_130 = rcx_10
                int64_t* var_128_2 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                int64_t* rax_20 = sub_141a30820(&var_120, &var_130)
                int64_t* r15_2 = *(r12_3 + 0x10)
                char r8_7 = 0
                uint64_t r12_7 = sx.q(*(r12_3 + 0x18)) << 3 u>> 3
                
                if (r15_2 u> &r15_2[sx.q(*(r12_3 + 0x18))])
                    r12_7 = 0
                
                if (r12_7 != 0)
                    char var_168_2 = 1
                    
                    do
                        void* rax_21 = *r15_2
                        int64_t r8_8 = var_140
                        *(arg7 + 0x2d0) = *(rax_21 + 0x58)
                        *(arg7 + 0x2d8) = *(rax_21 + 0x60)
                        *(arg7 + 0x2dc) = 2
                        var_158.q = *(arg7 + 0x2d0)
                        int32_t var_150_3 = *(arg7 + 0x2d8)
                        sub_141a590e0(arg7 + 0x148, 2, r8_8, &var_158, rax_20, arg7 + 0xf8)
                        rsi_1 += 1
                        r15_2 = &r15_2[1]
                    while (rsi_1 != r12_7)
                    
                    rbx_3 = var_148
                    r8_7 = var_168_2
                
                char rdx_16 = *(arg7 + 0x2dd)
                var_158 = data_1439e5888
                int32_t var_154_2 = 0xffffffff
                *(arg7 + 0x2d0) = var_158.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_16
                
                if (r8_7 == 0 && rdx_16 != 0)
                    var_158.q = *(arg7 + 0x2d0)
                    int32_t var_150_4 = *(arg7 + 0x2d8)
                    sub_141a590e0(arg7 + 0x148, rdx_16, var_140, &var_158, rax_20, arg7 + 0xf8)
                
                if (var_110 != 0)
                    int32_t temp0_1 = *(var_110 + 0xc)
                    *(var_110 + 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        (*(*var_110 + 8))(var_110, 1)
                
                result = &data_142d4ba10
            else
                int64_t* var_138_1 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_12 = rbx_3[1].d
                    
                    if (rax_12 != 0)
                        rbx_3[1].d = rax_12 + 1
                        rax_12.b = 1
                    
                    if (rax_12.b == 0)
                        rbx_3 = nullptr
                    
                    var_138_1 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_10 = result_2[1]
                
                var_130 = rcx_10
                int64_t* var_128_1 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                int64_t* rax_13 = sub_141a30870(&var_120, &var_130)
                int64_t* r14 = *(r12_3 + 0x10)
                char r9_4 = 0
                int64_t rcx_12 = sx.q(*(r12_3 + 0x18))
                int64_t r8_5 = rax_13
                var_148 = rax_13
                uint64_t r12_5 = rcx_12 << 3 u>> 3
                
                if (r14 u> &r14[rcx_12])
                    r12_5 = 0
                
                int64_t var_188_2
                
                if (r12_5 != 0)
                    char var_168_1 = 1
                    
                    do
                        void* rax_14 = *r14
                        int64_t rdx_11 = var_140
                        *(arg7 + 0x2d0) = *(rax_14 + 0x58)
                        int32_t rax_15 = *(rax_14 + 0x60)
                        *(arg7 + 0x2d8) = rax_15
                        int32_t var_150_1 = rax_15
                        *(arg7 + 0x2dc) = 2
                        var_188_2.b = 2
                        var_158.q = *(arg7 + 0x2d0)
                        sub_1405c5900(arg7 + 0xf8, rdx_11, rax_13, arg2, var_188_2.b, &var_158)
                        rsi_1 += 1
                        r14 = &r14[1]
                    while (rsi_1 != r12_5)
                    
                    rbx_3 = var_138_1
                    r8_5 = var_148
                    r9_4 = var_168_1
                
                char rdx_12 = *(arg7 + 0x2dd)
                var_158 = data_1439e5888
                int32_t var_154_1 = 0xffffffff
                *(arg7 + 0x2d0) = var_158.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_12
                
                if (r9_4 == 0)
                    int32_t var_150_2 = *(arg7 + 0x2d8)
                    var_188_2.b = rdx_12
                    var_158.q = *(arg7 + 0x2d0)
                    sub_1405c5900(arg7 + 0xf8, var_140, r8_5, arg2, var_188_2.b, &var_158)
                
                if (var_110 != 0)
                    int32_t temp1_1 = *(var_110 + 0xc)
                    *(var_110 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_110 + 8))(var_110, 1)
                
                result = &data_142d4ba10
            var_120 = &data_142d4ba10
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    result = (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_3 + 8))(rbx_3, 1)
            
            break

__security_check_cookie(rax_1 ^ &var_1a8)
return result
