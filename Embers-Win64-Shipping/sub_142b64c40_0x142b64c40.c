// 函数: sub_142b64c40
// 地址: 0x142b64c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg5
int16_t rbx = arg1[4].w
char* r10 = arg2
char* result_1 = result

if ((arg4 & 0xfffffffd) == 0)
label_142b64ccc:
    
    if (arg3 == 0)
    label_142b64d62:
        result.b = *result == 0
    else
        while (true)
            uint64_t r9 = zx.q(*r10)
            arg3 -= 1
            r10 = &r10[1]
            
            if (r9.w u< rbx)
                int16_t rdx = *(&arg1[4] + (r9 << 1) + 2)
                
                if (rdx == 0xfffe)
                    uint64_t rcx_2 = zx.q(*r10)
                    r10 = &r10[1]
                    arg3 -= 1
                    rdx = *(&arg1[4] + ((r9 << 8 | rcx_2) << 1) + 2)
                
                if (rdx != 0xffff)
                    void* r9_2 = zx.q(rdx) + zx.q(*arg1) + arg1
                    char i = *r9_2
                    
                    if (i != 0)
                        void* r9_3 = r9_2 - result
                        
                        do
                            char rcx_4 = *result
                            result = &result[1]
                            
                            if (i != rcx_4)
                                goto label_142b64d05
                            
                            i = *(r9_3 + result)
                        while (i != 0)
                else if (r9.b == 0x3b)
                    if (result != result_1)
                        goto label_142b64d62_1
                    
                    if (arg4 != 2)
                        goto label_142b64d62_1
                    
                    if (0x3b u< rbx && arg1[0x22].w != 0xffff)
                        goto label_142b64d62_1
                else
                    char rcx_3 = *result
                    result = &result[1]
                    
                    if (r9.b != rcx_3)
                        goto label_142b64d05
            else
                if (r9.b == 0x3b)
                    goto label_142b64d62_1
                
                char rcx_1 = *result
                result = &result[1]
                
                if (r9.b != rcx_1)
                label_142b64d05:
                    result.b = 0
                    break
            
            if (arg3 == 0)
                goto label_142b64d62_1
else
    if (0x3b u>= rbx || arg1[0x22].w == 0xffff)
        int32_t i_1 = arg4
        
        if (arg4 == 4)
            i_1 = 2
        
        do
            while (arg3 != 0)
                char rcx = *r10
                arg3 -= 1
                r10 = &r10[1]
                
                if (rcx == 0x3b)
                    break
            
            i_1 -= 1
        while (i_1 s> 0)
        
        goto label_142b64ccc
    
label_142b64d62_1:
    result.b = *result == 0

return result
