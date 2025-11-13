// 函数: sub_140f4f000
// 地址: 0x140f4f000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int32_t zmm1 = data_14399f65c
int32_t var_28 = data_14399f658
int32_t var_24 = zmm1
int64_t var_18 = 0
int32_t var_10 = 0
char var_20 = 1
void* rax = sub_140f46840(arg1)

if (rax != 0)
    sub_140f1b050(data_143e20cf4, arg2, arg3, rax, &var_28)
    int64_t* rbx_1 = *(arg1 + 0x310)
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 != 0)
            rbx_1[1].d = rax_1 + 1
            rax_1.b = 1
        
        if (rax_1.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rsi = *(arg1 + 0x308)
    
    int64_t r14_1 = *(rax + 0x10)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rsi != r14_1)
        *(arg1 + 0x308) = *(rax + 0x10)
        void* rbx_2 = *(rax + 0x18)
        int64_t* rcx_3 = *(arg1 + 0x310)
        
        if (rbx_2 != rcx_3)
            if (rbx_2 != 0)
                *(rbx_2 + 0xc) += 1
                rcx_3 = *(arg1 + 0x310)
            
            if (rcx_3 != 0)
                int32_t temp3_1 = *(rcx_3 + 0xc)
                *(rcx_3 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rcx_3 + 8))(rcx_3, 1)
            
            *(arg1 + 0x310) = rbx_2
        
        void* rax_6 = data_143e29f28
        int64_t* rbx_3 = *(rax_6 + 0xb0)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        *(*(rax_6 + 0xa8) + 0x78) = 1
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp4_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)

return sub_140745b20(&var_18)
