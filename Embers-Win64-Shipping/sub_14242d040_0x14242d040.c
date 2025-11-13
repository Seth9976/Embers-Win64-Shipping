// 函数: sub_14242d040
// 地址: 0x14242d040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

if (arg1[4].b != 0)
    int32_t i_6 = arg1[3].d
    int32_t rdi_1 = 0
    int64_t r10_1 = arg1[2]
    void* arg_10 = arg2
    int32_t i = i_6
    
    if (i_6 s> 0)
        do
            int32_t rcx_1 = i & 0x80000001
            
            if (rcx_1 s< 0)
                rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(i)
            int32_t i_3 = (temp2_1 - temp1_1) s>> 1
            i = i_3
            int32_t rax_4 = i_3 + rdi_1
            int32_t r9_1 = rax_4 + rcx_1
            void* r8 = *(r10_1 + sx.q(rax_4) * 0x10)
            
            if (r8 == 0)
                rax_4.b = 0
            else
                rax_4 = *(r8 + 0xb4)
                int32_t temp5_1 = *(arg2 + 0xb4)
                
                if (rax_4 != temp5_1)
                    rax_4.b = rax_4 s< temp5_1
                else
                    rax_4.b = r8 u< arg2
            
            if (rax_4.b != 0)
                rdi_1 = r9_1
        while (i s> 0)
    
    void* rax_7
    
    if (rdi_1 s>= i_6)
        rax_7 = sub_142427240(&arg1[2], &arg_10)
    else
        int64_t r8_2 = sx.q(rdi_1) * 2
        void* rax_5 = *(r10_1 + (r8_2 << 3))
        
        if (rax_5 == 0)
            rax_7 = sub_142427240(&arg1[2], &arg_10)
        else
            int32_t rcx_6 = *(arg2 + 0xb4)
            int32_t temp0_1 = *(rax_5 + 0xb4)
            
            if (rcx_6 != temp0_1)
                rax_5.b = rcx_6 s< temp0_1
            else
                rax_5.b = arg2 u< rax_5
            
            if (rax_5.b != 0 || rdi_1 == 0xffffffff)
                rax_7 = sub_142427240(&arg1[2], &arg_10)
            else
                rax_7 = r10_1 + 8 + (r8_2 << 3)
                
                if (rax_7 == 0)
                    rax_7 = sub_142427240(&arg1[2], &arg_10)
    
    *rax_7 = 0
    return 

if (arg3 == 0)
    for (int64_t* i_1 = *arg1; i_1 != &i_1[sx.q(arg1[1].d)]; i_1 = &i_1[1])
        if (*i_1 == arg2)
            return 

int32_t rdi_2 = 0
int32_t i_5 = arg1[1].d
int32_t i_2 = i_5

if (i_5 s> 0)
    do
        int32_t rcx_9 = i_2 & 0x80000001
        
        if (rcx_9 s< 0)
            rcx_9 = ((rcx_9 - 1) | 0xfffffffe) + 1
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(i_2)
        int32_t i_4 = (temp4_1 - temp3_1) s>> 1
        i_2 = i_4
        int32_t rax_11 = i_4 + rdi_2
        void* r8_3 = *(*arg1 + (sx.q(rax_11) << 3))
        int64_t rax_12
        
        if (r8_3 == 0)
            rax_12.b = 0
        else
            rax_12 = zx.q(*(r8_3 + 0xb4))
            int32_t temp6_1 = *(arg2 + 0xb4)
            
            if (rax_12.d != temp6_1)
                rax_12.b = rax_12.d s< temp6_1
            else
                rax_12.b = r8_3 u< arg2
        
        if (rax_12.b != 0)
            rdi_2 = rax_11 + rcx_9
    while (i_2 s> 0)

arg1[1].d = i_5 + 1

if (i_5 + 1 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

void** rbx_1 = sx.q(rdi_2) << 3
void* rdx_6 = *arg1 + rbx_1
memmove(rdx_6 + 8, rdx_6, (i_5 - rdi_2) << 3)
*(rbx_1 + *arg1) = arg2
