// 函数: sub_14097eb00
// 地址: 0x14097eb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1409612a0(arg1, arg2)

if (rax != 0)
    int64_t r8_1 = *rax
    (*(r8_1 + 0x648))(rax, arg3, r8_1)

int64_t* rax_1 = sub_14096ade0(arg1, arg2)

if (rax_1[1].d != 0)
    int64_t* rcx_2 = *rax_1
    
    if (rcx_2 != 0)
        int64_t r8_2 = *rcx_2
        (*(r8_2 + 0x38))(rcx_2, 0, r8_2)
        int64_t rcx_3 = *rax_1
        
        if (rcx_3 != 0)
            *rax_1 = sub_140a84c80(rcx_3, 0, 0)
        
        rax_1[1].d = 0

int64_t* result = sub_14096acd0(arg1, arg2)
void** result_1 = result

if (result[1].d != 0)
    int64_t* rcx_5 = *result
    
    if (rcx_5 != 0)
        int64_t r8_3 = *rcx_5
        result = (*(r8_3 + 0x38))(rcx_5, 0, r8_3)
        void* rcx_6 = *result_1
        
        if (rcx_6 != 0)
            result = sub_140a84c80(rcx_6, 0, 0)
            *result_1 = result
        
        result_1[1].d = 0

return result
