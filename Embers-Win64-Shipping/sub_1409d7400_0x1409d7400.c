// 函数: sub_1409d7400
// 地址: 0x1409d7400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t* rbx = *(arg1 + 0x18)
void* r12_2 = &rbx[sx.q(*(arg1 + 0x20)) * 2]

while (rbx != r12_2)
    int64_t var_68 = 0
    int64_t var_60_1 = 0
    int64_t rdi_1 = 0
    int32_t rsi_1 = 0
    int32_t rbp_1 = 0
    void* var_58
    sub_1407453e0(&var_58, arg2)
    int32_t i_1
    int32_t i = i_1
    void* var_48
    
    if (i s< *(var_48 + 0x18))
        do
            int64_t rsi_2 = sx.q(i) << 3
            int64_t rdi_2 = sx.q(*(rsi_2 + *arg2))
            sub_1409c8b50(&var_68, rdi_2.d, arg1 + 0x28)
            rdi_1 = var_68
            *(rdi_1 + (rdi_2 << 3)) = *(rsi_2 + *rbx)
            int32_t var_4c
            int32_t var_40 = var_40 & not.d(var_4c)
            void var_50
            sub_14059bdd0(&var_50)
            i = i_1
        while (i s< *(var_48 + 0x18))
        
        rbp_1 = var_60_1:4.d
        rsi_1 = var_60_1.d
    
    if (rbx != &var_68)
        int64_t rcx_4 = *rbx
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        *rbx = rdi_1
        rbx[1].d = rsi_1
        *(rbx + 0xc) = rbp_1
        var_68 = 0
        int64_t var_60_2 = 0
    else if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    result = rbx[1].d
    rbx = &rbx[2]
    *(arg1 + 0xc) = result

return result
