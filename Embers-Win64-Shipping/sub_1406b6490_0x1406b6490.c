// 函数: sub_1406b6490
// 地址: 0x1406b6490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d8e320
Concurrency::details::_TaskEventLogger::_LogTaskCompleted(&arg1[1][0x2c])
int64_t* rbx = arg1[2]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx)

*arg1 = &data_142d6ad38
return &data_142d6ad38
