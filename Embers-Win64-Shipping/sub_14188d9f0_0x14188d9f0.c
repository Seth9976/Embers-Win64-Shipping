// 函数: sub_14188d9f0
// 地址: 0x14188d9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x68)
void* r9_2 = (sx.q(*(arg1 + 0x60)) << 4) + *(arg1 + 0x58)
int32_t r8_4 = (*(r9_2 - 4) ^ *(arg2 + 0xc)) | (*(r9_2 - 8) ^ arg2[1].d)
    | (*(r9_2 - 0xc) ^ *(arg2 + 4)) | (*(r9_2 - 0x10) ^ *arg2)
void* rdi

if (r8_4 != 0)
    rdi.b = 0
else
    int32_t arg_8
    sub_141838ff0(arg1 + 8, &arg_8, arg2)
    int64_t rax_6 = sx.q(arg_8)
    void* const rax_8
    
    if (rax_6.d == 0xffffffff)
        rax_8 = nullptr
    else
        rax_8 = rax_6 * 0x1c + *(arg1 + 8)
    
    *(rax_8 + 0x10) -= 1
    *(arg1 + 0x60) -= 1
    sub_1405a5010(arg1 + 0x58)
    rdi.b = 1

if (arg1 != -0x68)
    LeaveCriticalSection(arg1 + 0x68)

return zx.q(rdi.b)
