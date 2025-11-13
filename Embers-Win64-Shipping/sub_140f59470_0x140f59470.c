// 函数: sub_140f59470
// 地址: 0x140f59470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 1)
    if (*arg2 != arg1[0x88])
        sub_140e78f50(data_143e29f28, &arg1[0x82], 0)
        int64_t* rbx_1 = arg2[1]
        int64_t var_38 = *arg2
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (&var_38 != &arg1[0x88])
            var_38.o = *(arg1 + 0x440)
            *(arg1 + 0x440) = var_38.o
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        var_38 = *arg2
        void* rax_6 = arg2[1]
        void* var_30_2 = rax_6
        
        if (rax_6 != 0)
            *(rax_6 + 8) += 1
        
        sub_140f44720(&arg1[0x86], &var_38, arg3)
    
    arg3.b = 1
    (*(*arg1 + 0x248))(arg1, 0, arg3, 0)

int64_t* rbx_2 = arg2[1]

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp1_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx_2 + 8))
