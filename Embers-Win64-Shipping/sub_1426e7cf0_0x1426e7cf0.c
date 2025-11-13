// 函数: sub_1426e7cf0
// 地址: 0x1426e7cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_1426cf150(arg1, &var_18, *arg3, arg4)
void* rbx = var_18
int64_t* var_10

if (rbx != 0)
    *(rbx + 0x58) = sub_1426b4560(arg1)
    sub_140d3a3a0(rbx + 0x34, arg3[1])
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    *(rbx + 0x140) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
    sub_1405cd980(rbx + 0x70, &arg3[3])
    *(rbx + 0x30) = *(arg1 + 0x128)
    *(arg1 + 0x128) += 1
    *arg2 = rbx
    arg2[1] = var_10
else
    *arg2 = 0
    arg2[1] = 0
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
return arg2
