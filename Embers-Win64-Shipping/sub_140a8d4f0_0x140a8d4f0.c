// 函数: sub_140a8d4f0
// 地址: 0x140a8d4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = sub_140a73d60(&arg1[2], 1) + 1
int32_t result = arg1[1].d

if (rdi s< result)
    if (*(arg1 + 0x34) s> 0)
        uint64_t rdx_1 = zx.q(arg1[6].d)
        
        if (rdx_1.d != 0xffffffff)
            do
                int64_t r9_1 = *arg1
                int32_t* rax_2 = r9_1 + sx.q(rdx_1.d) * 0x28
                
                if (rdx_1.d s< rdi)
                    rdx_1 = zx.q(rax_2[1])
                else
                    rdx_1 = sx.q(rax_2[1])
                    int64_t r8_1 = sx.q(*rax_2)
                    
                    if (rdx_1.d != 0xffffffff)
                        *(r9_1 + rdx_1 * 0x28) = r8_1.d
                    
                    if (r8_1.d == 0xffffffff)
                        *(arg1 + 0x34) -= 1
                        arg1[6].d = rdx_1.d
                    else
                        *(*arg1 + r8_1 * 0x28 + 4) = rdx_1.d
                        *(arg1 + 0x34) -= 1
            while (rdx_1.d != 0xffffffff)
            
            result = arg1[1].d
    
    if (result != rdi)
        arg1[1].d = rdi
        sub_140a89510(arg1)
    
    result = sub_140a876d0(&arg1[2], rdi, arg1[5].d - rdi)

int32_t rdx_3 = arg1[1].d

if (*(arg1 + 0xc) == rdx_3)
    return result

return sub_1405c5660(arg1, rdx_3)
