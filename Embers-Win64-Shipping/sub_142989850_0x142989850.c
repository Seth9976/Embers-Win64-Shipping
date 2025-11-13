// 函数: sub_142989850
// 地址: 0x142989850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s<= 0)
    return 

int16_t* rbx_1 = arg3 + 2
void* rdi_2 = arg4 - arg3
int128_t zmm6
int128_t var_28_1 = zmm6
int128_t zmm8
int128_t var_48_1 = zmm8
int64_t i_1 = sx.q(arg2)
int64_t i

do
    float zmm2 = *((zx.q(rbx_1[-1]) << 2) + &data_1436bbc50)
    zmm2 - 0f
    float zmm0
    
    if (not(is_unordered.d(zmm2, 0f)) && not(zmm2 != 0f))
        zmm0 = *((zx.q(rbx_1[1]) << 2) + &data_1436bbc50)
        zmm0 - 0f
    
    uint16_t rdx
    
    if (is_unordered.d(zmm2, 0f) || zmm2 != 0f || is_unordered.d(zmm0, 0f) || zmm0 != 0f)
        zmm6 = *((zx.q(*rbx_1) << 2) + &data_1436bbc50)
        zmm2 = (zmm2 + 1f) f* zmm6.d
        zmm2 - 0f
        zmm8.d = (*((zx.q(rbx_1[1]) << 2) + &data_1436bbc50)).d f+ 1f
        zmm8.d = zmm8.d f* zmm6.d
        zmm6.d = zmm6.d f- zmm2 * *arg1
        zmm6.d = zmm6.d f- zmm8.d * arg1[2]
        zmm6.d = zmm6.d f/ arg1[1]
        uint16_t rdx_2
        
        if (is_unordered.d(zmm2, 0f) || zmm2 != 0f)
            int16_t r8 = *((zx.q(zmm2) u>> 0x17 << 1) + &data_1436fbc50)
            
            if (r8 == 0)
                rdx_2 = sub_142c998f0(zmm2)
            else
                int32_t rcx_1 = zmm2 & 0x7fffff
                rdx_2 = ((rcx_1 + 0xfff + (rcx_1 u>> 0xd & 1)) u>> 0xd).w + r8
        else
            rdx_2 = (zmm2 u>> 0x10).w
        
        zmm6.d f- 0f
        *(rbx_1 + rdi_2 - 2) = rdx_2
        float arg_10 = zmm6.d
        uint16_t rdx_6
        
        if (is_unordered.d(zmm6.d, 0f) || zmm6.d f!= 0f)
            int16_t r8_1 = *((zx.q(arg_10) u>> 0x17 << 1) + &data_1436fbc50)
            
            if (r8_1 == 0)
                rdx_6 = sub_142c998f0(arg_10)
            else
                int32_t rcx_3 = arg_10 & 0x7fffff
                rdx_6 = ((rcx_3 + 0xfff + (rcx_3 u>> 0xd & 1)) u>> 0xd).w + r8_1
        else
            rdx_6 = (arg_10 u>> 0x10).w
        
        zmm8.d f- 0f
        *(rbx_1 + rdi_2) = rdx_6
        arg_10 = zmm8.d
        
        if (is_unordered.d(zmm8.d, 0f) || zmm8.d f!= 0f)
            int16_t r8_2 = *((zx.q(arg_10) u>> 0x17 << 1) + &data_1436fbc50)
            
            if (r8_2 == 0)
                rdx = sub_142c998f0(arg_10)
            else
                int32_t rcx_5 = arg_10 & 0x7fffff
                rdx = ((rcx_5 + 0xfff + (rcx_5 u>> 0xd & 1)) u>> 0xd).w + r8_2
        else
            rdx = (arg_10 u>> 0x10).w
    else
        *(rbx_1 + rdi_2 - 2) = *rbx_1
        *(rbx_1 + rdi_2) = *rbx_1
        rdx = *rbx_1
    
    *(rbx_1 + rdi_2 + 2) = rdx
    *(rbx_1 + rdi_2 + 4) = rbx_1[2]
    rbx_1 = &rbx_1[4]
    i = i_1
    i_1 -= 1
while (i != 1)
