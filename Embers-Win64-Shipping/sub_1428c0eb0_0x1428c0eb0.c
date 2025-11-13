// 函数: sub_1428c0eb0
// 地址: 0x1428c0eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax = *(arg1 + 0x18)

if (rax != 0)
    void* rax_1 = *rax
    
    if (rax_1 != 0)
        int64_t r9_1 = *(rax_1 + 0x138)
        
        if (r9_1 != 0)
            uint64_t rax_3 = r9_1(arg1, 0, 0)
            
            if (rax_3 != 0)
                int64_t rax_4 = sub_1428a6730(rax_3)
                
                if (rax_4 != 0)
                    int64_t result = sub_1428c0fc0(arg1, rax_4, rax_3)
                    
                    if (result != 0)
                        *arg2 = rax_4
                        return result
                    
                    sub_1428a6780(rax_4)
                else
                    sub_1428a5670((rax_4 + 0x10).d, 0x117, (rax_4 + 0x41).d, "crypto\ec\ec_key.c", 
                        0x258)
        else
            sub_1428a5670(0x10, 0x100, 0x42, "crypto\ec\ec_key.c", 0x216)

return 0
