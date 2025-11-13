// 函数: sub_14298c530
// 地址: 0x14298c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
char rdi = arg3.b
int64_t* i_7 = *arg1
void** i_3 = i_7
void** i_8 = i_7[1]
arg3.b = 1

if (*(i_8 + 0x19) == 0)
    char* r9 = *arg4
    
    do
        i_3 = i_8
        int32_t r8
        
        if (rdi == 0)
            char* rax_2 = r9
            
            while (true)
                char rcx_1 = *rax_2
                char temp1_1 = *(rax_2 + i_8[4] - r9)
                
                if (rcx_1 != temp1_1)
                    r8 = sbb.d(arg3, arg3, rcx_1 u< temp1_1) | 1
                    break
                
                rax_2 = &rax_2[1]
                
                if (rcx_1 == 0)
                    r8 = 0
                    break
        else
            char* rax_1 = i_8[4]
            void* rdx_1 = r9 - rax_1
            
            while (true)
                char rcx = *rax_1
                char temp2_1 = *(rax_1 + rdx_1)
                
                if (rcx != temp2_1)
                    r8 = not.d(sbb.d(arg3, arg3, rcx u< temp2_1) | 1)
                    break
                
                rax_1 = &rax_1[1]
                
                if (rcx == 0)
                    r8 = -1
                    break
        
        arg3 = r8 u>> 0x1f
        
        if (arg3.b == 0)
            i_8 = i_8[2]
        else
            i_8 = *i_8
    while (*(i_8 + 0x19) == 0)

int64_t* i_2 = i_3
int64_t* arg_8

if (arg3.b != 0)
    if (i_3 == *i_7)
        char var_30_1 = arg5
        arg3.b = 1
        *arg2 = *sub_14298c2a0(arg1, &arg_8, arg3.b, i_3, arg4)
        arg2[1].b = 1
        return arg2
    
    if (*(i_3 + 0x19) == 0)
        int64_t* i_4 = *i_3
        
        if (*(i_4 + 0x19) == 0)
            i_2 = i_4
            int64_t* i_6 = i_4[2]
            
            while (*(i_6 + 0x19) == 0)
                i_2 = i_6
                i_6 = i_6[2]
        else
            int64_t* i_5 = i_3[1]
            
            if (*(i_5 + 0x19) == 0)
                int64_t* i = i_3
                
                while (i == *i_5)
                    i_2 = i_5
                    i_5 = i_5[1]
                    i = i_2
                    
                    if (*(i_5 + 0x19) != 0)
                        break
            
            if (*(i_2 + 0x19) == 0)
                i_2 = i_5
    else
        i_2 = i_3[2]

char* rcx_3 = i_2[4]
void* r10_1 = *arg4 - rcx_3
uint32_t i_1
uint32_t r9_3

do
    r9_3 = zx.d(*rcx_3)
    i_1 = zx.d(*(rcx_3 + r10_1))
    
    if (r9_3 != i_1)
        break
    
    rcx_3 = &rcx_3[1]
while (i_1 != 0)

if (r9_3 - i_1 s>= 0)
    *arg2 = i_2
    arg2[1].b = 0
    return arg2

char var_30_2 = arg5
*arg2 = *sub_14298c2a0(arg1, &arg_8, arg3.b, i_3, arg4)
arg2[1].b = 1
return arg2
