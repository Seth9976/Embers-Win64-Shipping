// 函数: sub_141980250
// 地址: 0x141980250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
int64_t rdx
rax, rdx = sub_140a54ff0()

if (rax != 0 && data_143f0f130 != 0)
    int64_t* rcx_1 = data_143f01cc0
    data_143f0f130 = 0
    
    if (rcx_1 != 0)
        rdx.b = 1
        (*(*rcx_1 + 0x10))(rcx_1, rdx)
        int64_t* rcx_2 = data_143f01cc0
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x20))(rcx_2, 1)
        
        data_143f01cc0 = 0
    
    EnterCriticalSection(&data_1439c8528)
    void* rbx_1 = data_1439c8550
    int64_t rdi_1 = sx.q(data_1439c8558.d)
    void* rsi_3 = (rdi_1 << 4) + rbx_1
    
    if (rbx_1 != rsi_3)
        do
            int64_t* rcx_3 = *(rbx_1 + 8)
            int64_t var_18 = 0
            int64_t var_10_1 = 0
            sub_140a22e70(rcx_3, &var_18, 0xff)
            int64_t rcx_4 = var_18
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx_1 += 0x10
        while (rbx_1 != rsi_3)
        
        rdi_1 = zx.q(data_1439c8558.d)
        rbx_1 = data_1439c8550
    
    if (rdi_1.d != 0)
        void* rbx_2 = rbx_1 + 8
        int32_t i
        
        do
            int64_t* rcx_5 = *rbx_2
            
            if (rcx_5 != 0)
                rcx_5[9].d -= 1
                
                if (rcx_5[9].d == 1)
                    sub_140a2f6e0(rcx_5)
            
            rbx_2 += 0x10
            i = rdi_1.d
            rdi_1 = zx.q(rdi_1.d - 1)
        while (i != 1)
    
    bool cond:0_1 = data_1439c8558:4.d == 0
    data_1439c8558.d = 0
    
    if (not(cond:0_1))
        sub_1405a5410(&data_1439c8550, 0)
    
    sub_141988b70()
    LeaveCriticalSection(&data_1439c8528)

return sub_141988b70() __tailcall
