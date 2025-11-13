// 函数: sub_142980ac0
// 地址: 0x142980ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t* i = arg3
void** r14 = arg1
int64_t* rsi = *arg1

if (arg3 != *rsi || arg4 != rsi)
    while (i != arg4)
        int64_t* i_5 = i
        int64_t* i_6 = i[2]
        char r9 = *(i_6 + 0x19)
        
        if (r9 == 0)
            i = i_6
            int64_t* i_3 = *i_6
            
            if (*(i_3 + 0x19) == 0)
                int64_t* i_7
                
                do
                    i = i_3
                    i_7 = *i_3
                    i_3 = i_7
                while (*(i_7 + 0x19) == 0)
        else
            int64_t* i_2 = i[1]
            
            if (*(i_2 + 0x19) == 0)
                while (i == i_2[2])
                    i = i_2
                    i_2 = i_2[1]
                    
                    if (*(i_2 + 0x19) != 0)
                        break
            
            i = i_2
        
        int64_t* i_1 = i_5
        
        if (r9 == 0)
            int64_t* rcx_3 = *i_6
            
            if (*(rcx_3 + 0x19) == 0)
                int64_t* rax_5
                
                do
                    rax_5 = *rcx_3
                    rcx_3 = rax_5
                while (*(rax_5 + 0x19) == 0)
        else
            int64_t* i_4 = i_5[1]
            
            if (*(i_4 + 0x19) == 0)
                while (i_1 == i_4[2])
                    i_1 = i_4
                    i_4 = i_4[1]
                    
                    if (*(i_4 + 0x19) != 0)
                        break
        
        j_sub_140a74f90(sub_14297e610(r14, i_5))
    
    *arg2 = i
else
    void** rdi_1 = rsi[1]
    void** rbx = rdi_1
    int64_t* rax_1 = rsi
    
    if (*(rdi_1 + 0x19) == 0)
        do
            sub_14297e5b0(r14, rbx[2])
            rbx = *rbx
            j_sub_140a74f90(rdi_1)
            rdi_1 = rbx
        while (*(rbx + 0x19) == 0)
        
        rax_1 = *r14
    
    rax_1[1] = rsi
    **r14 = rsi
    *(*r14 + 0x10) = rsi
    r14[1] = 0
    *arg2 = **r14

return arg2
