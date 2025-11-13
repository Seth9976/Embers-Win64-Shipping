// 函数: sub_140da8da0
// 地址: 0x140da8da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e24318 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e24318)
    
    if (data_143e24318 == 0xffffffff)
        char var_14
        char var_14_1 = var_14 & 0xfe
        int128_t zmm1 = data_142d8c9b0
        int64_t rax_4 = data_143e244b0
        int64_t* rbx = data_143e244b8
        
        if (rbx != 0)
            rbx[1].d += 1
        
        data_143e242d0 = data_142d4cc30
        data_143e24308 = rax_4
        data_143e24310 = rbx
        data_143e242e0 = 0.o
        data_143e24300 = 0
        data_143e242f0 = zmm1
        
        if (rbx != 0)
            rbx[1].d += 1
            
            if (rbx != 0)
                rbx[1].d -= 1
                
                if (rbx[1].d == 1)
                    (**rbx)(rbx)
                    int32_t temp1_1 = *(rbx + 0xc)
                    *(rbx + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx + 8))(rbx, 1)
        
        atexit(sub_142cca270)
        _Init_thread_footer(&data_143e24318)

return &data_143e242d0
