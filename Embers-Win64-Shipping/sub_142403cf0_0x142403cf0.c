// 函数: sub_142403cf0
// 地址: 0x142403cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x178))

if (result.d == *(arg1 + 0x1a4))
    result = sx.q(*(arg1 + 0x138))
    int64_t* i = *(arg1 + 0x130)
    
    for (void* rsi_1 = &i[result * 3]; i != rsi_1; i = &i[3])
        int64_t var_28 = *i
        result = sub_140d6df00(&var_28)
        
        if (result.b != 0)
            int64_t* var_38 = &var_28
            void* var_30_1 = &i[1]
            void arg_8
            result = sub_1423f6ae0(arg1 + 0x170, &arg_8, &var_38, nullptr)
        
        int64_t* rbx_1 = zx.o(0):8.q
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)

return result
