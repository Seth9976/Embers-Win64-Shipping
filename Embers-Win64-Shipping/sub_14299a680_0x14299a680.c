// 函数: sub_14299a680
// 地址: 0x14299a680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int64_t* i = arg3
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
            int64_t* rcx_1 = *i_6
            
            if (*(rcx_1 + 0x19) == 0)
                int64_t* rax_5
                
                do
                    rax_5 = *rcx_1
                    rcx_1 = rax_5
                while (*(rax_5 + 0x19) == 0)
        else
            int64_t* i_4 = i_5[1]
            
            if (*(i_4 + 0x19) == 0)
                while (i_1 == i_4[2])
                    i_1 = i_4
                    i_4 = i_4[1]
                    
                    if (*(i_4 + 0x19) != 0)
                        break
        
        int64_t* rax_6 = sub_14297e610(arg1, i_5)
        int64_t rdx_1 = rax_6[7]
        
        if (rdx_1 u>= 0x10)
            void* rcx_3 = rax_6[4]
            
            if (rdx_1 + 1 u>= 0x1000)
                void* r8 = *(rcx_3 - 8)
                
                if (rcx_3 - r8 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rcx_3 = r8
            
            j_sub_140a74f90(rcx_3)
        
        rax_6[6] = 0
        rax_6[7] = 0xf
        rax_6[4].b = 0
        j_sub_140a74f90(rax_6)
    
    *arg2 = i
else
    sub_1429977e0(arg1, rsi[1])
    *(*arg1 + 8) = rsi
    **arg1 = rsi
    *(*arg1 + 0x10) = rsi
    arg1[1] = 0
    *arg2 = **arg1

return arg2
