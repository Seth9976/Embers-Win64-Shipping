// 函数: sub_140a7b2d0
// 地址: 0x140a7b2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db99f0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db99f0)
    
    if (data_143db99f0 == 0xffffffff)
        void*** rax_6 = j_sub_140a82f30(0x20)
        void*** rbx_1 = rax_6
        
        if (rax_6 == 0)
            rbx_1 = rax_6
        else
            rax_6[1].d = 1
            *(rax_6 + 0xc) = 1
            *rbx_1 = &data_142df7bd8
            rbx_1[2] = 0
            rbx_1[3] = 0
            sub_1405947f0(&rbx_1[2], 0x1d)
            int32_t rax_7 = rbx_1[3].d + 0x1d
            rbx_1[3].d = rax_7
            
            if (rax_7 s> *(rbx_1 + 0x1c))
                sub_140594770(&rbx_1[2])
            
            UnDecorator::getReferenceType(rbx_1[2], u"<MISSING STRING TABLE ENTRY>", 0x3a)
        
        data_143db99e8 = rbx_1
        data_143db99e0 = &rbx_1[2]
        atexit(sub_142cbd570)
        _Init_thread_footer(&data_143db99f0)

*arg1 = data_143db99e0
arg1[1] = data_143db99e8
void* rax_4 = data_143db99e8

if (rax_4 != 0)
    *(rax_4 + 8) += 1

return arg1
