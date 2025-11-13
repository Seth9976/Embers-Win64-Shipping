// 函数: sub_141ecfdd0
// 地址: 0x141ecfdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 8) u>> 4)
void* rbx

if ((result.b & 1) == 0)
    rbx = *(arg1 + 0x20)
else
    rbx = nullptr

int64_t* rbx_1 = *(rbx + 0x250)

if (rbx_1 != 0)
    void* rax_1 = sub_1424890f0()
    void* rcx = rbx_1[2]
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rcx + 0x38))
        uint64_t result_1 = result
        result = *(rcx + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_1 + 0x30)
            sub_142489a40(rbx_1, result_1)
            result = (*(*rbx_1 + 0x6b0))(rbx_1)
            
            if (result.b == 0)
                jump(*(*rbx_1 + 0x850))

return result
