// 函数: sub_141a8a870
// 地址: 0x141a8a870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r15 = *arg1
void* rbp_2 = &r15[sx.q(arg1[1].d) * 4]
int32_t* rdi = r15

if (r15 != rbp_2)
    do
        if (*(rdi + 8) == arg4 && arg2 != 0 && arg2 == sub_140d3cab0(rdi))
            int32_t rdi_2 = ((rdi - r15) s>> 4).d
            
            if (rdi_2 != 0xffffffff)
                int32_t rdx = arg1[1].d
                int32_t rcx_3 = rdx - rdi_2 - 1
                
                if (rcx_3 s>= 1)
                    rcx_3 = 1
                
                if (rcx_3 != 0)
                    memcpy((sx.q(rdi_2) << 4) + *arg1, (sx.q(rdx - rcx_3) << 4) + *arg1, rcx_3 << 4)
                    rdx = arg1[1].d
                
                arg1[1].d = rdx - 1
            
            break
        
        rdi = &rdi[4]
    while (rdi != rbp_2)

return sub_1408f4c10(arg1) __tailcall
