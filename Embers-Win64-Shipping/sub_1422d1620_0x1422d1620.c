// 函数: sub_1422d1620
// 地址: 0x1422d1620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))

if (data_143f543b8 s> result.d)
    result, arg4 = _Init_thread_header(&data_143f543b8)
    
    if (data_143f543b8 == 0xffffffff)
        void*** rax_3 = j_sub_140a82f30(0xc0)
        void*** rax_2
        
        if (rax_3 == 0)
            rax_2 = nullptr
        else
            rax_2 = sub_140bd5be0(rax_3, 0)
        
        data_143f543a8 = rax_2
        data_143f543b0 = 0
        atexit(sub_142d0b790)
        result, arg4 = _Init_thread_footer(&data_143f543b8)

int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    int64_t rdi_1 = 0
    
    do
        int64_t* r9_1 = *(arg1 + 0x28)
        void* rdx = *(r9_1 + rdi_1)
        void* const r8
        
        if (rdx != 0)
            result = *(rdx + 8)
            r8 = rdx
        
        if (rdx == 0 || ((zx.q(*(result + 0x10)) u>> 0x14).b & 1) == 0)
            r8 = nullptr
        
        if (rdx != 0)
            result = *(rdx + 8)
        
        if ((rdx == 0 || ((zx.q(*(result + 0x10)) u>> 0x10).b & 1) == 0) && r8 == 0)
            char arg_8 = 0
            result, arg4 = sub_1422d1b10(arg1, arg3, r8, zx.d(*(r9_1 + rdi_1 + 0x1c)), arg4, arg5, 
                zx.d(*(r9_1 + rdi_1 + 0x1e)), arg2, &arg_8, 0, 0, &data_143f54398, 0)
        
        i += 1
        rdi_1 += 0x30
    while (i s< *(arg1 + 0x30))

return result
