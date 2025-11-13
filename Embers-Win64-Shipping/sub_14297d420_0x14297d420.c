// 函数: sub_14297d420
// 地址: 0x14297d420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
int64_t** result = arg1
*arg1 = 0
arg1[1] = 0
*result = sub_14297e520()
int64_t* rax_1 = *arg2
int64_t* i = *rax_1

if (i != rax_1)
    do
        sub_142981040(result, &i[4], i[0x24])
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
    while (i != *arg2)

return result
