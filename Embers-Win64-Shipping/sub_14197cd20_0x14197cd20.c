// 函数: sub_14197cd20
// 地址: 0x14197cd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg2
int64_t* rbx = rdi
int64_t* arg_18 = rbx

if (rdi != 0)
    rdi[9].d += 1
    rbx = arg_18

int32_t result = sub_140a54ff0()

if (result.b != 0)
    EnterCriticalSection(&data_1439c8528)
    
    if (data_143f01cc0 == 0)
        int64_t var_38 = 0
        int64_t var_30_1 = 0
        sub_140a22e70(rbx, &var_38, 0xff)
        int64_t rcx_3 = var_38
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
    else
        if (rdi != 0)
            rdi[9].d += 1
            rbx = arg_18
        
        int64_t rbp_1 = sx.q(data_1439c8558.d)
        int32_t rax = (rbp_1 + 1).d
        bool cond:0_1 = rax s<= data_1439c8558:4.d
        data_1439c8558.d = rax
        
        if (not(cond:0_1))
            sub_1405a4f90(&data_1439c8550)
        
        int64_t* rax_3 = (rbp_1 << 4) + data_1439c8550
        *rax_3 = arg1
        rax_3[1] = rbx
        
        if (rdi != 0)
            rdi[9].d += 1
        
        int64_t* rcx = data_1439c85a8
        (*(*rcx + 0x10))(rcx)
        
        if (rdi != 0)
            rdi[9].d -= 1
            
            if (rdi[9].d == 1)
                sub_140a2f6e0(arg_18)
    
    result = LeaveCriticalSection(&data_1439c8528)

if (rdi != 0)
    result = rdi[9].d
    rdi[9].d -= 1
    
    if (result == 1)
        result = sub_140a2f6e0(arg_18)

int64_t* rcx_5 = *arg2

if (rcx_5 != 0)
    rcx_5[9].d -= 1
    
    if (rcx_5[9].d == 1)
        return sub_140a2f6e0(rcx_5) __tailcall

return result
