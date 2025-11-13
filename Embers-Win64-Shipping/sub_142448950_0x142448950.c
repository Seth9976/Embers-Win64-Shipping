// 函数: sub_142448950
// 地址: 0x142448950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[5]
void* rcx = *(result + 0x30)

if (rcx != 0 && *(rcx + 0x408) != 0)
    int32_t i = 0
    
    if (0 s< arg1[0xf].d)
        int64_t* r15_1 = nullptr
        
        do
            int64_t* rcx_1 = arg1[5]
            result = (*(*rcx_1 + 0x2b8))(rcx_1, 0)
            
            if (result.d == 0)
                break
            
            void** var_138
            sub_141f79e30(&var_138, arg1, 0)
            int64_t rax_1 = arg1[0xe]
            int64_t* rbx_1 = *(r15_1 + rax_1 + 8)
            int64_t* r14_1 = *(r15_1 + rax_1)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            char rax_3
            
            if ((arg1[6].b & 1) != 0)
                rax_3 = (*(*r14_1 + 0x20))(r14_1)
            
            char rcx_3
            
            if ((arg1[6].b & 1) == 0 || rax_3 != 0)
                rcx_3 = 0x20
            else
                rcx_3 = 0
            
            char var_48 = (var_48 & 0xdf) | rcx_3
            (*(*r14_1 + 0x28))(r14_1, &var_138)
            char var_10f
            
            if ((var_10f & 1) != 0)
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp4_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                result = sub_141f7bb50(&var_138)
                break
            
            int64_t r9_2
            r9_2.b = 1
            void arg_8
            (*(*arg1 + 0x2c8))(arg1, &arg_8, &var_138, r9_2)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            result = sub_141f7bb50(&var_138)
            i += 1
            r15_1 = &r15_1[2]
        while (i s< arg1[0xf].d)
    
    if (0 s>= arg1[0xf].d || i s>= arg1[0xf].d)
        result = sub_14095cd40(&arg1[0xe], 0)
    else if (i s> 0)
        result = sub_140dbae50(&arg1[0xe], 0, i, 1)

int32_t rbx_2 = arg1[0xf].d
int32_t rbx_3 = rbx_2 - 1

if (rbx_2 - 1 s>= 0)
    int64_t rsi_2 = sx.q(rbx_3) << 4
    int32_t temp1_1
    
    do
        int64_t* rcx_15 = *(rsi_2 + arg1[0xe])
        result = (*(*rcx_15 + 0x20))(rcx_15)
        
        if (result.b == 0)
            result = sub_140dbae50(&arg1[0xe], rbx_3, 1, 0)
        
        rsi_2 -= 0x10
        temp1_1 = rbx_3
        rbx_3 -= 1
    while (temp1_1 - 1 s>= 0)

return result
