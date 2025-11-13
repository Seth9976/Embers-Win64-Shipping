// 函数: sub_14078a230
// 地址: 0x14078a230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg2 + 0x208)

if (rcx != 0)
    sub_141997f50(rcx)
    int64_t* rbx_1 = *(arg2 + 0x208)
    
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            if (data_143de5480 == 0)
                goto label_14078a278
            
            uint32_t rax_3
            rax_3.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_3.b != 0)
                goto label_14078a278
            
            goto label_14078a2c5
        
    label_14078a2c5:
        void var_88
        void** rax_4 = sub_140788bb0(&var_88, nullptr, 0xff)
        *(*rax_4 + 0x10) = rbx_1
        void* rcx_4 = *rax_4
        int32_t r8 = rax_4[2].d
        int64_t* rdx = rax_4[1]
        int64_t* rbx_2 = *(rcx_4 + 0x20)
        int64_t* arg_10 = rbx_2
        int32_t* rdi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_1 += 1
            rbx_2 = arg_10
        
        sub_1407c9450(rcx_4, rdx, r8, 1)
        
        if (rbx_2 != 0)
            int32_t rax_5 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_5 == 1)
                sub_140a2f6e0(arg_10)
    else
    label_14078a278:
        
        if (rbx_1 != 0)
            (**rbx_1)(rbx_1, 1)
    
    *(arg2 + 0x208) = 0

int64_t* rcx_6 = *(arg2 + 0x210)

if (rcx_6 != 0)
    sub_141997f50(rcx_6)
    int64_t* rbx_3 = *(arg2 + 0x210)
    
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            if (data_143de5480 == 0)
                goto label_14078a356
            
            uint32_t rax_8
            rax_8.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_8.b != 0)
                goto label_14078a356
            
            goto label_14078a3a3
        
    label_14078a3a3:
        void var_70
        void** rax_9 = sub_140788bb0(&var_70, nullptr, 0xff)
        *(*rax_9 + 0x10) = rbx_3
        void* rcx_10 = *rax_9
        int32_t r8_1 = rax_9[2].d
        int64_t* rdx_1 = rax_9[1]
        int64_t* rbx_4 = *(rcx_10 + 0x20)
        int64_t* arg_18 = rbx_4
        int32_t* rdi_2 = &rbx_4[9]
        
        if (rbx_4 != 0)
            *rdi_2 += 1
            rbx_4 = arg_18
        
        sub_1407c9450(rcx_10, rdx_1, r8_1, 1)
        
        if (rbx_4 != 0)
            int32_t rax_10 = *rdi_2
            *rdi_2 -= 1
            
            if (rax_10 == 1)
                sub_140a2f6e0(arg_18)
    else
    label_14078a356:
        
        if (rbx_3 != 0)
            (**rbx_3)(rbx_3, 1)
    
    *(arg2 + 0x210) = 0

int64_t i = 2
void* rdi_3 = arg2 + 0x1e8

do
    int64_t rcx_12 = *(rdi_3 - 0x10)
    rdi_3 -= 0x10
    i -= 1
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
while (i != 0)

int64_t rcx_13 = *(arg2 + 0x1b0)

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = *(arg2 + 0x1a0)

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

*(arg2 + 0x90) = &data_142da8048
sub_140a1d5c0(arg2 + 0xa8)
sub_140a1d5c0(arg2 + 0x98)
int64_t rcx_17 = *(arg2 + 0x80)

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

sub_140780800(arg2 + 0x68)
int64_t rcx_19 = *(arg2 + 0x30)

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

void* rbx_5 = *(arg1 + 0x28)
int64_t rdi_4 = *(arg3 + 0xe0)
int64_t var_90 = rdi_4
char rax_11 = sub_140a80f40()

if (rax_11 == 0)
    if (data_143f138f4 != rax_11)
    label_14078a51b:
        void var_58
        int64_t* rax_14 = sub_140789240(&var_58, nullptr, 0xff)
        *(*rax_14 + 0x10) = rbx_5.o
        void* rcx_24 = *rax_14
        int32_t r8_3 = rax_14[2].d
        int64_t* rdx_4 = rax_14[1]
        int64_t* rbx_6 = *(rcx_24 + 0x28)
        int64_t* arg_20 = rbx_6
        int32_t* rdi_5 = &rbx_6[9]
        
        if (rbx_6 != 0)
            *rdi_5 += 1
            rbx_6 = arg_20
        
        int64_t* result = sub_1405e48c0(rcx_24, rdx_4, r8_3, 1)
        
        if (rbx_6 != 0)
            int32_t rbp_1 = *rdi_5
            *rdi_5 -= 1
            
            if (rbp_1 == 1)
                return sub_140a2f6e0(arg_20)
        
        return result
    
    if (data_143de5480 != rax_11)
        uint32_t rax_12
        rax_12.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_12.b == 0)
            goto label_14078a51b

return sub_1407c2710(rbx_5 + 0xc8, rdi_4) __tailcall
