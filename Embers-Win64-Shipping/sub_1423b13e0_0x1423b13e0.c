// 函数: sub_1423b13e0
// 地址: 0x1423b13e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f5a428 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5a428)
    
    if (data_143f5a428 == 0xffffffff)
        int64_t* rax_4 = j_sub_140a82f30(0xc0)
        int64_t* rbx = rax_4
        
        if (rax_4 == 0)
            rbx = nullptr
        else
            memset(&rax_4[4], 0, 0xa0)
            int64_t* rcx_3 = &rbx[5]
            *rbx = 0
            rbx[1] = 0
            rbx[2] = 2
            rbx[3] = 0
            rbx[4] = 0
            rcx_3[2] = 0
            rcx_3[3].d = 0
            *(rcx_3 + 0x1c) = 0x80
            int64_t* rax_5 = rcx_3[2]
            
            if (rax_5 != 0)
                rcx_3 = rax_5
            
            *rcx_3 = 0
            rcx_3[1] = 0
            void* rcx_4 = &rbx[0x10]
            rbx[9].d = 0xffffffff
            *(rbx + 0x4c) = 0
            rbx[0xb] = 0
            rbx[0xc].d = 0
            rbx[0xd].d = 0
            rbx[0xe] = 0
            rbx[0xf] = 0
            *(rcx_4 + 0x10) = 0
            *(rcx_4 + 0x18) = 0
            *(rcx_4 + 0x1c) = 0x80
            void* rax_6 = *(rcx_4 + 0x10)
            
            if (rax_6 != 0)
                rcx_4 = rax_6
            
            *rcx_4 = 0
            *(rcx_4 + 8) = 0
            rbx[0x14].d = 0xffffffff
            *(rbx + 0xa4) = 0
            rbx[0x16] = 0
            rbx[0x17].d = 0
        
        data_143f5a420 = rbx
        _Init_thread_footer(&data_143f5a428)

return data_143f5a420
