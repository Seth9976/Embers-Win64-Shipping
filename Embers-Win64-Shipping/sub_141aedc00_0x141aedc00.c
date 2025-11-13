// 函数: sub_141aedc00
// 地址: 0x141aedc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int64_t rax_1 = sub_1405a4b40(arg1, arg3 + arg5, arg4)
int32_t* rbp_1 = *arg1

if (i_1 != 0)
    void* r15_1 = arg2 + 8
    void* rdi_1 = &rbp_1[8]
    int64_t arg_8 = 0
    int32_t i
    
    do
        *(rdi_1 - 8) = 0
        *rdi_1 = 0
        *rbp_1 = 0xffffffff
        *(rdi_1 - 0x1c) = 0
        *(rdi_1 - 0x10) = 0
        *rdi_1 = 0
        
        if (*(rdi_1 + 4) s<= 0xffffffff)
            sub_1405947f0(rdi_1 - 8, 0)
        
        int16_t* rax_2 = *(rdi_1 - 8)
        
        if (rax_2 != 0)
            *rax_2 = 0
        
        *(rdi_1 - 0x18) = 0
        *rbp_1 = *(r15_1 - 8)
        *(rdi_1 - 0x18) = *r15_1
        *(rdi_1 - 0x10) = *(r15_1 + 8)
        sub_140597df0(rdi_1 - 8, r15_1 + 0x10)
        rax_1 = *(r15_1 + 0x20)
        rbp_1 = &rbp_1[0xc]
        *(rdi_1 + 8) = rax_1
        r15_1 += 0x30
        rdi_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
