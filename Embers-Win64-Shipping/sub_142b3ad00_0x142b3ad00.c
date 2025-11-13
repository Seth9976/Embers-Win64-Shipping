// 函数: sub_142b3ad00
// 地址: 0x142b3ad00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_2 = arg2[2] - *arg2 + 1
int32_t* rbx = arg1

if (*(arg1 + 9) != 0 || *arg1 != 1 || (arg1[2].b & 0x70) != 0)
    *arg4 |= 0x1000
    int32_t rcx_1 = rsi_2 - rbx[1]
    int32_t rax = *arg4
    
    if (rcx_1 s> 0)
        int32_t r9 = *rbx
        int64_t zmm1 = *(arg2 + 0x10)
        int32_t var_10_1 = arg2[6]
        int128_t var_28 = *arg2
        var_28:8.d -= rcx_1
        int64_t var_18_1 = zmm1
        var_28.d = r9 - rcx_1
        sub_142b3a960(rbx, &var_28, rbx + 9, r9, arg3, arg4)
        sub_142b38f60(rbx, &var_28, *arg3, arg4)
        rax = *arg4
        
        if ((rax.b & 0x20) != 0)
            *arg4 = rax | 0x2000
        
        if (rbx[1] s> rsi_2)
            rax = sub_142b3b000(rbx + 9, *rbx, 1)
            rbx[1] -= 1
            *rbx = rax
        
        if (*(rbx + 9) == 0 && *rbx == 1 && (rbx[2].b & 0x70) == 0)
            *arg4 |= 0x400
    else if ((rax.b & 0x20) != 0)
        *arg4 = rax | 0x2000
else if (arg1[1] s< rsi_2)
    arg1[1] = rsi_2
    *arg4 |= 0x400
