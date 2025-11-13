// 函数: sub_1405978f0
// 地址: 0x1405978f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg2[1].d
int64_t* rcx

if (r8 == 0)
    rcx = nullptr
else
    rcx = *arg2

if (rcx != 0)
    (*(*rcx + 0x38))(rcx, 0)
    r8 = arg2[1].d

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg1 + 0xf)
int32_t rax_5 = (temp1 + (temp0 & 0xf)) s>> 4
int64_t rdi_1 = sx.q(rax_5)

if (r8 != rdi_1.d)
    int64_t rcx_1 = *arg2
    
    if (rcx_1 != 0 || rax_5 != 0)
        *arg2 = sub_140a84c80(rcx_1, rdi_1 << 4, 0)
    
    arg2[1].d = rdi_1.d

return *arg2
