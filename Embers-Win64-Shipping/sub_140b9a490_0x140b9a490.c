// 函数: sub_140b9a490
// 地址: 0x140b9a490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int32_t* result = sub_1408296b0(arg3, &var_38, arg2)

if (*result != 0xffffffff)
    return result

int32_t i = 0

if (*(arg2 + 0x78) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int32_t r8_1 = *(arg1 + 0x78)
        void* r10_1 = *(rsi_1 + *(arg2 + 0x70))
        int32_t rax_1 = 0
        
        if (r8_1 s> 0)
            int64_t* rdx_1 = *(arg1 + 0x70)
            
            while (*(*rdx_1 + 0x14) != *(r10_1 + 0x14))
                rax_1 += 1
                rdx_1 = &rdx_1[1]
                
                if (rax_1 s>= r8_1)
                    goto label_140b9a51b
        
        if (r8_1 s<= 0 || rax_1 == 0xffffffff)
        label_140b9a51b:
            void* rax_2 = *(r10_1 + 0x50)
            
            if (rax_2 == 0 || *(rax_2 + 0x329) == 0)
                sub_140b9a630(arg1, r10_1 + 0x14, arg4)
            else if (arg1 != r10_1)
                sub_140b9a490(arg1, r10_1, arg3, arg4)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(arg2 + 0x78))

int32_t var_30
sub_140b9b5d0(arg3, &var_30)
uint32_t rcx_6 = (arg2 u>> 4).d
int32_t rdx_6 = (0x9e3779b9 - rcx_6) ^ rcx_6 << 8
int64_t* var_28
*var_28 = arg2
var_28[1].d = 0xffffffff
int32_t r8_6 = neg.d(rdx_6 + rcx_6) ^ rdx_6 u>> 0xd
int32_t rcx_9 = (rcx_6 - rdx_6 - r8_6) ^ r8_6 u>> 0xc
int32_t rdx_9 = (rdx_6 - rcx_9 - r8_6) ^ rcx_9 << 0x10
int32_t r8_9 = (r8_6 - rdx_9 - rcx_9) ^ rdx_9 u>> 5
int32_t rcx_12 = (rcx_9 - rdx_9 - r8_9) ^ r8_9 u>> 3
int32_t rdx_12 = (rdx_9 - rcx_12 - r8_9) ^ rcx_12 << 0xa
return sub_140ba1b00(arg3, &var_38, (r8_9 - rdx_12 - rcx_12) ^ rdx_12 u>> 0xf, var_28, var_30, 
    nullptr)
