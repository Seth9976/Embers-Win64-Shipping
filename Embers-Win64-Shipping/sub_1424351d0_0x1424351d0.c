// 函数: sub_1424351d0
// 地址: 0x1424351d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x38)
int64_t rdi = 0
int64_t r12 = sx.q(arg3)
uint64_t r13 = arg1
int32_t result

if (rax - 1 s< 0)
label_14243527b:
    *arg5 = 0
    void var_40
    
    if (&arg5[1] != &var_40)
        int64_t rcx_1 = arg5[1]
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        arg5[1] = 0
        arg5[2] = 0
    
    arg5[3].d = 0
    *(arg5 + 0x1c) = 0
    result = *(r13 + 0x28)
    arg5[3].d = result
else
    int64_t r11_1 = sx.q(rax - 1)
    int32_t* rbx_3 = (r11_1 << 5) + *(arg1 + 0x30)
    
    while (true)
        int32_t rbp_1 = *rbx_3
        
        if (rbp_1 s<= arg4 && rbx_3[1] s>= arg4 && r12.d == rbx_3[4])
            arg1.b = 1
            void* r10_1 = nullptr
            
            if (r12.d s> 0)
                do
                    if (arg1.b == 0)
                        goto label_142435260
                    
                    char* r8 = r10_1 + arg2
                    char* rdx_1 = *(rbx_3 + 8) + r10_1
                    r10_1 += 1
                    char r9 = 0
                    
                    if (*r8 == *rdx_1)
                        r9 = arg1.b
                    
                    arg1 = zx.q(r9)
                while (r10_1 s< r12)
            
            if (r12.d s<= 0 || arg1.b != 0)
                *arg5 = rbp_1
                *(arg5 + 4) = rbx_3[1]
                
                if (&arg5[1] != &rbx_3[2])
                    uint32_t count = rbx_3[4]
                    int64_t r15_1 = *(rbx_3 + 8)
                    int32_t r8_1 = *(arg5 + 0x14)
                    arg5[2].d = count
                    
                    if (count != 0 || r8_1 != 0)
                        sub_1405da9e0(&arg5[1], count, r8_1)
                        memcpy(arg5[1], r15_1, count)
                    else
                        *(arg5 + 0x14) = 0
                
                int32_t rcx_4 = rbx_3[6]
                arg5[3].d = rcx_4
                *(arg5 + 0x1c) = rbx_3[7].b
                int32_t zmm1
                
                if (rbx_3[7].b == 0)
                    zmm1 = 0x3f800000
                else
                    int64_t rbx_5 = data_143f5e898
                    
                    if (data_143de5480 != 0)
                        bool cond:2_1 = GetCurrentThreadId() != data_143de5470
                        rcx_4 = arg5[3].d
                        rdi.b = cond:2_1
                    
                    zmm1 = *(rbx_5 + (rdi << 2))
                
                uint128_t zmm0
                zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_4)).d f* zmm1
                result = int.d(zmm0.d)
                arg5[3].d = result
                break
        
    label_142435260:
        rbx_3 -= 0x20
        int64_t temp1_1 = r11_1
        r11_1 -= 1
        
        if (temp1_1 - 1 s< 0)
            goto label_14243527b

return result
