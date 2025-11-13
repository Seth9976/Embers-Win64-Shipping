// 函数: sub_142b19770
// 地址: 0x142b19770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rdi = arg2
void* result
int16_t i

do
    i = *rdi
    uint32_t rax_1 = zx.d(rdi[1])
    int64_t rcx
    
    if ((i.b & 1) != 0)
        rax_1 = (rax_1 & 0x3f) << 0x10 | zx.d(rdi[2])
        rcx = 6
    else
        rcx = 4
    
    rdi += rcx
    uint32_t rbx_2 = rax_1 u>> 1
    
    if ((rax_1.b & 1) != 0)
        int32_t r8_1
        
        if (rbx_2 u<= 0xffff)
            r8_1 = zx.d(*(**(arg1 + 0x20) + (zx.q(rbx_2) u>> 6 << 1))) + (rbx_2 & 0x3f)
        else if (rbx_2 u> 0x10ffff)
            r8_1 = *(*(arg1 + 0x20) + 0x14) - 1
        else
            int64_t* rcx_3 = *(arg1 + 0x20)
            
            if (rbx_2 s< rcx_3[3].d)
                r8_1 = sub_142b6a760(rcx_3, rbx_2)
            else
                r8_1 = *(rcx_3 + 0x14) - 2
        
        int64_t rax_10 = *(arg1 + 0x30)
        uint64_t r9_2 = zx.q(*(*(*(arg1 + 0x20) + 8) + (sx.q(r8_1) << 1))) u>> 1
        sub_142b19770(arg1, 
            rax_10 + (r9_2 << 1) + (((zx.q(*(rax_10 + (r9_2 << 1))) & 0x1f) + 1) << 1), arg3)
    
    result = sub_142a9e7d0(arg3, rbx_2)
while (i s>= 0)
return result
