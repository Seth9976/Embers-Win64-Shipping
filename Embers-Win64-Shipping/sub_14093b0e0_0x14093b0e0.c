// 函数: sub_14093b0e0
// 地址: 0x14093b0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t arg_10 = arg2
int64_t arg_8

if (*(arg1 + 0x70) != *(arg1 + 0x9c))
    arg_8 = arg2
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg_8:4.d
    void* r8 = arg1 + 0xa0
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t i = *(r8 + (((sx.q(*(arg1 + 0xb0)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_1 = *(arg1 + 0x68)
        
        do
            int64_t rdx_3 = sx.q(i) * 3
            
            if (*(r8_1 + (rdx_3 << 3)) == arg2)
                if (i != 0xffffffff)
                    return i
                
                break
            
            i = *(r8_1 + (rdx_3 << 3) + 0x10)
        while (i != 0xffffffff)

int64_t* var_18 = &arg_10
int64_t* var_10_1 = &arg_18
return sub_14093bb90(arg1 + 0x68, &arg_8, &var_18, nullptr)
