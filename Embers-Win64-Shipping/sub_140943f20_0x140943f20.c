// 函数: sub_140943f20
// 地址: 0x140943f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
int16_t* rbx = arg2

if (rax == 6 || rax == 8 || rax == 0xa)
    j_sub_140a74f90(*(arg1 + 8))

int16_t* result = nullptr
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*arg1 = 6

if (rbx != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (rbx[rdi_1] != 0)
    
    int64_t rcx_1 = sx.q((rdi_1 + 1).d)
    int64_t rax_2 = 2 * rcx_1
    
    if (mulu.dp.q(2, rcx_1) u>> 0x40 != zx.o(0))
        rax_2 = -1
    
    result = j_sub_140a82f30(rax_2)
    *(arg1 + 8) = result
    
    if (rdi_1.d s> 0)
        int16_t i
        
        do
            i = *rbx
            rbx = &rbx[1]
            *result = i
            result = &result[1]
        while (i != 0)
        return result
    
    *result = 0

return result
