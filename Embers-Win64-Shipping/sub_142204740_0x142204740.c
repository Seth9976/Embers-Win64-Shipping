// 函数: sub_142204740
// 地址: 0x142204740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_1 = arg1
int32_t* var_68 = arg1 + 0x30
int32_t* rax_1 = sub_141fe1890(arg1 + 0x30)
int64_t result = sub_141fe1890(arg1 + 0x78)
int32_t* result_2 = result

if (rax_1 == 0 || result == 0)
    int64_t rbp_1 = *(arg2 + 0xf0)
    int32_t r14_1 = *(arg2 + 0x114)
    int64_t r15_1 = *(arg2 + 0xf8)
    int64_t rbx_7 = sx.q(*(arg2 + 0x118) - 1)
    result = result_1
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    void var_50
    float zmm2[0x4]
    
    if ((*(result + 0xa8) & 1) == 0)
        if (rbx_7 s>= 0)
            int32_t* r13_2 = var_68
            int64_t temp0_3
            
            do
                void* rdi_7 = zx.q(zx.d(*(r15_1 + (rbx_7 << 1))) * r14_1) + rbp_1
                
                if ((*(rdi_7 + 0x5c) & 0x4000000) == 0)
                    int64_t var_70_2 = 0
                    int64_t* rax_7
                    int512_t zmm1_3
                    int512_t zmm6_2
                    rax_7, zmm1_3, zmm6_2 = sub_141fe56b0(r13_2, &var_50, *(rdi_7 + 0xc), arg3, 
                        (*(arg2 + 0x18)).d, nullptr)
                    zmm1_3.o = *(rdi_7 + 0xc)
                    zmm6_2.o = zx.o(*rax_7)
                    int32_t rax_8 = rax_7[1].d
                    float zmm0_4
                    zmm0_4, result, zmm6 =
                        sub_141fe5610(arg1 + 0x78, zmm1_3, *(arg2 + 0x18), nullptr)
                    zmm0_4 = zmm0_4 f* *(rdi_7 + 0x6c)
                    zmm6[0] = zmm6[0] f* *(rdi_7 + 0x60)
                    zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm2[0] = zmm2[0] f* *(rdi_7 + 0x64)
                    *(rdi_7 + 0x60) = zmm6[0]
                    arg3 = rax_8
                    arg3[0] = arg3[0] f* *(rdi_7 + 0x68)
                    *(rdi_7 + 0x64) = zmm2[0]
                    *(rdi_7 + 0x6c) = zmm0_4
                    *(rdi_7 + 0x68) = arg3[0]
                
                temp0_3 = rbx_7
                rbx_7 -= 1
            while (temp0_3 - 1 s>= 0)
    else if (rbx_7 s>= 0)
        int32_t* r13_1 = var_68
        int64_t temp1_1
        
        do
            void* rdi_4 = zx.q(zx.d(*(r15_1 + (rbx_7 << 1))) * r14_1) + rbp_1
            
            if ((*(rdi_4 + 0x5c) & 0x4000000) == 0)
                int64_t var_70_1 = 0
                int64_t* rax_5
                int512_t zmm1_2
                int512_t zmm6_1
                rax_5, zmm1_2, zmm6_1 = sub_141fe56b0(r13_1, &var_50, *(arg2 + 0x12c), arg3, 
                    (*(arg2 + 0x18)).d, nullptr)
                zmm1_2.o = *(arg2 + 0x12c)
                zmm6_1.o = zx.o(*rax_5)
                int32_t rax_6 = rax_5[1].d
                float zmm0_3
                zmm0_3, result, zmm6 = sub_141fe5610(arg1 + 0x78, zmm1_2, *(arg2 + 0x18), nullptr)
                zmm0_3 = zmm0_3 f* *(rdi_4 + 0x6c)
                zmm6[0] = zmm6[0] f* *(rdi_4 + 0x60)
                zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm2[0] = zmm2[0] f* *(rdi_4 + 0x64)
                *(rdi_4 + 0x60) = zmm6[0]
                arg3 = rax_6
                arg3[0] = arg3[0] f* *(rdi_4 + 0x68)
                *(rdi_4 + 0x64) = zmm2[0]
                *(rdi_4 + 0x6c) = zmm0_3
                *(rdi_4 + 0x68) = arg3[0]
            
            temp1_1 = rbx_7
            rbx_7 -= 1
        while (temp1_1 - 1 s>= 0)
else
    int64_t rbp = *(arg2 + 0xf0)
    int32_t rcx_3 = *(arg2 + 0x118) - 1
    int32_t r14 = *(arg2 + 0x114)
    int64_t r15 = *(arg2 + 0xf8)
    int64_t rdi_1 = sx.q(rcx_3)
    float var_60
    
    if ((*(arg1 + 0xa8) & 1) == 0)
        if (rcx_3 s>= 0)
            int64_t temp2_1
            
            do
                void* rbx_6 = zx.q(zx.d(*(r15 + (rdi_1 << 1))) * r14) + rbp
                
                if ((*(rbx_6 + 0x5c) & 0x4000000) == 0)
                    sub_141fe52c0(rax_1, *(rbx_6 + 0xc), &var_68)
                    result = sub_141fe4fb0(result_2, *(rbx_6 + 0xc), &result_1)
                    float zmm0_2 = var_68.d f* *(rbx_6 + 0x60)
                    arg3 = var_68:4.d
                    arg3[0] = arg3[0] f* *(rbx_6 + 0x64)
                    *(rbx_6 + 0x60) = zmm0_2
                    zmm0_2 = var_60 f* *(rbx_6 + 0x68)
                    *(rbx_6 + 0x64) = arg3[0]
                    arg3 = result_1.d
                    arg3[0] = arg3[0] f* *(rbx_6 + 0x6c)
                    *(rbx_6 + 0x68) = zmm0_2
                    *(rbx_6 + 0x6c) = arg3[0]
                
                temp2_1 = rdi_1
                rdi_1 -= 1
            while (temp2_1 - 1 s>= 0)
    else if (rcx_3 s>= 0)
        int64_t temp3_1
        
        do
            void* rbx_3 = zx.q(zx.d(*(r15 + (rdi_1 << 1))) * r14) + rbp
            
            if ((*(rbx_3 + 0x5c) & 0x4000000) == 0)
                sub_141fe52c0(rax_1, *(arg2 + 0x12c), &var_68)
                result = sub_141fe4fb0(result_2, *(arg2 + 0x12c), &result_1)
                float zmm0_1 = var_68.d f* *(rbx_3 + 0x60)
                arg3 = var_68:4.d
                arg3[0] = arg3[0] f* *(rbx_3 + 0x64)
                *(rbx_3 + 0x60) = zmm0_1
                zmm0_1 = var_60 f* *(rbx_3 + 0x68)
                *(rbx_3 + 0x64) = arg3[0]
                arg3 = result_1.d
                arg3[0] = arg3[0] f* *(rbx_3 + 0x6c)
                *(rbx_3 + 0x68) = zmm0_1
                *(rbx_3 + 0x6c) = arg3[0]
            
            temp3_1 = rdi_1
            rdi_1 -= 1
        while (temp3_1 - 1 s>= 0)

return result
