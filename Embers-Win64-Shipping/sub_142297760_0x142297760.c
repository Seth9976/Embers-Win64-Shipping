// 函数: sub_142297760
// 地址: 0x142297760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1
int64_t rdx
rax_1, rdx = (*(*arg1 + 0x150))()
int64_t* rcx = *(rax_1 + 0x130)

if (rcx != 0)
    int64_t r8_1 = *rcx
    (*(r8_1 + 0x678))(rcx, arg1, r8_1)

int64_t r8_2 = *arg1
rdx.b = 1

if ((*(r8_2 + 0x668))(arg1, rdx, r8_2) != 0)
    int64_t* var_18
    sub_1424373a0(rax_1, &var_18)
    int32_t i_1
    int32_t i = i_1
    
    while (i s>= 0)
        int64_t* rdx_3 = var_18
        
        if (i s>= rdx_3[1].d)
            break
        
        int64_t* rax_4 = sub_140d3c6e0(*rdx_3 + (sx.q(i) << 3))
        
        if (rax_4 != 0)
            int64_t var_20_1 = 0
            int64_t var_28_1 = 0
            sub_1425695a0(rax_4, arg1[0x46], 4, arg1)
        
        i = i_1 + 1
        i_1 = i

(*(*arg1 + 0x6a8))(arg1)
return sub_141dbeb50(arg1) __tailcall
