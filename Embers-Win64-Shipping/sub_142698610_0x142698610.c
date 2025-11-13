// 函数: sub_142698610
// 地址: 0x142698610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10
(*(*arg2 + 0x20))(arg2, &arg_10)
int32_t rax_2 = (*(*arg2 + 0x28))(arg2)
int64_t* rdx_1

if (arg_10 == 0)
    rdx_1 = nullptr
else
    void* rax_3 = sub_14269ce80()
    
    if (rax_3 == 0)
        rdx_1 = nullptr
    else
        rdx_1 = arg_10
        int64_t rcx_2 = sx.q(*(rax_3 + 0x38))
        
        if (rcx_2.d s> rdx_1[7].d || *(rdx_1[6] + (rcx_2 << 3)) != rax_3 + 0x30)
            rdx_1 = nullptr

uint64_t result = sub_142656a30(arg1, rdx_1)
char rsi = result.b

if (result.d s>= 0 && *(arg1 + 0x4a8) != 0)
    int64_t* rbx_1
    
    if (arg_10 == 0)
        rbx_1 = nullptr
    else
        void* rax_5 = sub_14269ce80()
        
        if (rax_5 == 0)
            rbx_1 = nullptr
        else
            rbx_1 = arg_10
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> rbx_1[7].d || *(rbx_1[6] + (rax_6 << 3)) != rax_5 + 0x30)
                rbx_1 = nullptr
    
    void* rax_9 = rbx_1[0x23]
    
    if (rax_9 == 0)
        (*(*rbx_1 + 0x390))(rbx_1)
        rax_9 = rbx_1[0x23]
    
    void* rcx_6 = *(arg1 + 0x4a8)
    int16_t rbx_2 = *(rax_9 + 0x44) | data_143f717a0
    result = *(rcx_6 + 8)
    
    if (result != 0)
        result = sub_142618250(result, rax_2, rsi, rbx_2)
        rcx_6 = *(arg1 + 0x4a8)
    
    void* rcx_8 = *(rcx_6 + 8)
    
    if (rcx_8 != 0)
        return sub_142618310(rcx_8, rax_2, rsi, rbx_2)

return result
