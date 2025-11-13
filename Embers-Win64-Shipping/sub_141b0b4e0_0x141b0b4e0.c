// 函数: sub_141b0b4e0
// 地址: 0x141b0b4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t var_f0 = arg1
int64_t var_f8 = arg6
void* result = sub_141aefe20(arg3, arg4)
int64_t* result_2 = result

if (result != 0)
    void* result_1 = result
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t var_78_1 = 0
    int32_t var_70_1 = 0
    int64_t rsi_1 = 0
    int64_t var_b0_1 = arg1
    int64_t r15_1 = 0
    void* var_a8_1 = arg2
    void* var_a0_1 = arg7
    uint64_t r12_2 = sx.q(*(arg1 + 0x18)) << 3 u>> 3
    int32_t var_7c_1 = 0
    int32_t var_60_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        r12_2 = 0
    
    char var_4c_1 = 0
    void var_88
    
    if (r12_2 != 0)
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_6 = rbx_1
            int64_t* var_138_1 = &result_1
            int512_t zmm2
            zmm2.o = *(rdx_1 + 0x2c)
            
            if ((rdx_1[2].b & 2) == 0)
                rax_6 = rdx_1
            
            int64_t* rcx_1 = *rax_6
            (*(*rcx_1 + 8))(rcx_1, &var_88, &result_1, zmm2, zx.q(rdx_1[6].b))
            rbx_1 = &rbx_1[1]
            r15_1 += 1
        while (r15_1 != r12_2)
    
    int64_t var_98[0x2]
    sub_141af56f0(&var_88, &var_98, &result_1)
    int64_t r12_3 = var_f0
    (*(*result_2 + 0x20))(result_2, arg2, &var_98, r12_3, arg5, var_f8, arg7)
    int32_t r8_3 = -1
    int32_t r9_2 = 0
    
    if (arg2 != 0)
        sub_140d3a3a0(&var_f8, arg2)
        int64_t rax_9 = var_f8
        var_f0 = rax_9
        r8_3 = rax_9.d
        r9_2 = var_f0:4.d
    
    int32_t* i = result_2[3]
    
    for (result = &i[sx.q(result_2[4].d) * 5]; i != result; i = &i[5])
        if (*i == r8_3 && i[1] == r9_2)
            sub_141a3d100(&var_f0, result_2[5], *sub_141a50e80(&var_f8))
            int64_t* rbx_3 = result_2[2]
            int64_t rcx_10 = 0
            void** var_d0
            int32_t var_108
            int64_t var_e0
            int64_t* var_c0
            
            if (arg2 == 0)
                var_f8 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_19 = rbx_3[1].d
                    
                    if (rax_19 != 0)
                        rbx_3[1].d = rax_19 + 1
                        rax_19.b = 1
                    
                    if (rax_19.b == 0)
                        rbx_3 = nullptr
                    
                    var_f8 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_10 = result_2[1]
                
                var_e0 = rcx_10
                int64_t* var_d8_2 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                int64_t* rax_20 = sub_141a30820(&var_d0, &var_e0)
                int64_t* r15_2 = *(r12_3 + 0x10)
                char r8_7 = 0
                uint64_t r12_7 = sx.q(*(r12_3 + 0x18)) << 3 u>> 3
                
                if (r15_2 u> &r15_2[sx.q(*(r12_3 + 0x18))])
                    r12_7 = 0
                
                if (r12_7 != 0)
                    char var_118_2 = 1
                    
                    do
                        void* rax_21 = *r15_2
                        int64_t r8_8 = var_f0
                        *(arg7 + 0x2d0) = *(rax_21 + 0x18)
                        *(arg7 + 0x2d8) = *(rax_21 + 0x20)
                        *(arg7 + 0x2dc) = 2
                        var_108.q = *(arg7 + 0x2d0)
                        int32_t var_100_3 = *(arg7 + 0x2d8)
                        sub_141a590e0(arg7 + 0x148, 2, r8_8, &var_108, rax_20, arg7 + 0xf8)
                        rsi_1 += 1
                        r15_2 = &r15_2[1]
                    while (rsi_1 != r12_7)
                    
                    rbx_3 = var_f8
                    r8_7 = var_118_2
                
                char rdx_13 = *(arg7 + 0x2dd)
                var_108 = data_1439e5888
                int32_t var_104_2 = 0xffffffff
                *(arg7 + 0x2d0) = var_108.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_13
                
                if (r8_7 == 0 && rdx_13 != 0)
                    var_108.q = *(arg7 + 0x2d0)
                    int32_t var_100_4 = *(arg7 + 0x2d8)
                    sub_141a590e0(arg7 + 0x148, rdx_13, var_f0, &var_108, rax_20, arg7 + 0xf8)
                
                if (var_c0 != 0)
                    int32_t temp0_1 = *(var_c0 + 0xc)
                    *(var_c0 + 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        (*(*var_c0 + 8))(var_c0, 1)
                
                result = &data_142d4ba10
            else
                int64_t* var_e8_1 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_12 = rbx_3[1].d
                    
                    if (rax_12 != 0)
                        rbx_3[1].d = rax_12 + 1
                        rax_12.b = 1
                    
                    if (rax_12.b == 0)
                        rbx_3 = nullptr
                    
                    var_e8_1 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_10 = result_2[1]
                
                var_e0 = rcx_10
                int64_t* var_d8_1 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                int64_t* rax_13 = sub_141a30870(&var_d0, &var_e0)
                int64_t* r14 = *(r12_3 + 0x10)
                char r9_3 = 0
                int64_t rcx_12 = sx.q(*(r12_3 + 0x18))
                int64_t r8_5 = rax_13
                var_f8 = rax_13
                uint64_t r12_5 = rcx_12 << 3 u>> 3
                
                if (r14 u> &r14[rcx_12])
                    r12_5 = 0
                
                int64_t var_138_2
                
                if (r12_5 != 0)
                    char var_118_1 = 1
                    
                    do
                        void* rax_14 = *r14
                        int64_t rdx_8 = var_f0
                        *(arg7 + 0x2d0) = *(rax_14 + 0x18)
                        int32_t rax_15 = *(rax_14 + 0x20)
                        *(arg7 + 0x2d8) = rax_15
                        int32_t var_100_1 = rax_15
                        *(arg7 + 0x2dc) = 2
                        var_138_2.b = 2
                        var_108.q = *(arg7 + 0x2d0)
                        sub_1405c5900(arg7 + 0xf8, rdx_8, rax_13, arg2, var_138_2.b, &var_108)
                        rsi_1 += 1
                        r14 = &r14[1]
                    while (rsi_1 != r12_5)
                    
                    rbx_3 = var_e8_1
                    r8_5 = var_f8
                    r9_3 = var_118_1
                
                char rdx_9 = *(arg7 + 0x2dd)
                var_108 = data_1439e5888
                int32_t var_104_1 = 0xffffffff
                *(arg7 + 0x2d0) = var_108.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_9
                
                if (r9_3 == 0)
                    int32_t var_100_2 = *(arg7 + 0x2d8)
                    var_138_2.b = rdx_9
                    var_108.q = *(arg7 + 0x2d0)
                    sub_1405c5900(arg7 + 0xf8, var_f0, r8_5, arg2, var_138_2.b, &var_108)
                
                if (var_c0 != 0)
                    int32_t temp1_1 = *(var_c0 + 0xc)
                    *(var_c0 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_c0 + 8))(var_c0, 1)
                
                result = &data_142d4ba10
            var_d0 = &data_142d4ba10
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    result = (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_3 + 8))(rbx_3, 1)
            
            break

__security_check_cookie(rax_1 ^ &var_158)
return result
