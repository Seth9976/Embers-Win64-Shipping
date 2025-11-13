// 函数: sub_1428e84b0
// 地址: 0x1428e84b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = 0
int32_t rbx = 0
int32_t rbp = 0
int32_t result

if (sub_142898c70(*arg2) s> 0)
    int32_t rax_2
    
    do
        int64_t* rax_1 = sub_142898ea0(*arg2, rbp)
        int32_t* rdx_1 = *rax_1
        
        if (*arg1 == *rdx_1)
            if (rax_1[1] != 0 || rax_1[2] != 0)
                return 0x31
            
            if (rbx != 2)
                if (rbx == 0)
                    rbx = 1
                
                result = sub_1428e85d0(arg1, rdx_1)
                
                if (result == 0)
                    rbx = result + 2
                else if (result != 0x2f)
                    return result
        
        rbp += 1
        rax_2 = sub_142898c70(*arg2)
    while (rbp s< rax_2)
    
    if (rbx == 1)
        return 0x2f

if (sub_142898c70(arg2[1]) s<= 0)
    return 0

while (true)
    int32_t** rax_4 = sub_142898ea0(arg2[1], rdi)
    int32_t* rdx_3 = *rax_4
    
    if (*arg1 == *rdx_3)
        if (rax_4[1] != 0)
            return 0x31
        
        if (rax_4[2] != 0)
            return 0x31
        
        result = sub_1428e85d0(arg1, rdx_3)
        
        if (result == 0)
            return 0x30
        
        if (result != 0x2f)
            return result
    
    rdi += 1
    
    if (rdi s>= sub_142898c70(arg2[1]))
        return 0
