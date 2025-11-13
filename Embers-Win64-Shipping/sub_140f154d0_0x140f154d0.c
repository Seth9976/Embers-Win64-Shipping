// 函数: sub_140f154d0
// 地址: 0x140f154d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t var_18 = *arg2

if (rbx != 0)
    rbx[1].d += 1

int32_t result = &var_18

if (&var_18 != arg1 + 0x4d8)
    var_18.o = *(arg1 + 0x4d8)
    *(arg1 + 0x4d8) = var_18.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

if (*(arg1 + 0x528) != 0)
    int64_t* rbx_1 = *(arg1 + 0x530)
    
    if (rbx_1 != 0)
        result = rbx_1[1].d
        
        if (result s> 0)
            void* rcx_3 = nullptr
            
            if (rbx_1 != 0)
                if (result != 0)
                    rbx_1[1].d = result + 1
                    result.b = 1
                
                if (result.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rcx_3 = *(arg1 + 0x528)
            
            result = sub_140ed4670(rcx_3)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    result = (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
