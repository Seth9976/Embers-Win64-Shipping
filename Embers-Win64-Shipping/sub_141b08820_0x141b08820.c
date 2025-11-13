// 函数: sub_141b08820
// 地址: 0x141b08820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t var_160 = arg1
int64_t var_168 = arg6
int64_t result = sub_141aef6b0(arg3, arg4)
int64_t* result_2 = result

if (result != 0)
    int64_t result_1 = result
    int64_t* rbx_1 = *(arg1 + 0x10)
    int64_t rsi_1 = 0
    int64_t var_120_1 = arg1
    int64_t r15_1 = 0
    void* var_118_1 = arg2
    void* var_110_1 = arg7
    uint64_t r12_2 = sx.q(*(arg1 + 0x18)) << 3 u>> 3
    int32_t var_bc
    __builtin_memset(&var_bc, 0, 0x28)
    int32_t var_70_1 = 0
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x18))])
        r12_2 = 0
    
    char var_44_1 = 0
    void var_e0
    
    if (r12_2 != 0)
        do
            int64_t* rdx_1 = *rbx_1
            int64_t* rax_6 = rbx_1
            int64_t* var_1a8_1 = &result_1
            int512_t zmm2
            zmm2.o = *(rdx_1 + 0x44)
            
            if ((rdx_1[5].b & 2) == 0)
                rax_6 = rdx_1
            
            int64_t* rcx_1 = *rax_6
            (*(*rcx_1 + 8))(rcx_1, &var_e0, &result_1, zmm2, zx.q(rdx_1[9].b))
            rbx_1 = &rbx_1[1]
            r15_1 += 1
        while (r15_1 != r12_2)
    
    uint64_t var_108[0x5]
    sub_141af41d0(&var_e0, &var_108, &result_1)
    int64_t r12_3 = var_160
    (*(*result_2 + 0x20))(result_2, arg2, &var_108, r12_3, arg5, var_168, arg7)
    int32_t r8_3 = -1
    int32_t r9_2 = 0
    
    if (arg2 != 0)
        sub_140d3a3a0(&var_168, arg2)
        int64_t rax_9 = var_168
        var_160 = rax_9
        r8_3 = rax_9.d
        r9_2 = var_160:4.d
    
    int32_t* i = result_2[3]
    result = sx.q(result_2[4].d)
    
    for (void* rdx_7 = result * 0x2c + i; i != rdx_7; i = &i[0xb])
        if (*i == r8_3 && i[1] == r9_2)
            sub_141a3d100(&var_160, result_2[5], *sub_141a50e80(&var_168))
            int64_t* rbx_3 = result_2[2]
            int64_t rcx_9 = 0
            void** var_140
            int32_t var_178
            int64_t var_150
            int64_t* var_130
            
            if (arg2 == 0)
                var_168 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_18 = rbx_3[1].d
                    
                    if (rax_18 != 0)
                        rbx_3[1].d = rax_18 + 1
                        rax_18.b = 1
                    
                    if (rax_18.b == 0)
                        rbx_3 = nullptr
                    
                    var_168 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_9 = result_2[1]
                
                var_150 = rcx_9
                int64_t* var_148_2 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                int64_t* rax_19 = sub_141a30820(&var_140, &var_150)
                int64_t* r15_2 = *(r12_3 + 0x10)
                char r8_7 = 0
                uint64_t r12_7 = sx.q(*(r12_3 + 0x18)) << 3 u>> 3
                
                if (r15_2 u> &r15_2[sx.q(*(r12_3 + 0x18))])
                    r12_7 = 0
                
                if (r12_7 != 0)
                    char var_188_2 = 1
                    
                    do
                        void* rax_20 = *r15_2
                        int64_t r8_8 = var_160
                        *(arg7 + 0x2d0) = *(rax_20 + 0x30)
                        *(arg7 + 0x2d8) = *(rax_20 + 0x38)
                        *(arg7 + 0x2dc) = 2
                        var_178.q = *(arg7 + 0x2d0)
                        int32_t var_170_3 = *(arg7 + 0x2d8)
                        sub_141a590e0(arg7 + 0x148, 2, r8_8, &var_178, rax_19, arg7 + 0xf8)
                        rsi_1 += 1
                        r15_2 = &r15_2[1]
                    while (rsi_1 != r12_7)
                    
                    rbx_3 = var_168
                    r8_7 = var_188_2
                
                char rdx_15 = *(arg7 + 0x2dd)
                var_178 = data_1439e5888
                int32_t var_174_2 = 0xffffffff
                *(arg7 + 0x2d0) = var_178.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_15
                
                if (r8_7 == 0 && rdx_15 != 0)
                    var_178.q = *(arg7 + 0x2d0)
                    int32_t var_170_4 = *(arg7 + 0x2d8)
                    sub_141a590e0(arg7 + 0x148, rdx_15, var_160, &var_178, rax_19, arg7 + 0xf8)
                
                if (var_130 != 0)
                    int32_t temp0_1 = *(var_130 + 0xc)
                    *(var_130 + 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        (*(*var_130 + 8))(var_130, 1)
                
                result = &data_142d4ba10
            else
                int64_t* var_158_1 = rbx_3
                
                if (rbx_3 != 0)
                    int32_t rax_11 = rbx_3[1].d
                    
                    if (rax_11 != 0)
                        rbx_3[1].d = rax_11 + 1
                        rax_11.b = 1
                    
                    if (rax_11.b == 0)
                        rbx_3 = nullptr
                    
                    var_158_1 = rbx_3
                    
                    if (rbx_3 != 0)
                        rcx_9 = result_2[1]
                
                var_150 = rcx_9
                int64_t* var_148_1 = rbx_3
                
                if (rbx_3 != 0)
                    *(rbx_3 + 0xc) += 1
                
                int64_t* rax_12 = sub_141a30870(&var_140, &var_150)
                int64_t* r14 = *(r12_3 + 0x10)
                char r9_3 = 0
                int64_t rcx_11 = sx.q(*(r12_3 + 0x18))
                int64_t r8_5 = rax_12
                var_168 = rax_12
                uint64_t r12_5 = rcx_11 << 3 u>> 3
                
                if (r14 u> &r14[rcx_11])
                    r12_5 = 0
                
                int64_t var_1a8_2
                
                if (r12_5 != 0)
                    char var_188_1 = 1
                    
                    do
                        void* rax_13 = *r14
                        int64_t rdx_10 = var_160
                        *(arg7 + 0x2d0) = *(rax_13 + 0x30)
                        int32_t rax_14 = *(rax_13 + 0x38)
                        *(arg7 + 0x2d8) = rax_14
                        int32_t var_170_1 = rax_14
                        *(arg7 + 0x2dc) = 2
                        var_1a8_2.b = 2
                        var_178.q = *(arg7 + 0x2d0)
                        sub_1405c5900(arg7 + 0xf8, rdx_10, rax_12, arg2, var_1a8_2.b, &var_178)
                        rsi_1 += 1
                        r14 = &r14[1]
                    while (rsi_1 != r12_5)
                    
                    rbx_3 = var_158_1
                    r8_5 = var_168
                    r9_3 = var_188_1
                
                char rdx_11 = *(arg7 + 0x2dd)
                var_178 = data_1439e5888
                int32_t var_174_1 = 0xffffffff
                *(arg7 + 0x2d0) = var_178.q
                *(arg7 + 0x2d8) = 0xffffffff
                *(arg7 + 0x2dc) = rdx_11
                
                if (r9_3 == 0)
                    int32_t var_170_2 = *(arg7 + 0x2d8)
                    var_1a8_2.b = rdx_11
                    var_178.q = *(arg7 + 0x2d0)
                    sub_1405c5900(arg7 + 0xf8, var_160, r8_5, arg2, var_1a8_2.b, &var_178)
                
                if (var_130 != 0)
                    int32_t temp1_1 = *(var_130 + 0xc)
                    *(var_130 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_130 + 8))(var_130, 1)
                
                result = &data_142d4ba10
            var_140 = &data_142d4ba10
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    result = (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_3 + 8))(rbx_3, 1)
            
            break

__security_check_cookie(rax_1 ^ &var_1c8)
return result
