// 函数: sub_1423b1530
// 地址: 0x1423b1530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb0) != 0)
    if (not(arg2[0] == 3.40282347e+38f))
        int64_t rdx_3 = sx.q(*(arg1 + 0x64))
        int64_t r8_1 = sx.q(*(arg1 + 0x68))
        int64_t rax_4 = rdx_3
        arg2[0] = arg2[0] f/ arg3
        
        if (rdx_3 s<= r8_1)
            int32_t* rcx_4 = arg1 + 0x38 + (rdx_3 << 2)
            
            do
                if (arg2[0] f<= *rcx_4)
                    return zx.q(rdx_3.d)
                
                rdx_3 = zx.q(rdx_3.d + 1)
                rax_4 += 1
                rcx_4 = &rcx_4[1]
            while (rax_4 s<= r8_1)
    
    return *(arg1 + 0x68)

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t rdx_1 = zx.q(data_14401b1a0)
float temp0_1[0x4] = __maxss_xmmss_memss(arg2[0], 0x3f800000)

if (data_143cda914 s> *(0x14 + *(ThreadLocalStoragePointer + (rdx_1 << 3))))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

arg2 = 0xc0200000
float zmm0_1 = logf(temp0_1[0]) f* data_143cda910
int32_t rax_2 = *(arg1 + 0x64)
arg2[0] = -2.5f - (zmm0_1 + zmm0_1)
int32_t rcx_2 = neg.d(int.d(arg2[0]) s>> 1)

if (rcx_2 s< rax_2)
    return rax_2

int32_t rax_3 = *(arg1 + 0x68)

if (rcx_2 s< rax_3)
    return rcx_2

return rax_3
