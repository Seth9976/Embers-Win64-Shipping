// 函数: sub_140f9bd50
// 地址: 0x140f9bd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0xc)
    int64_t rsi_1 = *arg2
    int64_t rdi_1 = sx.q(arg2[1].d)
    arg1[1].d = rdi_1.d
    
    if (rdi_1.d == 0 && r8_1 == 0)
        *(arg1 + 0xc) = rdi_1.d
        return arg1
    
    sub_14065dd80(arg1, rdi_1.d, r8_1)
    memcpy(*rbx, rsi_1, (rdi_1 << 5).d)

return rbx
