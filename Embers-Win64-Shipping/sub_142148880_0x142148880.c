// 函数: sub_142148880
// 地址: 0x142148880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* r14 = arg4
int64_t* rax_3 = ((zx.q(arg2) + 4) << 4) + arg1
*arg6 = 0
void* rdx = *rax_3

if ((rdx.b & 1) != 0)
    rdx = (rdx s>> 1) + rax_3

int64_t rcx = sx.q(arg3) * 5
void* rbx = rdx + (rcx << 3)
void* result

if (*(rdx + (rcx << 3)) != 0)
    int64_t rbp_1 = data_143f4ca00
    
    if (data_143de5480 != 0)
        uint32_t rax_5
        rax_5, arg4 = GetCurrentThreadId()
        rdi.b = rax_5 != data_143de5470
    
    arg4.b = *(rbp_1 + (rdi << 2)) != 1
    result = (*(*r14 + 0x3c8))(r14, rbx, arg6, arg4)

if (*(rdx + (rcx << 3)) == 0 || result.b == 0)
    result = sub_1421368e0(arg5, *(rbx + 0x20))
    *arg6 = result

return result
