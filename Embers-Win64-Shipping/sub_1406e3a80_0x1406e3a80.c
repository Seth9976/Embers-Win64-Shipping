// 函数: sub_1406e3a80
// 地址: 0x1406e3a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg5
int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 != 0 || result != 0 || arg4 != 0)
    result = sub_1406e4ea0(arg1, arg3 + result, arg4)
    void* rbp_1 = *arg1
    
    if (i_1 != 0)
        int64_t* rsi_1 = arg2 + 0x20
        void* rbx_1 = rbp_1 + 0x48
        int32_t i
        
        do
            sub_140596d10(rbp_1, &rsi_1[-4])
            sub_140596d10(rbx_1 - 0x38, &rsi_1[-2])
            __builtin_memset(rbx_1 - 0x28, 0, 0x28)
            *rbx_1 = 0
            *(rbx_1 + 4) = 0x80
            *(rbx_1 + 8) = 0xffffffff
            *(rbx_1 + 0xc) = 0
            *(rbx_1 + 0x18) = 0
            *(rbx_1 + 0x20) = 0
            result = sub_1406da2c0(rbx_1 - 0x28, rsi_1)
            rbp_1 += 0x70
            rbx_1 += 0x70
            rsi_1 = &rsi_1[0xe]
            i = i_1
            i_1 -= 1
        while (i != 1)
else
    *(arg1 + 0xc) = 0

return result
