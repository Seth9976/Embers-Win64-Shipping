// 函数: sub_1429c98a0
// 地址: 0x1429c98a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
bool r10 = arg3
int64_t* i_6 = *arg1
void** i_5 = i_6[1]
void** i_4 = i_6
arg3 = true

if (*(i_5 + 0x19) == 0)
    int32_t rdx = *arg4
    
    do
        i_4 = i_5
        
        if (r10 == 0)
            arg3 = rdx s< i_5[4].d
        else
            arg3 = i_5[4].d s>= rdx
        
        if (arg3 == 0)
            i_5 = i_5[2]
        else
            i_5 = *i_5
    while (*(i_5 + 0x19) == 0)

void** i = i_4
void* var_10

if (arg3 != 0)
    if (i_4 == *i_6)
        void* var_20_1 = arg5
        *arg2 = *sub_1429c9350(arg1, &var_10, true, i_4, arg4)
        arg2[1].b = 1
        return arg2
    
    if (*(i_4 + 0x19) == 0)
        void** i_1 = *i_4
        
        if (*(i_1 + 0x19) != 0)
            int64_t* i_3 = i_4[1]
            
            if (*(i_3 + 0x19) == 0)
                while (i == *i_3)
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0x19) != 0)
                        break
            
            if (*(i + 0x19) == 0)
                i = i_3
        else
            i = i_1
            void** i_2 = i_1[2]
            
            while (*(i_2 + 0x19) == 0)
                i = i_2
                i_2 = i_2[2]
    else
        i = i_4[2]

if (i[4].d s< *arg4)
    void* var_20_2 = arg5
    *arg2 = *sub_1429c9350(arg1, &var_10, arg3, i_4, arg4)
    arg2[1].b = 1
    return arg2

void* rdx_3 = *(arg5 + 0x28)

if (rdx_3 != 0)
    sub_1429cc220(arg5 + 0x28, rdx_3, (*(arg5 + 0x38) - rdx_3) s>> 2)
    __builtin_memset(arg5 + 0x28, 0, 0x18)

j_sub_140a74f90(arg5)
*arg2 = i
arg2[1].b = 0
return arg2
