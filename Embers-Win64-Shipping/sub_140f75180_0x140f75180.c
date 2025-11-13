// 函数: sub_140f75180
// 地址: 0x140f75180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1[0x7c]
int128_t zmm0

if (rdx == 0)
    zmm0 = data_14399f5c0
else
    int32_t rcx = arg1[0x7e].d
    
    if (rcx == 0)
        zmm0 = data_14399f5c0
    else if (rcx == 1)
        if ((*(*rdx + 0x1c8))(rdx) != 0)
            zmm0 = data_14399f5c0
        else if (sub_140f4a730(arg1[0x7c]) != 0)
            zmm0 = data_14399f5c0
        else
            int32_t var_14_1 = data_14399f5c0:4.d
            int32_t var_10_1 = data_14399f5c0:8.d.d
            int32_t var_c_1 = 0x3f000000
            zmm0 = data_14399f5c0.d.d.o
    else if (rcx != 2)
        zmm0 = data_143dbb1e0
    else if ((*(*arg1 + 0x1c8))(arg1) != 0)
        zmm0 = data_14399f5c0
    else
        int64_t* rcx_3 = arg1[0x7c]
        
        if ((*(*rcx_3 + 0x1c8))(rcx_3) != 0)
            zmm0 = data_14399f5c0
        else if (sub_140f4a730(arg1[0x7c]) != 0)
            zmm0 = data_14399f5c0
        else
            zmm0 = data_143dbb1e0

*arg2 = zmm0
arg2[1].b = 0
*(arg2 + 0x18) = 0
arg2[2].q = 0
return arg2
