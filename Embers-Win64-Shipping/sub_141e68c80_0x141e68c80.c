// 函数: sub_141e68c80
// 地址: 0x141e68c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_141ee6400(arg1)
int64_t* rbx = *(arg1 + 0x268)
int64_t* result_2 = result

if (rbx != 0)
    int64_t* result_1 = result
    
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            if (data_143de5480 == 0)
                goto label_141e68cd0
            
            uint32_t rax_4
            rax_4.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_4.b != 0)
                goto label_141e68cd0
        
        void var_78
        void** rax_5 = sub_141e58a00(&var_78, nullptr, 0xff)
        *(*rax_5 + 0x10) = rbx.o
        void* rcx_5 = *rax_5
        int32_t r8_1 = rax_5[2].d
        int64_t* rdx_2 = rax_5[1]
        int64_t* rbx_1 = *(rcx_5 + 0x28)
        int64_t* arg_10 = rbx_1
        void* rsi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi_1 += 1
            rbx_1 = arg_10
        
        result = sub_1405e48c0(rcx_5, rdx_2, r8_1, 1)
        
        if (rbx_1 != 0)
            result = zx.q(*rsi_1)
            *rsi_1 -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(arg_10)
    else
    label_141e68cd0:
        
        if (result_2 != 0)
            (*(*result_2 + 0x1a8))(result_2, rbx)
        
        (*(*rbx + 0x30))(rbx)
        result = (**rbx)(rbx, 1)
    
    *(arg1 + 0x268) = 0

int64_t* rbx_2 = *(arg1 + 0x270)

if (rbx_2 != 0)
    int64_t* result_3 = result_2
    
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            if (data_143de5480 == 0)
                goto label_141e68dc5
            
            uint32_t rax_10
            rax_10.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_10.b != 0)
                goto label_141e68dc5
        
        void var_60
        void** rax_11 = sub_141e58a00(&var_60, nullptr, 0xff)
        *(*rax_11 + 0x10) = rbx_2.o
        void* rcx_12 = *rax_11
        int32_t r8_2 = rax_11[2].d
        int64_t* rdx_4 = rax_11[1]
        int64_t* rbx_3 = *(rcx_12 + 0x28)
        int64_t* arg_18 = rbx_3
        void* rsi_2 = &rbx_3[9]
        
        if (rbx_3 != 0)
            *rsi_2 += 1
            rbx_3 = arg_18
        
        result = sub_1405e48c0(rcx_12, rdx_4, r8_2, 1)
        
        if (rbx_3 != 0)
            result = zx.q(*rsi_2)
            *rsi_2 -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(arg_18)
    else
    label_141e68dc5:
        
        if (result_2 != 0)
            (*(*result_2 + 0x1a8))(result_2, rbx_2)
        
        (*(*rbx_2 + 0x30))(rbx_2)
        result = (**rbx_2)(rbx_2, 1)
    
    *(arg1 + 0x270) = 0

int64_t* rbx_4 = *(arg1 + 0x278)

if (rbx_4 != 0)
    int64_t* result_4 = result_2
    
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            if (data_143de5480 == 0)
                goto label_141e68ec2
            
            uint32_t rax_16
            rax_16.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_16.b != 0)
                goto label_141e68ec2
        
        void var_48
        void** rax_17 = sub_141e58a00(&var_48, nullptr, 0xff)
        *(*rax_17 + 0x10) = rbx_4.o
        void* rcx_19 = *rax_17
        int32_t r8_3 = rax_17[2].d
        int64_t* rdx_6 = rax_17[1]
        int64_t* rbx_5 = *(rcx_19 + 0x28)
        int64_t* arg_20 = rbx_5
        void* rdi = &rbx_5[9]
        
        if (rbx_5 != 0)
            *rdi += 1
            rbx_5 = arg_20
        
        result = sub_1405e48c0(rcx_19, rdx_6, r8_3, 1)
        
        if (rbx_5 != 0)
            int32_t rbp_1 = *rdi
            *rdi -= 1
            
            if (rbp_1 == 1)
                result = sub_140a2f6e0(arg_20)
    else
    label_141e68ec2:
        
        if (result_2 != 0)
            (*(*result_2 + 0x1a8))(result_2, rbx_4)
        
        (*(*rbx_4 + 0x30))(rbx_4)
        result = (**rbx_4)(rbx_4, 1)
    
    *(arg1 + 0x278) = 0

return result
