// 函数: sub_140db2f50
// 地址: 0x140db2f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg3[1]
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax = result_1[1].d
    
    if (rax == 0)
        result_1 = nullptr
        result = nullptr
    else
        result_1[1].d = rax + 1
        result = result_1

void* const i

if (result != 0)
    i = *arg3

int64_t rbp

if (result == 0 || i == 0)
    rbp = *arg2
    i = nullptr
label_140db3017:
    
    while (i != 0)
        if (rbp == i)
            if (result_1 != 0)
                result_1[1].d -= 1
                
                if (result_1[1].d == 1)
                    (**result_1)(result_1)
                    int32_t temp6_1 = *(result_1 + 0xc)
                    *(result_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*result_1 + 8))(result_1, 1)
            
            int64_t* rbx_3 = arg2[1]
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp7_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            result.b = 1
            goto label_140db3011
        
        int64_t* rbx_2 = *(i + 0x38)
        void* rcx_4 = i + 0x30
        i = nullptr
        
        if (rbx_2 != 0)
            result = zx.q(rbx_2[1].d)
            
            if (result.d == 0)
                rbx_2 = nullptr
            label_140db3048:
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp9_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            else
                rbx_2[1].d = result.d + 1
                
                if (rbx_2 != 0)
                    i = *rcx_4
                    goto label_140db3048
else
    rbp = *arg2
    
    if (i != rbp)
        goto label_140db3017

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        (**result_1)(result_1)
        int32_t temp2_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*result_1 + 8))(result_1, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

result.b = 0
label_140db3011:
return result
