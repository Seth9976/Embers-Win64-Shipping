// 函数: sub_140e31d40
// 地址: 0x140e31d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xb].d = 0

if (*(arg1 + 0x5c) != 0)
    sub_1405947f0(&arg1[0xa], 0)

(*(*arg1 + 0x78))(arg1, zx.q(arg2), zx.q(arg3))
int32_t temp0 = arg1[0xb].d
bool cond:0 = temp0 s<= 1

if (temp0 s<= 1)
    if (arg4 != &arg1[1])
        int64_t rcx_2 = *arg4
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        *arg4 = arg1[1]
        __builtin_memset(&arg1[1], 0, 0x18)
        arg4[1] = arg1[2]
        arg4[2] = arg1[3]
    
    cond:0 = arg1[0xb].d s<= 1

int64_t result
result.b = cond:0
return result
