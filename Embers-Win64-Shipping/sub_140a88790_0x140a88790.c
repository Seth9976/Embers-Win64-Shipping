// 函数: sub_140a88790
// 地址: 0x140a88790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t* rcx = data_143ddb3f0

if (arg2 != 0)
    int64_t rdx_1 = rbx << 4
    
    if (rcx != 0)
        int64_t rax_2 = (*(*rcx + 0x38))(rcx, rdx_1, 0)
        rcx = data_143ddb3f0
        rdx_1 = rax_2
    
    uint32_t rdx_2 = (rdx_1 u>> 4).d
    
    if (rbx.d s> rdx_2)
        rdx_2 = 0x7fffffff
    
    rbx = zx.q(rdx_2)

if (rbx.d s<= arg3)
    *(arg1 + 0xc) = arg3
    return 

int64_t rbp = *arg1

if (rbp != 0 || rbx.d != 0)
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    *arg1 = (*(*rcx + 0x20))(rcx, rbp, sx.q(rbx.d) << 4, 0)

*(arg1 + 0xc) = rbx.d
