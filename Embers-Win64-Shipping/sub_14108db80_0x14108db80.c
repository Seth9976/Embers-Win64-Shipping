// 函数: sub_14108db80
// 地址: 0x14108db80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x98)
void*** rdi_1

if (rax == 0)
    rdi_1 = nullptr
else
    rdi_1 = sub_14108b2a0(rax, arg2)

void*** var_30 = rdi_1
char rax_2 = sub_140a80f40()

if (rax_2 == 0)
    if (data_143f138f4 != rax_2)
    label_14108dc21:
        void var_28
        int64_t* rax_6 = sub_141095350(&var_28, nullptr, 0xff)
        *(*rax_6 + 0x10) = arg1.o
        void* rcx_4 = *rax_6
        int32_t r8 = rax_6[2].d
        int64_t* rdx_1 = rax_6[1]
        int64_t* rbx_1 = *(rcx_4 + 0x28)
        int64_t* arg_18 = rbx_1
        int32_t* rdi_2 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_2 += 1
            rbx_1 = arg_18
        
        int32_t rax_7 = sub_1405e48c0(rcx_4, rdx_1, r8, 1)
        
        if (rbx_1 != 0)
            rax_7 = *rdi_2
            *rdi_2 -= 1
            
            if (rax_7 == 1)
                return sub_140a2f6e0(arg_18)
        
        return rax_7
    
    if (data_143de5480 != rax_2)
        uint32_t rax_3
        rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_3.b == 0)
            goto label_14108dc21

int64_t rax_5 = sub_1419a2d00()
int64_t* rcx_1 = *(arg1 + 0x1c28)

if (rcx_1 != 0)
    rax_5 = (**rcx_1)(rcx_1, 1)

*(arg1 + 0x1c28) = rdi_1
return rax_5
