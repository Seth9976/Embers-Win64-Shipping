// 函数: sub_1423678f0
// 地址: 0x1423678f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* var_28 = nullptr
int32_t var_20 = 0
sub_141e4ed70(arg1, *(arg1 + 0x168), &var_28)
int64_t* rbx = var_28
uint64_t rsi
rsi.b = 0
void* rcx = &rbx[sx.q(var_20)]
uint64_t rbp_3 = (rcx - rbx + 7) u>> 3

if (rbx u> rcx)
    rbp_3 = 0

if (rbp_3 != 0)
    do
        int64_t* rcx_1 = *(*rbx + 0x70)
        
        if (rcx_1 != 0)
            rsi = zx.q(rsi.b)
            
            if ((*(*rcx_1 + 0x2d8))(rcx_1, arg2) != 0)
                rsi = 1
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != rbp_3)
    
    rbx = var_28

if (rbx != 0)
    sub_140a74f90(rbx)

return zx.q(rsi.b)
