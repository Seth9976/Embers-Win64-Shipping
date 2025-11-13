// 函数: sub_140fb4590
// 地址: 0x140fb4590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0

if ((*(*arg1 + 0x1c8))() == 0)
    if (arg1[0x80].d != 0)
        int64_t* rcx = arg1[0x7f]
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (arg1[0x80].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x7f]
            
            arg1[0x7e].b = (*(*rcx_1 + 0x48))(rcx_1)
    
    int128_t var_38
    void var_28
    void var_18
    void arg_8
    sub_140acc920(&var_38, 
        sub_140ae16d0(sub_140ad9100(sub_140fb2d60(arg1, &var_28), &var_18), &arg_8, arg1[0x7e].b))
    zmm0 = var_38
else
    zmm0 = data_14399f5c0

*arg2 = zmm0
arg2[1].b = 0
*(arg2 + 0x18) = 0
arg2[2].q = 0
return arg2
