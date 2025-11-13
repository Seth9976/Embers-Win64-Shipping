// 函数: sub_1421b5a70
// 地址: 0x1421b5a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
void* var_38 = rax
int64_t* i_2

if (rax == 0)
    i_2 = nullptr
else
    i_2 = *(rax + 0x50)

int32_t var_28 = 0xffffffff
int16_t var_24 = 0x101
char var_22 = 0
int64_t result = sub_1406328d0(&var_38)
int64_t* i_1

for (int64_t* i = i_2; i != 0; i = i_1)
    sub_140d12020()
    int64_t rax_1
    
    if ((data_143e1c4a8 & *(i[1] + 0x10)) == 0)
        sub_140cea290()
        
        if ((data_143e1b8c8 & *(i[1] + 0x10)) != 0)
            int64_t rax_2 = sub_1424a0040()
            int64_t rax_3
            
            if (i[0xf] != rax_2)
                rax_3 = sub_14249ef40()
            
            if (i[0xf] == rax_2 || i[0xf] == rax_3)
                rax_1 = (*(*i + 0x140))(i, sx.q(*(i + 0x4c)) + arg1)
                goto label_1421b5b47
    else
        rax_1 = sub_141fee270(i, arg1)
    label_1421b5b47:
        
        if (rax_1 != 0)
            int64_t rbx_1 = sx.q(arg2[1].d)
            int32_t rax_5 = (rbx_1 + 1).d
            arg2[1].d = rax_5
            
            if (rax_5 s> *(arg2 + 0xc))
                sub_1405a4df0(arg2)
            
            int64_t* rbx_2 = *arg2 + rbx_1 * 0x18
            
            if (rbx_2 == 0)
                rbx_2 = nullptr
            else
                *rbx_2 = 0
                rbx_2[1] = 0
            
            rbx_2[2] = rax_1
            int64_t var_48
            sub_140b63b70(&i[5], &var_48)
            
            if (rbx_2 == &var_48)
                int64_t rcx_9 = var_48
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
            else
                int64_t rcx_8 = *rbx_2
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                *rbx_2 = var_48
                int32_t var_40
                rbx_2[1].d = var_40
                int32_t var_3c
                *(rbx_2 + 0xc) = var_3c
                var_40.q = 0
                var_48 = 0
    i_1 = i[4]
    result = sub_1406328d0(&var_38)

return result
