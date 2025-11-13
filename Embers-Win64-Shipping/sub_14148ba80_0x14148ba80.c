// 函数: sub_14148ba80
// 地址: 0x14148ba80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_10 = *(arg1 + 0x570)
char r10 = arg2
char r9

if (0f f>= *(arg1 + 0x3e4) || test_bit(rax_10, 9))
    r9 = 0
else
    r9 = 1

if ((rax_10.b & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (rax_10.b & 0x10) == 0)
    arg2 = 0
else
    arg2 = 1

void* rax = *(arg1 + 0x5c0)
void* rcx = *(rax + 0x20)
int32_t rcx_1

if ((*(rcx + 0x138) & 8) == 0)
    rcx_1 = *(rax + 0x60)
else
    rcx_1 = *(rcx + 0xfc)

int64_t result = 0

if (r10 == 0)
    if (arg2 != 0)
        if (r9 != 0)
            return data_1439b6f40
        
        return data_1439b6f58
    
    result = data_1439b6f88
    
    if (arg3 != 0)
        return data_1439b6f70
else if (r9 == 0)
    if (rcx_1 == 0)
        return data_1439b6ee0
    
    if (rcx_1 == 1)
        return data_1439b6ef8
    
    if (rcx_1 == 2)
        return data_1439b6f10
    
    if (rcx_1 == 3)
        return data_1439b6f28
else
    if (rcx_1 == 0)
        return data_1439b6e80
    
    if (rcx_1 == 1)
        return data_1439b6e98
    
    if (rcx_1 == 2)
        return data_1439b6eb0
    
    if (rcx_1 == 3)
        return data_1439b6ec8

return result
