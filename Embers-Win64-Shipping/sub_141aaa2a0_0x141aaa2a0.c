// 函数: sub_141aaa2a0
// 地址: 0x141aaa2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* r15 = arg3

if (*(arg1 + 0x238) s> 0)
    int64_t var_d0 = *(arg2 + 0x18)
    sub_141ad01a0(arg1)
    int32_t zmm7_1 = sub_141f68030(arg1 + 0x148)
    int32_t zmm6_1 = *(*(arg1 + 0x190) + sx.q(*(arg1 + 0x198)) * 0x14 - 0x10)
    sub_141df0060(arg1 + 0x110, *(arg1 + 0x104), *(arg1 + 0x108))
    char arg_8 = 0
    char* var_98_1 = &arg_8
    void*** (* var_a0)() = j_sub_140cd6f60
    void* rax_3 = sub_140a756e0(&var_a0, &data_1439dbe6c)
    char arg_20 = 0
    void*** (* var_90)() = j_sub_140cd6f60
    char* var_88_1 = &arg_20
    void* rax_4 = sub_140a756e0(&var_90, &data_1439dbe6c)
    char var_d8 = 0
    void*** (* var_80)() = j_sub_140cd6f60
    int64_t* rsi_1 = rax_4 + 0x20
    int64_t* var_a8_1 = rsi_1
    char* var_78_1 = &var_d8
    void* rax_5 = sub_140a756e0(&var_80, &data_1439dbe6c)
    int64_t i = 0
    *(rax_3 + 0x18) = 0
    
    if (*(rax_3 + 0x1c) s<= 0xffffffff)
        sub_1405a5220(rax_3 + 0x10, 0)
    
    int32_t rax_6 = *(rsi_1 + 0xc)
    rsi_1[1].d = 0
    
    if (rax_6 s< 0 && rax_6 != 0)
        sub_1405a5220(rsi_1, 0)
    
    int32_t rax_7 = *(rax_5 + 0x3c)
    *(rax_5 + 0x38) = 0
    
    if (rax_7 s< 0 && rax_7 != 0)
        sub_1405dadb0(rax_5 + 0x30, 0)
    
    int64_t rax_8 = sx.q(*(arg1 + 0x238))
    int64_t var_c0 = rax_8
    
    if (rax_8 s> 0)
        int64_t var_b0_1 = 0
        int64_t r15_1 = 0
        int64_t r14_1 = var_d0
        int64_t rsi_5
        
        do
            void* rbx_2 = *(arg1 + 0x230) + r15_1
            
            if (sub_141ea6180(rbx_2, r14_1) == 0)
                break
            
            int32_t rax_10 = *(rbx_2 + 8)
            int32_t rbx_3
            
            if (rax_10 s>= 0)
                rbx_3 = *(rbx_2 + 0xc)
            else
                int32_t rcx_10 = rax_10 * 2
                
                if ((rcx_10 & 0xfffffffe) == 0xfffffffe)
                    rbx_3 = -1
                else
                    rbx_3 = *(*(r14_1 + 0x80) + (sx.q(rcx_10) s>> 1 << 2))
            
            int64_t rsi_2 = sx.q(*(rax_5 + 0x38))
            int32_t rax_14 = (rsi_2 + 1).d
            *(rax_5 + 0x38) = rax_14
            
            if (rax_14 s> *(rax_5 + 0x3c))
                sub_1405a4cf0(rax_5 + 0x30)
            
            *(*(rax_5 + 0x30) + (rsi_2 << 2)) = rbx_3
            int64_t rdx_2 = sx.q(*(*(rax_5 + 0x30) + (rsi_2 << 2)))
            int64_t rax_17 = *(arg2 + 0x20)
            var_d0 = rdx_2
            
            if (*(rdx_2 + rax_17) == 0)
                zmm6_1, zmm7_1 = sub_141a98300(arg2 + 8, rdx_2.d)
            
            int64_t rsi_3 = *(arg2 + 8)
            int64_t rbx_5 = sx.q(*(rax_3 + 0x18))
            int32_t rax_18 = (rbx_5 + 1).d
            *(rax_3 + 0x18) = rax_18
            
            if (rax_18 s> *(rax_3 + 0x1c))
                sub_140638970(rax_3 + 0x10)
            
            int64_t rcx_17 = rbx_5 * 6
            r15_1 += 0x14
            int64_t rax_20 = *(rax_3 + 0x10)
            int64_t rdx_5 = var_d0 * 6
            *(rax_20 + (rcx_17 << 3)) = *(rsi_3 + (rdx_5 << 3))
            *(rax_20 + (rcx_17 << 3) + 0x10) = *(rsi_3 + (rdx_5 << 3) + 0x10)
            rsi_5 = var_b0_1 + 1
            *(rax_20 + (rcx_17 << 3) + 0x20) = *(rsi_3 + (rdx_5 << 3) + 0x20)
            var_b0_1 = rsi_5
        while (rsi_5 s< var_c0)
        r15 = arg3
        i = 0
        rsi_1 = var_a8_1
    
    var_d0 = 0
    int64_t rax_21 = sub_140a84c80(0, 0x30, 0)
    var_d0 = rax_21
    int32_t var_c8_1 = 3
    
    if (rax_21 != 0)
        *(rax_21 + 8) = arg1
        *rax_21 = &data_142d42fd0
        *(rax_21 + 0x10) = sub_141ab4320
        *(rax_21 + 0x20) = sub_140a387b0()
    
    var_c0 = 0
    int64_t rax_23 = sub_140a84c80(0, 0x30, 0)
    var_c0 = rax_23
    int32_t var_b8_1 = 3
    
    if (rax_23 != 0)
        *(rax_23 + 0x18) = zmm6_1
        *rax_23 = &data_143043720
        *(rax_23 + 0x10) = sub_141abd060
        *(rax_23 + 8) = arg1
        *(rax_23 + 0x20) = sub_140a387b0()
    
    int64_t* var_e0_1 = rsi_1
    sub_141a82120(rax_3 + 0x10, arg1 + 0x148, arg1 + 0x160, arg1 + 0x178, zmm6_1, zmm7_1, &var_c0, 
        *(arg1 + 0x100), (*(arg1 + 0x140)).d, *(arg1 + 0x144), zx.d(*(arg1 + 0xe8)), &var_d0, 
        arg1 + 0x250, arg1.d + 0x240, *(arg1 + 0x228))
    int64_t rax_27
    
    if (var_b8_1 == 0)
        rax_27 = var_c0
    label_141aaa6a8:
        
        if (rax_27 != 0)
            sub_140a74f90(rax_27)
    else
        int64_t rcx_20 = var_c0
        
        if (rcx_20 != 0)
            (*(*rcx_20 + 0x38))(rcx_20, 0)
            rax_27 = var_c0
            
            if (rax_27 != 0)
                rax_27 = sub_140a84c80(rax_27, 0, 0)
                var_c0 = rax_27
            
            int32_t var_b8_2 = 0
            goto label_141aaa6a8
    int64_t rax_29
    
    if (var_c8_1 == 0)
        rax_29 = var_d0
    label_141aaa6f0:
        
        if (rax_29 != 0)
            sub_140a74f90(rax_29)
    else
        int64_t rcx_23 = var_d0
        
        if (rcx_23 != 0)
            (*(*rcx_23 + 0x38))(rcx_23, 0)
            rax_29 = var_d0
            
            if (rax_29 != 0)
                rax_29 = sub_140a84c80(rax_29, 0, 0)
                var_d0 = rax_29
            
            int32_t var_c8_2 = 0
            goto label_141aaa6f0
    result = sx.q(*(rax_5 + 0x38))
    arg_8.q = result
    
    if (result s> 0)
        int128_t* rbx_8 = nullptr
        
        do
            int64_t r12_2 = *rsi_1
            int64_t rsi_6 = sx.q(r15[1].d)
            int64_t r13_1 = *(rax_5 + 0x30)
            int32_t rax_30 = (rsi_6 + 1).d
            r15[1].d = rax_30
            
            if (rax_30 s> *(r15 + 0xc))
                sub_1405c4fe0(r15)
            
            result = zx.q(*(r13_1 + (i << 2)))
            rsi_1 = var_a8_1
            i += 1
            int32_t* rcx_29 = (rsi_6 << 6) + *r15
            *rcx_29 = result.d
            *(rcx_29 + 0x10) = *(rbx_8 + r12_2)
            *(rcx_29 + 0x20) = *(rbx_8 + r12_2 + 0x10)
            int128_t zmm0_4 = *(rbx_8 + r12_2 + 0x20)
            rbx_8 = &rbx_8[3]
            *(rcx_29 + 0x30) = zmm0_4
        while (i s< arg_8.q)

return result
