// 函数: sub_1420a6fc0
// 地址: 0x1420a6fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x18)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    __builtin_memset(rax, 0, 0x18)

sub_140a4bff0(arg2, rbx, 0x18)
*(arg2 + 0x14) = *(rbx + 0x14)
int32_t i_1 = arg2[1].d

if (i_1 != 0)
    int64_t* rdi_1 = *arg2 + 0x68
    int32_t i
    
    do
        int64_t rcx_1 = *rdi_1
        
        if (rcx_1 != 0)
            arg3 = sub_140a74f90(rcx_1)
        
        rdi_1 -= -0x80
        i = i_1
        i_1 -= 1
    while (i != 1)

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_140888ba0(arg2, 0)

arg2[2].d = 0
int64_t* var_50 = rbx

if (sub_140a80f40() == 0)
    if (data_143f138f4 != 0)
    label_1420a70bf:
        void var_48
        int64_t* rax_4 = sub_142085590(&var_48, nullptr, 0xff)
        *(*rax_4 + 0x10) = arg1.o
        void* rcx_8 = *rax_4
        int32_t r8_1 = rax_4[2].d
        int64_t* rdx_3 = rax_4[1]
        int64_t* rbx_1 = *(rcx_8 + 0x28)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_2 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_2 += 1
            rbx_1 = arg_10
        
        int32_t result = sub_1405e48c0(rcx_8, rdx_3, r8_1, 1)
        
        if (rbx_1 != 0)
            result = *rdi_2
            *rdi_2 -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_10)
        
        return result
    
    if (data_143de5480 != 0)
        uint32_t rax_3
        rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_3.b == 0)
            goto label_1420a70bf

sub_1420a7140(arg1, rbx, arg3)
sub_142079600(rbx)
return j_sub_140a74f90(rbx)
