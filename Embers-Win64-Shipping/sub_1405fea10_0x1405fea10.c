// 函数: sub_1405fea10
// 地址: 0x1405fea10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2

if (not(0f f!= *(arg1 + 0x88)))
    int64_t* rcx = *(arg1 + 0xa8)
    
    if ((*(*rcx + 8))(rcx) != 0)
        int32_t i
        
        do
            int128_t var_50 = zx.o(0)
            int64_t* rcx_2 = *(arg1 + 0xa8) + 8
            (**rcx_2)(rcx_2, &var_50)
            int64_t* rbx_1 = var_50:8.q
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_6 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_6 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            int64_t* rcx_5 = *(arg1 + 0xa8)
            i = (*(*rcx_5 + 8))(rcx_5)
        while (i != 0)

int64_t* rcx_6 = *(arg1 + 0xa8)
HRESULT result

if ((*(*rcx_6 + 8))(rcx_6) s< 3)
    result = sub_1405f35d0(arg1, arg2, arg3, arg4, arg5)
else
    int32_t var_40_1 = 0
    int64_t var_38_1 = 0
    int64_t* var_30_1 = arg2
    
    if (arg2 != 0)
        (*(*arg2 + 8))(arg2)
    
    int64_t rbp_1 = sx.q(*(arg1 + 0xc0))
    result = (rbp_1 + 1).d
    *(arg1 + 0xc0) = result
    
    if (result s> *(arg1 + 0xc4))
        result = sub_1405a4df0(arg1 + 0xb8)
    
    int64_t rdx_2 = *(arg1 + 0xb8)
    int64_t rcx_10 = rbp_1 * 3
    *(rdx_2 + (rcx_10 << 3)) = 0
    *(rdx_2 + (rcx_10 << 3) + 8) = 0
    *(rdx_2 + (rcx_10 << 3) + 0x10) = arg2

HANDLE hTimer = *(arg1 + 0x90)

if (hTimer != 0 && not(0f f== *(arg1 + 0x88)))
    int64_t dueTime = -0x9c40
    result = SetWaitableTimer(hTimer, &dueTime, 0, nullptr, nullptr, 0)
    
    if (result != 0)
        struct IMFAsyncResult arg_8 = 0
        result = MFCreateAsyncResult(0, arg1 + 0x18, 0, &arg_8)
        
        if (result s< 0)
            struct IMFAsyncResult rcx_14 = arg_8
            
            if (rcx_14 != 0)
                return (*(*rcx_14 + 0x10))(rcx_14)
        else
            result = MFPutWaitingWorkItem(*(arg1 + 0x90), 0, arg_8, nullptr)
            struct IMFAsyncResult rcx_13 = arg_8
            
            if (rcx_13 != 0)
                return (*(*rcx_13 + 0x10))(rcx_13)

return result
