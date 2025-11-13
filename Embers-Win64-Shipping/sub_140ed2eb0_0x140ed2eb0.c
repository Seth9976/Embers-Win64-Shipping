// 函数: sub_140ed2eb0
// 地址: 0x140ed2eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x58) != 0)
    int64_t* rcx = *(arg1 - 0x60)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
        int64_t* rcx_1
        
        if (*(arg1 - 0x58) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 - 0x60)
        
        *(arg1 - 0x68) = (*(*rcx_1 + 0x48))(rcx_1).d

if (*(arg1 - 0x68) != 0)
    void var_28
    
    if (arg3 == 0)
        sub_140a87520(arg1 + 0x138, arg2)
    else
        sub_140e903b0(arg1 + 0x138, &var_28, arg2, nullptr)
    
    if (arg4 != 0)
    label_140ed2f55:
        int64_t* rbx_1 = arg2[1]
        int64_t var_38 = *arg2
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (&var_38 != arg1 + 0x188)
            var_38.o = *(arg1 + 0x188)
            *(arg1 + 0x188) = var_38.o
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rbx_2 = arg2[1]
        var_38 = *arg2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        if (&var_38 != arg1 + 0x198)
            var_38.o = *(arg1 + 0x198)
            *(arg1 + 0x198) = var_38.o
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    else
        if (*sub_140ebd5a0(arg1 - 0x68) == 1)
            goto label_140ed2f55
        
        if (*sub_140ebd5a0(arg1 - 0x68) == 2)
            goto label_140ed2f55
    
    *(arg1 - 0x30) = 0

int64_t* rbx_3 = arg2[1]

if (rbx_3 == 0)
    return 

rbx_3[1].d -= 1

if (rbx_3[1].d != 1)
    return 

(**rbx_3)(rbx_3)
int32_t temp1_1 = *(rbx_3 + 0xc)
*(rbx_3 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_3 + 8))(rbx_3, 1)
