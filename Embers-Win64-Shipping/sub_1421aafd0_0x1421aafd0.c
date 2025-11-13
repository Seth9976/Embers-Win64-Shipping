// 函数: sub_1421aafd0
// 地址: 0x1421aafd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432eeb40
sub_1421bed60(arg1)
void* rbx = arg1[0x3c]
void* arg_8 = rbx
*(rbx + 0x212) = 1

if (sub_140a80f40() == 0)
    uint32_t rax_1
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
        void var_38
        void** rax_2 = sub_1421b12a0(&var_38, nullptr, 0xff)
        *(*rax_2 + 0x10) = rbx
        void* rcx_4 = *rax_2
        int32_t r8_1 = rax_2[2].d
        int64_t* rdx_2 = rax_2[1]
        int64_t* rbx_1 = *(rcx_4 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rsi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi_1 += 1
            rbx_1 = arg_10
        
        sub_1407c9450(rcx_4, rdx_2, r8_1, 1)
        
        if (rbx_1 != 0)
            int32_t rax_3 = *rsi_1
            *rsi_1 -= 1
            
            if (rax_3 == 1)
                sub_140a2f6e0(arg_10)
    else
        void* arg_18 = rbx
        sub_1421abae0(&arg_18)
else
    sub_1421abae0(&arg_8)

arg1[0x3c] = 0
int64_t rcx_6 = arg1[0x4b]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x49]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x47]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x45]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x43]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x41]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x3d]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

return sub_1421ab160(arg1) __tailcall
