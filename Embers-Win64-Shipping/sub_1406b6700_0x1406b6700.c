// 函数: sub_1406b6700
// 地址: 0x1406b6700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d8d9a0
arg1[1] = &data_142d8da68
arg1[2] = &data_142d8da80
int64_t* rcx_1 = &arg1[8][2]

if ((*(*rcx_1 + 0x18))(rcx_1) != 0)
    arg1[0xc].b = 1
    void var_18
    
    if (&arg1[4] != &var_18)
        int64_t rcx_2 = arg1[4]
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        arg1[4] = 0
        arg1[5] = 0
    
    __ld12mul(arg1[8])
    void* rax_2 = arg1[0xa]
    
    if (rax_2 != 0)
        *(rax_2 + 0x558) = 0
        arg1[0xa][0xac] = 0
        avformat_close_input(&arg1[0xa])
        arg1[0xa] = 0
    
    void* rcx_5 = arg1[0xb]
    
    if (rcx_5 != 0)
        av_free(*(rcx_5 + 8))
        av_free(arg1[0xb])
        arg1[0xb] = 0
    
    int64_t* rcx_8 = arg1[3]
    (**rcx_8)(rcx_8, 9)
    int64_t* rcx_9 = arg1[3]
    (**rcx_9)(rcx_9, 1)

int64_t* rdi_2 = arg1[0xe]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rax_8 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = arg1[9]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rsi_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, zx.q(rsi_1))

sub_1406b62e0(&arg1[6])
int64_t rcx_15 = arg1[4]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

arg1[2] = &data_142d57548
arg1[1] = &data_142d573a0
*arg1 = &data_142d57418
return &data_142d57418
