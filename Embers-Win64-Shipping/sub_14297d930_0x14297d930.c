// 函数: sub_14297d930
// 地址: 0x14297d930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t** result = arg1

if (arg1 == arg2)
    return result

int64_t* r9 = *arg1
int64_t* i = *r9

if (i != r9)
    do
        int64_t* rcx = i[0x24]
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        int64_t* i_2 = i[2]
        
        if (*(i_2 + 0x19) == 0)
            int64_t* i_6 = *i_2
            i = i_2
            
            if (*(i_6 + 0x19) == 0)
                int64_t* i_8
                
                do
                    i_8 = *i_6
                    i = i_6
                    i_6 = i_8
                while (*(i_8 + 0x19) == 0)
        else
            int64_t* i_3 = i[1]
            
            if (*(i_3 + 0x19) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0x19) != 0)
                        break
            
            i = i_3
        
        r9 = *result
    while (i != r9)
    
    i = *r9

void arg_8
sub_142980ac0(result, &arg_8, i, r9)
void** rax_2 = *arg2
int64_t* i_1 = *rax_2

if (i_1 != rax_2)
    do
        sub_142981040(result, &i_1[4], i_1[0x24])
        int64_t* i_4 = i_1[2]
        
        if (*(i_4 + 0x19) == 0)
            int64_t* i_7 = *i_4
            i_1 = i_4
            
            if (*(i_7 + 0x19) == 0)
                int64_t* i_9
                
                do
                    i_9 = *i_7
                    i_1 = i_7
                    i_7 = i_9
                while (*(i_9 + 0x19) == 0)
        else
            int64_t* i_5 = i_1[1]
            
            if (*(i_5 + 0x19) == 0)
                while (i_1 == i_5[2])
                    i_1 = i_5
                    i_5 = i_5[1]
                    
                    if (*(i_5 + 0x19) != 0)
                        break
            
            i_1 = i_5
    while (i_1 != *arg2)

return result
