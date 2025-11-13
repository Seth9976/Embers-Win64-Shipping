// 函数: sub_140d20400
// 地址: 0x140d20400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg2
int64_t rbp = 0
void* r14 = arg4
uint64_t var_60 = 0
int32_t result_1 = 0
sub_140cdd100(arg1, &var_60)
uint64_t rsi = var_60
int64_t result = sx.q(result_1)
int64_t rcx = rsi + (result << 3)
uint64_t r13_3 = (rcx - rsi + 7) u>> 3

if (rsi u> rcx)
    r13_3 = 0

if (r13_3 != 0)
    do
        void* rdi_1 = *rsi
        
        if (rdi_1 != 0)
            result = sub_140cdcfe0(rbx, *(rdi_1 + 0x18))
            
            if (result != 0)
                EnterCriticalSection(arg3 + 0x58)
                *(arg3 + 0x80) = rdi_1
                *(arg3 + 0x88) = result
                void* var_50 = arg3 + 0x80
                int64_t* var_48_1 = arg3 + 0x88
                int32_t var_68
                sub_140bbe6a0(arg3 + 8, &var_68, &var_50, nullptr)
                
                if (arg3 != -0x58)
                    LeaveCriticalSection(arg3 + 0x58)
                
                int64_t r14_1 = sx.q(*(r14 + 0xd0))
                int32_t rax = (r14_1 + 1).d
                *(r14 + 0xd0) = rax
                
                if (rax s> *(r14 + 0xd4))
                    sub_1405a4d70(r14 + 0xc8)
                
                *(*(r14 + 0xc8) + (r14_1 << 3)) = rdi_1
                r14 = arg4
                result = sub_140d20400(rdi_1, result, arg3, r14)
                rbx = arg2
        
        rsi += 8
        rbp += 1
    while (rbp != r13_3)
    
    rsi = var_60

if (rsi == 0)
    return result

return sub_140a74f90(rsi)
