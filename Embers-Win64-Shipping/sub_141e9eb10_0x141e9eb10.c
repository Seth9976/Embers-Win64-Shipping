// 函数: sub_141e9eb10
// 地址: 0x141e9eb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

int64_t* var_18
sub_1424373a0(rax, &var_18)
int32_t i_1
int32_t i = i_1

while (i s>= 0)
    int64_t* rdx_1 = var_18
    
    if (i s>= rdx_1[1].d)
        break
    
    void* rax_2
    int64_t r8_1
    rax_2, r8_1 = sub_140d3c6e0(*rdx_1 + (sx.q(i) << 3))
    
    if (rax_2 != 0)
        int64_t* rcx_3 = *(rax_2 + 0x2b8)
        
        if (rcx_3 != 0)
            r8_1.b = 1
            (*(*rcx_3 + 0x7a8))(rcx_3, arg1, r8_1)
    
    i = i_1 + 1
    i_1 = i

return sub_141ee0600(arg1, arg2) __tailcall
