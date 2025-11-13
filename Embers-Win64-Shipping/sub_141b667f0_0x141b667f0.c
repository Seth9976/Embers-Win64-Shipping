// 函数: sub_141b667f0
// 地址: 0x141b667f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = *arg4
void*** rbx = arg2
int64_t r13 = arg2[0x34]

if (*(arg1 + 0x11a) u> 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x118))
    arg2 = (arg2[6] + 7) & 0xfffffffffffffff8
    void* rax_1 = &arg2[5]
    
    if (rax_1 u> rbx[7])
        sub_140b0e3d0(&rbx[6], 0x30)
        arg2 = (rbx[6] + 7) & 0xfffffffffffffff8
        rax_1 = &arg2[5]
    
    rbx[6] = rax_1
    void** rax_2 = rbx[1]
    *(rbx + 0x14) += 1
    *rax_2 = arg2
    rbx[1] = &arg2[1]
    arg2[1] = 0
    arg2[3].d = r12_1
    *arg2 = &data_142d5a070
    arg2[2] = r13
    arg2[4] = arg3

if (*(arg1 + 0x11e) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x11c))
    
    if ((*(*r14 + 8))(r14, arg2) == 0)
        void*** rcx_4 = (rbx[6] + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_4[5]
        
        if (rax_6 u> rbx[7])
            sub_140b0e3d0(&rbx[6], 0x30)
            rcx_4 = (rbx[6] + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_4[5]
        
        rbx[6] = rax_6
        void**** rax_7 = rbx[1]
        *(rbx + 0x14) += 1
        *rax_7 = rcx_4
        rbx[1] = &rcx_4[1]
        rcx_4[1] = 0
        *rcx_4 = &data_142d5a080
        rcx_4[2] = r13
        rcx_4[3].d = rsi_1
        rcx_4[4] = r14

return sub_1405d1550(arg4) __tailcall
