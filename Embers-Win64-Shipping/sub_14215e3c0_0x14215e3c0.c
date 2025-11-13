// 函数: sub_14215e3c0
// 地址: 0x14215e3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* rcx = *(arg1 + 8)
char var_218 = arg4
(*(*rcx + 0x158))(rcx, arg6, 1)
int32_t result

if (*arg6 == 0)
    *arg2 = *arg3
    result = arg3[1].d
    arg2[1].d = result
else
    int64_t* rcx_1 = *(arg1 + 8)
    int32_t var_1e8
    
    if (*(rcx_1 + 0x54) u>= 0xd)
        (*(*rcx_1 + 0x158))(rcx_1, &var_218, 1)
        
        if (var_218 != 0)
            goto label_14215e44d
        
        void** var_1e0
        sub_140b4cb20(&var_1e0, *(arg1 + 8))
        void** rbx_3 = *SymBuffer::end(&var_1e0, &var_1e8)
        int64_t* r9 = *(*rbx_3 + 8)
        int64_t* rcx_11 = r9[1]
        int32_t* rdx_9 = *rcx_11
        
        if (&rdx_9[1] u> rcx_11[1])
            int32_t* rdx_10 = arg2
            
            if ((*(r9 + 0x29) & 0x20) != 0)
                sub_140b54070(r9, rdx_10, arg5)
            else
                (*(*r9 + 0x150))(r9, rdx_10, 4)
        else
            *arg2 = *rdx_9
            int64_t* rax_18 = r9[1]
            *rax_18 += 4
        
        int64_t* r9_1 = *(*rbx_3 + 8)
        int64_t* rcx_13 = r9_1[1]
        int32_t* r8_3 = *rcx_13
        
        if (&r8_3[1] u<= rcx_13[1])
            *(arg2 + 4) = *r8_3
            int64_t* rax_23 = r9_1[1]
            *rax_23 += 4
        else if ((*(r9_1 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_1, arg2 + 4, arg5)
        else
            (*(*r9_1 + 0x150))(r9_1, arg2 + 4, 4)
        
        int64_t* r9_2 = *(*rbx_3 + 8)
        int64_t* rcx_15 = r9_2[1]
        int32_t* r8_4 = *rcx_15
        
        if (&r8_4[1] u<= rcx_15[1])
            arg2[1].d = *r8_4
            int64_t* rax_28 = r9_2[1]
            *rax_28 += 4
            result = sub_140b4cbb0(&var_1e0)
        else if ((*(r9_2 + 0x29) & 0x20) != 0)
            sub_140b54070(r9_2, &arg2[1], arg5)
            result = sub_140b4cbb0(&var_1e0)
        else
            (*(*r9_2 + 0x150))(r9_2, &arg2[1], 4)
            result = sub_140b4cbb0(&var_1e0)
    else
        var_218 = 1
    label_14215e44d:
        char* r15_1 = *(arg1 + 0x10)
        int64_t* rsi_1 = *(arg1 + 8)
        int32_t rbx_1 = arg2[1].d
        uint128_t zmm6 = zx.o(*arg2)
        bool cond:0_1 = (rsi_1[5].b & 2) == 0
        uint64_t var_1f8 = zmm6.q
        
        if (cond:0_1)
            int64_t rax_4 = *rsi_1
            int32_t var_210 = 0
            (*(rax_4 + 0x160))(rsi_1, &var_210, 0x18)
            char rax_5 = var_210.b
            int32_t var_20c = 0
            int32_t var_208 = 0
            var_1e8 = 0
            int32_t rbx_2 = 1 << (rax_5 + 1)
            int32_t r14_1 = 1 << (rax_5 + 2)
            (*(*rsi_1 + 0x160))(rsi_1, &var_20c, zx.q(r14_1))
            (*(*rsi_1 + 0x160))(rsi_1, &var_208, zx.q(r14_1))
            (*(*rsi_1 + 0x160))(rsi_1, &var_1e8, zx.q(r14_1))
            arg5.o = 0x3dcccccd
            int32_t rax_12 = var_208 - rbx_2
            uint128_t zmm3
            zmm3.d = _mm_cvtepi32_ps(zx.o(var_20c - rbx_2)).d f* 0.100000001f
            uint128_t zmm0 = zx.o(var_1e8 - rbx_2)
            result.b = 1
            uint128_t zmm2
            zmm2.d = _mm_cvtepi32_ps(zx.o(rax_12)).d f* 0.100000001f
            zmm0.d = _mm_cvtepi32_ps(zmm0).d f* 0.100000001f
            arg5.o = zx.o(var_1f8)
            arg5.d = zmm3.d
            arg5.o = _mm_shuffle_ps(arg5.o, arg5.o, 0xe1)
            arg5.d = zmm2.d
            rbx_1 = zmm0.d
            arg5.o = _mm_shuffle_ps(arg5.o, arg5.o, 0xe1)
            zmm6 = arg5.o
        else
            var_1f8 = zmm6.q
            int32_t var_1f0_1 = rbx_1
            result, zmm6 = sub_141ed1a20(&var_1f8, rsi_1)
        
        *r15_1 = result.b
        *arg2 = zmm6.q
        arg2[1].d = rbx_1

__security_check_cookie(rax_1 ^ &var_238)
return result
