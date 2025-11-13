// 函数: sub_140f2ee70
// 地址: 0x140f2ee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int32_t arg_20

if (sub_140f43d20(arg1) == 0)
    if (*(arg1 + 0x458) == 0)
        sub_140de9310(arg1, arg2)
    else
        zmm6 = *(arg1 + 0x454)
        int32_t* rax_8 = sub_140de9310(arg1, &arg_20)
        float zmm0_1 = zmm6.d f* rax_8[1]
        zmm6.d = zmm6.d f* *rax_8
        *(arg2 + 4) = zmm0_1
        *arg2 = zmm6.d
else if (*(arg1 + 0x450) == 0)
    sub_140de9310(arg1, arg2)
else
    int128_t zmm7 = *(arg1 + 0x448)
    zmm6 = *(arg1 + 0x44c)
    bool cond:0_1 = *(arg1 + 0x3b8) == 0
    arg_20 = zmm7.d
    int32_t arg_24 = zmm6.d
    
    if (not(cond:0_1))
        int64_t* rcx = *(arg1 + 0x3b0)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x3b8) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x3b0)
            
            *(arg1 + 0x3a8) = (*(*rcx_1 + 0x48))(rcx_1)
    
    if (*(arg1 + 0x3a8) - 3 u> 1 || *(arg1 + 0x458) == 0 || 0f f== *(arg1 + 0x454))
        *arg2 = arg_20.q
    else
        int32_t rdx = *sub_140ebd5a0(arg1 + 0x3a8)
        
        if (rdx == 3)
            zmm6.d = zmm6.d f* *(arg1 + 0x454)
            arg_24 = zmm6.d
            *arg2 = arg_20.q
        else if (rdx != 4)
            *arg2 = arg_20.q
        else
            zmm7.d = zmm7.d f* *(arg1 + 0x454)
            arg_20 = zmm7.d
            *arg2 = arg_20.q
return arg2
