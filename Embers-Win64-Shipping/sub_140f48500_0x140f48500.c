// 函数: sub_140f48500
// 地址: 0x140f48500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143e243c8
int64_t* rcx
char const* const rdx

if (*(arg1 + 0x438) != 2)
    rdx = "NotificationList.FailImage"
    void arg_10
    rcx = &arg_10
else
    rdx = "NotificationList.SuccessImage"
    void arg_8
    rcx = &arg_8

return (*(*rbx + 0x48))(rbx, *sub_140b58170(rcx, rdx, 1), 0)
