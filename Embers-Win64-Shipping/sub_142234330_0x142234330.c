// 函数: sub_142234330
// 地址: 0x142234330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg2 + 0xc)
int32_t* rbx = arg3
int32_t rcx = arg3[3]
int32_t rdx_1 = rcx & result

if ((rdx_1.b & 3) == 0)
    *(arg1 + 8) = 0
    result.b = 0
    return result

int32_t rax_1 = result u>> 0x15 & 0x1f
uint64_t i

if ((rdx_1 u>> 0x1a).b == 0)
    i = zx.q(1 << ((rcx u>> 0x15).b & 0x1f))
    
    if (*arg2 != 0)
        int32_t rax_2 = 1 << rax_1.b
        
        if ((arg3[1] & rax_2) == 0)
            bool cond:0_1 = (arg3[2] & rax_2) != 0
            arg3 = nullptr
            
            if (cond:0_1)
                arg3 = 1
        else
            arg3.b = 2
        
        char i_3
        
        if ((*(arg2 + 4) & i.d) == 0)
            i_3 = 0
            
            if ((*(arg2 + 8) & i.d) != 0)
                i_3 = 1
        else
            i_3 = 2
        
        i = zx.q(i_3)
        
        if (arg3.b u<= i_3)
            i = zx.q(arg3.b)
        
        goto label_1422343df
    
    if ((*(arg2 + 4) & i.d) == 0)
    label_14223436b:
        i.b = 0
    else
        i.b = rax_1 == 0
        i.b += 1
    label_1422343df:
        
        if (i.b != 1)
            if (i.b == 2)
                if (*(arg1 + 0x22) == 0)
                    goto label_142234406
                
                i.b = 0
            else if (i.b != 0)
                goto label_142234406
        else if (*(arg1 + 0x21) == 0)
        label_142234406:
            int32_t* rcx_3 = *(arg1 + 0x18)
            int32_t* r8 = rcx_3
            int32_t* rax_4 = *(rcx_3 + 0x10)
            
            if (rax_4 != 0)
                r8 = rax_4
            
            void* rcx_4 = &r8[sx.q(rcx_3[6])]
            
            if (r8 == rcx_4)
            label_142234435:
                rcx_4.b = 0
            else
                while (*r8 != *rbx)
                    r8 = &r8[1]
                    
                    if (r8 == rcx_4)
                        goto label_142234435
                
                rcx_4 = 1
            
            char i_5 = 0
            char i_6 = i.b
            uint64_t i_4 = *(arg1 + 0x10)
            i = i_4
            
            if (rcx_4.b == 0)
                i_5 = i_6
            
            uint64_t i_1 = *(i_4 + 0x20)
            
            if (i_1 != 0)
                i = i_1
            
            for (int64_t rcx_5 = i + (sx.q(*(i_4 + 0x28)) << 2); i != rcx_5; i += 4)
                if (*i == arg4)
                    goto label_14223436b_1
            
            i = zx.q(i_5)
        else
            i.b = 0
else
label_14223436b_1:
    i.b = 0

if (*(arg1 + 0x20) != 0)
    char i_2 = i.b
    
    if (i.b == 2)
        i_2 = 1
    
    i = zx.q(i_2)

*(arg1 + 8) = i.b
return zx.q(i.b)
