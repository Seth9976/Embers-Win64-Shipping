// 函数: sub_14236b200
// 地址: 0x14236b200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[1].d s> 0)
    int64_t* r15_1 = nullptr
    
    do
        void* rcx = *(r15_1 + *arg1)
        
        if (*(rcx + 0xec) u> 0)
            sub_14236afd0(rcx, arg3)
            char var_60_1 = 0
            void* rbp_1 = *(r15_1 + *arg1)
            int64_t* rsi_2 = sx.q(i) * 0x430 + arg1[2]
            sub_14236b4e0(rsi_2, rbp_1, rsi_2, zx.q(i), arg3.b)
            sub_141997e80(rsi_2)
            char var_60_2 = 1
            sub_14236b4e0(rsi_2, rbp_1, &rsi_2[0x42], zx.q(i), arg3.b)
            sub_141997e80(&rsi_2[0x42])
        else if (i == 0)
            void* rcx_5 = *(rcx + 0x38)
            
            if (rcx_5 != 0)
                sub_141fe77b0(rcx_5 + 0x50, arg3)
        
        i += 1
        r15_1 = &r15_1[1]
    while (i s< arg1[1].d)

void* var_50 = arg3

if (sub_140a80f40() == 0)
    if (data_143f138f4 != 0)
    label_14236b350:
        void var_48
        int64_t* rax_6 = sub_14235eb50(&var_48, nullptr, 0xff)
        *(*rax_6 + 0x10) = arg1.o
        void* rcx_9 = *rax_6
        int32_t r8_2 = rax_6[2].d
        int64_t* rdx_4 = rax_6[1]
        int64_t* rbx = *(rcx_9 + 0x28)
        int64_t* arg_18 = rbx
        int32_t* rdi = &rbx[9]
        
        if (rbx != 0)
            *rdi += 1
            rbx = arg_18
        
        int32_t result = sub_1405e48c0(rcx_9, rdx_4, r8_2, 1)
        
        if (rbx != 0)
            result = *rdi
            *rdi -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(arg_18)
        
        arg1[0xc].b = 1
        return result
    
    if (data_143de5480 != 0)
        uint32_t rax_5
        rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_5.b == 0)
            goto label_14236b350

*(arg1 + 0x5d) = 1
*(arg3 + 0x3d) |= 1
arg1[0xc].b = 1
return &data_143f02b98
