// 函数: sub_142c78e20
// 地址: 0x142c78e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg1
int64_t rdi = arg3
uint64_t count = -1
void* rbp = *(r15 + 0x250)

do
    count += 1
while (*(&arg1[0xe7] + count) != 0)

uint64_t result

if (rdi u< count + 1)
label_142c78f22:
    
    if (rdi u>= 2 && 0x202a == *arg2)
        int32_t rcx_3 = arg1[0xe1].d
        
        if (rcx_3 == 2)
            if (sub_142c792d0(arg2, rdi, "CAPABILITY").b == 0)
            labelid_10:
                result.b = 0
            else
                *arg4 = 0x2a
                result.b = 1
        else if (rcx_3 == 7)
            if (*(rbp + 0x38) == 0)
                result = sub_142c792d0(arg2, rdi, "LIST")
            
            if (*(rbp + 0x38) == 0 && result.b == 0)
            labelid_10:
                result.b = 0
            else
                char* r8_2 = *(rbp + 0x38)
                
                if (r8_2 == 0)
                    *arg4 = 0x2a
                    result.b = 1
                else if (sub_142c792d0(arg2, rdi, r8_2).b != 0)
                    *arg4 = 0x2a
                    result.b = 1
                else
                    int64_t i_1 = 0
                    
                    for (int64_t i = 0; i != 6; )
                        char rax_2 = (*(rbp + 0x38))[i]
                        i += 1
                        
                        if (rax_2 != *(i + 0x1436b7373))
                            goto label_142c7902e
                    
                    if (sub_142c792d0(arg2, rdi, "FETCH").b != 0)
                        *arg4 = 0x2a
                        result.b = 1
                    else
                    label_142c7902e:
                        void* rcx_12 = *(rbp + 0x38)
                        int64_t rdx_5 = 0
                        
                        while (true)
                            result = zx.q(*(rcx_12 + rdx_5))
                            rdx_5 += 1
                            
                            if (result.b != *(rdx_5 + 0x1436b7383))
                                int64_t rdx_6 = 0
                                
                                while (true)
                                    result = zx.q(*(rcx_12 + rdx_6))
                                    rdx_6 += 1
                                    
                                    if (result.b != *(rdx_6 + 0x1436b738f))
                                        int64_t rdx_7 = 0
                                        
                                        while (true)
                                            result = zx.q(*(rcx_12 + rdx_7))
                                            rdx_7 += 1
                                            
                                            if (result.b != data_1436b7390[7][rdx_7])
                                                int64_t rdx_8 = 0
                                                
                                                while (true)
                                                    result = zx.q(*(rcx_12 + rdx_8))
                                                    rdx_8 += 1
                                                    
                                                    if (result.b != *(rdx_8 + 0x1436b739f))
                                                        int64_t rdx_9 = 0
                                                        
                                                        while (true)
                                                            result = zx.q(*(rcx_12 + rdx_9))
                                                            rdx_9 += 1
                                                            
                                                            if (result.b
                                                                    != data_1436b73a0[7][rdx_9])
                                                                int64_t rdx_10 = 0
                                                                
                                                                while (true)
                                                                    result = zx.q(*(rcx_12 + rdx_10))
                                                                    rdx_10 += 1
                                                                    
                                                                    if (result.b != *(rdx_10 + 0x1436b73af))
                                                                        do
                                                                            result = zx.q(*(rcx_12 + i_1))
                                                                            i_1 += 1
                                                                            
                                                                            if (result.b != *(i_1 + 0x1436b73b3))
                                                                                goto label_142c78f7e_2
                                                                        while (i_1 != 5)
                                                                        
                                                                        *arg4 = 0x2a
                                                                        result.b = 1
                                                                        break
                                                                    
                                                                    if (rdx_10 == 4)
                                                                        *arg4 = 0x2a
                                                                        result.b = 1
                                                                        break
                                                                
                                                                break
                                                            
                                                            if (rdx_9 == 5)
                                                                *arg4 = 0x2a
                                                                result.b = 1
                                                                break
                                                        
                                                        break
                                                    
                                                    if (rdx_8 == 8)
                                                        *arg4 = 0x2a
                                                        result.b = 1
                                                        break
                                                
                                                break
                                            
                                            if (rdx_7 == 7)
                                                *arg4 = 0x2a
                                                result.b = 1
                                                break
                                        
                                        break
                                    
                                    if (rdx_6 == 8)
                                        *arg4 = 0x2a
                                        result.b = 1
                                        break
                                
                                break
                            
                            if (rdx_5 == 7)
                                *arg4 = 0x2a
                                result.b = 1
                                break
        else if (rcx_3 == 8)
            *arg4 = 0x2a
            result.b = 1
        else
            char* r8_1
            
            if (rcx_3 == 9)
                r8_1 = "FETCH"
            label_142c78f71:
                
                if (sub_142c792d0(arg2, rdi, r8_1).b != 0)
                    *arg4 = 0x2a
                    result.b = 1
                else
                labelid_10:
                    result.b = 0
            else
                if (rcx_3 == 0xd)
                    r8_1 = "SEARCH"
                    goto label_142c78f71
                
            labelid_10:
                result.b = 0
    else if (rbp == 0 || *(rbp + 0x38) != 0)
    label_142c78f7e:
        result.b = 0
    else if (rdi == 3)
        if (0x2b == *arg2 || 0x202b == *arg2)
            goto label_142c791f0
        
    label_142c78f7e_1:
        result.b = 0
    else if (rdi u< 2 || 0x202b != *arg2)
    label_142c78f7e_2:
        result.b = 0
    else
    label_142c791f0:
        result = zx.q(arg1[0xe1].d)
        
        if (result.d == 5 || result.d == 0xb)
            *arg4 = 0x2b
            result.b = 1
        else
            sub_142c64760(r15, "Unexpected continuation response", arg3, arg5)
            result.b = 1
            *arg4 = 0xffffffff
else
    result, arg3 = memcmp(&arg1[0xe7], arg2, count)
    
    if (result.d != 0)
        goto label_142c78f22
    
    void* rcx_1 = count + arg2
    
    if (*(count + arg2) != 0x20)
        goto label_142c78f22
    
    int64_t rdi_1 = rdi + -1 - count
    
    if (rdi_1 u< 2)
    label_142c78edc:
        
        if (rdi_1 u< 3 || *(rcx_1 + 1) != 0x4142 || *(rcx_1 + 3) != 0x44)
            sub_142c64760(r15, "Bad tagged response", arg3, arg5)
            result.b = 1
            *arg4 = 0xffffffff
        else
            *arg4 = 0x42
            result.b = 1
    else if (*(rcx_1 + 1) != 0x4b4f)
        if (*(rcx_1 + 1) != 0x4f4e)
            goto label_142c78edc
        
        *arg4 = 0x4e
        result.b = 1
    else
        *arg4 = 0x4f
        result.b = 1

return result
