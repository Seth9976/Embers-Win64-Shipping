// 函数: sub_14214ea80
// 地址: 0x14214ea80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
wchar16** var_28

if ((*(arg1 + 0x34) | arg1[6].d | *(arg1 + 0x2c) | arg1[5].d) == 0)
    *(arg1 + 0x28) = *sub_140b214c0(&var_28)

int64_t var_20 = 1
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg1[8].d + 3)
var_28 = nullptr
int32_t rdi_2 = (((temp0 & 3) + temp1) s>> 2) + arg1[0xa].d
sub_1405c4f50(&var_28)
wchar16** rcx_2 = var_28

if (rcx_2 != 0)
    rcx_2[2].d = 0
    *rcx_2 = u"Vectors"
    rcx_2[1] = &data_142d40450
    *(rcx_2 + 0x14) = 4
    rcx_2[3].d = 1
    *(rcx_2 + 0x1c) = 1
    rcx_2[4].d = 4
    *(rcx_2 + 0x24) = rdi_2
    rcx_2[5] = 0

void*** rax_8 = j_sub_140a82f30(0x98)
void*** rcx_4

if (rax_8 == 0)
    rcx_4 = nullptr
else
    wchar16*** var_30_1 = &var_28
    int32_t var_38_1 = rdi_2 << 4
    rcx_4 = sub_1419c2220(rax_8, 2, MaterialCollection", MaterialCollection", 0x432db858, nullptr)

void arg_8

if (&arg1[0xe] != &arg_8)
    void*** r8 = arg1[0xe]
    arg1[0xe] = rcx_4
    
    if (r8 != 0)
        (**r8)(r8, 1, r8)
else if (rcx_4 != 0)
    (**rcx_4)(rcx_4, 1, &arg_8)

wchar16** rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

var_28 = nullptr
int32_t var_20_1 = 0
int32_t var_18 = 0xffffffff
sub_140d3cc80(sub_1425be5e0(), &var_28, 1, 0x10, 0)
int32_t rcx_7 = var_20_1
int32_t i = var_18 + 1
wchar16** r9 = var_28
int32_t i_1 = i

if (i s< rcx_7)
    while (r9[sx.q(i)] == 0)
        int32_t i_2 = i + 1
        i_1 = i_2
        i = i_2
        
        if (i_2 s>= rcx_7)
            break

while (i s>= 0)
    if (i s>= rcx_7)
        break
    
    sub_14242c2d0(r9[sx.q(i)], arg1, 1)
    rcx_7 = var_20_1
    i = i_1 + 1
    r9 = var_28
    i_1 = i
    
    if (i s< rcx_7)
        while (r9[sx.q(i)] == 0)
            int32_t i_3 = i + 1
            i_1 = i_3
            i = i_3
            
            if (i_3 s>= rcx_7)
                break

if (r9 != 0)
    sub_140a74f90(r9)

i.b = 1
return sub_1421577a0(arg1, i.b) __tailcall
