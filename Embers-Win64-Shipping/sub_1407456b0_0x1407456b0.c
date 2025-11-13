// 函数: sub_1407456b0
// 地址: 0x1407456b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rdx = &arg1[7]
*arg1 = &data_142d99a00
arg1[5] = 0
arg1[6] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0xb].d = 0xffffffff
*(arg1 + 0x5c) = 0
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf].d = 0

if (data_143cdfc20 == 0)
label_14074573e:
    void*** rax_3 = sub_140a84c80(0, 0x20, 0)
    
    if (rax_3 != 0)
        *rax_3 = &data_142da24e8
        rax_3[2] = sub_140a387b0()
        *rax_3 = &data_142da2540
        sub_140750120(rax_3, &data_143cdfc18)
    else if (data_143cdfc20 != 0)
        int64_t* rcx_2 = data_143cdfc18
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2, 0)
            int64_t rcx_3 = data_143cdfc18
            
            if (rcx_3 != 0)
                data_143cdfc18 = sub_140a84c80(rcx_3, 0, 0)
            
            data_143cdfc20 = 0
    
    if (rax_3 != 0)
        (*rax_3)[7](rax_3, 0)
        int64_t rax_8 = sub_140a84c80(rax_3, 0, 0)
        
        if (rax_8 != 0)
            sub_140a74f90(rax_8)
else
    int64_t* rcx = data_143cdfc18
    
    if (rcx == 0)
        goto label_14074573e
    
    if ((*(*rcx + 0x28))(rcx) == 0)
        goto label_14074573e

return arg1
