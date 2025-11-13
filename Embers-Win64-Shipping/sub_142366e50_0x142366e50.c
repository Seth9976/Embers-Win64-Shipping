// 函数: sub_142366e50
// 地址: 0x142366e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x168)
int32_t rbp = 0
int64_t var_18 = 0
int32_t var_10 = 0
sub_141e4ed70(arg1, rdx, &var_18)
int32_t r8_1 = var_10
int32_t rsi = 0
int64_t rdx_1 = var_18

if (r8_1 s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx = *(*(rdi_1 + rdx_1) + 0x70)
        
        if (rcx != 0)
            r8_1 = var_10
            rbp += (*(*rcx + 0x300))(rcx, arg2)
            rdx_1 = var_18
        
        rsi += 1
        rdi_1 = &rdi_1[1]
    while (rsi s< r8_1)

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

return zx.q(rbp)
