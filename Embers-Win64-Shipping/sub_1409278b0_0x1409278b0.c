// 函数: sub_1409278b0
// 地址: 0x1409278b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg1[0x64] == 0)
    void* rsi_1 = *arg3
    
    if (*(rsi_1 + 0x18) != 1)
        void* rbx_1 = *(rsi_1 + 8)
        int32_t i_1 = *(rsi_1 + 0x10)
        
        if (i_1 != 0)
            int32_t i
            
            do
                sub_14091b530(rbx_1)
                rbx_1 += 0xb8
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        bool cond:1_1 = *(rsi_1 + 0x14) == 0
        *(rsi_1 + 0x10) = 0
        
        if (not(cond:1_1))
            sub_14092fa50(rsi_1 + 8, 0)
        
        int64_t* rax = arg3[1]
        
        if (rax != 0)
            rax[1].d += 1
        
        void var_28
        
        if (&arg1[0x64] == &var_28)
        label_140927970:
            
            if (rax != 0)
                rax[1].d -= 1
                
                if (rax[1].d == 1)
                    (**rax)(rax)
                    int32_t temp2_1 = *(rax + 0xc)
                    *(rax + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rax + 8))(rax, 1)
        else
            arg1[0x64] = *arg3
            int64_t* rdi_1 = arg1[0x65]
            
            if (rax == rdi_1)
                goto label_140927970
            
            arg1[0x65] = rax
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp4_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        arg1[0x66] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
        result = sub_140926fe0(arg1)
        
        if (result.d == 0x3e5)
            *(*arg3 + 0x18) = 1
        else if (result.d != 0)
            result.b = 0
            return result

result.b = 1
return result
