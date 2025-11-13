// 函数: sub_140d9a4a0
// 地址: 0x140d9a4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
float temp0 = _mm_max_ss(arg3, 0)

if (arg2.d s<= 0)
    arg2 = 0

int32_t rax_2 = sub_142b93e80((((arg2 * 3).d << 0xb) + 0x24) s/ 0x48, int.d(temp0 * 65536f))
uint32_t result = *(arg1 + 8)

if ((result.b & 1) != 0)
    int32_t rdx_3 = (rax_2 + 0x20) s>> 6
    return sub_142b96430(arg1, rdx_3, rdx_3) __tailcall

if ((result.b & 2) != 0)
    int32_t r9_2 = *(arg1 + 0x28)
    int32_t rdx_5 = 0
    int32_t rdi_1 = -1
    
    if (r9_2 s> 0)
        int32_t* r8_6 = *(arg1 + 0x30) + 0xc
        
        do
            int32_t rcx_5 = *r8_6
            
            if (rcx_5 == rax_2)
                rdi_1 = rdx_5
                break
            
            if (rdi_1 == 0xffffffff)
                rdi_1 = rdx_5
                rbx = rcx_5
            else if (rbx s< rax_2)
                int32_t rax_4 = rdx_5
                
                if (rcx_5 s<= rbx)
                    rax_4 = rdi_1
                
                if (rcx_5 s<= rbx)
                    rcx_5 = rbx
                
                rdi_1 = rax_4
                rbx = rcx_5
            else if (rbx s> rax_2 && rcx_5 s< rbx && rcx_5 s> rax_2)
                rdi_1 = rdx_5
                rbx = rcx_5
            
            rdx_5 += 1
            r8_6 = &r8_6[4]
        while (rdx_5 s< r9_2)
    
    sub_142b96320(arg1, rdi_1)
    result = sub_142b91790(rax_2 << 0xa, *(*(arg1 + 0x30) + sx.q(rdi_1) * 0x10 + 0xc) << 0xa)
    *(*(arg1 + 0x80) + 0x1c) = result
    *(*(arg1 + 0x80) + 0x20) = result

return result
