// 函数: sub_1406b4ed0
// 地址: 0x1406b4ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int64_t arg_18 = arg3
int32_t* arg_10 = arg2
uint64_t r14 = zx.q(__std_parallel_algorithms_hw_threads())

if (r14 u> 1)
    int64_t rax_3 = (arg3 - arg2) s>> 2
    
    if (rax_3 s>= 2)
        uint64_t rcx_1 = zx.q(r14.d) << 5
        
        if (rax_3 u< rcx_1)
            rcx_1 = rax_3
        
        int64_t var_58 = 0
        int64_t var_48_1 = rax_3
        int64_t rax_4
        int64_t rdx
        rdx:rax_4 = sx.o(rax_3)
        int64_t var_40_1 = divs.dp.q(rdx:rax_4, rcx_1)
        int64_t var_38_1 = mods.dp.q(rdx:rax_4, rcx_1)
        int64_t* var_28_1 = arg4
        int32_t* var_30_1 = arg2
        int64_t rax_6 = __std_create_threadpool_work(sub_1406c4400, &var_58, 0)
        
        if (rax_6 == 0)
            std::_Throw_parallelism_resources_exhausted()
            noreturn
        
        uint64_t rdx_3 = r14 << 2
        
        if (rcx_1 u< rdx_3)
            rdx_3 = rcx_1
        
        __std_bulk_submit_threadpool_work(rax_6, rdx_3)
        sub_1406b4be0(&var_58)
        __std_wait_for_threadpool_work_callbacks(rax_6, 1)
        return __std_close_threadpool_work(rax_6)

return sub_1406b4ac0(arg2, arg3, arg4)
