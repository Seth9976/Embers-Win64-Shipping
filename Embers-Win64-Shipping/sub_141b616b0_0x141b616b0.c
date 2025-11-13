// 函数: sub_141b616b0
// 地址: 0x141b616b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi
rdi.b = 0
int64_t var_48 = 0
int32_t var_40 = 0
int16_t* const rdx

if (arg3[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg3

if (sub_140b1ef70(&var_48, rdx, 0) != 0)
    void arg_18
    int64_t rbx_1 = *sub_140b58170(&arg_18, "ImageWrapper", 1)
    j_sub_140b3db50()
    int64_t* rax_2
    int512_t zmm0_1
    rax_2, zmm0_1 = j_sub_140b407e0(&data_143de7d78, rbx_1)
    int64_t r9 = *rax_2
    char rax_3 = (*(r9 + 0x48))(rax_2, var_48, sx.q(var_40), r9)
    int64_t r9_1 = *rax_2
    uint64_t r8_1 = zx.q(rax_3)
    
    if (rax_3 == 0xff)
        r8_1 = 0
    
    int64_t* var_38
    (*(r9_1 + 0x40))(rax_2, &var_38, r8_1, r9_1)
    int64_t* rcx_4 = var_38
    
    if (rcx_4 != 0 && (**rcx_4)(rcx_4, var_48, sx.q(var_40)) != 0)
        int64_t* rcx_5 = var_38
        int32_t rax_7 = (*(*rcx_5 + 0x28))(rcx_5)
        int64_t* rcx_6 = var_38
        *arg4 = rax_7
        int32_t rax_9
        int64_t rdx_5
        rax_9, rdx_5 = (*(*rcx_6 + 0x30))(rcx_6)
        zmm0_1.o = zx.o(0)
        rdx_5.b = 1
        int128_t var_28
        __builtin_memset(&var_28, 0, 0x18)
        *arg5 = rax_9
        char rax_11 = (*(*var_38 + 0x20))(zmm0_1, rdx_5, 8, &var_28)
        int64_t rbx_3
        
        if (rax_11 != 0)
            rbx_3 = var_28:8.q
        
        if (rax_11 == 0 || rbx_3 != sx.q(rbx_3.d))
            int64_t rcx_12 = var_28.q
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
        else
            int64_t rsi_1 = var_28.q
            int32_t r8_3 = *(arg6 + 0xc)
            arg6[1].d = rbx_3.d
            
            if (rbx_3 != 0 || r8_3 != 0)
                sub_1405da9e0(arg6, rbx_3.d, r8_3)
                memcpy(*arg6, rsi_1, rbx_3.d)
                rsi_1 = var_28.q
            else
                *(arg6 + 0xc) = 0
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            rdi.b = 1
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp1_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp1_1 == 1)
                int64_t r8_5 = *var_30
                (*(r8_5 + 8))(var_30, 1, r8_5)

int64_t rcx_15 = var_48

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

return zx.q(rdi.b)
