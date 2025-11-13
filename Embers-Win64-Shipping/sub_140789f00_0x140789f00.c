// 函数: sub_140789f00
// 地址: 0x140789f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1407c23d0(arg1 + 0xf0, *(arg3 + 0xe0))
int64_t rax = *(arg3 + 0x6f0)
void* rbx_1 = *(arg1 + 0x28)
int64_t rsi = *(arg3 + 0xe0)
int64_t var_30 = rsi
char rax_1 = sub_140a80f40()

if (rax_1 == 0)
    if (data_143f138f4 != rax_1)
    label_140789fa5:
        void var_20
        int64_t* rax_4 = sub_140788fa0(&var_20, nullptr, 0xff)
        void* rcx_4 = *rax_4
        *(rcx_4 + 0x10) = rbx_1.o
        *(rcx_4 + 0x20) = rax
        void* rcx_5 = *rax_4
        int32_t r8_1 = rax_4[2].d
        int64_t* rdx_3 = rax_4[1]
        int64_t* rbx_2 = *(rcx_5 + 0x30)
        int64_t* arg_8 = rbx_2
        int32_t* rdi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_1 += 1
            rbx_2 = arg_8
        
        int32_t result = sub_140778000(rcx_5, rdx_3, r8_1, 1)
        
        if (rbx_2 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_8)
        
        return result
    
    if (data_143de5480 != rax_1)
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b == 0)
            goto label_140789fa5

return sub_1407c24c0(rbx_1 + 0xc8, rsi) __tailcall
