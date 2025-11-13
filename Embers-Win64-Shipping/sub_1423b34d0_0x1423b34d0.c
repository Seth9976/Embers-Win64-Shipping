// 函数: sub_1423b34d0
// 地址: 0x1423b34d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg3
void** var_78 = nullptr
int64_t var_70 = 0
int128_t zmm7 = arg4
(*(*rcx + 0x2a0))(rcx, &var_78, zx.q(arg1[5].d), 0, *(arg1 + 0x2c), 0, var_78, var_70)
void** r15 = var_78
void* result = &r15[sx.q(var_70.d)]
void* result_1 = result

if (r15 != result)
    int128_t zmm8 = zx.o(0)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    
    do
        int64_t* rdi_1 = *r15
        int64_t* rbp_1
        
        if (rdi_1 == 0)
            rbp_1 = nullptr
            result.b = 0
        else
            void* rax_2 = sub_1425b3af0()
            void* rdx_1 = rdi_1[2]
            result = sx.q(*(rax_2 + 0x38))
            
            if (result.d s> *(rdx_1 + 0x38))
                rbp_1 = nullptr
                result.b = 0
            else if (*(*(rdx_1 + 0x30) + (result << 3)) != rax_2 + 0x30)
                rbp_1 = nullptr
                result.b = 0
            else
                result = zx.q(*(rdi_1 + 0x3d))
                rbp_1 = rdi_1
                
                if ((result.b & 8) == 0 || (result.b & 2) != 0)
                    result.b = 0
                else
                    int32_t rax_4 = (*(*rdi_1 + 0x270))(rdi_1)
                    int64_t rdx_2 = *rdi_1
                    
                    if ((*(rdx_2 + 0x268))(rdi_1, rdx_2).d s<= rax_4)
                        result.b = 0
                    else
                        result.b = 1
        
        if (result.b != 0)
            int128_t zmm0_1
            result, zmm0_1 = sub_1423afac0(arg1, rbp_1)
            void* result_2 = result
            
            if (result == 0)
                int64_t* rcx_10 = *arg3
                (*(*rcx_10 + 0x468))(rcx_10, rdi_1[3], arg3[1])
                zmm6 = zmm0_1
                
                if (not(zmm0_1.d f!= zmm8.d))
                    result = arg3[1]
                    zmm6 = *(result + 4)
                
                if (zmm0_1.d f!= zmm8.d || not(zmm6.d f== zmm8.d))
                    int64_t rbx_3 = sx.q(arg5[1].d)
                    int32_t rax_8 = (rbx_3 + 1).d
                    arg5[1].d = rax_8
                    
                    if (rax_8 s> *(arg5 + 0xc))
                        sub_1405c4f50(arg5)
                    
                    int64_t r8_8 = rbx_3 * 0x30
                    int64_t** r8_9 = r8_8 + *arg5
                    
                    if (r8_8 == neg.q(*arg5))
                        r8_9 = nullptr
                    else
                        __builtin_memset(r8_9, 0, 0x24)
                        *(r8_9 + 0x2c) &= 0xfffffffe
                        *(r8_9 + 0x24) = 0x3f800000
                    
                    zmm6.d = zmm6.d f* zmm7.d
                    *r8_9 = rbp_1
                    *(r8_9 + 0x24) = zmm6.d
                    int32_t rdx_9
                    
                    if (arg1[1].b == 0)
                        rdx_9 = -0x10000
                    else
                        rdx_9 = arg3[2].d
                    
                    r8_9[5].d = rdx_9
                    result, zmm7, zmm8 = sub_1423b6ec0(arg2, rdx_9, &r8_9[1])
            else if (*result != 0xffffffff)
                int64_t rbx_2 = sx.q(arg5[1].d)
                int32_t rcx_5 = (rbx_2 + 1).d
                arg5[1].d = rcx_5
                
                if (rcx_5 s> *(arg5 + 0xc))
                    sub_1405c4f50(arg5)
                
                int64_t r8_3 = rbx_2 * 0x30
                void** r8_4 = r8_3 + *arg5
                
                if (r8_3 == neg.q(*arg5))
                    r8_4 = nullptr
                else
                    __builtin_memset(r8_4, 0, 0x24)
                    *(r8_4 + 0x2c) &= 0xfffffffe
                    *(r8_4 + 0x24) = 0x3f800000
                
                int64_t rcx_7 = sx.q(*result_2) * 3
                int64_t rdx_5 = *arg1[2]
                *r8_4 = rbp_1
                zmm0_1.d = zmm7.d f* *(rdx_5 + (rcx_7 << 2) + 8)
                *(r8_4 + 0x24) = zmm0_1.d
                int32_t rdx_6
                
                if (arg1[1].b == 0)
                    rdx_6 = -0x10000
                else
                    rdx_6 = *(rdx_5 + (rcx_7 << 2))
                
                r8_4[5].d = rdx_6
                result, zmm7, zmm8 = sub_1423b6ec0(arg2, rdx_6, &r8_4[1])
                *result_2 = 0xffffffff
        
        r15 = &r15[1]
    while (r15 != result_1)
    
    r15 = var_78

if (r15 == 0)
    return result

return sub_140a74f90(r15)
