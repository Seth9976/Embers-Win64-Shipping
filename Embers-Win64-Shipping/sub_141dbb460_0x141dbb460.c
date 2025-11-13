// 函数: sub_141dbb460
// 地址: 0x141dbb460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
int32_t arg_10 = 0
int32_t arg_18
sub_140865c40(arg2, &arg_18, arg1)
int64_t rax = sx.q(arg_18)

if (rax.d != 0xffffffff)
    void* rax_2 = *arg2 + rax * 0x18
    
    if (rax_2 != 0 && rax_2 != -8)
        return zx.q(*(rax_2 + 8))

if (arg1 != 0)
    void* rax_5 = sub_1425881f0()
    void* rdx_1 = *(arg1 + 0x10)
    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
    
    if (rax_6.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
        void* rcx_2 = *(arg1 + 0xc0)
        
        if (rcx_2 != 0 && *(rcx_2 + 0xa0) == *(arg_8 + 0xa0))
            arg_10 = sub_141dbb460(rcx_2, arg2) + 1

void** var_18 = &arg_8
int32_t* var_10 = &arg_10
sub_1408419d0(arg2, &arg_18, &var_18, nullptr)
return zx.q(arg_10)
