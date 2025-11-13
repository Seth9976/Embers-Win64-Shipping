// 函数: sub_140946050
// 地址: 0x140946050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int32_t rax_1 = sub_140808ed0(arg1, arg3 + arg5, arg4)
void*** rsi_1 = *arg1

if (i_1 != 0)
    int64_t* rdi_1 = arg2 + 8
    void* rbx_1 = &rsi_1[4]
    int32_t i
    
    do
        *rsi_1 = &data_142e25968
        *(rbx_1 - 0x18) = *rdi_1
        void* rax_3 = rdi_1[1]
        *(rbx_1 - 0x10) = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        *rsi_1 = &data_142e259e0
        *(rbx_1 - 8) = 0
        *rbx_1 = 0
        sub_140596d10(rbx_1 + 8, &rdi_1[4])
        sub_140596d10(rbx_1 + 0x18, &rdi_1[6])
        rsi_1 = &rsi_1[0xa]
        *(rbx_1 + 0x28) = rdi_1[8].b
        rax_1 = *(rdi_1 + 0x44)
        rdi_1 = &rdi_1[0xa]
        *(rbx_1 + 0x2c) = rax_1
        rbx_1 += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
