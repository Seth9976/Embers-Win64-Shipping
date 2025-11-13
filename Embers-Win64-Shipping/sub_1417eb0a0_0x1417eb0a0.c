// 函数: sub_1417eb0a0
// 地址: 0x1417eb0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg1
int64_t arg_8 = 0
*(rdx + 0x4ac) = 0
*(rdx + 0x4b4) = 0xffffffff
void* result = *(*arg1 + 0x4a0)

if (result != 0)
    int64_t* rbx_1 = arg1[1]
    
    if (rbx_1 != result + 0xd0)
        int32_t r8_1 = *(rbx_1 + 0xc)
        int64_t rbp_1 = *(result + 0xd0)
        int64_t rsi_1 = sx.q(*(result + 0xd8))
        rbx_1[1].d = rsi_1.d
        
        if (rsi_1.d != 0 || r8_1 != 0)
            sub_1405c4a00(rbx_1, rsi_1.d, r8_1)
            memcpy(*rbx_1, rbp_1, (rsi_1 << 3).d)
        else
            *(rbx_1 + 0xc) = 0
    
    rdx.b = 1
    int64_t* rcx_2 = *(*arg1 + 0x4a0)
    (*(*rcx_2 + 0x3a0))(rcx_2, rdx)
    result = *arg1
    *(result + 0x4a0) = 0

return result
