// 函数: sub_14297d7d0
// 地址: 0x14297d7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t** rdi = arg1
int64_t* r9 = *arg1
int64_t* i = *r9

if (i != r9)
    do
        int64_t* rcx = i[0x24]
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        int64_t* i_1 = i[2]
        
        if (*(i_1 + 0x19) == 0)
            i = i_1
            int64_t* i_3 = *i_1
            
            if (*(i_3 + 0x19) == 0)
                int64_t* i_4
                
                do
                    i = i_3
                    i_4 = *i_3
                    i_3 = i_4
                while (*(i_4 + 0x19) == 0)
        else
            int64_t* i_2 = i[1]
            
            if (*(i_2 + 0x19) == 0)
                while (i == i_2[2])
                    i = i_2
                    i_2 = i_2[1]
                    
                    if (*(i_2 + 0x19) != 0)
                        break
            
            i = i_2
        
        r9 = *rdi
    while (i != r9)
    
    i = *r9

void arg_8
sub_142980ac0(rdi, &arg_8, i, r9)
return j_sub_140a74f90(*rdi)
