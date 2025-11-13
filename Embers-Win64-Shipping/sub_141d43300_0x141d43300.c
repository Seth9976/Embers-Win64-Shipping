// 函数: sub_141d43300
// 地址: 0x141d43300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg1
int64_t rbx = data_143f37700
int32_t rbp = 0
bool cond:0 = data_143de5480 == 0
int64_t* result = arg1
*arg1 = 0
int64_t rdx

if (cond:0)
    rdx = 0
else
    rdx.b = GetCurrentThreadId() != data_143de5470

int64_t rdx_1 = rdx * 2
uint64_t var_58 = 0
int32_t rsi = *(rbx + (rdx_1 << 3) + 8)
int64_t rbx_1 = *(rbx + (rdx_1 << 3))
int32_t arg_10 = rsi

if (rsi != 0)
    sub_1405a4c70(&var_58, rsi, 0)
    memcpy(var_58, rbx_1, rsi * 2)
    arg_10 = rsi

int64_t rbx_2 = data_143f376e8
sub_140a387e0()
int64_t* var_68 = nullptr
int32_t var_5c = 0
int64_t* r13 = nullptr
void* r8_3 = data_14399e720
int32_t rdi = 0
int32_t r15 = 0
int32_t rax_3 = (*(r8_3 + 8))(&data_14399e720, rbx_2, r8_3)

if (rax_3 s> 0)
    do
        void* r9_1 = data_14399e720
        int64_t rax_4 = (*(r9_1 + 0x10))(&data_14399e720, rbx_2, zx.q(rbp), r9_1)
        int64_t r14
        
        if (rax_4 == 0)
            r14 = 0
        else
            r14 = rax_4 - 8
        
        int64_t rsi_1 = sx.q(rdi)
        rdi = (rsi_1 + 1).d
        
        if (rdi s> r15)
            sub_1405a4d70(&var_68)
            r15 = var_5c
            r13 = var_68
        
        rbp += 1
        r13[rsi_1] = r14
    while (rbp s< rax_3)
    
    result = result_1

int64_t* rbx_3 = r13
void* rsi_3 = &r13[sx.q(rdi)]

if (r13 != rsi_3)
    uint64_t r13_1 = var_58
    int32_t rbp_1 = arg_10
    
    do
        int64_t* rcx_3 = *rbx_3
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 8))(rcx_3, &result_1)
            
            if (result_1 != 0)
                void* rax_7 = sub_141d43b90()
                
                if (rax_7 != 0)
                    int64_t rcx_4 = sx.q(*(rax_7 + 0x38))
                    int64_t* result_2 = result_1
                    
                    if (rcx_4.d s<= result_2[7].d && *(result_2[6] + (rcx_4 << 3)) == rax_7 + 0x30
                            && result_2 != 0)
                        *result = result_2
                        void* rax_8 = sub_141d43b90()
                        int64_t rax_9
                        int64_t* result_3
                        
                        if (rax_8 != 0)
                            result_3 = result_1
                            rax_9 = sx.q(*(rax_8 + 0x38))
                        
                        if (rax_8 == 0 || rax_9.d s> result_3[7].d
                                || *(result_3[6] + (rax_9 << 3)) != rax_8 + 0x30)
                            result_3 = nullptr
                        
                        arg_10.q = result_3[3]
                        int16_t* var_48
                        sub_140b63b70(&arg_10, &var_48)
                        uint64_t rdx_10 = &data_142d40450
                        int16_t* const rcx_8 = &data_142d40450
                        
                        if (rbp_1 != 0)
                            rdx_10 = r13_1
                        
                        int32_t var_40
                        
                        if (var_40 != 0)
                            rcx_8 = var_48
                        
                        int32_t rax_12 = sub_140a54510(rcx_8, rdx_10)
                        int16_t* rcx_9 = var_48
                        rdi.b = rax_12 == 0
                        
                        if (rcx_9 != 0)
                            sub_140a74f90(rcx_9)
                        
                        if (rdi.b != 0)
                            break
        
        rbx_3 = &rbx_3[1]
    while (rbx_3 != rsi_3)
    
    r13 = var_68

if (r13 != 0)
    sub_140a74f90(r13)

uint64_t rax_13 = var_58

if (rax_13 != 0)
    sub_140a74f90(rax_13)

return result
