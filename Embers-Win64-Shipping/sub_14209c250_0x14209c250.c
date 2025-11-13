// 函数: sub_14209c250
// 地址: 0x14209c250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 8) u>> 0xa).b & 1) != 0)
    int64_t rax_2 = sub_140d3cb50(arg1)
    
    if (rax_2 != 0)
        sub_140cc45a0(rax_2 + 0x200, arg1)

void* i = *(arg1 + 0x28)
int64_t result = sx.q(*(arg1 + 0x30))

for (void* rdi_2 = result * 0x78 + i; i != rdi_2; i += 0x78)
    void* rcx_1 = *(i + 8)
    
    if (rcx_1 != 0)
        result = zx.q(*(rcx_1 + 8) u>> 0xa)
        
        if ((result.b & 1) != 0)
            result = sub_140d3cb50(rcx_1)
            
            if (result != 0)
                result = sub_140cc45a0(result + 0x200, *(i + 8))

return result
