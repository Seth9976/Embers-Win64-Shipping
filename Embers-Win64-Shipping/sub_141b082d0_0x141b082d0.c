// 函数: sub_141b082d0
// 地址: 0x141b082d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t var_c0 = arg1
int64_t var_c8 = arg6
void* result
int128_t zmm0
result, zmm0 = sub_141aef5e0(arg3, arg4)
int64_t* result_2 = result

if (result != 0)
    int64_t* rbx_1 = *(arg1 + 0x10)
    void* result_1 = result
    int64_t rsi_1 = 0
    int64_t var_80_1 = arg1
    int64_t r15_1 = 0
    void* var_78_1 = arg2
    void* var_70_1 = arg7
    uint64_t r12_2 = sx.q(*(arg1 + 0x18)) << 3 u>> 3
    int64_t var_64_1 = 0
    int32_t var_58_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        r12_2 = 0
    
    char var_4c_1 = 0
    void var_68
    int512_t zmm2
    
    if (r12_2 != 0)
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_6 = rbx_1
            int64_t* var_108_1 = &result_1
            zmm2.o = *(rdx_1 + 0x24)
            
            if ((rdx_1[1].b & 2) == 0)
                rax_6 = rdx_1
            
            int64_t* rcx_1 = *rax_6
            (*(*rcx_1 + 8))(rcx_1, &var_68, &result_1, zmm2, zx.q(rdx_1[5].b))
            rbx_1 = &rbx_1[1]
            r15_1 += 1
        while (r15_1 != r12_2)
    
    zmm2.o = sub_141af3fd0(&var_68, &result_1, zmm0)
    int64_t r12_3 = var_c0
    (*(*result_2 + 0x20))(result_2, arg2, zmm2, r12_3, arg5, var_c8, arg7)
    int32_t r8_1 = -1
    int32_t r9_2 = 0
    
    if (arg2 != 0)
        sub_140d3a3a0(&var_c8, arg2)
        int64_t rax_9 = var_c8
        var_c0 = rax_9
        r8_1 = rax_9.d
        r9_2 = var_c0:4.d
    
    int32_t* i = result_2[3]
    
    for (result = &i[sx.q(result_2[4].d) * 3]; i != result; i = &i[3])
        if (*i == r8_1 && i[1] == r9_2)
            sub_141a3d100(&var_c0, result_2[5], *sub_141a50e80(&var_c8))
            int64_t* rbx_3 = result_2[2]
            int64_t rcx_10 = 0
            void** var_a0
            int32_t var_d8
            int64_t var_b0
            int64_t* var_90
            
            if (arg2 == 0)
                var_c8 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_19 = rbx_3[1].d
                    
                    if (rax_19 != 0)
                        rbx_3[1].d = rax_19 + 1
                        rax_19.b = 1
                    
                    if (rax_19.b == 0)
                        rbx_3 = nullptr
                    
                    var_c8 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_10 = result_2[1]
                
                var_b0 = rcx_10
                int64_t* var_a8_2 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                int64_t* rax_20 = sub_141a30820(&var_a0, &var_b0)
                int64_t* r15_2 = *(r12_3 + 0x10)
                char r8_5 = 0
                uint64_t r12_7 = sx.q(*(r12_3 + 0x18)) << 3 u>> 3
                
                if (r15_2 u> &r15_2[sx.q(*(r12_3 + 0x18))])
                    r12_7 = 0
                
                if (r12_7 != 0)
                    char var_e8_2 = 1
                    
                    do
                        void* rax_21 = *r15_2
                        int64_t r8_6 = var_c0
                        *(arg7 + 0x2d0) = *(rax_21 + 0x10)
                        *(arg7 + 0x2d8) = *(rax_21 + 0x18)
                        *(arg7 + 0x2dc) = 2
                        var_d8.q = *(arg7 + 0x2d0)
                        int32_t var_d0_3 = *(arg7 + 0x2d8)
                        sub_141a590e0(arg7 + 0x148, 2, r8_6, &var_d8, rax_20, arg7 + 0xf8)
                        rsi_1 += 1
                        r15_2 = &r15_2[1]
                    while (rsi_1 != r12_7)
                    
                    rbx_3 = var_c8
                    r8_5 = var_e8_2
                
                char rdx_13 = *(arg7 + 0x2dd)
                var_d8 = data_1439e5888
                int32_t var_d4_2 = 0xffffffff
                *(arg7 + 0x2d0) = var_d8.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_13
                
                if (r8_5 == 0 && rdx_13 != 0)
                    var_d8.q = *(arg7 + 0x2d0)
                    int32_t var_d0_4 = *(arg7 + 0x2d8)
                    sub_141a590e0(arg7 + 0x148, rdx_13, var_c0, &var_d8, rax_20, arg7 + 0xf8)
                
                if (var_90 != 0)
                    int32_t temp0_1 = *(var_90 + 0xc)
                    *(var_90 + 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        (*(*var_90 + 8))(var_90, 1)
                
                result = &data_142d4ba10
            else
                int64_t* var_b8_1 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_12 = rbx_3[1].d
                    
                    if (rax_12 != 0)
                        rbx_3[1].d = rax_12 + 1
                        rax_12.b = 1
                    
                    if (rax_12.b == 0)
                        rbx_3 = nullptr
                    
                    var_b8_1 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_10 = result_2[1]
                
                var_b0 = rcx_10
                int64_t* var_a8_1 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                int64_t* rax_13 = sub_141a30870(&var_a0, &var_b0)
                int64_t* r14 = *(r12_3 + 0x10)
                char r9_3 = 0
                int64_t rcx_12 = sx.q(*(r12_3 + 0x18))
                int64_t r8_3 = rax_13
                var_c8 = rax_13
                uint64_t r12_5 = rcx_12 << 3 u>> 3
                
                if (r14 u> &r14[rcx_12])
                    r12_5 = 0
                
                int64_t var_108_2
                
                if (r12_5 != 0)
                    char var_e8_1 = 1
                    
                    do
                        void* rax_14 = *r14
                        int64_t rdx_8 = var_c0
                        *(arg7 + 0x2d0) = *(rax_14 + 0x10)
                        int32_t rax_15 = *(rax_14 + 0x18)
                        *(arg7 + 0x2d8) = rax_15
                        int32_t var_d0_1 = rax_15
                        *(arg7 + 0x2dc) = 2
                        var_108_2.b = 2
                        var_d8.q = *(arg7 + 0x2d0)
                        sub_1405c5900(arg7 + 0xf8, rdx_8, rax_13, arg2, var_108_2.b, &var_d8)
                        rsi_1 += 1
                        r14 = &r14[1]
                    while (rsi_1 != r12_5)
                    
                    rbx_3 = var_b8_1
                    r8_3 = var_c8
                    r9_3 = var_e8_1
                
                char rdx_9 = *(arg7 + 0x2dd)
                var_d8 = data_1439e5888
                int32_t var_d4_1 = 0xffffffff
                *(arg7 + 0x2d0) = var_d8.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_9
                
                if (r9_3 == 0)
                    int32_t var_d0_2 = *(arg7 + 0x2d8)
                    var_108_2.b = rdx_9
                    var_d8.q = *(arg7 + 0x2d0)
                    sub_1405c5900(arg7 + 0xf8, var_c0, r8_3, arg2, var_108_2.b, &var_d8)
                
                if (var_90 != 0)
                    int32_t temp1_1 = *(var_90 + 0xc)
                    *(var_90 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_90 + 8))(var_90, 1)
                
                result = &data_142d4ba10
            var_a0 = &data_142d4ba10
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    result = (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_3 + 8))(rbx_3, 1)
            
            break

__security_check_cookie(rax_1 ^ &var_128)
return result
