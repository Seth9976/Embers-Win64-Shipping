// 函数: sub_140ac5690
// 地址: 0x140ac5690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = sub_140a73d60(&arg1[2], 1) + 1
int32_t result = arg1[1].d

if (rdi s< result)
    if (*(arg1 + 0x34) s> 0)
        uint64_t rdx_1 = zx.q(arg1[6].d)
        
        if (rdx_1.d != 0xffffffff)
            do
                int64_t r9_1 = *arg1
                void* rcx_1 = sx.q(rdx_1.d) * 0x38
                
                if (rdx_1.d s< rdi)
                    rdx_1 = zx.q(*(rcx_1 + r9_1 + 4))
                else
                    rdx_1 = sx.q(*(rcx_1 + r9_1 + 4))
                    int64_t r8_1 = sx.q(*(rcx_1 + r9_1))
                    
                    if (rdx_1.d != 0xffffffff)
                        *(rdx_1 * 0x38 + r9_1) = r8_1.d
                    
                    if (r8_1.d == 0xffffffff)
                        *(arg1 + 0x34) -= 1
                        arg1[6].d = rdx_1.d
                    else
                        *(r8_1 * 0x38 + *arg1 + 4) = rdx_1.d
                        *(arg1 + 0x34) -= 1
            while (rdx_1.d != 0xffffffff)
            
            result = arg1[1].d
    
    if (result != rdi)
        arg1[1].d = rdi
        sub_1407c4070(arg1)
    
    result = sub_140a876d0(&arg1[2], rdi, arg1[5].d - rdi)

int32_t rdx_3 = arg1[1].d

if (*(arg1 + 0xc) == rdx_3)
    return result

return sub_140679b80(arg1, rdx_3)
