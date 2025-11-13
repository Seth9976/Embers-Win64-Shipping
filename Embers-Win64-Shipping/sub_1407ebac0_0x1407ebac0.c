// 函数: sub_1407ebac0
// 地址: 0x1407ebac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg2 + 0x170)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rcx_2 = *(arg2 + 0x158)

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1 && rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

*(arg2 + 0x128) = &data_142da8048
sub_140a1d5c0(arg2 + 0x140)
sub_140a1d5c0(arg2 + 0x130)
int64_t rcx_5 = *(arg2 + 0x118)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

void* rbx_1 = *(arg1 + 0x28)
int64_t rsi_1 = *(arg3 + 0xe0)
int64_t rax_5 = *(arg3 + 0x6f0)
int64_t var_40 = rsi_1
char rax_6 = sub_140a80f40()

if (rax_6 == 0)
    if (data_143f138f4 != rax_6)
    label_1407ebbda:
        void var_30
        void** rax_8 = sub_1407eb100(&var_30, nullptr, 0xff)
        void* rcx_8 = *rax_8
        *(rcx_8 + 0x10) = rbx_1.o
        *(rcx_8 + 0x20) = rax_5
        void* rcx_9 = *rax_8
        int32_t r8 = rax_8[2].d
        int64_t* rdx_1 = rax_8[1]
        int64_t* rbx_2 = *(rcx_9 + 0x30)
        int64_t* arg_10 = rbx_2
        void* rsi_2 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rsi_2 += 1
            rbx_2 = arg_10
        
        uint64_t result = sub_140778000(rcx_9, rdx_1, r8, 1)
        
        if (rbx_2 != 0)
            int32_t rdi_1 = *rsi_2
            *rsi_2 -= 1
            
            if (rdi_1 == 1)
                return sub_140a2f6e0(arg_10)
        
        return result
    
    if (data_143de5480 != rax_6)
        uint32_t rax_7
        rax_7.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_7.b == 0)
            goto label_1407ebbda

return sub_140808360(rbx_1 + 0xc8, rsi_1)
