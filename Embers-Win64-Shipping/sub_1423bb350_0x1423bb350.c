// 函数: sub_1423bb350
// 地址: 0x1423bb350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14333d520
sub_1423c0530()
EnterCriticalSection(&data_143f5a7c8)
sub_1409740e0(&data_143f5a7f0, arg1)
LeaveCriticalSection(&data_143f5a7c8)
EnterCriticalSection(&data_143f5a790)
int64_t* r9 = data_143f5a7b8
int64_t rdx_1 = sx.q(data_143f5a7c0.d)
int64_t* rax = r9
void* rcx_2 = &r9[rdx_1 * 2]

if (r9 != rcx_2)
    do
        if (*rax == arg1)
            int32_t rax_2 = ((rax - r9) s>> 4).d
            
            if (rax_2 != 0xffffffff)
                if (data_143f5a840 == 0)
                    int32_t rcx_6 = rdx_1.d - rax_2
                    
                    if (rcx_6 != 1)
                        memmove(&r9[sx.q(rax_2) * 2], &r9[sx.q(rax_2 + 1) * 2], (rcx_6 - 1) << 4)
                        rdx_1 = zx.q(data_143f5a7c0.d)
                    
                    data_143f5a7c0.d = (rdx_1 - 1).d
                    sub_1405a5010(&data_143f5a7b8)
                else
                    r9[sx.q(rax_2) * 2] = 0
            
            break
        
        rax = &rax[2]
    while (rax != rcx_2)

return LeaveCriticalSection(&data_143f5a790) __tailcall
