// 函数: sub_142307010
// 地址: 0x142307010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18 = 0xffffffff
*arg1 = 0
arg1[1] = 0
arg1[2].b = arg3
int64_t var_28 = 0
int32_t var_20 = 0
sub_140d3cc80(sub_1425974e0(), &var_28, 1, 0x10, 0)
int32_t r8_1 = var_20
int32_t i = var_18 + 1
int64_t rcx_1 = var_28
int32_t i_1 = i

if (i s< r8_1)
    while (*(rcx_1 + (sx.q(i) << 3)) == 0)
        int32_t i_2 = i + 1
        i_1 = i_2
        i = i_2
        
        if (i_2 s>= r8_1)
            break

while (i s>= 0)
    if (i s>= r8_1)
        break
    
    int64_t* r9_1 = *(rcx_1 + (sx.q(i) << 3))
    
    if (r9_1[0x86] == arg2 && (r9_1[0x11].b & 2) != 0)
        (*(*r9_1 + 0x2e8))(r9_1)
        int64_t rdi_1 = sx.q(arg1[1].d)
        int64_t rsi_1 = *(var_28 + (sx.q(i_1) << 3))
        int32_t rax_5 = (rdi_1 + 1).d
        arg1[1].d = rax_5
        
        if (rax_5 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
        
        *(*arg1 + (rdi_1 << 3)) = rsi_1
        i = i_1
        r8_1 = var_20
        rcx_1 = var_28
    
    int32_t i_3 = i + 1
    i_1 = i_3
    i = i_3
    
    if (i_3 s< r8_1)
        while (*(rcx_1 + (sx.q(i) << 3)) == 0)
            int32_t i_4 = i + 1
            i_1 = i_4
            i = i_4
            
            if (i_4 s>= r8_1)
                break

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1419a21e0(0)
return arg1
