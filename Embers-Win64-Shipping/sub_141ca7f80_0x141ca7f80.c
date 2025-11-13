// 函数: sub_141ca7f80
// 地址: 0x141ca7f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t rsi = 0
int64_t* r12 = arg2
void* r15 = *(arg1 + 0xb8)
int64_t var_58
int64_t var_48

if (r15 != 0)
    int32_t rbx_1 = arg2[1].d
    int64_t rdi_1 = *arg2
    void* var_78 = nullptr
    int32_t var_70_1 = 0
    var_48 = 0
    int64_t var_40_1 = 0
    var_58 = 0
    int32_t var_50_1 = rbx_1
    sub_1405a4c70(&var_58, sbb.d(arg2.d, arg2.d, rbx_1 != 0) + 2 + rbx_1, 0)
    memcpy(var_58, rdi_1, rbx_1 * 2)
    sub_140a2cf70(&var_58, &data_142d40450, 0)
    char rax_3
    rax_3, arg2 = sub_140bbd1d0(&var_58, &var_78, &var_48)
    int64_t rcx_4 = var_58
    
    if (rcx_4 != 0)
        arg2 = sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = var_48
    
    if (rcx_5 != 0)
        arg2 = sub_140a74f90(rcx_5)
    
    if (rax_3 != 0)
        EnterCriticalSection(r15 + 8)
        
        if (r15 + 0x30 != &var_78)
            void* r13_1 = var_78
            int32_t r8_4 = *(r15 + 0x3c)
            *(r15 + 0x38) = var_70_1
            
            if (var_70_1 != 0 || r8_4 != 0)
                sub_1405a4c70(r15 + 0x30, var_70_1, r8_4)
                memcpy(*(r15 + 0x30), r13_1, var_70_1 * 2)
            else
                *(r15 + 0x3c) = 0
            
            r12 = arg_10
        
        arg2 = sub_141cb58a0(r15, 0xffffffff)
        
        if (r15 != -8)
            arg2 = LeaveCriticalSection(r15 + 8)
    
    void* rcx_11 = var_78
    
    if (rcx_11 != 0)
        arg2 = sub_140a74f90(rcx_11)

int32_t rbx_4 = r12[1].d
int64_t rdi_3 = *r12
void* var_68 = nullptr
int32_t var_60 = 0
var_48 = 0
int64_t var_40_2 = 0
var_58 = 0
int32_t var_50_2 = rbx_4
sub_1405a4c70(&var_58, sbb.d(arg2.d, arg2.d, rbx_4 != 0) + 2 + rbx_4, 0)
memcpy(var_58, rdi_3, rbx_4 * 2)
sub_140a2cf70(&var_58, &data_142d40450, 0)
int32_t result = sub_140bbd1d0(&var_58, &var_68, &var_48)
int64_t rcx_16 = var_58
char rbx_5 = result.b

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = var_48

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

if (rbx_5 != 0)
    void* lpCriticalSection = arg1 + 8
    EnterCriticalSection(lpCriticalSection)
    
    if (arg1 + 0x30 != &var_68)
        void* r12_2 = var_68
        int32_t r8_10 = *(arg1 + 0x3c)
        *(arg1 + 0x38) = var_60
        
        if (var_60 != 0 || r8_10 != 0)
            sub_1405a4c70(arg1 + 0x30, var_60, r8_10)
            memcpy(*(arg1 + 0x30), r12_2, var_60 * 2)
        else
            *(arg1 + 0x3c) = 0
    
    EnterCriticalSection(lpCriticalSection)
    result = *(arg1 + 0x38)
    
    if (result != 0)
        result -= 1
        
        if (result s> 0)
            result = *(arg1 + 0x48)
            int32_t i = 0
            arg_10.d = result
            
            if (result s> 0)
                int64_t r15_2 = 0
                int64_t r12_3 = 0
                int64_t r13_2 = 0
                int64_t rbx_6 = 0
                
                do
                    result = sub_140a32a50(*(arg1 + 0x40) + sx.q(i) * 0x18, arg1 + 0x30, 1)
                    
                    if (result.b != 0)
                        if (r12_3 != r15_2)
                            void* rax_7 = *(arg1 + 0x40)
                            result = sub_140a4bff0(rax_7 + r13_2, rax_7 + rbx_6, 0x18)
                        
                        r15_2 += 1
                        rbx_6 += 0x18
                        rsi += 1
                        
                        if (rsi s>= arg_10.d)
                            break
                    
                    i += 1
                    r12_3 += 1
                    r13_2 += 0x18
                while (i s< *(arg1 + 0x48))
    
    if (lpCriticalSection != 0)
        result = LeaveCriticalSection(lpCriticalSection)
        
        if (lpCriticalSection != 0)
            result = LeaveCriticalSection(lpCriticalSection)

void* rcx_27 = var_68

if (rcx_27 == 0)
    return result

return sub_140a74f90(rcx_27)
