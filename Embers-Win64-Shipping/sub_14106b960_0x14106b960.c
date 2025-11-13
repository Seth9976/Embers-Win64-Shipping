// 函数: sub_14106b960
// 地址: 0x14106b960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x50)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_142f04578
    rbx[2] = *arg2
    rbx[4] = 0
    
    if (rbx[2] != 0)
        void* rax_1 = arg2[2]
        void* rcx = &arg2[4]
        
        if (rax_1 != 0)
            rcx = rax_1
        
        (**rcx)(rcx)

EnterCriticalSection(arg1)
int64_t rbp = sx.q(arg1->__offset(0x30).d)
int32_t rax_3 = (rbp + 1).d
arg1->__offset(0x30).d = rax_3

if (rax_3 s> arg1->__offset(0x34).d)
    sub_1405a4d70(&arg1[1])

int64_t result = arg1->__offset(0x28).q
*(result + (rbp << 3)) = rbx

if (arg1 == 0)
    return result

return LeaveCriticalSection(arg1)
