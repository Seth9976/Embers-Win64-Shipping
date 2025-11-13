// 函数: sub_140da87b0
// 地址: 0x140da87b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439ae504 == 0)
    int64_t result
    result.b = 0
    return result

TEB* gsbase

if (data_143e24330 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e24330)
    
    if (data_143e24330 == 0xffffffff)
        data_143e24320 = data_143de5458
        atexit(sub_142cca260)
        _Init_thread_footer(&data_143e24330)

if (data_143e24329 == 0 || data_143e24320 != data_143de5458)
    char* rax_3 = sub_140a752e0()
    int64_t* rbx_1 = *(rax_3 + 0x30)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    bool cond:0_1 = sub_140a810c0(*(rax_3 + 0x28)) != 0
    data_143e24329 = 1
    int64_t rax_5 = data_143de5458
    data_143e24328 = cond:0_1
    data_143e24320 = rax_5
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return zx.q(data_143e24328)
