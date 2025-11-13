// 函数: sub_142c4eaf0
// 地址: 0x142c4eaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
bool r10 = arg3
int64_t* i_7 = *arg1
void** i_2 = i_7
void** i_3 = i_7[1]
arg3 = true

if (*(i_3 + 0x19) == 0)
    int64_t rdx = *arg4
    
    do
        i_2 = i_3
        
        if (r10 == 0)
            arg3 = rdx u< i_3[4]
        else
            arg3 = i_3[4] u>= rdx
        
        if (arg3 == 0)
            i_3 = i_3[2]
        else
            i_3 = *i_3
    while (*(i_3 + 0x19) == 0)

void** i_1 = i_2
void* var_10

if (arg3 != 0)
    if (i_2 == *i_7)
        int64_t var_20_1 = arg5
        *arg2 = *sub_142c4e870(arg1, &var_10, true, i_2, arg4)
        arg2[1].b = 1
        return arg2
    
    if (*(i_2 + 0x19) == 0)
        void** i_4 = *i_2
        
        if (*(i_4 + 0x19) == 0)
            i_1 = i_4
            void** i_6 = i_4[2]
            
            while (*(i_6 + 0x19) == 0)
                i_1 = i_6
                i_6 = i_6[2]
        else
            int64_t* i_5 = i_2[1]
            
            if (*(i_5 + 0x19) == 0)
                void** i = i_2
                
                while (i == *i_5)
                    i_1 = i_5
                    i_5 = i_5[1]
                    i = i_1
                    
                    if (*(i_5 + 0x19) != 0)
                        break
            
            if (*(i_1 + 0x19) == 0)
                i_1 = i_5
    else
        i_1 = i_2[2]

if (i_1[4] u>= *arg4)
    j_sub_140a74f90(arg5)
    *arg2 = i_1
    arg2[1].b = 0
    return arg2

int64_t var_20_2 = arg5
*arg2 = *sub_142c4e870(arg1, &var_10, arg3, i_2, arg4)
arg2[1].b = 1
return arg2
