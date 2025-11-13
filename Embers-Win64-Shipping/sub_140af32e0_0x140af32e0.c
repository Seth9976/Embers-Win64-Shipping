// 函数: sub_140af32e0
// 地址: 0x140af32e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** arg_8 = arg1
EnterCriticalSection(&data_143de55c0)
int64_t result = 0
void** rbx = arg_8
void** arg_18
void* rax_6

if (data_14399fa78 == data_14399faa4)
label_140af338a:
    rax_6 = nullptr
else
    arg_18 = rbx
    int32_t rax_2 = sub_140b5ead0(rbx.d) + arg_18:4.d
    void* rcx_1 = data_14399fab0
    void* rax_4 = &data_14399faa8
    
    if (rcx_1 != 0)
        rax_4 = rcx_1
    
    int32_t rax_5 = *(rax_4 + (((sx.q(data_14399fab8) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_140af338a_1:
        rax_6 = nullptr
    else
        int64_t r8_1 = data_14399fa70
        int64_t rdx_5
        
        while (true)
            rdx_5 = sx.q(rax_5) * 0x18
            
            if (*(rdx_5 + r8_1) == rbx)
                break
            
            rax_5 = *(rdx_5 + r8_1 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_140af338a_2
        
        rax_6 = rdx_5 + r8_1
        
        if (rax_5 == 0xffffffff)
        label_140af338a_2:
            rax_6 = nullptr

int64_t* r15 = rax_6 + 8

if (rax_6 == 0)
    r15 = nullptr

if (r15 != 0)
    result = *r15
else
    void var_50
    int64_t rbx_2 = *sub_140b58170(&var_50, "CompressionFormat", (r15 + 1).d)
    sub_140a387e0()
    void** arg_20 = &data_14399e720
    void*** var_48 = nullptr
    void** rdi_1 = &data_14399e720
    int32_t var_3c_1 = 0
    void* r8_3 = data_14399e720
    void*** r14_1 = nullptr
    int32_t rsi_1 = 0
    int32_t r13_1 = 0
    int32_t rax_8 = (*(r8_3 + 8))(&data_14399e720, rbx_2, r8_3)
    arg_18.d = rax_8
    int32_t i = 0
    
    if (rax_8 s> 0)
        do
            void* r9_1 = *rdi_1
            int64_t rax_9 = (*(r9_1 + 0x10))(rdi_1, rbx_2, zx.q(i), r9_1, r15)
            int64_t r15_1 = rax_9 - 8
            
            if (rax_9 == 0)
                r15_1 = 0
            
            int64_t rdi_2 = sx.q(rsi_1)
            rsi_1 = (rdi_2 + 1).d
            
            if (rsi_1 s> r13_1)
                sub_1405a4d70(&var_48)
                r13_1 = var_3c_1
                r14_1 = var_48
            
            i += 1
            r14_1[rdi_2] = r15_1
            rdi_1 = arg_20
        while (i s< arg_18.d)
    
    void*** rdi_3 = r14_1
    int64_t* rbx_1 = r15
    void* rsi_2 = &r14_1[sx.q(rsi_1)]
    
    if (r14_1 != rsi_2)
        while (true)
            void** rcx_6 = *rdi_3
            void** rbx_3 = arg_8
            arg_20 = rcx_6
            
            if (*(*(*rcx_6 + 0x40))(rcx_6, &arg_18) == rbx_3)
                var_48 = &arg_8
                void*** var_40_1 = &arg_20
                sub_140a5c490(&data_14399fa70, &arg_18, &var_48, nullptr)
                rbx_1 = data_14399fa70 + ((sx.q(arg_18.d) * 3 + 1) << 3)
                break
            
            rdi_3 = &rdi_3[1]
            
            if (rdi_3 == rsi_2)
                rbx_1 = r15
                break
    
    if (rbx_1 != 0)
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        result = *rbx_1
    else if (r14_1 != 0)
        sub_140a74f90(r14_1)

LeaveCriticalSection(&data_143de55c0)
return result
