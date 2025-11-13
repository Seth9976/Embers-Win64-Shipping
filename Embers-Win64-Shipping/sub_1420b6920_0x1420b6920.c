// 函数: sub_1420b6920
// 地址: 0x1420b6920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int64_t rbp = 0
int32_t r12 = arg2[1].d
int64_t var_28 = 0
int32_t var_1c = 0

if (r12 s> 0)
    sub_1405daba0(&var_28)
    rbp = var_28

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= arg2[1].d)
        break
    
    int64_t i_2 = sx.q(i)
    *(i_2 + rbp) = sub_141ffde70(zx.d(*(i_2 + *arg2)))

uint64_t rcx_2 = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*arg1 = 0
arg1[1].b = 0

for (; i_1 s>= 0; i_1 += 1)
    if (i_1 s>= r12)
        break
    
    uint32_t rbx_1 = zx.d(*(sx.q(i_1) + rbp))
    
    if (data_143f3a808 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_2 << 3))))
        _Init_thread_header(&data_143f3a808)
        
        if (data_143f3a808 == 0xffffffff)
            data_143f3a800 = 0xffffffff
            data_143f3a804 = 1
            _Init_thread_footer(&data_143f3a808)
    
    if (test_bit(data_143f3a800, rbx_1))
        *arg1 |= 1 << (rbx_1 u% 0x20)

if (rbp != 0)
    sub_140a74f90(rbp)

return arg1
