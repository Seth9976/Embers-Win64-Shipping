// 函数: sub_141f3d160
// 地址: 0x141f3d160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int512_t zmm1
int512_t zmm2
result, zmm1, zmm2 = sub_141f65230(arg1, arg2)
int32_t i = 0

if (arg1[0x101].d s> 0)
    int64_t rbx_1 = 0
    
    do
        result = arg1[0x100]
        void* rcx = *(rbx_1 + result)
        
        if (rcx != 0)
            result = sub_14221b2f0(rcx)
            
            if (result.b != 0)
                result = sub_142216b70(*(arg1[0x100] + rbx_1), arg2, zmm2, zmm1)
        
        i += 1
        rbx_1 += 8
    while (i s< arg1[0x101].d)

return result
