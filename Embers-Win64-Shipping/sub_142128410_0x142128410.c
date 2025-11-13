// 函数: sub_142128410
// 地址: 0x142128410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i_1 = data_143f5a298
int32_t* i_3 = arg2
int128_t zmm6
int128_t var_38 = zmm6

if (*i_1 == 0)
label_14212859b:
    int64_t* rcx_11 = *(arg1 + 0xd0)
    
    if (rcx_11 != 0)
        return (*(*rcx_11 + 0x468))(rcx_11, arg2, arg3)
else
    i_1 = data_143f5a0d0
    
    if (*i_1 == 0)
        goto label_14212859b
    
    int64_t rbp_1 = *(arg1 + 0x60)
    int32_t rsi_1 = 0
    int32_t i = *(arg1 + 0x68)
    
    if (i s> 0)
        do
            int32_t rcx_1 = i & 0x80000001
            
            if (rcx_1 s< 0)
                rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(i)
            int32_t i_4 = (temp1_1 - temp0_1) s>> 1
            i = i_4
            int32_t rax_3 = i_4 + rsi_1
            i_1 = sub_140b5d160((sx.q(rax_3) << 4) + 8 + rbp_1, &i_3)
            
            if (i_1.d s< 0)
                rsi_1 = rax_3 + rcx_1
        while (i s> 0)
        
        i = *(arg1 + 0x68)
    
    if (rsi_1 s>= i)
        goto label_14212859b
    
    int64_t rdi_2 = sx.q(rsi_1)
    int64_t rbp_3 = rdi_2 << 4
    i_1 = sub_140b5d160(&i_3, *(arg1 + 0x60) + 8 + rbp_3)
    
    if (i_1.d s< 0 || rsi_1 == 0xffffffff)
        goto label_14212859b
    
    int32_t r8 = *(arg1 + 0x68)
    int32_t rcx_9 = rsi_1 + 1
    
    if (rcx_9 s< r8)
        i_1 = i_3
        int64_t* rdx_7 = *(arg1 + 0x60) + 0x18 + rbp_3
        
        while (*rdx_7 == i_1)
            rsi_1 += 1
            rcx_9 += 1
            rdx_7 = &rdx_7[2]
            
            if (rcx_9 s>= r8)
                break
    
    int64_t rsi_2 = sx.q(rsi_1)
    zmm6 = zx.o(0)
    
    if (rdi_2 s<= rsi_2)
        int64_t i_5 = rsi_2 - rdi_2 + 1
        int64_t i_2
        
        do
            int64_t rdi_3 = *(arg1 + 0x60)
            sub_140b5b8a0(*(rdi_3 + rbp_3 + 8), 0)
            i_1 = sx.q(*(rdi_3 + rbp_3 + 4))
            rbp_3 += 0x10
            int128_t zmm0
            zmm0.d = (*(arg3 + (i_1 << 2) + 4)).d f/ *(rdi_3 + rbp_3 - 0x10)
            zmm6 = _mm_max_ss(zmm0.d, zmm6.d)
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    if (zmm6.d f== 0f)
        goto label_14212859b

return i_1
