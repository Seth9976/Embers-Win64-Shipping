// 函数: sub_140dc03e0
// 地址: 0x140dc03e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t arg_8 = 0
TEB* gsbase

if (data_143e20fb0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e20fb0)
    
    if (data_143e20fb0 == 0xffffffff)
        sub_140b58170(&data_143e20fa8, "DefaultSystemFont", 1)
        _Init_thread_footer(&data_143e20fb0)

int64_t* result
int32_t rdi_1

if (arg_10 != data_143e20fa8)
    void var_28
    result = sub_140da44d0(sub_140da2a70(), &var_28, &arg_10, arg3)
    rdi_1 = 2
else
    int64_t var_18
    result = sub_140daa2e0(sub_140da2a70(), &var_18)
    rdi_1 = 1

int64_t* result_1 = result

if (arg1 + 0x30 != result)
    *(arg1 + 0x30) = *result
    *result_1 = 0
    result = result_1[1]
    int64_t* rbx_1 = *(arg1 + 0x38)
    
    if (result != rbx_1)
        result_1[1] = 0
        *(arg1 + 0x38) = result
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)

if ((rdi_1.b & 2) != 0)
    rdi_1 &= 0xfffffffd
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            result = (**var_20)(var_20)
            int32_t temp3_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*var_20 + 8))(var_20, 1)

int64_t* var_10

if ((rdi_1.b & 1) != 0 && var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp5_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*var_10 + 8))(var_10, 1)

return result
