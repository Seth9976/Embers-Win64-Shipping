// 函数: sub_1405fb2a0
// 地址: 0x1405fb2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int64_t* rbx = nullptr
int64_t* var_18 = nullptr

if ((*(rax + 0x18))(arg2, &var_18) s>= 0)
    int64_t* rcx_1 = var_18
    int64_t* pAsyncResult = nullptr
    
    if ((**rcx_1)(rcx_1, &data_142d5fcb8, &pAsyncResult) s>= 0)
        int64_t* pAsyncResult_1 = pAsyncResult
        int64_t* arg_20 = nullptr
        
        if (pAsyncResult_1 == 0)
            goto label_1405fb32b
        
        if ((*(*pAsyncResult_1 + 0x30))(pAsyncResult_1, &arg_20) s>= 0)
            rbx = arg_20
        label_1405fb32b:
            int32_t arg_10
            (*(*(arg1 + 8) + 0x48))(arg1 + 8, rbx[2], zx.q(rbx[3].d - rbx[1].d), &arg_10)
            rbx[1] += zx.q(arg_10)
            int64_t* pAsyncResult_2 = pAsyncResult
            
            if (pAsyncResult_2 != 0)
                (*(*pAsyncResult_2 + 0x28))(pAsyncResult_2, 0)
                MFInvokeCallback(pAsyncResult)
                int64_t* pAsyncResult_3 = pAsyncResult
                
                if (pAsyncResult_3 != 0)
                    (*(*pAsyncResult_3 + 0x10))(pAsyncResult_3)
            
            int64_t* rcx_4 = arg_20
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x10))(rcx_4)
            
            int64_t* rcx_5 = var_18
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x10))(rcx_5)

return 0
