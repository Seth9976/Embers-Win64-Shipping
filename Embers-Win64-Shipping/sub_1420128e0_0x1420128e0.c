// 函数: sub_1420128e0
// 地址: 0x1420128e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
void* result

if (rcx != 0)
    (*(*rcx + 0x270))(rcx)
    int128_t zmm6
    zmm6.d = arg2.d f+ *(arg1 + 0xc)
    *(arg1 + 0xc) = zmm6.d
    
    if (not(zmm6.d f> arg4) && not(arg4 == 0f))
        int64_t* rcx_1 = *arg1
        (*(*rcx_1 + 0x268))(rcx_1, zmm6, arg3)
        void* rcx_2 = *(arg3 + 8)
        *(arg3 + 4) = *(arg3 + 4) f* arg1[2].d
        
        if (rcx_2 != 0)
            *(rcx_2 + 0x24) = arg1[2].d
        
        if (rcx_2 == 0 || *(*(arg3 + 8) + 0x1c) == 0)
            result.b = 1
            return result

result.b = 0
return result
