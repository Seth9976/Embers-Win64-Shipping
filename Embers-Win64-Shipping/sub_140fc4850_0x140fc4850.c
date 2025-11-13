// 函数: sub_140fc4850
// 地址: 0x140fc4850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t buffer1
(*(*arg1 + 0x58))(arg1, &buffer1)
int64_t buffer2_1
(*(*arg2 + 0x58))(arg2, &buffer2_1)
int32_t count_1
int64_t count = sx.q(count_1)
int32_t var_20
int64_t buffer2
int64_t* rdi

if (count.d != var_20)
    buffer2 = buffer2_1
    rdi.b = 0
else
    buffer2 = buffer2_1
    
    if (memcmp(buffer1, buffer2, count) != 0)
        rdi.b = 0
    else
        int32_t rax_4 = (*(*arg2 + 0x30))(arg2)
        int64_t rdx_3 = *arg1
        
        if ((*(rdx_3 + 0x30))(arg1, rdx_3) != rax_4)
            buffer2 = buffer2_1
            rdi.b = 0
        else
            buffer2 = buffer2_1
            rdi.b = 1

if (buffer2 != 0)
    sub_140a74f90(buffer2)

int64_t buffer1_1 = buffer1

if (buffer1_1 != 0)
    sub_140a74f90(buffer1_1)

return zx.q(rdi.b)
