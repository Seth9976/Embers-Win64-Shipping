// 函数: sub_140b69ab0
// 地址: 0x140b69ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143e18890 s> result)
    result = _Init_thread_header(&data_143e18890)
    
    if (data_143e18890 == 0xffffffff)
        sub_140b69c50(&data_143e18690, 0x80, &data_143e18790)
        result = _Init_thread_footer(&data_143e18890)

int32_t r14 = 0
int64_t rbx = -1

if (*arg1 != &data_143e18690)
    int32_t rdi_2
    
    if (data_143e18690 == 0)
        rdi_2 = 0
    else
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while ((&data_143e18690)[rdi_1] != 0)
        
        rdi_2 = rdi_1.d + 1
    
    int32_t rdx = 0
    arg1[1].d = 0
    
    if (*(arg1 + 0xc) != rdi_2)
        sub_1405947f0(arg1, rdi_2)
        rdx = arg1[1].d
    
    result = rdx + rdi_2
    arg1[1].d = result
    
    if (result s> *(arg1 + 0xc))
        result = sub_140594770(arg1)
    
    if (rdi_2 != 0)
        result = memcpy(*arg1, &data_143e18690, rdi_2 * 2)

if (*arg2 != &data_143e18790)
    int32_t rbx_1
    
    if (data_143e18790 == 0)
        rbx_1 = 0
    else
        do
            rbx += 1
        while ((&data_143e18790)[rbx] != 0)
        
        rbx_1 = rbx.d + 1
    
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != rbx_1)
        sub_1405947f0(arg2, rbx_1)
        r14 = arg2[1].d
    
    result = r14 + rbx_1
    arg2[1].d = result
    
    if (result s> *(arg2 + 0xc))
        result = sub_140594770(arg2)
    
    if (rbx_1 != 0)
        return memcpy(*arg2, &data_143e18790, rbx_1 * 2)

return result
