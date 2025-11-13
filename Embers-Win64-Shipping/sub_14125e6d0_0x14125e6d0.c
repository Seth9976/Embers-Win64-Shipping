// 函数: sub_14125e6d0
// 地址: 0x14125e6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x1028))
int32_t rax = (rsi + 1).d
*(arg1 + 0x1028) = rax

if (rax s> *(arg1 + 0x102c))
    sub_1405a4d70(arg1 + 0x1020)

void* var_40 = arg1
*(*(arg1 + 0x1020) + (rsi << 3)) = arg2
int64_t rsi_1 = *(arg2 + 0x2d0)
char rax_2 = sub_140a80f40()

if (rax_2 == 0)
    if (data_143f138f4 != rax_2)
    label_14125e7aa:
        void var_38
        int64_t* rax_6 = sub_1412667f0(&var_38, nullptr, 0xff)
        *(*rax_6 + 0x10) = rsi_1.o
        void* rcx_4 = *rax_6
        int32_t r8 = rax_6[2].d
        int64_t* rdx_2 = rax_6[1]
        int64_t* rbx_1 = *(rcx_4 + 0x28)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        int32_t rax_7 = sub_1405e48c0(rcx_4, rdx_2, r8, 1)
        
        if (rbx_1 != 0)
            rax_7 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_7 == 1)
                return sub_140a2f6e0(arg_10)
        
        return rax_7
    
    if (data_143de5480 != rax_2)
        uint32_t rax_3
        rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_3.b == 0)
            goto label_14125e7aa

*(arg1 + 0x1030) = 1
int64_t rdi = sx.q(*(arg1 + 0x1018))
int32_t rax_4 = (rdi + 1).d
*(arg1 + 0x1018) = rax_4

if (rax_4 s> *(arg1 + 0x101c))
    sub_1405a4d70(arg1 + 0x1010)

int64_t rax_5 = *(arg1 + 0x1010)
*(rax_5 + (rdi << 3)) = rsi_1
return rax_5
