// 函数: sub_14096f700
// 地址: 0x14096f700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xd8)
void*** rsi

if (rax == 0)
    rsi = nullptr
else
    rsi = sub_1409494f0(rax, arg2, _mm_cvtepi32_ps(zx.o(sub_1424378d0())), 1)

int64_t rdi_1 = sx.q(*(arg1 + 0x2e0))
int32_t rax_3 = (rdi_1 + 1).d
*(arg1 + 0x2e0) = rax_3

if (rax_3 s> *(arg1 + 0x2e4))
    sub_1405a4d70(arg1 + 0x2d8)

int64_t rbx_1 = *(arg1 + 0x2d8)
*(rbx_1 + (rdi_1 << 3)) = rsi
void var_18
sub_141c334d0(*(arg1 + 0xa8) + 0x18, &var_18, 0x2000, 0x3f800000)
sub_14096f5f0(*(rbx_1 + (rdi_1 << 3)), &var_18)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rdi_2 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*var_10 + 8))(var_10, zx.q(rdi_2))

uint64_t result
result.b = 1
return result
