// 函数: sub_141bed040
// 地址: 0x141bed040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
int64_t var_40 = arg1[0x25]
int64_t* rax_1 = arg1[0x26]

if (rax_1 != 0)
    rax_1[1].d += 1

int32_t rax_2 = arg1[0x27].d
int64_t* rcx = arg1[0xcb]
int64_t var_20 = 0
int32_t var_18 = 0
int32_t var_30 = rax_2
char var_28 = 1
sub_140f8d3d0(rcx, &var_40)
sub_140745b20(&var_20)

if (rax_1 != 0)
    rax_1[1].d -= 1
    
    if (rax_1[1].d == 1)
        (**rax_1)(rax_1)
        int32_t rsi_1 = *(rax_1 + 0xc)
        *(rax_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rax_1 + 8))(rax_1, zx.q(rsi_1))

int64_t* rcx_4 = arg1[0xcb]
int32_t var_58 = arg1[0x79].d
char var_54 = 1
int64_t var_50 = 0
int32_t var_48 = 0
sub_140f8c650(rcx_4, &var_58)
sub_140745b20(&var_50)
return sub_141b78b70(arg1, arg1[0xcb]) __tailcall
