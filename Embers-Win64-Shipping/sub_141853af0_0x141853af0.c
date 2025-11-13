// 函数: sub_141853af0
// 地址: 0x141853af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
int32_t* rbx = arg1
bool z

if (0 == *arg1)
    *arg1 = 0
    z = true
else
    result = zx.q(*arg1)
    z = false

if (not(z))
    int128_t zmm6 = 0x3f000000
    bool z_2
    
    do
        result = 0
        bool z_1
        
        if (0 == *arg2)
            *arg2 = 0
            z_1 = true
        else
            result = zx.q(*arg2)
            z_1 = false
        
        if (not(z_1))
            break
        
        zmm6 = sub_140b73230(zmm6)
        result = 0
        
        if (0 == *rbx)
            *rbx = 0
            z_2 = true
        else
            result = zx.q(*rbx)
            z_2 = false
    while (not(z_2))

return result
