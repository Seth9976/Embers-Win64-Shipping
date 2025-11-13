// 函数: sub_140e72360
// 地址: 0x140e72360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg2
int64_t* rbx_1

if (rbx != 0)
    int64_t rbx_2 = *(rbx + 0x7c)
    int32_t var_28
    sub_14090a150(arg1 + 0x18, &var_28)
    int64_t* var_20
    *var_20 = rbx_2
    var_20[1].d = 0xffffffff
    void arg_10
    sub_1407ec830(arg1 + 0x18, &arg_10, (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d), var_20, 
        var_28, nullptr)
    var_28.q = arg2
    int64_t r8
    int64_t var_20_1 = r8
    sub_140e47c50(arg1 + 0x68, &arg_10, &var_28, nullptr)
    rbx_1 = arg2[1]
else
    rbx_1 = arg2[1]

if (rbx_1 == 0)
    return 

rbx_1[1].d -= 1

if (rbx_1[1].d != 1)
    return 

(**rbx_1)(rbx_1)
int32_t temp1_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx_1 + 8))(rbx_1, 1)
