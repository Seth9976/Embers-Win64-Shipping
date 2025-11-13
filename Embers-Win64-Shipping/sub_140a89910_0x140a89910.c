// 函数: sub_140a89910
// 地址: 0x140a89910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg2 != 0)
    if (rbx.d u> 0x100)
        int64_t* r9_1 = data_143ddb3f0
        int64_t rcx_1 = rbx * 0x18
        
        if (r9_1 != 0)
            rcx_1 = (*(*r9_1 + 0x38))(r9_1, rcx_1, 0)
        
        uint32_t rdx_2 = (rcx_1 u/ 0x18).d
        
        if (rbx.d s> rdx_2)
            rdx_2 = 0x7fffffff
        
        rbx = zx.q(rdx_2)
    else
        rbx = 0x100

if (rbx.d == *(arg1 + 0x180c))
    return 

int32_t rdx_3 = *(arg1 + 0x1808)
*(arg1 + 0x180c) = rbx.d
sub_140a88100(arg1, rdx_3, rbx.d, 0x18)
