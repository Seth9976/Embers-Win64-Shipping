// 函数: sub_141fdea20
// 地址: 0x141fdea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
void* result = __security_cookie ^ &var_448
void* result_1 = result
void* rdx = *(arg1 + 0x10)

if (*(rdx + 0xa0) s> 0)
    result = *(arg1 + 8)
    
    if (*(result + 0x28) s> 0)
        (*(*arg2 + 0x18))(arg2, rdx)
        void* rdx_1 = *(arg1 + 8)
        
        if (rdx_1 != 0 && *(rdx_1 + 0x28) != 0)
            (*(*arg2 + 0x18))(arg2, rdx_1)
        
        void*** rax_3 = j_sub_140a82f30(0x220)
        void*** r15_1
        
        if (rax_3 == 0)
            r15_1 = nullptr
        else
            r15_1 = sub_141fd7020(rax_3, (*(arg1 + 0x18)).b, *(arg1 + 0x10))
        
        (*(*arg2 + 0x18))(arg2, r15_1)
        void*** rax_6 = j_sub_140a82f30(0x30)
        void*** rbx_1 = rax_6
        
        if (rax_6 == 0)
            rbx_1 = nullptr
        else
            rax_6[2] = 0
            rax_6[3] = 0
            rax_6[2].d = 0xffffffff
            *(rax_6 + 0x14) = 4
            rax_6[3].d = 2
            rax_6[4] = 0
            rax_6[5] = 0
            *rbx_1 = &data_143296700
            rbx_1[1] = &data_143296808
        
        int64_t* var_3b8_1 = nullptr
        char var_3c0_1 = 0
        int32_t var_3c8_1 = 0xffffffff
        int32_t var_3d0_1 = 0xffffffff
        int32_t var_3d8_1 = 0
        int32_t var_3e0_1 = 1
        char var_3e8_1 = 1
        char var_3f0_1 = 0
        char var_3f8_1 = 0
        float var_390_1 = (*(arg3 + 0x38))[0]
        char var_400_1 = 0
        char var_408_1 = 0
        float var_388[0x4]
        float (* var_418_1)[0x4] = &var_388
        int128_t* var_420_1 = &var_388
        float temp0_1[0x4] = _mm_unpacklo_ps(arg3[3].d, *(arg3 + 0x34))
        int128_t var_36c
        int128_t* var_428_1 = &var_36c
        __builtin_memset(&var_388, 0, 0x38)
        int64_t var_398 = temp0_1.q
        void var_298
        sub_14075e140(&var_298, arg3, arg3, &var_398, var_428_1, var_420_1, var_418_1, arg6, 
            var_408_1, var_400_1, var_3f8_1, var_3f0_1, var_3e8_1, var_3e0_1, var_3d8_1, var_3d0_1, 
            var_3c8_1, var_3c0_1, var_3b8_1)
        uint32_t rax_9
        
        if (data_143de5480 == 0)
            rax_9.b = 1
        else
            rax_9.b = GetCurrentThreadId() == data_143de5470
        
        void* r14_1 = &rbx_1[1]
        void* rdx_5 = &var_298
        int64_t* rcx_5 = r14_1
        
        if (rax_9.b == 0)
            sub_141fecb50(rcx_5, rdx_5)
        else
            sub_141fd2580(rcx_5, rdx_5)
        
        (*(*arg2 + 0x18))(arg2, rbx_1)
        void* rax_11 = *(arg1 + 8)
        int64_t r12
        
        if (rax_11 == 0 || *(rax_11 + 0x28) == 0)
            r12.b = 0
        else
            r12.b = 1
        
        void var_340
        sub_14081a190(&var_340)
        void* r8_2 = &var_340
        void* var_2d8
        
        if (var_2d8 != 0)
            r8_2 = var_2d8
        
        int64_t rcx_8
        
        if (r12.b == 0)
            rcx_8 = 0
        else
            rcx_8 = *(arg1 + 8)
        
        int64_t rax_13 = rcx_8 + 8
        
        if (rcx_8 == 0)
            rax_13 = 0
        
        *(r8_2 + 0x10) = rax_13
        
        if (r15_1 == 0)
            int64_t var_2c8_2 = 0
        else
            void* var_2c8_1 = &r15_1[1]
        
        if (rbx_1 == 0)
            r14_1 = nullptr
        
        int64_t r9
        int64_t var_2c0_1 = r9
        *(r8_2 + 8) = r14_1
        *(r8_2 + 0x40) = 0
        int32_t rcx_9
        
        if (r12.b == 0)
            rcx_9 = *(*(arg1 + 0x10) + 0xa0)
        else
            rcx_9 = *(*(arg1 + 8) + 0x28)
        
        *(r8_2 + 0x50) = 0
        *(r8_2 + 0x44) = rcx_9 s/ 3
        *(r8_2 + 0x54) = *(*(arg1 + 0x10) + 0xa0) - 1
        float zmm0_2
        float zmm6_1
        zmm0_2, zmm6_1 = sub_14062b8d0(arg3)
        zmm0_2 - zmm6_1
        int32_t r8_3
        r8_3.b = zmm0_2 < zmm6_1
        int32_t var_2a4
        int32_t r8_5 = r8_3 | (((zx.d(arg4) & 7) << 0xc | zx.d(arg5)) * 2) | (var_2a4 & 0xffff007c)
        int32_t var_2b0_1 = arg7
        int32_t var_2a4_1 = r8_5
        result = (*(*arg2 + 0x40))(arg2, &var_340, r8_5)
        *(arg1 + 0x10) = 0
        *(arg1 + 8) = 0
        
        if (var_2d8 != 0)
            result = sub_140a74f90(var_2d8)

__security_check_cookie(result_1 ^ &var_448)
return result
