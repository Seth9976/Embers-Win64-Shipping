// 函数: sub_141ec1c30
// 地址: 0x141ec1c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg1[1].d u>> 4)
int64_t* rbx

if ((result.b & 1) == 0)
    rbx = arg1[4]
else
    rbx = nullptr

if (rbx != 0 && rbx[0x53] != 0 && (*(rbx + 0x294) & 2) != 0)
    result = (*(*rbx + 0x6a8))(rbx)
    
    if (result.b != 0)
        uint64_t result_1 = arg1[5]
        
        if (result_1 != 0)
        label_141ec1d1f:
            (*(*result_1 + 0xdc8))(result_1, rbx)
            int64_t* rcx_6 = rbx[0x53]
            return (*(*rcx_6 + 0x260))(rcx_6, arg1[5])
        
        void var_38
        sub_142427eb0(&var_38)
        int64_t var_20_1 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(rbx)
        int64_t* rsi_1
        
        if (arg1[6] == 0)
            rsi_1 = nullptr
        else
            void* rax_3 = sub_14249be50()
            
            if (rax_3 == 0)
                rsi_1 = nullptr
            else
                rsi_1 = arg1[6]
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> rsi_1[7].d || *(rsi_1[6] + (rax_4 << 3)) != rax_3 + 0x30)
                    rsi_1 = nullptr
        
        result = sub_1420efae0((*(*arg1 + 0x150))(arg1), rsi_1, nullptr, nullptr, &var_38)
        result_1 = result
        arg1[5] = result
        
        if (result != 0)
            goto label_141ec1d1f

return result
