// 函数: sub_1405beb90
// 地址: 0x1405beb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x34)
void* rsi = *(arg1 + 0x28)
int32_t i_2 = *(arg1 + 0x30)

if (rax s< 0)
    if (i_2 != 0)
        void* rsi_2 = rsi + 8
        int32_t i
        
        do
            int64_t* rbx_2 = *rsi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_7 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_7 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rsi_2 += 0x10
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax = *(arg1 + 0x34)
    
    *(arg1 + 0x30) = 0
    
    if (rax != 0)
        sub_1405a5410(arg1 + 0x28, 0)
else
    if (i_2 != 0)
        int64_t* rsi_1 = rsi + 8
        int32_t i_1
        
        do
            int64_t* rbx_1 = *rsi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_3 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_3 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rsi_1 = &rsi_1[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x30) = 0

void* rax_9 = sub_1405cbe50()

if (sub_140be1130(arg3[2], rax_9) != 0)
    sub_1405ce790(arg3, arg1)

*arg2 = 0
*arg2 = *(arg1 + 0x28)
*(arg1 + 0x28) = 0
arg2[1].d = *(arg1 + 0x30)
*(arg2 + 0xc) = *(arg1 + 0x34)
*(arg1 + 0x30) = 0
return arg2
