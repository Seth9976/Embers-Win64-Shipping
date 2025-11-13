// 函数: sub_140f57a70
// 地址: 0x140f57a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x81].b == 0)
label_140f57ae2:
    
    if (arg3 != &arg1[0x80])
        if (arg1[0x81].b != 0)
            arg1[0x81].b = 0
        
        arg1[0x80] = *arg3
        arg1[0x81].b = 1
    
    if (arg3 != arg1 + 0x40c)
        if (*(arg1 + 0x444) != 0)
            *(arg1 + 0x444) = 0
        
        *(arg1 + 0x40c) = *arg3
        *(arg1 + 0x41c) = arg3[1]
        *(arg1 + 0x42c) = arg3[2]
        *(arg1 + 0x43c) = arg3[3].q
        *(arg1 + 0x444) = 1
    
    if (sub_140f43d20(arg1) != 0)
        sub_140e19ef0(arg1, 1)
        sub_140e1a0f0(arg1)
else
    uint32_t zmm0[0x4] = *arg3
    zmm0[0] = zmm0[0] f- arg1[0x80].d
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999975e-05f)
        goto label_140f57ae2
    
    zmm0 = *(arg3 + 4)
    zmm0[0] = zmm0[0] f- *(arg1 + 0x404)
    
    if (not(_mm_and_ps(zmm0, 0x7fffffff)[0] f<= 9.99999975e-05f))
        goto label_140f57ae2

int64_t rbp
rbp.b = 0

if (*(arg1 + 0x2c) == 0)
    if (arg1[0x77].d != 0)
        int64_t* rcx_2 = arg1[0x76]
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (arg1[0x77].d == 0)
                rcx_3 = nullptr
            else
                rcx_3 = arg1[0x76]
            
            arg1[0x75].d = (*(*rcx_3 + 0x48))(rcx_3)
    
    if (arg1[0x75].d - 3 u<= 2)
        rbp.b = 1
        int64_t var_48[0x6]
        sub_140db8760(arg5, sub_140d92e00(&var_48, arg3))

int32_t result = sub_140e1e7e0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)

if (rbp.b == 0)
    return result

sub_140db7b50(arg5)
return result
