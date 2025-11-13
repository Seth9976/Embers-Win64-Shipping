// 函数: sub_142674450
// 地址: 0x142674450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t* result = sub_141efff40(arg1 + 0x310, arg2 + 0x28)
int32_t i = 0

if (*(arg2 + 0x40) s> 0)
    void* rdi_1 = *(arg2 + 0x38) + 0x10
    
    do
        int64_t* rax_2 = sub_140d3c6e0(rdi_1 + 0x30)
        int64_t* rbx_1 = rax_2
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            void* rax_3 = sub_142549b60()
            
            if (rax_3 == 0)
                rbx_1 = nullptr
            else
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> rbx_1[7].d || *(rbx_1[6] + (rax_4 << 3)) != rax_3 + 0x30)
                    rbx_1 = nullptr
        
        void* rax_6 = sub_141dc9e00(rbx_1)
        int128_t zmm0_1 = *rdi_1
        int128_t zmm1_1 = *(rdi_1 + 0x10)
        int32_t var_b8 = var_b8 & 0xfffffffe
        int32_t var_54 = var_54 & 0xfffffff8
        int128_t var_88_1 = zmm0_1
        int128_t var_68_1 = *(rdi_1 + 0x20)
        int64_t var_b0
        __builtin_memset(&var_b0, 0, 0x20)
        int128_t var_78_1 = zmm1_1
        
        if (*(rax_6 + 8) s> 0)
            int32_t var_58_1 = *(*rax_6 + 8)
            sub_141dd8a80(&var_b8, rax_6)
        
        int64_t rbx_2 = sx.q(*(arg1 + 0x318))
        int32_t rax_8 = (rbx_2 + 1).d
        *(arg1 + 0x318) = rax_8
        
        if (rax_8 s> *(arg1 + 0x31c))
            sub_1405fdd60(arg1 + 0x310)
        
        result = sub_1426436f0(rbx_2 * 0x70 + *(arg1 + 0x310), &var_b8)
        int64_t var_a0
        
        if (var_a0 != 0)
            result = sub_140a74f90(var_a0)
        
        int64_t rcx_10 = var_b0
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        i += 1
        rdi_1 += 0x50
    while (i s< *(arg2 + 0x40))

if (*(arg2 + 0x20) != 0)
    int32_t rcx_11 = *(arg1 + 0x14)
    int32_t rax_11
    
    if ((rcx_11.b & 8) != 0 || ((*(arg2 + 0x48) u>> 2).b & 1) != 0)
        rax_11 = 8
    else
        rax_11 = 0
    
    *(arg1 + 0x14) = (rcx_11 & 0xfffffff7) | rax_11
    void* rbx_3 = nullptr
    bool cond:0_1 = arg3[1].d == 0
    int32_t i_2 = 0
    void* var_d8
    __builtin_memset(&var_d8, 0, 0x20)
    
    if (cond:0_1)
        goto label_14267463f
    
    int64_t* rcx_14 = *arg3
    
    if (rcx_14 == 0)
        goto label_14267463f
    
    char rax_13 = (*(*rcx_14 + 0x28))(rcx_14)
    int64_t var_c8
    
    if (rax_13 != 0)
        int64_t* rcx_15
        
        if (arg3[1].d == 0)
            rcx_15 = nullptr
        else
            rcx_15 = *arg3
        
        (*(*rcx_15 + 0x48))(rcx_15, arg1 + 0x88, &var_c8)
    
    int64_t var_c0
    
    if (rax_13 == 0 || var_c0.d != 0)
        int64_t var_d0
        i_2 = var_d0.d
        rbx_3 = var_d8
    label_14267463f:
        
        if (&var_d8 != arg2 + 0x18)
            if (i_2 != 0)
                int64_t* rbx_4 = rbx_3 + 0x38
                int32_t i_1
                
                do
                    int64_t rcx_16 = *rbx_4
                    
                    if (rcx_16 != 0)
                        sub_140a74f90(rcx_16)
                    
                    rbx_4 = &rbx_4[0xa]
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
            
            sub_14266e0d0(&var_d8, *(arg2 + 0x18), *(arg2 + 0x20), var_d0:4.d, 0)
        
        int64_t rdi_2 = sx.q(*(arg1 + 0x308))
        int32_t rax_15 = (rdi_2 + 1).d
        *(arg1 + 0x308) = rax_15
        
        if (rax_15 s> *(arg1 + 0x30c))
            sub_1405c4e40(arg1 + 0x300)
        
        void** rcx_21 = (rdi_2 << 5) + *(arg1 + 0x300)
        *rcx_21 = nullptr
        *rcx_21 = var_d8
        __builtin_memset(&var_d8, 0, 0x20)
        __builtin_memset(&rcx_21[1], 0, 0x18)
        rcx_21[2] = var_c8
    
    int64_t rcx_22 = var_c8
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    result = sub_141db7ed0(&var_d8)

__security_check_cookie(rax_1 ^ &var_108)
return result
