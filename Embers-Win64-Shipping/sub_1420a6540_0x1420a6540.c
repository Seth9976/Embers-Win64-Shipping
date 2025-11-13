// 函数: sub_1420a6540
// 地址: 0x1420a6540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[0x4d].d s> 0)
    void** rdi_1 = nullptr
    
    do
        int64_t rcx_1 = arg1[0x4c]
        void* r8_1 = *(*(rdi_1 + rcx_1) + 0x30)
        
        if (r8_1 != 0)
            sub_141dd4670(r8_1, arg1)
            rcx_1 = arg1[0x4c]
        
        int64_t* rcx_2 = *(rdi_1 + rcx_1)
        int64_t rdx
        rdx.b = 1
        (*(*rcx_2 + 0x288))(rcx_2, rdx)
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< arg1[0x4d].d)

arg1[0x4d].d = 0

if (*(arg1 + 0x26c) != 0)
    sub_1405c5570(&arg1[0x4c], 0)

if (sub_140d3c6e0(data_143f5b298 + 0xe0) == arg1)
    void* rax_4 = data_143f5b298
    *(rax_4 + 0xe0) = 0xffffffff
    *(rax_4 + 0xe4) = 0

return sub_142087f30(arg1, 0) __tailcall
