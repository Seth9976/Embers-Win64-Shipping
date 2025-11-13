// 函数: sub_142001520
// 地址: 0x142001520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t ThreadLocalStoragePointer = sx.q(*(arg1 + 0x40))
void** rbx = *(arg1 + 0x38)
void* rbp = &rbx[ThreadLocalStoragePointer]

if (rbx != rbp)
    TEB* gsbase
    ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int64_t r15_1 = ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
    
    do
        void* rdi_1 = *rbx
        
        if (rdi_1 != 0 && *(rdi_1 + 0x18f) != 0)
            if (data_143f38e90 s> *(0x14 + *r15_1))
                _Init_thread_header(&data_143f38e90)
                
                if (data_143f38e90 == 0xffffffff)
                    sub_140b58170(&data_143f38e88, "OnEndPlay", 1)
                    _Init_thread_footer(&data_143f38e90)
            
            ThreadLocalStoragePointer = sub_140d2a7f0(rdi_1, data_143f38e88, arg1)
            *(rdi_1 + 0x18f) = ThreadLocalStoragePointer.b
        
        rbx = &rbx[1]
    while (rbx != rbp)

bool cond:0 = *(arg1 + 0x44) == 0
*(arg1 + 0x40) = 0

if (cond:0)
    return ThreadLocalStoragePointer

return sub_140638c50(arg1 + 0x38, 0) __tailcall
