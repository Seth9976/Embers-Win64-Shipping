// 函数: sub_142a613f0
// 地址: 0x142a613f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = arg6
char* result

if (*r14 s> 0)
    result.b = 0
    return result

while (true)
    void* rcx = *arg1
    
    if (*(rcx + 0x10) != 0 || *(rcx + 0x60) != 0)
    label_142a614e3:
        result.b = 1
        return result
    
    if (sub_142ac3a80(rcx + 0x28, "%%ParentIsRoot").d != 0xffffffff)
        goto label_142a614e3
    
    int32_t rax = sub_142ac3a80(*arg1 + 0x28, "%%Parent")
    
    if (rax != 0xffffffff)
        arg6.d = 0
        void* rax_1 = sub_142ac3aa0(*arg1 + 0x28, rax, &arg6)
        
        if (rax_1 != 0)
            int32_t r8_1 = arg6.d
            
            if (r8_1 s> 0 && r8_1 s< arg3)
                sub_142a8d6e0(rax_1, arg2, r8_1 + 1)
                result = nullptr
                
                while (true)
                    char rcx_7 = *(arg2 + result)
                    result = &result[1]
                    
                    if (rcx_7 != *(result + 0x143613e9b))
                        break
                    
                    if (result == 5)
                        goto label_142a614e3
    
    void* rdx_2 = *arg1
    int32_t result_1 = 0
    char** rax_2 = sub_142a60920(arg2, *(rdx_2 + 8), &result_1)
    result = zx.q(result_1)
    
    if (result.d s> 0)
        *r14 = result.d
        result.b = 0
        return result
    
    int32_t result_2 = 0
    char** rdx_4 = nullptr
    
    if (arg4 == 0)
    label_142a6156b:
        *(*arg1 + 0x10) = rax_2
        
        if (arg4 != 0)
            *(rdx_4 + 0x6c) = 0
    else
        rdx_4 = sub_142a60920(arg2, arg5, &result_2)
        result = zx.q(result_2)
        
        if (result.d == 7)
            *r14 = 7
            result.b = 0
            return result
        
        if (result.d s> 0 || rdx_4[0xe].d != 0)
            goto label_142a6156b
        
        *(*arg1 + 0x10) = rdx_4
        rdx_4[2] = rax_2
    
    *arg1 = rax_2
    result = strrchr(arg2, 0x5f)
    
    if (result == 0)
        goto label_142a614e3
    
    *result = 0
