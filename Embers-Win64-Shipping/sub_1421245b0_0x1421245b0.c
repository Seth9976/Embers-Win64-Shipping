// 函数: sub_1421245b0
// 地址: 0x1421245b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 8) u>> 4).b & 1) == 0)
    int64_t* rbx_1 = *(arg1 + 0x140)
    
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            if (data_143de5480 == 0)
                goto label_1421245eb
            
            uint32_t rax_4
            rax_4.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_4.b != 0)
                goto label_1421245eb
            
            goto label_142124638
        
    label_142124638:
        void var_38
        void** rax_5 = sub_140788bb0(&var_38, nullptr, 0xff)
        *(*rax_5 + 0x10) = rbx_1
        void* rcx_3 = *rax_5
        int32_t r8_1 = rax_5[2].d
        int64_t* rdx_1 = rax_5[1]
        int64_t* rbx_2 = *(rcx_3 + 0x20)
        int64_t* arg_10 = rbx_2
        int32_t* rdi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_1 += 1
            rbx_2 = arg_10
        
        sub_1407c9450(rcx_3, rdx_1, r8_1, 1)
        
        if (rbx_2 != 0)
            int32_t rax_6 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_6 == 1)
                sub_140a2f6e0(arg_10)
    else
    label_1421245eb:
        
        if (rbx_1 != 0)
            (**rbx_1)(rbx_1, 1)
    
    *(arg1 + 0x140) = 0

void* rbx_3 = arg1 + 0x398
int64_t i_1 = 3
int64_t i

do
    int64_t j_1 = 4
    int64_t j
    
    do
        int64_t* rcx_5 = *rbx_3
        
        if (rcx_5 != 0)
            (**rcx_5)(rcx_5, 1)
        
        *rbx_3 = 0
        rbx_3 += 8
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
return sub_140cdba30(arg1) __tailcall
