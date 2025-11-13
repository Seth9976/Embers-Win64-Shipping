// 函数: sub_141989210
// 地址: 0x141989210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = data_143f025d8
sub_140b34200("Total", rdi)
uint64_t rbx

if (*(data_143f02ae0 + 4) s<= 0)
    sub_14198b3f0()
    rbx.b = 0
else
    void* rcx_1 = data_143f02f38
    
    if (rcx_1 == 0)
    label_141989295:
        void* rcx_3 = data_143f02f28
        
        if (rcx_3 != 0)
            int64_t rax_4 = 0
            
            if (0 == *(rcx_3 + 8))
                *(rcx_3 + 8) = 0
            else
                rax_4 = *(rcx_3 + 8)
            
            if (((rax_4 u>> 0x1a).b & 1) != 0)
                int64_t* rcx_4 = data_143f02f28
                data_143f02f28 = 0
                
                if (rcx_4 != 0)
                    rcx_4[9].d -= 1
                    
                    if (rcx_4[9].d == 1)
                        sub_140a2f6e0(rcx_4)
                
                int64_t* rcx_5 = data_143f02f30
                data_143f02f30 = 0
                
                if (rcx_5 != 0)
                    rcx_5[9].d -= 1
                    
                    if (rcx_5[9].d == 1)
                        sub_140a2f6e0(rcx_5)
        
        if (rcx_3 != 0 && data_143f02f28 != 0)
            goto label_141989300
        
        rbx.b = 0
    else
        int64_t rax_1 = 0
        
        if (0 == *(rcx_1 + 8))
            *(rcx_1 + 8) = 0
        else
            rax_1 = *(rcx_1 + 8)
        
        if (((rax_1 u>> 0x1a).b & 1) != 0)
            int64_t* rcx_2 = data_143f02f38
            data_143f02f38 = 0
            
            if (rcx_2 == 0)
                goto label_141989295
            
            rcx_2[9].d -= 1
            
            if (rcx_2[9].d == 1)
                sub_140a2f6e0(rcx_2)
            
            goto label_14198928c
        
    label_14198928c:
        
        if (data_143f02f38 == 0)
            goto label_141989295
        
    label_141989300:
        data_143f01c8c += 1
        EnterCriticalSection(&data_143f02f58)
        rbx.b = 1

sub_140b38680("Total", rdi)
return zx.q(rbx.b)
