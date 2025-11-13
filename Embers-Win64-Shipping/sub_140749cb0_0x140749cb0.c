// 函数: sub_140749cb0
// 地址: 0x140749cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
void*** rax = j_sub_140a82f30(0x40)
void*** rsi = rax

if (rax == 0)
    rsi = nullptr
else
    int64_t rbx_1 = *(arg1 + 0x1c0)
    int32_t r8_1 = *(arg1 + 0x1cc)
    *rsi = &data_142d9efb0
    rsi[1].d = 0
    *(rsi + 0xc) = 0
    sub_141c33270(arg1 + 0x118, &rsi[2], r8_1, 0x3f800000)
    rsi[5].d = rdi.d
    rsi[6] = rbx_1
    rsi[7].b = 0

int32_t var_18
sub_140598750(arg1 + 0xc8, &var_18)
int32_t rax_1 = var_18
int32_t* var_10
*var_10 = rdi.d
*(var_10 + 8) = rsi
var_10[4] = 0xffffffff
void arg_8
sub_140753180(arg1 + 0xc8, &arg_8, *var_10, var_10, rax_1, nullptr)
void* const rcx_6

if (*(arg1 + 0xd0) == *(arg1 + 0xfc))
label_140749dc1:
    rcx_6 = nullptr
else
    void* rcx_4 = *(arg1 + 0x108)
    void* r8_3 = arg1 + 0x100
    
    if (rcx_4 != 0)
        r8_3 = rcx_4
    
    int32_t rax_3 = *(r8_3 + (((sx.q(*(arg1 + 0x110)) - 1) & rdi) << 2))
    
    if (rax_3 == 0xffffffff)
    label_140749dc1_1:
        rcx_6 = nullptr
    else
        int64_t r8_4 = *(arg1 + 0xc8)
        
        while (true)
            int64_t rdx_6 = sx.q(rax_3) * 3
            rcx_6 = r8_4 + (rdx_6 << 3)
            
            if (*(r8_4 + (rdx_6 << 3)) == rdi.d)
                break
            
            rax_3 = *(rcx_6 + 0x10)
            
            if (rax_3 == 0xffffffff)
                goto label_140749dc1_2
        
        if (rax_3 == 0xffffffff)
        label_140749dc1_2:
            rcx_6 = nullptr

return sub_140771e80(*(rcx_6 + 8)) __tailcall
