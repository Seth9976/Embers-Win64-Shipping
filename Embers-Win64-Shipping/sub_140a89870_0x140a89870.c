// 函数: sub_140a89870
// 地址: 0x140a89870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    int64_t* rcx = data_143ddb3f0
    int64_t rdx_1 = rbx << 3
    
    if (rcx != 0)
        rdx_1 = (*(*rcx + 0x38))(rcx, rdx_1, 0)
    
    uint32_t rdx_2 = (rdx_1 u>> 3).d
    
    if (rbx.d s> rdx_2)
        rdx_2 = 0x7fffffff
    
    rbx = zx.q(rdx_2)

if (rbx.d == *(arg1 + 0xc))
    return 

*(arg1 + 0xc) = rbx.d
int64_t rsi_1 = *arg1

if (rsi_1 == 0 && rbx.d == 0)
    return 

int64_t* rcx_1 = data_143ddb3f0

if (rcx_1 == 0)
    sub_140a750a0()
    rcx_1 = data_143ddb3f0

*arg1 = (*(*rcx_1 + 0x20))(rcx_1, rsi_1, sx.q(rbx.d) << 3, 0)
