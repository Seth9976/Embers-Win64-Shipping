// 函数: sub_1418aa840
// 地址: 0x1418aa840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xf8)
int64_t* rbx = nullptr
int64_t* r14 = nullptr
int32_t arg_10

if (((*(arg1 + 0xec) ^ *(arg3 + 0xc)) | (*(arg1 + 0xe8) ^ arg3[1].d)
        | (*(arg1 + 0xe4) ^ *(arg3 + 4)) | (*(arg1 + 0xe0) ^ *arg3)) == 0)
    *(arg1 + 0xe8) = 0
    *(arg1 + 0xe0) = 0
    
    if (&arg_10 != arg1 + 0xf0)
        rbx = *(arg1 + 0xf0)
        r14 = rbx
        *(arg1 + 0xf0) = 0

int32_t arg_8 = 1

if (*sub_140cba0f0(arg1 + 0x10, &arg_10, arg3) != 0xffffffff)
    sub_140cba0f0(arg1 + 0x10, &arg_10, arg3)
    int64_t rax_8 = sx.q(arg_10)
    void* const rcx_5
    
    if (rax_8.d == 0xffffffff)
        rcx_5 = nullptr
    else
        rcx_5 = (rax_8 << 5) + *(arg1 + 0x10)
    
    if (&arg_10 != rcx_5 + 0x10)
        rbx = *(rcx_5 + 0x10)
        *(rcx_5 + 0x10) = 0
        
        if (r14 != 0)
            (**r14)(r14, 1)
    
    sub_1418aa6e0(arg1 + 0x10, arg3)

int32_t* rax_14

if ((*(arg1 + 0xec) | *(arg1 + 0xe8) | *(arg1 + 0xe4) | *(arg1 + 0xe0)) != 0)
    rax_14 = sub_140cba0f0(arg1 + 0x10, &arg_10, arg1 + 0xe0)

if ((*(arg1 + 0xec) | *(arg1 + 0xe8) | *(arg1 + 0xe4) | *(arg1 + 0xe0)) == 0
        || *rax_14 != 0xffffffff)
    arg_8 = 0

int64_t* rcx_10 = *(arg1 + 0x70)
(*(*rcx_10 + 0x20))(rcx_10, zx.q(*(arg1 + 0x18) - *(arg1 + 0x44) + arg_8))
*arg2 = rbx

if (arg1 != -0xf8)
    LeaveCriticalSection(arg1 + 0xf8)

return arg2
