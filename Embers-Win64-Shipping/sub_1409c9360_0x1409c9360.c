// 函数: sub_1409c9360
// 地址: 0x1409c9360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28[0x4]
int32_t* result = sub_1409cab50(arg1, &var_28, arg2)
int64_t* rbx = *(result + 8)

if (rbx != 0)
    *rbx = 0
    int64_t rsi_1 = sx.q(arg3[1].d)
    int64_t rbp_1 = *arg3
    rbx[1].d = rsi_1.d
    
    if (rsi_1.d != 0)
        sub_1405c4a90(rbx, rsi_1.d, 0)
        memcpy(*rbx, rbp_1, (rsi_1 << 2).d)
    else
        *(rbx + 0xc) = 0
    
    rbx[2] = 0
    int64_t rbp_2 = sx.q(arg3[3].d)
    int64_t r14_1 = arg3[2]
    rbx[3].d = rbp_2.d
    
    if (rbp_2.d != 0)
        sub_1405c4a90(&rbx[2], rbp_2.d, 0)
        memcpy(rbx[2], r14_1, (rbp_2 << 2).d)
    else
        *(rbx + 0x1c) = 0
    
    result = zx.q(arg3[4].d)
    rbx[4].d = result.d

return result
