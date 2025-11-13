// 函数: sub_14242c520
// 地址: 0x14242c520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x4f4) += 1
int64_t rbp
rbp.b = 0
int32_t rax = *(arg1 + 0x4e8)
int32_t r9 = *(arg1 + 0x4f4)
int64_t rdi = sx.q(rax - 1)
int64_t var_88
int64_t zmm0

if (rax - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_2 = *(arg1 + 0x4e0)
        
        if (*(rbx_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx = *(rbx_2 + rax_2)
            
            if (rcx == 0)
                rbp.b = 1
            else
                zmm0 = *arg2
                int32_t var_80_1 = arg2[1].d
                int64_t rax_4 = *rcx
                var_88 = zmm0
                
                if ((*(rax_4 + 0x50))(zmm0, &var_88, arg3) == 0)
                    rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    r9 = *(arg1 + 0x4f4)

*(arg1 + 0x4f4) = r9 - 1

if (rbp.b != 0)
    sub_140599630(arg1 + 0x4e0, 0)

int64_t* rsi_1 = *(arg1 + 0x4f8)
int64_t rdi_1 = 0
void* result = &rsi_1[sx.q(*(arg1 + 0x500))]
uint64_t r14_2 = sx.q(*(arg1 + 0x500)) << 3 u>> 3

if (rsi_1 u> result)
    r14_2 = 0

if (r14_2 != 0)
    float zmm7[0x4] = zx.o(0)
    int128_t zmm8 = 0x3f800000
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    
    do
        int64_t* rbx_3 = *rsi_1
        char* var_78
        result = (*(*rbx_3 + 0x18))(rbx_3, &var_78)
        char var_64
        
        if (var_64 != 0)
            int32_t var_68
            zmm6 = var_68
            bool cond:2_1 = zmm6[0] >= zmm7[0]
            float arg_8 = 0f
            
            if (cond:2_1)
                zmm6 = _mm_min_ss(zmm6[0], zmm8.d)
            else
                zmm6 = zmm7
            
            char var_63
            
            if (var_63 != 0)
            label_14242c6d9:
                
                if (not(zmm6[0] <= zmm7[0]))
                    result, zmm7, zmm8 = sub_1422ebf00(arg3, var_78, zmm6)
            else
                int32_t rax_9 = arg2[1].d
                int64_t rax_10 = *rbx_3
                var_88 = *arg2
                result = (*(rax_10 + 0x10))(rbx_3, &var_88, zmm7, &arg_8, var_88, rax_9)
                float zmm1 = arg_8
                
                if (not(zmm1 < zmm7[0]))
                    int32_t var_6c
                    zmm0 = var_6c
                    
                    if (not(zmm1 f> zmm0.d))
                        if (zmm0.d f< zmm8.d)
                            goto label_14242c6d9
                        
                        zmm0.d = zmm8.q.d f- zmm1 f/ zmm0.d
                        zmm6[0] = zmm6[0] f* zmm0.d
                        
                        if (not(zmm6[0] < zmm7[0]) && not(zmm6[0] f> zmm8.d))
                            goto label_14242c6d9
        
        rsi_1 = &rsi_1[1]
        rdi_1 += 1
    while (rdi_1 != r14_2)

return result
