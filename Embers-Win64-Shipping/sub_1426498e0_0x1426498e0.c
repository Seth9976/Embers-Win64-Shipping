// 函数: sub_1426498e0
// 地址: 0x1426498e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (sub_14265b530(arg1) != 2)
    int64_t* rbx_2 = arg1[0x12]
    int64_t rdi = 0
    result = &rbx_2[arg1[0x13]]
    uint64_t rsi_3 = sx.q(arg1[0x13].d) << 3 u>> 3
    
    if (rbx_2 u> result)
        rsi_3 = 0
    
    if (rsi_3 != 0)
        do
            int64_t* rcx_5 = *rbx_2
            
            if (rcx_5 != 0)
                result = (*(*rcx_5 + 0x3b0))(rcx_5, arg2, zx.q(arg3))
            
            rbx_2 = &rbx_2[1]
            rdi += 1
        while (rdi != rsi_3)
else
    (*(*arg1 + 0x358))(arg1)
    (*(*arg1 + 0x320))(arg1)
    (*(*arg1 + 0x350))(arg1)
    void** i = arg1[0x12]
    result = sx.q(arg1[0x13].d)
    
    for (void* rsi_1 = &i[result]; i != rsi_1; i = &i[1])
        int64_t* rbx_1 = *i
        
        if (rbx_1 != 0)
            (*(*rbx_1 + 0x690))(rbx_1)
            void* rax_5 = sub_1426a09e0()
            void* rdx = rbx_1[2]
            result = sx.q(*(rax_5 + 0x38))
            
            if (result.d s<= *(rdx + 0x38))
                int64_t result_1 = result
                result = *(rdx + 0x30)
                *(result + (result_1 << 3))

return result
