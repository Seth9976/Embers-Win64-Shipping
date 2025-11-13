// 函数: sub_141dda0a0
// 地址: 0x141dda0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
uint128_t zmm7 = arg2
uint128_t zmm6 = arg2
int64_t r13
uint128_t zmm0

if (arg3[1] == 0)
label_141dda152:
    int64_t* rax_8
    rax_8, zmm0 = sub_142496c20()
    r13 = rax_8[0x23]
    
    if (r13 == 0)
        int64_t rdx_3 = *rax_8
        (*(rdx_3 + 0x390))(rax_8, rdx_3)
        r13 = rax_8[0x23]
else
    void* rax_1 = sub_142496c20()
    
    if (rax_1 == 0)
        goto label_141dda152
    
    void* rdx_1 = arg3[1]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
            || rdx_1 == 0)
        goto label_141dda152
    
    void* rax_4
    rax_4, zmm0 = sub_142496c20()
    int64_t rax_5
    int64_t* r15_1
    
    if (rax_4 != 0)
        r15_1 = arg3[1]
        rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_4 == 0 || rax_5.d s> r15_1[7].d || *(r15_1[6] + (rax_5 << 3)) != rax_4 + 0x30)
        r15_1 = nullptr
    
    r13 = r15_1[0x23]
    
    if (r13 == 0)
        (*(*r15_1 + 0x390))(r15_1)
        r13 = r15_1[0x23]

uint128_t zmm9
uint128_t var_78 = zmm9
uint128_t zmm10
uint128_t var_88 = zmm10
int64_t* result
int64_t* var_2c0
int64_t var_2b8
int64_t* var_2b0
int64_t* var_2a8
int64_t var_2a0
uint128_t* var_298
uint64_t var_288
int32_t var_280
uint64_t var_278
uint64_t var_268
int64_t* var_258

if ((*(*arg3 + 0x10))(arg3, 1) == 0)
    result = (*(*arg3 + 0x10))(arg3, 2)
    
    if (result.b == 0)
    label_141dda67a:
        
        if (not(zmm6.d f== 0f))
            int64_t var_2c8_7 = arg5
            sub_142452b30(arg1, zmm6.d, r13)
            int512_t zmm1
            result, zmm1, zmm6 = sub_141dcbaa0(&arg1[0x30], &var_288)
            int64_t* rcx_31 = var_288
            
            if (rcx_31 != 0)
                int32_t var_100_1 = zmm6.d
                int64_t* var_108 = arg1
                int64_t var_f8_1 = r13
                int64_t* var_f0_1 = arg4
                int64_t var_e8_1 = arg5
                result, zmm1, zmm6 = sub_1405a9f90(rcx_31, &var_108)
            
            int64_t* rbx_2 = var_280.q
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t temp3_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_2 + 8))(rbx_2, 1)
            
            if (arg4 != 0)
                zmm1.o = zmm6
                result = (*(*arg4 + 0x6e0))(arg4, zmm1, r13, arg1, arg5, var_2c0, var_2b8, var_2b0, 
                    var_2a8, var_2a0, var_298)
    else
        result = (*(*arg1 + 0x590))(arg1, zmm7, arg3, arg4, arg5)
        
        if (not(zmm0.d f== 0f))
            uint128_t var_1c8
            uint128_t var_1b8
            uint128_t var_1a8
            uint128_t var_198
            uint128_t var_188
            uint128_t var_178
            uint128_t var_168
            uint128_t var_158
            uint64_t var_148
            
            if (arg3[7].d s<= 0)
                memset(&var_1c8, 0, 0x88)
                int32_t var_1c0_1 = 0x3f800000
            else
                uint128_t* rax_26 = arg3[6]
                arg2 = rax_26[1]
                var_1c8 = *rax_26
                var_1b8 = arg2
                arg2 = rax_26[3]
                var_1a8 = rax_26[2]
                var_198 = arg2
                var_188 = rax_26[4]
                var_178 = rax_26[5]
                var_168 = rax_26[6]
                var_148 = rax_26[8].q
                var_158 = rax_26[7]
            
            var_2b8 = arg5
            var_2c0 = arg4
            var_258.o = var_1c8
            int64_t var_248
            var_248.o = var_1b8
            int32_t var_238
            var_238.o = var_1a8
            int64_t var_228
            var_228.o = var_198
            int32_t var_218
            var_218.o = var_188
            int64_t var_208
            var_208.o = var_178
            var_280 = *(arg3 + 0x2c)
            var_288 = *(arg3 + 0x24)
            sub_142452ee0(arg1, zmm0, r13, &var_288, &var_258, var_2c0, var_2b8)
            int32_t rax_28 = *(arg3 + 0x2c)
            zmm9 = var_258.o
            uint128_t zmm15 = var_168
            var_268.o = var_158
            uint64_t var_1d8_1
            var_278 = var_1d8_1
            int32_t arg_18
            arg_18.q = *(arg3 + 0x24)
            result, zmm6 = sub_141dcbd60(arg1 + 0x182, &var_288)
            uint64_t r12_1 = var_288
            
            if (r12_1 != 0)
                memset(&var_1a8:4, 0, 0x88)
                arg2 = zx.o(var_278)
                var_1b8:8.q = arg_18.q
                uint128_t var_134_1 = var_268.o
                var_1c8.q = arg1
                int32_t var_1c0_2 = zmm6.d
                var_1b8.q = r13
                var_1a8.d = rax_28
                var_1a8 = zmm9
                int64_t* var_118_1 = arg4
                var_198 = var_248.o
                int64_t var_110_1 = arg5
                var_188 = var_238.o
                var_178 = var_228.o
                var_168 = var_218.o
                var_158 = var_208.o
                var_148:4.o = zmm15
                uint64_t var_124_1 = arg2.q
                result, zmm6 = sub_1405a9f90(r12_1, &var_1c8)
            
            int64_t* r12_2 = var_280.q
            
            if (r12_2 != 0)
                r12_2[1].d -= 1
                
                if (r12_2[1].d == 1)
                    result = (**r12_2)(r12_2)
                    int32_t temp5_1 = *(r12_2 + 0xc)
                    *(r12_2 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        result = (*(*r12_2 + 8))(r12_2, 1)
            
            if (arg3[7].d s> 0)
                do
                    result = sub_140d3c6e0(sx.q(i) * 0x88 + arg3[6] + 0x70)
                    
                    if (result != 0 && result[0x14] == arg1)
                        result = (*(*result + 0x6d0))(result, zmm7, arg3, arg4, arg5)
                    
                    i += 1
                while (i s< arg3[7].d)
            
            goto label_141dda67a
else
    result = (*(*arg1 + 0x598))(arg1, zmm7, arg3, arg4, arg5)
    zmm6 = zmm0
    
    if (not(zmm6.d f== 0f))
        zmm0 = zx.o(*(arg3 + 0x3c))
        int32_t var_270_1 = *(arg3 + 0x1c)
        int32_t rax_13 = *(arg3 + 0x5c)
        var_278 = *(arg3 + 0x14)
        int32_t var_260_1 = rax_13
        int32_t rax_14 = *(arg3 + 0x44)
        var_268 = *(arg3 + 0x54)
        var_280 = rax_14
        var_288 = zmm0.q
        int64_t* rax_15 = sub_140d3c6e0(&arg3[0x12])
        var_298 = &arg3[4]
        var_2a0 = arg5
        var_2a8 = arg4
        var_2b0 = &var_278
        var_2b8 = arg3[0x13]
        var_2c0 = rax_15
        sub_142452da0(arg1, zmm6, r13, &var_288, &var_268, var_2c0, var_2b8, var_2b0, var_2a8, 
            var_2a0, var_298)
        int32_t rax_16 = *(arg3 + 0x1c)
        zmm9 = zx.o(*(arg3 + 0x14))
        zmm10 = zx.o(*(arg3 + 0x3c))
        int32_t rax_17 = *(arg3 + 0x44)
        uint64_t rax_18 = sub_140d3c6e0(&arg3[0x12])
        int64_t rbx = arg3[0x13]
        var_278 = rax_18
        zmm6 = sub_141dcbc00(arg1 + 0x181, &var_288)
        uint64_t rcx_12 = var_288
        
        if (rcx_12 != 0)
            int32_t var_238_1 = rax_17
            uint64_t var_230_1 = var_278
            int32_t var_218_1 = rax_16
            int32_t var_250_1 = zmm6.d
            var_258 = arg1
            int64_t* var_248_1 = arg4
            uint64_t var_240_1 = zmm10.q
            int64_t var_228_1 = rbx
            uint64_t var_220_1 = zmm9.q
            int64_t var_210_1 = r13
            int64_t var_208_1 = arg5
            zmm6 = sub_1405a9f90(rcx_12, &var_258)
        
        int64_t* rbx_1 = var_280.q
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        result = sub_140d3c6e0(&arg3[0x12])
        
        if (result != 0)
            result = (*(*result + 0x6d0))(result, zmm7, arg3, arg4, arg5)
        
        goto label_141dda67a
return result
