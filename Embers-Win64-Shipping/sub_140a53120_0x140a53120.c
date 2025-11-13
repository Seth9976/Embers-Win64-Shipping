// 函数: sub_140a53120
// 地址: 0x140a53120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
double zmm0
result, zmm0 = sub_140a3f800(arg1, arg3)

if (result.b != 0)
    _wtof(arg2)
    arg1[7].d = fconvert.s(zmm0)
    sub_140a3aaf0(arg1 + 0x3c, &arg1[7], (arg1[3].d).b, arg3)
    result = (zx.d(arg1[3].w) | arg3) & 0xff00ffff
    arg1[3].d = result
    
    if (arg1[5].d != 0)
        int64_t* rcx_2 = arg1[4]
        
        if (rcx_2 != 0)
            result = (*(*rcx_2 + 0x28))(rcx_2)
            
            if (result.b != 0)
                int64_t* rcx_3
                
                if (arg1[5].d == 0)
                    rcx_3 = nullptr
                else
                    rcx_3 = arg1[4]
                
                return (*(*rcx_3 + 0x50))(rcx_3, arg1)

return result
