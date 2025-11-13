// 函数: sub_142748240
// 地址: 0x142748240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t result
int32_t rsi_1

if (arg2 == 0)
    rsi_1 = 0
label_1427482ba:
    sub_1427468c0(&arg1[0xcc], rsi_1)
    sub_142743ed0(&arg1[0xcc], rsi_1)
    int32_t temp0_1 = *(arg1 + 0x704)
    
    if (rsi_1 s> temp0_1)
        arg1[0xe0].d = 0
        
        if (rsi_1 != temp0_1)
            sub_1405a5410(&arg1[0xdf], rsi_1)
            rdi = arg1[0xe0].d
    
    int32_t rax_4 = rdi + rsi_1
    arg1[0xe0].d = rax_4
    
    if (rax_4 s> *(arg1 + 0x704))
        sub_1405a4f90(&arg1[0xdf])
    
    memset((sx.q(rdi) << 4) + arg1[0xdf], 0, sx.q(rsi_1) << 4)
    int64_t r8_4
    r8_4.b = 1
    sub_141f71f00(arg1, arg2, r8_4)
    result = sub_141ef1240(arg1)
    
    if (arg2 != 0)
        int64_t* rcx_10 = *(arg2 + 0x418)
        result = (*(*rcx_10 + 0xc8))(rcx_10)
        int64_t rbx_2 = sx.q(arg1[0xca].d)
        
        if (result.d s> rbx_2.d)
            arg1[0xca].d = result.d
            
            if (result.d s> *(arg1 + 0x654))
                sub_1405a4f90(&arg1[0xc9])
            
            return memset((rbx_2 << 4) + arg1[0xc9], 0, sx.q(result.d - rbx_2.d) << 4)
        
        if (result.d s< rbx_2.d)
            int32_t rcx_15 = rbx_2.d
            
            if (rcx_15 != result.d)
                arg1[0xca].d = rbx_2.d - (rcx_15 - result.d)
                return sub_1405a5010(&arg1[0xc9])
else
    void* rax_1 = sub_142749290()
    void* rdx = *(arg2 + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rdx + 0x38))
        int64_t result_1 = result
        result = *(rdx + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_1 + 0x30)
            int64_t* rcx = *(arg2 + 0x418)
            
            if (rcx != 0)
                rsi_1 = (*(*rcx + 0xc0))(rcx)
                goto label_1427482ba
return result
