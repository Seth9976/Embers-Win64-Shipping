// 函数: sub_141d31010
// 地址: 0x141d31010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = arg1[1].b
int64_t r9_1 = arg1[3] + 0x44
void* rsi
int64_t* rdi_1
void arg_8

if (rax != 2)
    rsi = &arg1[2]
    
    if (rax != 1)
        void* var_40_2 = &arg_8
        int64_t** var_18
        sub_1417c6070(arg2 + 0x88, &var_18, 1, r9_1, arg2 + 0x88)
        sub_14175b460(arg2 + 0x88)
        int64_t** rcx_11 = var_18
        rdi_1 = *rcx_11
        sub_140a74f90(rcx_11)
        void* rcx_12 = *rsi
        *(rcx_12 + 0x58) = rdi_1
        sub_141d3ef00(rcx_12, arg1[3])
    else
        void* var_40_1 = &arg_8
        int64_t** var_28
        sub_141d2b5f0(arg2 + 0x88, &var_28, 1, r9_1, arg2 + 0x98)
        sub_14175b460(arg2 + 0x88)
        int64_t** rcx_7 = var_28
        rdi_1 = *rcx_7
        sub_140a74f90(rcx_7)
        void* rcx_8 = *rsi
        int64_t* rax_4 = nullptr
        
        if (*(rdi_1 + 0xc) u>= 1)
            rax_4 = rdi_1
        
        *(rcx_8 + 0x58) = rax_4
        sub_141d3f250(rcx_8, arg1[3])
else
    void* var_40 = &arg_8
    int64_t* var_38
    sub_1417c6350(arg2 + 0x88, &var_38, 1, r9_1, arg2 + 0xa8)
    sub_141791250(arg2 + 0x88, &var_38, arg2 + 0x118, arg2 + 0x168)
    sub_14175b460(arg2 + 0x88)
    int64_t* rcx_3 = var_38
    rdi_1 = *rcx_3
    sub_140a74f90(rcx_3)
    void* rcx_4 = arg1[2]
    rsi = &arg1[2]
    int64_t* rax_2 = nullptr
    
    if (*(rdi_1 + 0xc) u>= 2)
        rax_2 = rdi_1
    
    *(rcx_4 + 0x58) = rax_2
    sub_141d3f6e0(rcx_4, arg1[3])
*(*(*rdi_1 + 0xe0) + (sx.q(rdi_1[1].d) << 3)) = *arg1
sub_141d34490(arg2, rdi_1, *rsi)
int64_t* result = sub_1417ab680(*(arg2 + 0x348), rdi_1)
int64_t* rcx_16 = arg1[3]

if (rcx_16 == 0)
    return result

return (**rcx_16)(rcx_16, 1)
