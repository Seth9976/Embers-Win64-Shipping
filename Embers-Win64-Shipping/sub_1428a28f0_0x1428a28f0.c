// 函数: sub_1428a28f0
// 地址: 0x1428a28f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t arg_20 = *arg2
int64_t* rax_1 = sub_1428c41c0(nullptr, &arg_20, arg3, &data_1434eaa80)

if (rax_1 != 0)
    bool cond:0_1 = rax_1[1] == 0
    int64_t* arg_10 = nullptr
    void* const result
    
    if (cond:0_1)
        result = nullptr
    else
        result = rax_1[2]
        
        if (result == 0)
            sub_1428a2a10(&arg_10, rax_1)
            int64_t* rbx_1 = arg_10
            
            if (rbx_1 != 0)
                sub_1428a5670(0xb, 0x77, 0x44, "crypto\x509\x_pubkey.c", 0xa1)
                sub_1428965a0(rbx_1)
            
            result = nullptr
        else
            sub_142896e70(result)
    
    sub_1428c3d60(rax_1, &data_1434eaa80)
    
    if (result != 0)
        *arg2 = arg_20
        
        if (arg1 != 0)
            sub_1428965a0(*arg1)
            *arg1 = result
        
        return result

return 0
