// 函数: sub_140a73c60
// 地址: 0x140a73c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xd0)
int64_t* rdi_1 = arg2[1]
int64_t var_28 = *arg2
int64_t* var_20 = rdi_1

if (rdi_1 != 0)
    rdi_1[1].d += 1

int32_t arg_8
sub_140a73790(arg1 + 0x80, &arg_8, &var_28)
int64_t rax_1 = sx.q(arg_8)
void* const rcx_2

if (rax_1.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = *(arg1 + 0x80) + rax_1 * 0x28

int64_t* rbp = rcx_2 + 0x10

if (rcx_2 == 0)
    rbp = nullptr

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

if (rbp == 0)
    rdi_1.b = 0
else
    sub_140597df0(arg3, rbp)
    rdi_1.b = 1

if (arg1 != -0xd0)
    LeaveCriticalSection(arg1 + 0xd0)

return zx.q(rdi_1.b)
