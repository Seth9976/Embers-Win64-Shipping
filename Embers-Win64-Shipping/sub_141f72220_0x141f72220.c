// 函数: sub_141f72220
// 地址: 0x141f72220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* r15 = arg1[0xb6]
int64_t* r15_1

if (r15 == 0)
    void* rax_1 = arg1[0x86]
    
    if (rax_1 != 0)
        r15_1 = *(rax_1 + 0x58)
        goto label_141f72255
else
    r15_1 = *(r15 + 0x40)
label_141f72255:
    
    if (r15_1 != 0)
        sub_141f6b830(arg1)
        int32_t i = 0
        
        if (arg1[0xaf].d s> 0)
            int64_t rsi_1 = 0
            int64_t* r14_1 = nullptr
            
            do
                if (i s> data_143a2d2a8)
                    int64_t* rax_3 = sub_141e42170(*(r14_1 + *r15_1) + 0x300, &arg_10)
                    
                    if (rax_3 != 0)
                        *(arg1[0xae] + rsi_1 + 0x20) = rax_3
                        int64_t rax_4 = arg_10
                        *(arg1 + 0x5a6) |= 2
                        arg1[0xb7] = rax_4
                
                i += 1
                r14_1 = &r14_1[1]
                rsi_1 += 0x28
            while (i s< arg1[0xaf].d)
        
        if ((*(arg1 + 0x5a6) & 2) != 0)
            *(arg1 + 0x5a9) |= 2
            sub_141ee8470(arg1)
            int64_t* rcx_4 = arg1[0xb6]
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x58))(rcx_4, arg1)
return *(arg1 + 0x5a6) u>> 1 & 1
