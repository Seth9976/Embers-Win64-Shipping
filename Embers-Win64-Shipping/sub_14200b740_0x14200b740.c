// 函数: sub_14200b740
// 地址: 0x14200b740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x20)
int128_t zmm8 = arg2

if (i_2 != 0)
    int32_t rax_1 = *(arg1 + 0x10)
    int32_t rdx_1 = rax_1 + i_2
    
    if (rdx_1 s> *(arg1 + 0x14))
        sub_1405a5410(arg1 + 8, rdx_1)
        rax_1 = *(arg1 + 0x10)
    
    int64_t* r8 = *(arg1 + 0x18)
    int32_t i_1 = i_2
    int64_t* rdx_4 = (sx.q(rax_1) << 4) + *(arg1 + 8)
    int32_t i
    
    do
        *rdx_4 = *r8
        void* rax_3 = r8[1]
        rdx_4[1] = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        rdx_4 = &rdx_4[2]
        r8 = &r8[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(arg1 + 0x10) += i_2

void* result = sub_14095cd40(arg1 + 0x18, 0)

if (*(arg1 + 0x10) s> 1)
    int32_t rdx_5 = *(arg1 + 0x10)
    int64_t* rcx_3 = *(arg1 + 8)
    char arg_8
    char* var_98_1 = &arg_8
    arg_8 = 0
    result = sub_141ff3090(rcx_3, rdx_5)

*(arg1 + 0x28) &= 0xf8
*(arg1 + 0x29) = 0
int64_t* rbx = *(arg1 + 8)
void* rbp_2 = &rbx[sx.q(*(arg1 + 0x10)) * 2]

if (rbx != rbp_2)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    do
        result = *rbx
        
        if (result != 0)
            char rcx_2
            
            if ((*(result + 0x30) & 1) == 0 || arg5 != 0)
                zmm6 = zmm8
                int128_t zmm0_1
                
                if (*(result + 0x33) != 0)
                    zmm0_1.d = (*(result + 0x28)).d f- *(result + 0x24)
                    
                    if (not(zmm0_1.d f<= 0f))
                        zmm6.d = zmm0_1.d f* 0.5f
                        zmm6.d = _mm_min_ss(zmm6.d, 0x3f000000).d f+ zmm8.d
                
                if (0f f!= *(result + 0x24))
                    rcx_2 = 0
                else
                    rcx_2 = 1
                
                if (-3.39999995e+38f f== *(result + 0x20))
                    result.b = 0
                else
                    result.b = 1
                
                if (rcx_2 != 0 && result.b != 0)
                    char rax_4 = *(arg3 + 0xf0)
                    
                    if (rax_4 == 2)
                        if ((*(*(arg4 + 0x140) + 0x38))(arg4 + 0x140) != 0)
                            void* rax_8 = (*(*(arg4 + 0x140) + 0x28))(arg4 + 0x140)
                            
                            if (rax_8 != 0 && (*(arg3 + 0x330) & 8) == 0)
                                zmm0_1 = *(rax_8 + 0xc)
                                goto label_14200b964
                    else if (rax_4 == 3 && (*(*(arg4 + 0x140) + 0x40))(arg4 + 0x140) != 0)
                        void* rax_12 = (*(*(arg4 + 0x140) + 0x30))(arg4 + 0x140)
                        
                        if (rax_12 != 0)
                            zmm0_1.d = (*(rax_12 + 0x60)).d f- zmm8.d
                        label_14200b964:
                            
                            if (not(zmm0_1.d f< 0f))
                                arg2 = *(*rbx + 0x20)
                                
                                if (not(arg2.d f<= zmm0_1.d))
                                    zmm0_1.d = zmm0_1.d f+ zmm6.d
                                    
                                    if (zmm0_1.d f> arg2.d)
                                        zmm6.d = zmm0_1.d f- arg2.d
                                    else
                                        zmm6 = zx.o(0)
                
                int64_t* rcx_8 = *rbx
                
                if ((*(*rcx_8 + 8))(rcx_8) != 0)
                    void* rax_16 = *rbx
                    
                    if ((*(rax_16 + 0x31) & 2) == 0)
                        int128_t zmm2 = *(rax_16 + 0x24)
                        arg2 = *(rax_16 + 0x2c)
                        zmm0_1.d = zmm2.d f+ zmm6.d
                        
                        if (not(zmm0_1.d f< arg2.d))
                            zmm6.d = arg2.d f- zmm2.d
                            zmm6.d = zmm6.d f+ 9.99999975e-05f
                
                if (not(zmm6.d f>= 0f))
                    zmm6 = zx.o(0)
                
                int64_t* rcx_9 = *rbx
                (*(*rcx_9 + 0x48))(rcx_9, zmm6, zmm8, arg3, arg4)
                *(arg1 + 0x29) |= *(*rbx + 0x31)
                void* rax_19 = *rbx
                *(rax_19 + 0x30) |= 1
                *(*rbx + 0x33) = 0
                result = *rbx
            
            rcx_2 = *(result + 0x14)
            
            if (rcx_2 == 1)
                *(arg1 + 0x28) |= rcx_2
            else if (rcx_2 == 0)
                rcx_2 = *(arg1 + 0x28) | 2
                *(arg1 + 0x28) = rcx_2
                result = *rbx
                
                if ((*(result + 0x31) & 4) != 0)
                    *(arg1 + 0x28) = rcx_2 | 4
        
        rbx = &rbx[2]
    while (rbx != rbp_2)

return result
