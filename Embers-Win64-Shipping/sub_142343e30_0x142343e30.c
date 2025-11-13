// 函数: sub_142343e30
// 地址: 0x142343e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423ebf30(arg1)
sub_1405d16e0(arg1 + 0x88, nullptr)
void* rbx = *(arg1 + 0x228)
int32_t i = 0

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_142343e70
        
        uint32_t rax_2
        rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_2.b != 0)
            goto label_142343e70
    
    void var_38
    void** rax_3 = sub_142332d60(&var_38, nullptr, 0xff)
    *(*rax_3 + 0x10) = rbx
    void* rcx_4 = *rax_3
    int32_t r8_1 = rax_3[2].d
    int64_t* rdx_1 = rax_3[1]
    int64_t* rbx_1 = *(rcx_4 + 0x20)
    int64_t* arg_10 = rbx_1
    int32_t* rbp_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rbp_1 += 1
        rbx_1 = arg_10
    
    sub_1405a5630(rcx_4, rdx_1, r8_1, 1)
    
    if (rbx_1 != 0)
        int32_t rax_4 = *rbp_1
        *rbp_1 -= 1
        
        if (rax_4 == 1)
            sub_140a2f6e0(arg_10)
else
label_142343e70:
    int64_t* rcx_1 = *(rbx + 0x30)
    *(rbx + 0x30) = 0
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x38))(rcx_1)

int64_t result = sub_1419a21e0(0)

if (*(arg1 + 0x2a8) s> 0)
    int64_t* rbx_2 = nullptr
    
    do
        result = *(arg1 + 0x2a0)
        void* rcx_6 = *(rbx_2 + result)
        
        if (rcx_6 != 0)
            result = (*(*(rcx_6 + 0x10) + 0x10))(rcx_6 + 0x10)
        
        i += 1
        rbx_2 = &rbx_2[1]
    while (i s< *(arg1 + 0x2a8))

void* rcx_8 = *(arg1 + 0x2d8)

if (rcx_8 == 0)
    return result

jump(*(*(rcx_8 + 0x10) + 0x10))
