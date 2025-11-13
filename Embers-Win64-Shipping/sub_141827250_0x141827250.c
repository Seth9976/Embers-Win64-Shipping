// 函数: sub_141827250
// 地址: 0x141827250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int16_t* const rbp = &data_142d40450
int64_t arg_10 = 0
int64_t r13
r13.b = 0
int64_t r14
r14.b = 0
int64_t* rsi
rsi.b = 0
int64_t r15
r15.b = 0
int64_t* rcx = *(rax + 0x50)
int64_t* rax_1 = arg1[1]
int16_t* const rdx

if (rax_1[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *rax_1

char rax_3 = (*(*rcx + 0x18))(rcx, rdx, &arg_10)
arg1[1][1].d
(*(**(*arg1 + 0x50) + 0x80))()

if (rax_3 == 0)
    arg_10 = 0
else
    int64_t arg_8
    int32_t temp0_1 = *sub_140960120(arg1[2], &arg_8, arg1[1])
    r13.b = temp0_1 != 0xffffffff
    
    if (temp0_1 == 0xffffffff)
        int64_t* rcx_4 = *(*arg1 + 0x50)
        int64_t* rax_7 = arg1[1]
        int16_t* const rdx_3
        
        if (rax_7[1].d == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *rax_7
        
        if ((*(*rcx_4 + 0x28))(rcx_4, rdx_3, &arg_8) == 0 || arg_8 s>= *arg1[3])
            r14.b = 0
        else
            r14.b = 1
        
        rsi = arg1[1]
        
        if (sub_140a237d0(rsi, u".chunk", 1) != 0)
            rsi.b = 1
        else if (sub_140a237d0(rsi, u".delta", 1) != 0)
            rsi.b = 1
        else if (sub_140a237d0(rsi, u".file", 1) != 0)
            rsi.b = 1
        else
            rsi.b = 0
        
        if (r14.b == 0 || rsi.b == 0)
            r15.b = 0
        else
            void* rax_14 = *arg1
            r15.b = 1
            
            if (*(rax_14 + 0x30) == 0)
                int64_t* rcx_9 = *(rax_14 + 0x50)
                int16_t** rax_15 = arg1[1]
                
                if (rax_15[1].d != 0)
                    rbp = *rax_15
                
                (*(*rcx_9 + 0x68))(rcx_9, rbp)

*(arg2 + 8) = arg_10
*arg2 = r13.b
arg2[1] = r14.b
arg2[2] = rsi.b
arg2[3] = r15.b
return arg2
