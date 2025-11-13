// 函数: sub_142984780
// 地址: 0x142984780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_18 = -2
char rbx = arg3.b
int64_t* r9 = *arg1
void** r11 = r9
void** r10 = r9[1]
arg3.b = 1

while (*(r10 + 0x19) == 0)
    r11 = r10
    int32_t r8
    
    if (rbx == 0)
        char* rax_2 = arg4
        
        while (true)
            char rcx_1 = *rax_2
            char temp1_1 = *(rax_2 + &r10[4] - arg4)
            
            if (rcx_1 != temp1_1)
                r8 = sbb.d(arg3, arg3, rcx_1 u< temp1_1) | 1
                break
            
            rax_2 = &rax_2[1]
            
            if (rcx_1 == 0)
                r8 = 0
                break
    else
        void* rax_1 = &r10[4]
        void* rdx_1 = arg4 - rax_1
        
        while (true)
            char rcx = *rax_1
            char temp2_1 = *(rax_1 + rdx_1)
            
            if (rcx != temp2_1)
                r8 = not.d(sbb.d(arg3, arg3, rcx u< temp2_1) | 1)
                break
            
            rax_1 += 1
            
            if (rcx == 0)
                r8 = -1
                break
    
    arg3 = r8 u>> 0x1f
    
    if (arg3.b == 0)
        r10 = r10[2]
    else
        r10 = *r10

int64_t* rbx_1 = r11
int64_t* rcx_2 = r11
void* var_10

if (arg3.b != 0)
    if (r11 == *r9)
        int64_t var_20_1 = arg5
        arg3.b = 1
        *arg2 = *sub_142984250(arg1, &var_10, arg3.b, r11, arg4)
        arg2[1].b = 1
        return arg2
    
    if (*(r11 + 0x19) == 0)
        int64_t* rax_7 = *r11
        
        if (*(rax_7 + 0x19) == 0)
            rbx_1 = rax_7
            int64_t* rax_9 = rax_7[2]
            
            while (*(rax_9 + 0x19) == 0)
                rbx_1 = rax_9
                rax_9 = rax_9[2]
            
            rcx_2 = rbx_1
        else
            int64_t* rax_8 = r11[1]
            
            if (*(rax_8 + 0x19) == 0)
                void** rdx_5 = r11
                
                do
                    rcx_2 = rdx_5
                    
                    if (rdx_5 != *rax_8)
                        break
                    
                    rbx_1 = rax_8
                    rax_8 = rax_8[1]
                    rdx_5 = rbx_1
                    rcx_2 = rbx_1
                while (*(rax_8 + 0x19) == 0)
            
            if (*(rbx_1 + 0x19) == 0)
                rbx_1 = rax_8
                rcx_2 = rax_8
    else
        rbx_1 = r11[2]
        rcx_2 = rbx_1

void* rax_10 = &rcx_2[4]
void* r9_4 = arg4 - rax_10
uint32_t i
uint32_t rdx_6

do
    rdx_6 = zx.d(*rax_10)
    i = zx.d(*(rax_10 + r9_4))
    
    if (rdx_6 != i)
        break
    
    rax_10 += 1
while (i != 0)

if (rdx_6 - i s>= 0)
    j_sub_140a74f90(arg5)
    *arg2 = rbx_1
    arg2[1].b = 0
    return arg2

int64_t var_20_2 = arg5
*arg2 = *sub_142984250(arg1, &var_10, arg3.b, r11, arg4)
arg2[1].b = 1
return arg2
