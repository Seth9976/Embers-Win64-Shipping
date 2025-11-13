// 函数: sub_141c32870
// 地址: 0x141c32870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1 = (*(*arg2 + 0x10))(arg2)
char rax_3

if (rax_1 != 0)
    rax_3 = (*(*arg3 + 0x10))(arg3)

if (rax_1 == 0 || rax_3 != 0)
    char rax_5 = (*(*arg2 + 0x18))(arg2)
    
    if (rax_5 != 0)
        rax_3 = (*(*arg3 + 0x18))(arg3)
    
    if (rax_5 == 0 || rax_3 != 0)
        void arg_10
        int64_t* rax_8 = (*(*arg2 + 8))(arg2, &arg_10)
        int64_t* r8 = data_143f34980
        int64_t* rbx_1 = r8
        void* rdx_1 = &r8[sx.q(data_143f34988)]
        int32_t rbx_2
        
        if (r8 == rdx_1)
        label_141c328fe:
            rbx_2 = -1
        else
            while (*rbx_1 != *rax_8)
                rbx_1 = &rbx_1[1]
                
                if (rbx_1 == rdx_1)
                    goto label_141c328fe
            
            rbx_2 = ((rbx_1 - r8) s>> 3).d
        
        int64_t* result = (*(*arg3 + 8))(arg3, &arg_10)
        int64_t* r9 = data_143f34980
        int64_t* rdx_3 = r9
        void* r8_1 = &r9[sx.q(data_143f34988)]
        int32_t rdx_4
        
        if (r9 == r8_1)
        label_141c3293e:
            rdx_4 = -1
        else
            while (*rdx_3 != *result)
                rdx_3 = &rdx_3[1]
                
                if (rdx_3 == r8_1)
                    goto label_141c3293e
            
            rdx_4 = ((rdx_3 - r9) s>> 3).d
        
        if (rbx_2 != 0xffffffff && rdx_4 != 0xffffffff)
            result.b = rbx_2 s< rdx_4
            return result
        
        result.b = 0
        return result

return 1
