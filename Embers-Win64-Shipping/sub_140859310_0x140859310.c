// 函数: sub_140859310
// 地址: 0x140859310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = arg2

if (arg2 == 0 || *(arg2 + 8) != 0)
    rdi = nullptr

int32_t* var_30 = arg1

if (sub_140a80f40() == 0)
    if (data_143f138f4 != 0)
    label_1408593b6:
        void var_28
        int64_t* rax_3 = sub_14084d040(&var_28, nullptr, 0xff)
        *(*rax_3 + 0x10) = rdi.o
        void* rcx_3 = *rax_3
        int32_t r8 = rax_3[2].d
        int64_t* rdx_1 = rax_3[1]
        int64_t* rbx_1 = *(rcx_3 + 0x28)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        int32_t rax_4 = sub_1405e48c0(rcx_3, rdx_1, r8, 1)
        
        if (rbx_1 != 0)
            rax_4 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_4 == 1)
                return sub_140a2f6e0(arg_10)
        
        return rax_4
    
    if (data_143de5480 != 0)
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b == 0)
            goto label_1408593b6

if (rdi == 0)
    *arg1 = 0xffffffff
else
    sub_1408299c0(rdi + 0x30, arg1)

void* rax_1 = *(arg1 + 0x140)

if (rax_1 != 0)
    *(rax_1 + 8) -= 1

*(arg1 + 0x140) = 0
return rax_1
