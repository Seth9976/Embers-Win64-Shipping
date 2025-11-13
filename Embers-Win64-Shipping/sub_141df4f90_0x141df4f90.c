// 函数: sub_141df4f90
// 地址: 0x141df4f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_6 = zx.q(arg5)
void* rbp = arg2
int32_t result_1 = 0

if (i_6.d != 1)
    result_1 = *(arg2 + 0x6c)

int64_t result = sx.q(result_1)
int32_t rdx = *((result << 2) + 0x143240f78)
uint64_t j_2 = zx.q(*((result << 2) + 0x143240f98))

if (result_1 == 3)
    uint64_t i_3 = zx.q(result_1 + 3)
    uint64_t i
    
    do
        result = (*(*arg3 + 0x150))(arg3, *arg4, 4)
        *arg4 += 4
        i = i_3
        i_3 -= 1
    while (i != 1)

if (i_6.d s> 0)
    uint64_t i_5 = i_6
    int64_t r13 = sx.q(rdx)
    uint64_t i_1
    
    do
        if (j_2.d s> 0)
            uint64_t j_1 = j_2
            uint64_t j
            
            do
                result = (*(*arg3 + 0x150))(arg3, *arg4, r13)
                *arg4 += r13
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    i_6 = zx.q(arg5)
    rbp = arg2

if (i_6.d s> 1)
    int32_t rdx_3 = (*arg4).d
    int64_t rdi_1 = sx.q(((rdx_3 + 3) & 0xfffffffc) - rdx_3)
    result = (*(*arg3 + 0x150))(arg3, rdx_3, rdi_1)
    *arg4 += rdi_1
    int64_t r14
    r14.b = *(rbp + 8) s> 0xff
    
    if (i_6.d s> 0)
        uint64_t i_4 = zx.q(i_6.d)
        uint64_t i_2
        
        do
            result = (*(*arg3 + 0x150))(arg3, *arg4, r14 + 1)
            *arg4 += r14 + 1
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

return result
