// 函数: sub_140962630
// 地址: 0x140962630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
void arg_20
sub_140961370(&var_18, arg3, *(*(*arg4 + 0x10))(arg4, &arg_20))
int64_t* rcx_2 = var_18

if (rcx_2 == 0)
    TEB* gsbase
    
    if (data_143ced3a0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ced3a0)
        
        if (data_143ced3a0 == 0xffffffff)
            sub_1405947f0(&data_143ced390, 0xf)
            int32_t rax_9 = data_143ced398 + 0xf
            bool cond:0_1 = rax_9 s<= data_143ced39c
            data_143ced398 = rax_9
            
            if (not(cond:0_1))
                sub_140594770(&data_143ced390)
            
            UnDecorator::getReferenceType(data_143ced390, u"InvalidOSSUser", 0x1e)
            atexit(&data_142cb77f0)
            _Init_thread_footer(&data_143ced3a0)
    
    *arg2 = 0
    int32_t rbx_1 = data_143ced398
    int64_t rsi_1 = data_143ced390
    arg2[1].d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(arg2, rbx_1, 0)
        memcpy(*arg2, rsi_1, rbx_1 * 2)
    else
        *(arg2 + 0xc) = 0
else
    (*(*rcx_2 + 0x120))(rcx_2, arg2, arg4)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t rsi_2 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*(*var_10 + 8))(var_10, zx.q(rsi_2))

return arg2
