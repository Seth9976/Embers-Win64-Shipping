// 函数: sub_140d30680
// 地址: 0x140d30680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (data_143de5480 != 0)
    result.b = GetCurrentThreadId().d == data_143de5470

if (data_143de5480 == 0 || result.b != 0)
    int32_t rdx = data_1439aa8a0
    int32_t r8_1 = data_1439aa8ac + 1
    int64_t rsi
    rsi.b = 0
    result = zx.q(rdx - 1)
    data_1439aa8ac = r8_1
    int64_t rbx_1 = sx.q(result.d)
    
    if (result.d s>= 0)
        int64_t rdi_2 = rbx_1 << 4
        int64_t temp0_1
        
        do
            result = data_1439aa898
            
            if (*(rdi_2 + result + 8) == 0)
                rsi.b = 1
            else
                int64_t* rcx = *(rdi_2 + result)
                
                if (rcx == 0)
                    rsi.b = 1
                else
                    result = (*(*rcx + 0x50))(rcx, arg1, arg2, arg3)
                    
                    if (result.b == 0)
                        rsi.b = 1
            
            rdi_2 -= 0x10
            temp0_1 = rbx_1
            rbx_1 -= 1
        while (temp0_1 - 1 s>= 0)
        r8_1 = data_1439aa8ac
        rdx = data_1439aa8a0
    
    data_1439aa8ac = r8_1 - 1
    
    if (rsi.b != 0 && r8_1 - 1 s<= 0)
        int32_t rbx_2 = 0
        int32_t rsi_1 = rdx
        
        if (rdx s> 0)
            int64_t* rdi_3 = nullptr
            
            do
                int64_t rax_2 = data_1439aa898
                
                if (*(rdi_3 + rax_2 + 8) == 0)
                    sub_1405a4880(&data_1439aa898, rbx_2, 1, 1)
                else
                    int64_t* rcx_1 = *(rdi_3 + rax_2)
                    
                    if (rcx_1 == 0)
                        sub_1405a4880(&data_1439aa898, rbx_2, 1, 1)
                    else if ((*(*rcx_1 + 0x20))(rcx_1) != 0)
                        sub_1405a4880(&data_1439aa898, rbx_2, 1, 1)
                    else
                        rbx_2 += 1
                        rdi_3 = &rdi_3[2]
                
                rdx = data_1439aa8a0
            while (rbx_2 s< rdx)
        
        result = zx.q(rdx * 2)
        
        if (result.d s<= 2)
            result = 2
        
        data_1439aa8a8 = result.d
        
        if (rsi_1 s> result.d && data_1439aa8a4 != rdx)
            return sub_1405a5410(&data_1439aa898, rdx)

return result
