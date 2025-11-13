// 函数: sub_141b05550
// 地址: 0x141b05550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(*arg3 + 0x38))(arg3)
void** rbx = *arg5
void* rbp_1 = sx.q(arg5[1].d) * 0x38 + rbx

if (rbx != rbp_1)
    int64_t r15
    r15.b = result == 1
    int128_t zmm6 = arg6
    
    do
        uint32_t rcx_1 = zx.d(rbx[4].b)
        arg3[0x5a] = *(rbx + 0x14)
        arg3[0x5b].d = *(rbx + 0x1c)
        
        if (rcx_1.b == 0)
            *(arg3 + 0x2dc) = *(arg3 + 0x2dd)
        else if (rcx_1 == 1)
            *(arg3 + 0x2dc) = 2
        
        if (arg7 == 0)
            if (arg8 == 0 || *(rbx + 0x34) != 0)
                rcx_1 = 0
            else
                rcx_1.b = 1
            
            result, zmm6 = sub_141b322a0(arg1, arg2, arg3, arg4, *(rbx + 0x24), (*(rbx + 0x2c)).d, 
                *rbx, rbx[1].d.d, *(rbx + 0xc), rbx[2].d.d, r15.b, rcx_1.b, *(rbx + 0x35))
        else
            if (arg8 == 0 || *(rbx + 0x34) != 0)
                rcx_1 = 0
            else
                rcx_1.b = 1
            
            char var_48_1 = *(rbx + 0x35)
            char var_60
            var_60.d = zmm6.d
            result, zmm6 = sub_141b2c7a0(arg1, arg2, arg3, arg4, *(rbx + 0x24), (*(rbx + 0x2c)).d, 
                *rbx, rbx[1].d.d, *(rbx + 0xc), rbx[2].d.d, rcx_1.b, var_60, r15.b, arg9)
        
        rbx = &rbx[7]
    while (rbx != rbp_1)

return result
