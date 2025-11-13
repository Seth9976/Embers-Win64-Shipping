// 函数: sub_141cc48a0
// 地址: 0x141cc48a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
bool arg_10 = arg1[1].d == 0
(*(rax + 0x158))(arg2, &arg_10, 1)
uint32_t result

if (arg_10 == 0)
    void* rax_2 = data_143f35848
    
    if (rax_2 == 0)
        sub_141cc3750()
        rax_2 = data_143f35848
    
    char r8 = (*(rax_2 + 0x30)).b
    char i_3
    
    if ((arg2[5].b & 2) == 0)
        int64_t rax_6 = *arg2
        i_3 = 0
        (*(rax_6 + 0x158))(arg2, &i_3, r8)
        uint32_t i_5 = zx.d(i_3)
        char rbx_2 = 0
        int32_t r12_1 = 0
        arg1[1].d = 0
        
        if (*(arg1 + 0xc) != i_5)
            sub_1405c5570(arg1, i_5)
            r12_1 = arg1[1].d
        
        uint32_t i_2 = zx.d(i_3)
        int32_t rax_7 = r12_1 + i_2
        arg1[1].d = rax_7
        
        if (rax_7 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
        
        int64_t* rdx_5 = *arg1 + (sx.q(r12_1) << 3)
        
        if (i_2 != 0)
            uint32_t i
            
            do
                *rdx_5 = 0
                rdx_5 = &rdx_5[1]
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        if (i_3 u> 0)
            do
                sub_141cc4a80(*arg1 + (zx.q(rbx_2) << 3), arg2, arg3, arg4)
                rbx_2 += 1
            while (rbx_2 u< i_3)
        
        sub_141cc23c0(arg1)
    else
        char i_6 = arg1[1].b
        char i_4 = i_6
        
        if (i_6 u> (1 << r8) - 1)
            i_4 = (1 << r8) - 1
        
        int64_t rax_4 = *arg2
        i_3 = i_4
        (*(rax_4 + 0x158))(arg2, &i_3, r8)
        int32_t i_1 = 0
        
        if (i_3 u> 0)
            do
                sub_141cc4a80(*arg1 + (sx.q(i_1) << 3), arg2, arg3, arg4)
                i_1 += 1
            while (i_1 s< zx.d(i_3))
else if (arg1[1].d s> 0)
    int32_t rax_1 = *(arg1 + 0xc)
    arg1[1].d = 0
    
    if (rax_1 s< 0 && rax_1 != 0)
        sub_1405c5570(arg1, 0)
    
    result = *(arg1 + 0x1c)
    arg1[3].d = 0
    
    if (result s< 0 && result != 0)
        sub_1405c5570(&arg1[2], 0)

*arg4 = 1
result.b = 1
return result
