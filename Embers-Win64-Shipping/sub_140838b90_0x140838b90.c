// 函数: sub_140838b90
// 地址: 0x140838b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int64_t r11 = sx.q(arg1[1].d)
int64_t* rax = rdi
void* r10 = &rdi[r11]

if (rdi != r10)
    do
        if (*rax == *arg2)
            int32_t rax_3 = ((rax - rdi) s>> 3).d
            
            if (rax_3 == 0xffffffff)
                break
            
            int32_t rcx_2 = r11.d - rax_3 - 1
            
            if (rcx_2 s>= 1)
                rcx_2 = 1
            
            if (rcx_2 != 0)
                memcpy(&rdi[sx.q(rax_3)], &rdi[sx.q(r11.d - rcx_2)], rcx_2 << 3)
                r11 = zx.q(arg1[1].d)
            
            arg1[1].d = (r11 - 1).d
            
            if (arg3 != 0)
                sub_1405c53d0(arg1)
            
            return 1
        
        rax = &rax[1]
    while (rax != r10)

return 0
