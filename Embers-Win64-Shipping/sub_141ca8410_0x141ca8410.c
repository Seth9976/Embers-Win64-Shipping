// 函数: sub_141ca8410
// 地址: 0x141ca8410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg1[0x24].d)
uint64_t* rdi = arg2

if (rax.d s<= 0 || rax s> arg1[0x3a])
    rax.b = 0
    return rax

(*(*arg1 + 0x178))()
uint64_t var_a8
int512_t zmm1 = sub_140ba59c0(&var_a8, &arg1[0x12])
int16_t* var_80
sub_140baa480(&var_80, &var_a8)
int64_t* rcx_2 = arg1[1]
int64_t* r15 = nullptr
int32_t arg_8 = 0
int32_t* rdx_2 = *rcx_2

if (&rdx_2[1] u> rcx_2[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_3, zmm1)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx_2 += 4

int32_t r14 = 0
int32_t arg_20 = 0
uint64_t rax_3

if (arg_8 s> 0)
    do
        uint64_t var_c8 = 0
        int32_t var_c0_1 = 0
        int512_t zmm1_1 = sub_140a1d9d0(arg1, &var_c8, zmm1)
        int16_t* var_d8 = nullptr
        int32_t var_d0_1 = 0
        int512_t zmm1_2 = sub_140a1d9d0(arg1, &var_d8, zmm1_1)
        int64_t* rcx_6 = arg1[1]
        int32_t arg_18 = 0
        int32_t* rdx_6 = *rcx_6
        
        if (&rdx_6[1] u> rcx_6[1])
            int32_t* rdx_7 = &arg_18
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_7, zmm1_2)
            else
                (*(*arg1 + 0x150))(arg1, rdx_7, 4)
        else
            arg_18 = *rdx_6
            *rcx_6 += 4
        
        int32_t var_f8_1 = 0xffffffff
        rax_3, zmm1 = sub_140a23cf0(&var_d8, &data_142d404c4, 0, 0, 0xffffffff)
        
        if (rax_3.d == 0xffffffff)
            int64_t* rax_8 = j_sub_140a82f30(0x50)
            
            if (rax_8 != 0)
                int64_t rdi_1 = sx.q(arg1[0x36].d)
                int64_t rsi_1 = arg1[0x35]
                int64_t var_b8 = 0
                int32_t var_b0_1 = rdi_1.d
                
                if (rdi_1.d != 0)
                    sub_140638750(&var_b8, rdi_1.d, 0)
                    memcpy(var_b8, rsi_1, (rdi_1 << 2).d)
                else
                    int32_t var_ac_1 = 0
                
                int16_t* const rdx_10 = &data_142d40450
                int32_t r14_1 = *(arg1 + 0xcc)
                int16_t* const rdi_2 = &data_142d40450
                
                if (var_c0_1 != 0)
                    rdx_10 = var_c8
                
                int16_t* const r12_1 = &data_142d40450
                uint64_t r13_1 = &data_142d40450
                int64_t var_90 = 0
                
                if (var_d0_1 != 0)
                    rdi_2 = var_d8
                
                int64_t var_88_1 = 0
                int32_t var_78
                
                if (var_78 != 0)
                    r12_1 = var_80
                
                int32_t var_a0
                
                if (var_a0 != 0)
                    r13_1 = var_a8
                
                void var_70
                int64_t* rax_9 = sub_140b58260(&var_70, rdx_10, 1)
                void var_68
                int64_t* rax_10 = sub_140b58260(&var_68, rdi_2, 1)
                void var_60
                int64_t* rax_11 = sub_140b58260(&var_60, r12_1, 1)
                void var_58
                int64_t* rax_12 = sub_140b58260(&var_58, r13_1, 1)
                var_f8_1.q = *rax_9
                int64_t* rax_13
                rax_13, zmm1 = sub_141c91700(rax_8, *rax_12, *rax_11, *rax_10, 0xffffffff, &var_90, 
                    &var_b8, r14_1)
                rdi = arg2
                r15 = rax_13
                r14 = arg_20
            
            int64_t rsi_3 = sx.q(rdi[1].d)
            int32_t rax_14 = (rsi_3 + 1).d
            rdi[1].d = rax_14
            
            if (rax_14 s> *(rdi + 0xc))
                sub_1405a4d70(rdi)
            
            *(*rdi + (rsi_3 << 3)) = r15
            int16_t* rcx_20 = var_d8
            
            if (rcx_20 != 0)
                rax_3, zmm1 = sub_140a74f90(rcx_20)
            
            uint64_t rcx_21 = var_c8
            
            if (rcx_21 != 0)
                rax_3, zmm1 = sub_140a74f90(rcx_21)
            
            r15 = nullptr
        else
            int16_t* rcx_9 = var_d8
            
            if (rcx_9 != 0)
                rax_3, zmm1 = sub_140a74f90(rcx_9)
            
            uint64_t rcx_10 = var_c8
            
            if (rcx_10 != 0)
                rax_3, zmm1 = sub_140a74f90(rcx_10)
        
        r14 += 1
        arg_20 = r14
    while (r14 s< arg_8)

int16_t* rcx_22 = var_80

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

uint64_t rcx_23 = var_a8

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

rax_3.b = 1
return rax_3
