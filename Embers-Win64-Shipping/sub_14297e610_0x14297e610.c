// 函数: sub_14297e610
// 地址: 0x14297e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_3 = arg2[2]
void* r8 = &arg2[2]
int64_t* result = arg2

if (*(i_3 + 0x19) == 0)
    int64_t* i_9 = *i_3
    
    if (*(i_9 + 0x19) == 0)
        int64_t* i_11
        
        do
            i_11 = *i_9
            i_3 = i_9
            i_9 = i_11
        while (*(i_11 + 0x19) == 0)
else
    i_3 = arg2[1]
    
    if (*(i_3 + 0x19) == 0)
        while (arg2 == i_3[2])
            arg2 = i_3
            i_3 = i_3[1]
            
            if (*(i_3 + 0x19) != 0)
                break

int64_t* i_4 = *result
int64_t* i_2 = *r8

if (*(i_4 + 0x19) != 0)
    goto label_14297e69c

int64_t* i_1

if (*(i_2 + 0x19) == 0)
    i_2 = i_3[2]
    
    if (i_3 == result)
        goto label_14297e69c
    
    i_4[1] = i_3
    *i_3 = *result
    
    if (i_3 != *r8)
        i_1 = i_3[1]
        
        if (*(i_2 + 0x19) == 0)
            i_2[1] = i_1
        
        *i_1 = i_2
        i_3[2] = *r8
        *(*r8 + 8) = i_3
    else
        i_1 = i_3
    
    void* rcx_4 = *arg1
    
    if (*(rcx_4 + 8) != result)
        void** rcx_5 = result[1]
        
        if (*rcx_5 != result)
            rcx_5[2] = i_3
        else
            *rcx_5 = i_3
    else
        *(rcx_4 + 8) = i_3
    
    i_3[1] = result[1]
    i_3[3].b = result[3].b
    result[3].b = i_3[3].b
else
    i_2 = i_4
label_14297e69c:
    i_1 = result[1]
    
    if (*(i_2 + 0x19) == 0)
        i_2[1] = i_1
    
    void* rax = *arg1
    
    if (*(rax + 8) == result)
        *(rax + 8) = i_2
    else if (*i_1 != result)
        i_1[2] = i_2
    else
        *i_1 = i_2
    
    int64_t* r8_1 = *arg1
    
    if (*r8_1 == result)
        int64_t* i_6
        
        if (*(i_2 + 0x19) == 0)
            int64_t* i_8 = *i_2
            i_6 = i_2
            
            if (*(i_8 + 0x19) == 0)
                int64_t* i_10
                
                do
                    i_10 = *i_8
                    i_6 = i_8
                    i_8 = i_10
                while (*(i_10 + 0x19) == 0)
        else
            i_6 = i_1
        
        *r8_1 = i_6
    
    void* rdx = *arg1
    
    if (*(rdx + 0x10) == result)
        if (*(i_2 + 0x19) == 0)
            int64_t* i_7 = i_2[2]
            int64_t* i_5 = i_2
            
            while (*(i_7 + 0x19) == 0)
                i_5 = i_7
                i_7 = i_7[2]
            
            *(rdx + 0x10) = i_5
        else
            *(rdx + 0x10) = i_1

if (result[3].b == 1)
    if (i_2 != *(*arg1 + 8))
        int64_t* i
        
        do
            i = i_1
            
            if (i_2[3].b != 1)
                break
            
            int64_t* rcx_8 = *i_1
            
            if (i_2 != rcx_8)
                if (rcx_8[3].b == 0)
                    rcx_8[3].b = 1
                    i_1[3].b = 0
                    sub_140909ab0(arg1, i_1)
                    rcx_8 = *i_1
                
                if (*(rcx_8 + 0x19) == 0)
                    void* rdx_6 = rcx_8[2]
                    
                    if (*(rdx_6 + 0x18) != 1 || *(*rcx_8 + 0x18) != 1)
                        if (*(*rcx_8 + 0x18) == 1)
                            *(rdx_6 + 0x18) = 1
                            rcx_8[3].b = 0
                            sub_140909a50(arg1, rcx_8)
                            rcx_8 = *i_1
                        
                        rcx_8[3].b = i_1[3].b
                        i_1[3].b = 1
                        *(*rcx_8 + 0x18) = 1
                        sub_140909ab0(arg1, i_1)
                        break
                    
                    rcx_8[3].b = 0
            else
                rcx_8 = i_1[2]
                
                if (rcx_8[3].b == 0)
                    rcx_8[3].b = 1
                    int64_t** rcx_9 = i_1[2]
                    i_1[3].b = 0
                    i_1[2] = *rcx_9
                    int64_t* rax_3 = *rcx_9
                    
                    if (*(rax_3 + 0x19) == 0)
                        rax_3[1] = i_1
                    
                    rcx_9[1] = i_1[1]
                    void* rax_5 = *arg1
                    
                    if (i_1 != *(rax_5 + 8))
                        int64_t*** rax_6 = i_1[1]
                        
                        if (i_1 != *rax_6)
                            rax_6[2] = rcx_9
                        else
                            *rax_6 = rcx_9
                    else
                        *(rax_5 + 8) = rcx_9
                    
                    *rcx_9 = i_1
                    i_1[1] = rcx_9
                    rcx_8 = i_1[2]
                
                if (*(rcx_8 + 0x19) == 0)
                    void* rdx_2 = *rcx_8
                    
                    if (*(rdx_2 + 0x18) != 1 || *(rcx_8[2] + 0x18) != 1)
                        if (*(rcx_8[2] + 0x18) == 1)
                            *(rdx_2 + 0x18) = 1
                            rcx_8[3].b = 0
                            sub_140909ab0(arg1, rcx_8)
                            rcx_8 = i_1[2]
                        
                        rcx_8[3].b = i_1[3].b
                        i_1[3].b = 1
                        *(rcx_8[2] + 0x18) = 1
                        sub_140909a50(arg1, i_1)
                        break
                    
                    rcx_8[3].b = 0
            
            i_2 = i
            i_1 = i_1[1]
        while (i != *(*arg1 + 8))
    
    i_2[3].b = 1

int64_t rcx_15 = arg1[1]

if (rcx_15 != 0)
    arg1[1] = rcx_15 - 1

return result
