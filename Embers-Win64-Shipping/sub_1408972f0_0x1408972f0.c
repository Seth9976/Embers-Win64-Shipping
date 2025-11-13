// 函数: sub_1408972f0
// 地址: 0x1408972f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg1)
uint32_t rbx = zx.d(arg2)

if (*(rdi + &data_143ce9d28) != 0)
    int32_t i = 0
    char rax_1 = *(&data_143cea540 + rdi)
    
    if (rax_1 != 0)
        uint64_t r10_1 = zx.q(rdi.d) << 7
        char* rdx = &data_143ce9d40 + r10_1
        
        do
            if (*rdx == rbx.b)
                uint64_t rcx_1 = zx.q(rax_1) + r10_1
                rax_1 -= 1
                *(&data_143cea540 + rdi) = rax_1
                *rdx = *(rcx_1 + &data_143ce9d40)
            
            i += 1
            rdx = &rdx[1]
        while (i s< zx.d(rax_1))

sub_14089ad80(data_143cea5c8)
sub_142832370(data_143cea5b8, rdi.d, rbx)
sub_1428324a8(data_143cea5b8, rdi.d, zx.q(rbx), zx.d(arg3))
return sub_14089b030(data_143cea5c8) __tailcall
