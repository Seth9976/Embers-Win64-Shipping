// 函数: sub_1418c3fc0
// 地址: 0x1418c3fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x240)

if (*(rdi + 0x78) != 0)
    sub_1418c86c0(rdi, 0, 0)

void* rdi_1 = *(rdi + 0x70)

if (*(rdi_1 + 0x2c) == 2)
    sub_1418e06b0(arg1 + 0x248, rdi_1)
    
    if (data_143efb2f8 != 0)
        sub_1418c8030(*(arg1 + 0x240), nullptr)
        sub_1418c2ee0(*(arg1 + 0x240))
        void* rdi_2 = *(arg1 + 0x240)
        
        if (*(rdi_2 + 0x78) != 0)
            sub_1418c86c0(rdi_2, 0, 0)
        
        rdi_1 = *(rdi_2 + 0x70)

if (data_1439c7a08 s> 1 && *(rdi_1 + 0x30) == 0)
    *(rdi_1 + 0x30) = sub_1418d9250(*(*(arg1 + 0x140) + 0x468))

void*** rbp = nullptr
void* rdi_3 = arg2 - 0x20
int64_t* rsi_1 = *(arg1 + 0x458)

if (arg2 == 0)
    rdi_3 = nullptr

if (rdi_3 != rsi_1[3])
    rsi_1[3] = rdi_3
    int32_t arg_8
    sub_140865c40(&rsi_1[5], &arg_8, rdi_3)
    int64_t rax_3 = sx.q(arg_8)
    void* const r8_2
    
    if (rax_3.d == 0xffffffff)
        r8_2 = nullptr
    else
        r8_2 = rsi_1[5] + rax_3 * 0x18
    
    int64_t* rcx_7 = r8_2 + 8
    
    if (r8_2 == 0)
        rcx_7 = nullptr
    
    void* rcx_8
    
    if (rcx_7 == 0)
        void*** rax_5 = j_sub_140a82f30(0x118)
        
        if (rax_5 != 0)
            rbp = sub_1418cf270(rax_5, *rsi_1, rdi_3)
        
        rsi_1[4] = rbp
        void**** var_20_1 = &rsi_1[4]
        void* var_28 = &rsi_1[3]
        sub_1408d5f10(&rsi_1[5], &arg_8, &var_28, nullptr)
        rcx_8 = rsi_1[4]
    else
        rcx_8 = *rcx_7
        rsi_1[4] = rcx_8
    
    *(rcx_8 + 0x108) = *(rcx_8 + 0x100)

return sub_1418b7940(arg1, *(rdi_3 + 0x38)) __tailcall
