// 函数: sub_140ac5c30
// 地址: 0x140ac5c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143dbaf28 s> result)
    result = _Init_thread_header(&data_143dbaf28)
    
    if (data_143dbaf28 == 0xffffffff)
        data_143dbaf20 = 0
        atexit(sub_142cbddc0)
        result = _Init_thread_footer(&data_143dbaf28)

int64_t* rbx = data_143dbaf20

if (rbx != 0)
    DeleteCriticalSection(&rbx[0xa])
    rbx[9].d = 0
    int64_t rcx_2 = rbx[8]
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    result = sub_140aa9240(rbx, 0)
    int64_t rcx_4 = rbx[4]
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = *rbx
    
    if (rcx_5 != 0)
        result = sub_140a74f90(rcx_5)
    
    data_143dbaf20 = 0

return result
