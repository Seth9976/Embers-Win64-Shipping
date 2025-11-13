// 函数: sub_1405b5ee0
// 地址: 0x1405b5ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t var_120 = arg1
int64_t var_128 = arg6
int32_t* i = sub_1405a8c30(arg3, arg4)
int64_t* i_2 = i

if (i != 0)
    int32_t* i_1 = i
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t rsi_1 = 0
    int64_t var_e0_1 = arg1
    int64_t r15_1 = 0
    void* var_d8_1 = arg2
    void* var_d0_1 = arg7
    uint64_t r12_2 = sx.q(*(arg1 + 0x18)) << 3 u>> 3
    int32_t var_98
    __builtin_memset(&var_98, 0, 0x1c)
    int32_t var_64_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        r12_2 = 0
    
    char var_44_1 = 0
    void var_b0
    
    if (r12_2 != 0)
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_6 = rbx_1
            int64_t* var_168_1 = &i_1
            int512_t zmm2
            zmm2.o = *(rdx_1 + 0x34)
            
            if ((rdx_1[3].b & 2) == 0)
                rax_6 = rdx_1
            
            int64_t* rcx_1 = *rax_6
            (*(*rcx_1 + 8))(rcx_1, &var_b0, &i_1, zmm2, zx.q(rdx_1[7].b))
            rbx_1 = &rbx_1[1]
            r15_1 += 1
        while (r15_1 != r12_2)
    
    uint128_t var_c8
    sub_1405aa4e0(&var_b0, &var_c8, &i_1)
    int64_t r12_3 = var_120
    (*(*i_2 + 0x20))(i_2, arg2, &var_c8, r12_3, arg5, var_128, arg7)
    int32_t rdx_5 = -1
    int32_t r8_3 = 0
    
    if (arg2 != 0)
        sub_140d3a3a0(&var_128, arg2)
        int64_t rax_9 = var_128
        var_120 = rax_9
        rdx_5 = rax_9.d
        r8_3 = var_120:4.d
    
    for (i = i_2[3]; i != &i[sx.q(i_2[4].d) * 8]; i = &i[8])
        if (*i == rdx_5 && i[1] == r8_3)
            sub_141a3d100(&var_120, i_2[5], *sub_141a50e80(&var_128))
            int64_t* rbx_3 = i_2[2]
            int64_t rcx_12 = 0
            void** var_100
            int32_t var_138
            int64_t var_110
            int64_t* var_f0
            
            if (arg2 == 0)
                var_128 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_18 = rbx_3[1].d
                    
                    if (rax_18 != 0)
                        rbx_3[1].d = rax_18 + 1
                        rax_18.b = 1
                    
                    if (rax_18.b == 0)
                        rbx_3 = nullptr
                    
                    var_128 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_12 = i_2[1]
                
                var_110 = rcx_12
                int64_t* var_108_2 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                int64_t* rax_19 = sub_141a30820(&var_100, &var_110)
                int64_t* r15_2 = *(r12_3 + 0x10)
                char r8_7 = 0
                uint64_t r12_7 = sx.q(*(r12_3 + 0x18)) << 3 u>> 3
                
                if (r15_2 u> &r15_2[sx.q(*(r12_3 + 0x18))])
                    r12_7 = 0
                
                if (r12_7 != 0)
                    char var_148_2 = 1
                    
                    do
                        void* rax_20 = *r15_2
                        int64_t r8_8 = var_120
                        *(arg7 + 0x2d0) = *(rax_20 + 0x20)
                        *(arg7 + 0x2d8) = *(rax_20 + 0x28)
                        *(arg7 + 0x2dc) = 2
                        var_138.q = *(arg7 + 0x2d0)
                        int32_t var_130_3 = *(arg7 + 0x2d8)
                        sub_141a590e0(arg7 + 0x148, 2, r8_8, &var_138, rax_19, arg7 + 0xf8)
                        rsi_1 += 1
                        r15_2 = &r15_2[1]
                    while (rsi_1 != r12_7)
                    
                    rbx_3 = var_128
                    r8_7 = var_148_2
                
                char rdx_14 = *(arg7 + 0x2dd)
                var_138 = data_143958180
                int32_t var_134_2 = 0xffffffff
                *(arg7 + 0x2d0) = var_138.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_14
                
                if (r8_7 == 0 && rdx_14 != 0)
                    var_138.q = *(arg7 + 0x2d0)
                    int32_t var_130_4 = *(arg7 + 0x2d8)
                    sub_141a590e0(arg7 + 0x148, rdx_14, var_120, &var_138, rax_19, arg7 + 0xf8)
                
                if (var_f0 != 0)
                    int32_t temp0_1 = *(var_f0 + 0xc)
                    *(var_f0 + 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        (*(*var_f0 + 8))(var_f0, 1)
                
                i = &data_142d4ba10
            else
                int64_t* var_118_1 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_11 = rbx_3[1].d
                    
                    if (rax_11 != 0)
                        rbx_3[1].d = rax_11 + 1
                        rax_11.b = 1
                    
                    if (rax_11.b == 0)
                        rbx_3 = nullptr
                    
                    var_118_1 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_12 = i_2[1]
                
                var_110 = rcx_12
                int64_t* var_108_1 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                int64_t* rax_12 = sub_141a30870(&var_100, &var_110)
                int64_t* r14 = *(r12_3 + 0x10)
                char r9_2 = 0
                int64_t rcx_14 = sx.q(*(r12_3 + 0x18))
                int64_t r8_5 = rax_12
                var_128 = rax_12
                uint64_t r12_5 = rcx_14 << 3 u>> 3
                
                if (r14 u> &r14[rcx_14])
                    r12_5 = 0
                
                int64_t var_168_2
                
                if (r12_5 != 0)
                    char var_148_1 = 1
                    
                    do
                        void* rax_13 = *r14
                        int64_t rdx_9 = var_120
                        *(arg7 + 0x2d0) = *(rax_13 + 0x20)
                        int32_t rax_14 = *(rax_13 + 0x28)
                        *(arg7 + 0x2d8) = rax_14
                        int32_t var_130_1 = rax_14
                        *(arg7 + 0x2dc) = 2
                        var_168_2.b = 2
                        var_138.q = *(arg7 + 0x2d0)
                        sub_1405c5900(arg7 + 0xf8, rdx_9, rax_12, arg2, var_168_2.b, &var_138)
                        rsi_1 += 1
                        r14 = &r14[1]
                    while (rsi_1 != r12_5)
                    
                    rbx_3 = var_118_1
                    r8_5 = var_128
                    r9_2 = var_148_1
                
                char rdx_10 = *(arg7 + 0x2dd)
                var_138 = data_143958180
                int32_t var_134_1 = 0xffffffff
                *(arg7 + 0x2d0) = var_138.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_10
                
                if (r9_2 == 0)
                    int32_t var_130_2 = *(arg7 + 0x2d8)
                    var_168_2.b = rdx_10
                    var_138.q = *(arg7 + 0x2d0)
                    sub_1405c5900(arg7 + 0xf8, var_120, r8_5, arg2, var_168_2.b, &var_138)
                
                if (var_f0 != 0)
                    int32_t temp1_1 = *(var_f0 + 0xc)
                    *(var_f0 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_f0 + 8))(var_f0, 1)
                
                i = &data_142d4ba10
            var_100 = &data_142d4ba10
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    i = (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        i = (*(*rbx_3 + 8))(rbx_3, 1)
            
            break

__security_check_cookie(rax_1 ^ &var_188)
return i
