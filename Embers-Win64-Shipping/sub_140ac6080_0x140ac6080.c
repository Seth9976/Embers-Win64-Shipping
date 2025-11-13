// 函数: sub_140ac6080
// 地址: 0x140ac6080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*arg1)
int32_t arg_8 = 0

if (result.d == 4)
    if (arg2 != 0)
        sub_140abd990(&arg1[4])
    
    int64_t var_a8
    int64_t* rdx_1
    uint64_t rbx_1
    int32_t rdi_1
    uint64_t var_b8
    
    if (arg3 == 0)
        sub_140abd990(&arg1[4])
        int64_t* rcx_4 = *(arg1 + 0x10)
        int64_t* rax_3 = (*(*rcx_4 + 0x10))(rcx_4)
        rbx_1 = 0
        var_b8 = 0
        int32_t rdi_2 = rax_3[1].d
        int64_t rsi_1 = *rax_3
        int32_t var_b0_1 = rdi_2
        
        if (rdi_2 != 0)
            sub_1405a4c70(&var_b8, rdi_2, 0)
            rbx_1 = var_b8
            memcpy(rbx_1, rsi_1, rdi_2 * 2)
        else
            int32_t var_ac_1 = 0
        
        rdx_1 = &var_b8
        rdi_1 = 2
    else
        int64_t* rcx_1 = *(arg1 + 0x10)
        int64_t* rax_1 = (*(*rcx_1 + 0x28))(rcx_1)
        int64_t r8 = *rax_1
        (*(r8 + 0x18))(rax_1, &var_a8, r8)
        rbx_1 = var_b8
        rdx_1 = &var_a8
        rdi_1 = 1
    int32_t rax_4 = rdx_1[1].d
    int32_t r8_3 = rax_4 - 1
    
    if (rax_4 == 0)
        r8_3 = 0
    
    result = sub_140a20ba0(arg4, *rdx_1, r8_3)
    
    if ((rdi_1.b & 2) != 0)
        rdi_1 &= 0xfffffffd
        
        if (rbx_1 != 0)
            result = sub_140a74f90(rbx_1)
    
    if ((rdi_1.b & 1) != 0)
        int64_t rcx_9 = var_a8
        
        if (rcx_9 != 0)
            return sub_140a74f90(rcx_9)
else if (result.d != 5)
    char* rax_5 = sub_140a752e0()
    int64_t* rbx_2 = *(rax_5 + 0x40)
    int64_t* r14_1 = *(rax_5 + 0x38)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rdi_3 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rdi_3 == 1)
                    (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_3))
    
    result = sub_140a797c0(r14_1)
    int32_t rdx_6 = *arg1
    uint64_t rdx_11
    int64_t zmm1_1
    
    if (rdx_6 == 0)
        rdx_11 = *(arg1 + 8)
        uint8_t rcx_13 = (rdx_11 u>> 0x3f).b
        
        if (rcx_13 != 0)
            rdx_11 = neg.q(rdx_11)
        
        zmm1_1 = *(result + 0x9c)
        uint128_t var_38 = *(result + 0x8c)
        int64_t var_28_1 = zmm1_1
        return sub_140a80970(rcx_13, rdx_11, result, &var_38, arg4)
    
    if (rdx_6 == 1)
        rdx_11 = *(arg1 + 8)
        zmm1_1 = *(result + 0x9c)
        uint128_t var_58 = *(result + 0x8c)
        int64_t var_48_1 = zmm1_1
        return sub_140a80970(0, rdx_11, result, &var_58, arg4)
    
    if (rdx_6 == 2)
        zmm1_1 = *(result + 0x9c)
        uint128_t var_78 = *(result + 0x8c)
        int64_t var_68_1 = zmm1_1
        return sub_140a745d0(_mm_cvtps_pd(arg1[2].q), result, &var_78, arg4)
    
    if (rdx_6 == 3)
        zmm1_1 = *(result + 0x9c)
        uint128_t var_98 = *(result + 0x8c)
        int64_t var_88_1 = zmm1_1
        return sub_140a745d0(zx.o(*(arg1 + 8)), result, &var_98, arg4)

return result
