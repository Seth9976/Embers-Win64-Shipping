// 函数: sub_140ccfee0
// 地址: 0x140ccfee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x28)
int32_t rsi = 0
int128_t zmm6 = arg4
BOOL result

if (rcx s>= data_143e1ae18)
    result.b = 1
else
    while (true)
        int64_t* rdi_1 = **(data_143e1ae10 + (sx.q(rcx) << 3))
        char rax_2
        
        if (*(arg1 + 8) != 0)
            rax_2 = (*(*rdi_1 + 0x100))(rdi_1)
        
        if (*(arg1 + 8) == 0 || rax_2 != 0)
            (**rdi_1)(rdi_1, 0)
            sub_140d203e0(&data_143e1d658, rdi_1)
        else
            int32_t rax_3 = sub_140a20af0()
            uint64_t rdx = zx.q(rax_3)
            
            if (rax_3 != 0)
                *(*(&data_143cf0bf8 + (rdx u>> 0xe << 3)) + (zx.q(rdx.d) & 0x3fff) * 0x18 + 8) =
                    rdi_1
                zmm6 = sub_1405a42f0(arg1 + 0x30, rdx.d)
            else
                *8 = rdi_1
                zmm6 = sub_1405a42f0(arg1 + 0x30, rdx.d)
        
        int32_t rcx_10 = *(arg1 + 0x28)
        rsi += 1
        *(arg1 + 0xb8) += 1
        *(arg1 + 0x28) = rcx_10 + 1
        
        if (arg2 == 0 || rsi != 0x64)
            result = data_143e1ae18
        else
            result = data_143e1ae18
            
            if (rcx_10 + 1 s< result)
                rsi = 0
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                
                if (float.d(performanceCount) f* data_143d796f8 f+ 0x4170000000000000 f- zmm6.q
                        f> fconvert.d(arg3.d))
                    result.b = 0
                    break
                
                result = data_143e1ae18
        
        rcx = *(arg1 + 0x28)
        
        if (rcx s>= result)
            result.b = 1
            break

return result
