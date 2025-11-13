// 函数: sub_14084d9f0
// 地址: 0x14084d9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t rbp = *(arg1 + 0x20)

if (*(arg1 + 0x40) u> 0)
    do
        int64_t rdi_1 = zx.q(i) * 0x110
        int64_t rcx = *(rdi_1 + rbp + 0x100)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *(rdi_1 + rbp + 0xc8)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        i += 1
    while (i u< *(arg1 + 0x40))
    
    rbp = *(arg1 + 0x20)

int64_t result = sub_140a74f90(rbp)
int64_t* rcx_3 = *(arg1 + 0x18)

if (rcx_3 != 0)
    result = sub_140a74f90(*rcx_3)
    void* rbx = *(arg1 + 0x18)
    
    if (rbx != 0)
        sub_1405ae080(rbx + 8)
        return j_sub_140a74f90(rbx)

return result
