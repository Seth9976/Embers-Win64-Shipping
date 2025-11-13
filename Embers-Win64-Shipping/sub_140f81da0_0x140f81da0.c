// 函数: sub_140f81da0
// 地址: 0x140f81da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
*(arg1 + 0x86c) = *arg3
int32_t rdx_10
int64_t rbx_5

if (sub_140f07390(*(arg1 + 0x48)) == 0 || *(arg1 + 0x58) == 0)
    rdx_10 = arg6
    rbx_5 = arg5
else
    void* rdx = arg1 + 0xb8
    uint32_t rcx_1 = zx.d(*(rdx + 0x10))
    
    if (rcx_1 != 0)
        if (rcx_1 == 1)
            rdx = *(rdx + 0x18)
        else if (rcx_1 == 3)
            rdx = arg7 + 0x20
        else
            rdx = arg7 + 0x10
    
    float zmm6[0x4] = *rdx
    sub_140de1940(arg1 + 0x2c8, arg1 + 0x60)
    *(arg1 + 0x330) = 0
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
    temp0_3[0] = temp0_1[0]
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
    temp0_4[0] = temp0_2[0]
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
    temp0_5[0] = 0x3eb33333
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
    float var_320_1[0x4] = temp0_6
    *(arg1 + 0x320) = temp0_6
    float var_330[0x4] = zx.o(0)
    
    if (&var_330 != arg1 + 0x338)
        float zmm0_1[0x4] = *(arg1 + 0x338)
        int128_t var_78_1 = zx.o(0)
        var_330 = zmm0_1
        int64_t* rbx_1 = _mm_bsrli_si128(zmm0_1, 8)[0].q
        *(arg1 + 0x338) = zx.o(0)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rsi_1 = *(arg1 + 0x58)
    
    if (sub_140f7b4e0(rsi_1, arg1 + 0x2c8) == 0)
        void** var_2e0
        sub_140f15670(*rsi_1, sub_140ddd070(&var_2e0, arg1 + 0x2c8))
        int64_t* rcx_9 = rsi_1[2]
        int64_t r8 = *rsi_1
        int64_t var_340 = 0
        int64_t var_338_1 = 0
        (*(*rcx_9 + 0x10))(rcx_9, &var_340, r8)
        int64_t* rcx_10 = rsi_1[2]
        (*(*rcx_10 + 0x28))(rcx_10)
        sub_140eec610(*rsi_1)
        sub_140eec530(*rsi_1)
        sub_140eec710(*rsi_1)
        int64_t* rcx_14 = rsi_1[2]
        (*(*rcx_14 + 8))(rcx_14, &var_340, *rsi_1)
        void var_2f8
        int64_t* rax_12 = sub_140a98020(&var_2f8)
        
        if (&rsi_1[0xb] != rax_12)
            rsi_1[0xb] = *rax_12
            *rax_12 = 0
            sub_1405aeff0(&rsi_1[0xc], &rax_12[1])
        
        rsi_1[0xd].w = rax_12[2].w
        *(rsi_1 + 0x6a) = *(rax_12 + 0x12)
        *(rsi_1 + 0x6c) = *(rax_12 + 0x14)
        int64_t* var_2f0
        
        if (var_2f0 != 0)
            var_2f0[1].d -= 1
            
            if (var_2f0[1].d == 1)
                (**var_2f0)(var_2f0)
                int32_t rsi_3 = *(var_2f0 + 0xc)
                *(var_2f0 + 0xc) -= 1
                
                if (rsi_3 == 1)
                    (*(*var_2f0 + 8))(var_2f0, zx.q(rsi_3))
        
        int64_t rcx_21 = var_340
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
    
    rbx_5 = arg5
    rdx_10 = sub_140f820e0(*(arg1 + 0x58), arg2, arg3, arg4, rbx_5, arg6, arg7, arg8, arg5)

int64_t* rcx_23 = *(arg1 + 0x48)
int64_t result = (*(*rcx_23 + 0x40))(rcx_23, arg2, arg3, arg4, rbx_5, rdx_10, arg7, arg8, arg5)
__security_check_cookie(rax_1 ^ &var_388)
return result
