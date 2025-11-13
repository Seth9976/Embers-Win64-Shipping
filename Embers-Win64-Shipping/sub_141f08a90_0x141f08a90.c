// 函数: sub_141f08a90
// 地址: 0x141f08a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t result
int64_t rdx
result, rdx = sub_141ed8440(arg1)
int64_t* rcx = arg1[0x3f]

if (rcx != 0)
    result = *(rcx + 0x5c) & 0x60
    
    if (result != 0x40)
        void* rax = arg1[0x14]
        
        if (rax == 0)
            rdx.b = 0
            return sub_141dbf290(rcx, rdx) __tailcall
        
        int64_t rdx_1
        rdx_1.b = *(rax + 0x5b) u>> 6
        rdx_1.b &= 1
        return sub_141dbf290(rcx, rdx_1) __tailcall

return result
