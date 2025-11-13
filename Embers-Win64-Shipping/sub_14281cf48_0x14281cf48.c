// 函数: sub_14281cf48
// 地址: 0x14281cf48
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1
char* rcx = *result

if (*rcx == 0)
    sub_14281d01c(rcx)
    int64_t* result_2 = *arg1[2]
    
    while (*(result_2 + 0x19) == 0)
        sub_14281cf48(result_2[4])
        result = result_2[2]
        
        if (*(result + 0x19) == 0)
            int64_t* result_1 = *result
            result_2 = result
            
            if (*(result_1 + 0x19) == 0)
                do
                    result = *result_1
                    result_2 = result_1
                    result_1 = result
                while (*(result + 0x19) == 0)
        else
            result = result_2[1]
            
            while (*(result + 0x19) == 0)
                if (result_2 != result[2])
                    break
                
                result_2 = result
                result = result[1]
            
            result_2 = result
    
    void** rbx_2 = arg1[2]
    void** rdi_1 = rbx_2[1]
    
    while (*(rdi_1 + 0x19) == 0)
        sub_14281c71c(&arg1[2], &arg1[2], rdi_1[2])
        void** rcx_3 = rdi_1
        rdi_1 = *rdi_1
        result = sub_14058ba50(rcx_3, 0x28)
    
    rbx_2[1] = rbx_2
    *rbx_2 = rbx_2
    rbx_2[2] = rbx_2
    arg1[3] = 0

return result
