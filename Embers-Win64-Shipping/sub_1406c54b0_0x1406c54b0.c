// 函数: sub_1406c54b0
// 地址: 0x1406c54b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* rsi = arg2

if (arg4 != 0)
    int32_t* r14_1 = arg3 - arg2
    int32_t i
    
    do
        int32_t rax = *(r14_1 + rsi)
        void* rbx_1 = r14_1 + rsi
        int32_t* rdi_1 = rsi
        rsi = &rsi[0x14]
        *rdi_1 = rax
        rdi_1[1] = *(rbx_1 + 4)
        rdi_1[2] = *(rbx_1 + 8)
        rdi_1[3] = *(rbx_1 + 0xc)
        rdi_1[4] = *(rbx_1 + 0x10)
        sub_140597df0(&rdi_1[6], rbx_1 + 0x18)
        sub_140597df0(&rdi_1[0xa], rbx_1 + 0x28)
        sub_140597df0(&rdi_1[0xe], rbx_1 + 0x38)
        rdi_1[0x12] = *(rbx_1 + 0x48)
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
