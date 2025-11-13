// 函数: sub_1409d6db0
// 地址: 0x1409d6db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t* rsi = *(arg1 + 0x18)
void* r12_2 = &rsi[sx.q(*(arg1 + 0x20)) * 2]

while (rsi != r12_2)
    int64_t rbx_2 = 0
    int64_t var_60_1 = 0
    int64_t var_68 = 0
    int32_t rdi_1 = 0
    int32_t rbp_1 = 0
    void* var_58
    sub_1407453e0(&var_58, arg2)
    int32_t i_1
    int32_t i = i_1
    void* var_48
    
    if (i s< *(var_48 + 0x18))
        do
            int64_t i_2 = sx.q(i)
            int64_t rbx_1 = sx.q(*(*arg2 + (i_2 << 3)))
            sub_1409c8910(&var_68, rbx_1.d, arg1 + 0x28)
            rbx_2 = var_68
            *(rbx_2 + (rbx_1 << 2)) = *(*rsi + (i_2 << 2))
            int32_t var_4c
            int32_t var_40 = var_40 & not.d(var_4c)
            void var_50
            sub_14059bdd0(&var_50)
            i = i_1
        while (i s< *(var_48 + 0x18))
        
        rbp_1 = var_60_1:4.d
        rdi_1 = var_60_1.d
    
    if (rsi != &var_68)
        int64_t rcx_4 = *rsi
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        *rsi = rbx_2
        rsi[1].d = rdi_1
        *(rsi + 0xc) = rbp_1
        var_68 = 0
        int64_t var_60_2 = 0
    else if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    result = rsi[1].d
    rsi = &rsi[2]
    *(arg1 + 0xc) = result

return result
