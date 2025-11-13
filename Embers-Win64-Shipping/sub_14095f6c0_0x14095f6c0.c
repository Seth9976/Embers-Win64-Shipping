// 函数: sub_14095f6c0
// 地址: 0x14095f6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d3c6e0(arg1 + 8) == 0)
    sub_140596d80(arg3)
    int64_t rax_7
    rax_7.b = 0
    return rax_7

int32_t i_2 = arg3[1].d
int64_t rsi = *arg3
int64_t* rdi = nullptr
int64_t* var_38 = nullptr
int32_t i_3 = i_2

if (i_2 != 0)
    sub_1405a4be0(&var_38, i_2, 0)
    rdi = var_38
    int64_t* rdx_1 = rdi
    void* rsi_1 = rsi - rdi
    int32_t i
    
    do
        *rdx_1 = *(rsi_1 + rdx_1)
        void* rax_2 = *(rsi_1 + rdx_1 + 8)
        rdx_1[1] = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        rdx_1 = &rdx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    i_2 = i_3
else
    int32_t var_2c_1 = 0

int64_t rax_3 = sub_140d3c6e0(arg1 + 8)
int64_t rbp_1 = *(arg1 + 0x10)
uint64_t var_28 = 0
int32_t i_4 = i_2

if (i_2 != 0)
    sub_1405a4be0(&var_28, i_2, 0)
    uint64_t rcx_4 = var_28
    int32_t i_1
    
    do
        *rcx_4 = *rdi
        void* rax_5 = rdi[1]
        *(rcx_4 + 8) = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        rcx_4 += 0x10
        rdi = &rdi[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
else
    int32_t i_5 = i_2

rbp_1(rax_3, zx.q(arg2), &var_28)
sub_140596d80(&var_38)
sub_140596d80(arg3)
int64_t rax_6
rax_6.b = 1
return rax_6
