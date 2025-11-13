// 函数: sub_141b0aa30
// 地址: 0x141b0aa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t var_d8 = arg1
int32_t* i = sub_141aefc80(arg3, arg4)
int64_t* i_2 = i

if (i != 0)
    int32_t* i_1 = i
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t var_6c_1 = 0
    int64_t rsi_1 = 0
    int64_t var_90_1 = arg1
    int64_t r15_1 = 0
    void* var_88_1 = arg2
    void* var_80_1 = arg7
    uint64_t r12_2 = sx.q(*(arg1 + 0x18)) << 3 u>> 3
    int32_t var_70_1 = 0
    int32_t var_5c_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        r12_2 = 0
    
    char var_4c_1 = 0
    void var_78
    
    if (r12_2 != 0)
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_6 = rbx_1
            int64_t* var_118_1 = &i_1
            int512_t zmm2
            zmm2.o = *(rdx_1 + 0x24)
            
            if ((rdx_1[1].b & 2) == 0)
                rax_6 = rdx_1
            
            int64_t* rcx_1 = *rax_6
            (*(*rcx_1 + 8))(rcx_1, &var_78, &i_1, zmm2, zx.q(rdx_1[5].b))
            rbx_1 = &rbx_1[1]
            r15_1 += 1
        while (r15_1 != r12_2)
    
    int64_t var_e8
    sub_141af51a0(&var_78, &var_e8, &i_1)
    int64_t r12_3 = var_d8
    (*(*i_2 + 0x20))(i_2, arg2, var_e8, r12_3, arg5, arg6, arg7)
    int32_t rdx_5 = -1
    int32_t r8_3 = 0
    
    if (arg2 != 0)
        sub_140d3a3a0(&var_e8, arg2)
        int64_t rax_9 = var_e8
        var_d8 = rax_9
        rdx_5 = rax_9.d
        r8_3 = var_d8:4.d
    
    for (i = i_2[3]; i != &i[sx.q(i_2[4].d) * 4]; i = &i[4])
        if (*i == rdx_5 && i[1] == r8_3)
            sub_141a3d100(&var_d8, i_2[5], *sub_141a50e80(&var_e8))
            int64_t* rbx_3 = i_2[2]
            int64_t rcx_12 = 0
            void** var_b0
            int64_t var_c0
            int64_t* var_a0
            
            if (arg2 == 0)
                int64_t* var_d0_2 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_18 = rbx_3[1].d
                    
                    if (rax_18 != 0)
                        rbx_3[1].d = rax_18 + 1
                        rax_18.b = 1
                    
                    if (rax_18.b == 0)
                        rbx_3 = nullptr
                    
                    var_d0_2 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_12 = i_2[1]
                
                var_c0 = rcx_12
                int64_t* var_b8_2 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                int64_t* rax_19 = sub_141a30820(&var_b0, &var_c0)
                void** r15_2 = *(r12_3 + 0x10)
                char r8_7 = 0
                uint64_t r12_7 = sx.q(*(r12_3 + 0x18)) << 3 u>> 3
                
                if (r15_2 u> &r15_2[sx.q(*(r12_3 + 0x18))])
                    r12_7 = 0
                
                if (r12_7 != 0)
                    char var_f8_2 = 1
                    
                    do
                        void* rax_20 = *r15_2
                        int64_t r8_8 = var_d8
                        *(arg7 + 0x2d0) = *(rax_20 + 0x10)
                        *(arg7 + 0x2d8) = *(rax_20 + 0x18)
                        *(arg7 + 0x2dc) = 2
                        int32_t rax_22 = *(arg7 + 0x2d8)
                        var_e8 = *(arg7 + 0x2d0)
                        int32_t var_e0_3 = rax_22
                        sub_141a590e0(arg7 + 0x148, 2, r8_8, &var_e8, rax_19, arg7 + 0xf8)
                        rsi_1 += 1
                        r15_2 = &r15_2[1]
                    while (rsi_1 != r12_7)
                    
                    rbx_3 = var_d0_2
                    r8_7 = var_f8_2
                
                char rdx_14 = *(arg7 + 0x2dd)
                var_e8.d = data_1439e5888
                var_e8:4.d = 0xffffffff
                *(arg7 + 0x2d0) = var_e8
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_14
                
                if (r8_7 == 0 && rdx_14 != 0)
                    int32_t rax_24 = *(arg7 + 0x2d8)
                    int64_t r8_9 = var_d8
                    var_e8 = *(arg7 + 0x2d0)
                    int32_t var_e0_4 = rax_24
                    sub_141a590e0(arg7 + 0x148, rdx_14, r8_9, &var_e8, rax_19, arg7 + 0xf8)
                
                if (var_a0 != 0)
                    int32_t temp0_1 = *(var_a0 + 0xc)
                    *(var_a0 + 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        (*(*var_a0 + 8))(var_a0, 1)
                
                i = &data_142d4ba10
            else
                int64_t* var_c8_1 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_11 = rbx_3[1].d
                    
                    if (rax_11 != 0)
                        rbx_3[1].d = rax_11 + 1
                        rax_11.b = 1
                    
                    if (rax_11.b == 0)
                        rbx_3 = nullptr
                    
                    var_c8_1 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_12 = i_2[1]
                
                var_c0 = rcx_12
                int64_t* var_b8_1 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                void*** rax_12 = sub_141a30870(&var_b0, &var_c0)
                int64_t* r14 = *(r12_3 + 0x10)
                char r9_2 = 0
                void*** r8_5 = rax_12
                uint64_t r12_5 = sx.q(*(r12_3 + 0x18)) << 3 u>> 3
                
                if (r14 u> &r14[sx.q(*(r12_3 + 0x18))])
                    r12_5 = 0
                
                int64_t var_118_2
                
                if (r12_5 != 0)
                    char var_f8_1 = 1
                    
                    do
                        void* rax_13 = *r14
                        int64_t rdx_9 = var_d8
                        *(arg7 + 0x2d0) = *(rax_13 + 0x10)
                        int32_t rax_14 = *(rax_13 + 0x18)
                        *(arg7 + 0x2d8) = rax_14
                        int32_t var_e0_1 = rax_14
                        *(arg7 + 0x2dc) = 2
                        int64_t* var_110_2 = &var_e8
                        var_118_2.b = 2
                        var_e8 = *(arg7 + 0x2d0)
                        sub_1405c5900(arg7 + 0xf8, rdx_9, rax_12, arg2, var_118_2.b, var_110_2)
                        rsi_1 += 1
                        r14 = &r14[1]
                    while (rsi_1 != r12_5)
                    
                    rbx_3 = var_c8_1
                    r8_5 = rax_12
                    r9_2 = var_f8_1
                
                char rdx_10 = *(arg7 + 0x2dd)
                var_e8.d = data_1439e5888
                var_e8:4.d = 0xffffffff
                *(arg7 + 0x2d0) = var_e8
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_10
                
                if (r9_2 == 0)
                    int32_t var_e0_2 = *(arg7 + 0x2d8)
                    int64_t* var_110_3 = &var_e8
                    var_118_2.b = rdx_10
                    int64_t rdx_11 = var_d8
                    var_e8 = *(arg7 + 0x2d0)
                    sub_1405c5900(arg7 + 0xf8, rdx_11, r8_5, arg2, var_118_2.b, var_110_3)
                
                if (var_a0 != 0)
                    int32_t temp1_1 = *(var_a0 + 0xc)
                    *(var_a0 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_a0 + 8))(var_a0, 1)
                
                i = &data_142d4ba10
            var_b0 = &data_142d4ba10
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    i = (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        i = (*(*rbx_3 + 8))(rbx_3, 1)
            
            break

__security_check_cookie(rax_1 ^ &var_138)
return i
