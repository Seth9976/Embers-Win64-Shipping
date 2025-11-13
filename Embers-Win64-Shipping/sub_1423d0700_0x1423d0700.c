// 函数: sub_1423d0700
// 地址: 0x1423d0700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = **arg1

if (rdx == 0 || *(rdx + 0x10) == 0)
    void arg_8
    int64_t* rax_1 = sub_140b58170(&arg_8, "Light", 1)
    void arg_10
    int64_t* rax_2 = sub_140b58170(&arg_10, "DefaultTinyFont", 1)
    void* rax_3 = sub_1423d09b0(arg1[1], *rax_2, *rax_1, 8)
    int64_t* rdi_1 = *arg1
    void* rax_4 = *rdi_1
    
    if (rax_4 != 0)
        *(rax_4 + 0x10) = rax_3
    else if (rax_3 != 0)
        int64_t* rax_5 = j_sub_140a82f30(0x18)
        int64_t* rbx_2 = rax_5
        
        if (rax_5 == 0)
            rbx_2 = nullptr
        else
            sub_1405ab8c0(rax_5)
            rbx_2[2] = rax_3
            *rbx_2 = &data_142d4c240
        
        void arg_18
        
        if (rdi_1 != &arg_18)
            int64_t* rcx_4 = *rdi_1
            *rdi_1 = rbx_2
            
            if (rcx_4 != 0)
                (**rcx_4)(rcx_4, 1)
        else if (rbx_2 != 0)
            (**rbx_2)(rbx_2, 1)

void* result = **arg1

if (result == 0)
    return result

return *(result + 0x10)
